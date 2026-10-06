/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109e4d034; end: 109e4d0cb;  */

void FUN_109e4d034(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  FUN_109eaba7c();
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,&DAT_10e05d7a0,param_2,1);
  *(undefined4 *)(lVar2 + 0x4c) = param_3;
  return;
}



/* Entry: 109e4d0cc; end: 109e4d177;  */

byte FUN_109e4d0cc(long param_1)

{
  byte bVar1;
  uint uVar2;
  
  if ((((*(byte *)(param_1 + 0x36f) & 1) == 0) && ((*(byte *)(param_1 + 0x3c9) & 1) == 0)) &&
     ((*(byte *)(param_1 + 0x32d) & 1) == 0)) {
    uVar2 = *(uint *)(param_1 + 0xec);
    if (uVar2 == 0) {
      uVar2 = *(uint *)(param_1 + 0xe8);
    }
    bVar1 = 0;
    if (0x1cb < uVar2) {
      bVar1 = *(byte *)(param_1 + 0xe4) ^ 1;
    }
    return bVar1;
  }
  return 1;
}



/* Entry: 109e4d178; end: 109e4d297;  */

void FUN_109e4d178(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  FUN_109eaba7c();
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_1,0x109e4ea0c,1);
  *(undefined4 *)(lVar2 + 0x4c) = 0x31;
  return;
}



/* Entry: 109e4d298; end: 109e4d387;  */

void FUN_109e4d298(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c(puVar2,param_1,"value",6);
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c();
  uVar1 = 0x109e4ea30;
  if (*(char *)(param_1 + 4) != '\x04') {
    uVar1 = 0x109e4ea0c;
  }
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,param_1,uVar1,2);
  *(undefined4 *)(lVar3 + 0x4c) = 0x39;
  return;
}



/* Entry: 109e4d388; end: 109e4d427;  */

void FUN_109e4d388(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c();
  uVar1 = 0x109e4ea30;
  if (*(char *)(param_1 + 4) != '\x04') {
    uVar1 = 0x109e4ea0c;
  }
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,param_1,uVar1,1);
  *(undefined4 *)(lVar3 + 0x4c) = 0x3a;
  return;
}



/* Entry: 109e4d428; end: 109e4d44f;  */

undefined1 FUN_109e4d428(long param_1)

{
  return *(undefined1 *)(param_1 + 0x365);
}



/* Entry: 109e4d450; end: 109e4d80f;  */

void FUN_109e4d450(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c(puVar2,param_1,"value",6);
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c();
  uVar1 = 0x109e4ea8c;
  if (*(char *)(param_1 + 4) != '\x04') {
    uVar1 = 0x109e4ead0;
  }
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,param_1,uVar1,2);
  *(undefined4 *)(lVar3 + 0x4c) = 0x43;
  return;
}



/* Entry: 109e4d810; end: 109e4d8af;  */

void FUN_109e4d810(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c();
  uVar1 = 0x109e4eb24;
  if (*(char *)(param_1 + 4) != '\x04') {
    uVar1 = 0x109e4eb68;
  }
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,param_1,uVar1,1);
  *(undefined4 *)(lVar3 + 0x4c) = param_2;
  return;
}



/* Entry: 109e4d8b0; end: 109e4da8f;  */

void FUN_109e4d8b0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c(puVar2,param_1,"value",6);
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c();
  uVar1 = 0x109e4eb70;
  if (*(char *)(param_1 + 4) != '\x04') {
    uVar1 = 0x109e4ebb4;
  }
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,param_1,uVar1,2);
  *(undefined4 *)(lVar3 + 0x4c) = param_2;
  return;
}



/* Entry: 109e4da90; end: 109e4db2f;  */

void FUN_109e4da90(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c();
  uVar1 = 0x109e4ebbc;
  if (*(char *)(param_1 + 4) != '\x04') {
    uVar1 = 0x109e4ec00;
  }
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,param_1,uVar1,1);
  *(undefined4 *)(lVar3 + 0x4c) = param_2;
  return;
}



/* Entry: 109e4db30; end: 109e4dc7f;  */

/* WARNING: Removing unreachable block (ram,0x000109e4dc40) */

void FUN_109e4db30(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long alStack_58 [2];
  undefined1 auStack_48 [16];
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  FUN_109f658b0(puVar4,0x88);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0x10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
  }
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0xb;
  *puVar4 = &PTR_DAT_110b642a0;
  puVar4[4] = param_2;
  puVar5 = puVar4 + 7;
  *puVar5 = 0;
  puVar6 = puVar4 + 5;
  *puVar6 = puVar5;
  puVar4[6] = 0;
  puVar4[8] = puVar6;
  *(byte *)(puVar4 + 9) = *(byte *)(puVar4 + 9) & 0xf8;
  *(undefined4 *)((long)puVar4 + 0x4c) = 0;
  puVar4[0xc] = 0;
  puVar4[10] = puVar4 + 0xc;
  puVar4[0xb] = 0;
  puVar4[0xd] = puVar4 + 10;
  puVar4[0xe] = param_3;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  plVar2 = alStack_58;
  plVar3 = (long *)register0x00000008;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    lVar7 = *plVar3;
    plVar8 = (long *)(lVar7 + 8);
    *plVar8 = (long)auStack_48;
    *(long **)(lVar7 + 0x10) = plVar2;
    plVar1 = (long *)0x0;
    if (lVar7 != 0) {
      plVar1 = plVar8;
    }
    *plVar2 = (long)plVar1;
    plVar2 = plVar8;
    plVar3 = plVar3 + 1;
  }
  puVar4[5] = puVar5;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = puVar6;
  return;
}



/* Entry: 109e4dc80; end: 109e4dc9f;  */

byte FUN_109e4dc80(long param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xec);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(param_1 + 0xe8);
  }
  bVar1 = 0;
  if (0x1cb < uVar2) {
    bVar1 = *(byte *)(param_1 + 0xe4) ^ 1;
  }
  return bVar1;
}



/* Entry: 109e4dca0; end: 109e4e4d3;  */

void FUN_109e4dca0(undefined8 param_1,undefined8 param_2,code *param_3,ulong param_4,
                  undefined4 param_5,ulong param_6,undefined4 param_7)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long **pplVar6;
  undefined8 *puVar7;
  byte bVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puStack_78;
  long *plStack_70;
  undefined8 *puStack_68;
  
  puVar3 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x60);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 10;
  *puVar3 = &PTR_DAT_110b642e0;
  puVar12 = puVar3 + 7;
  *puVar12 = 0;
  puVar3[5] = puVar12;
  puVar3[6] = 0;
  puVar3[8] = puVar3 + 5;
  *(undefined4 *)(puVar3 + 0xb) = 0xffffffff;
  puVar11 = puVar3;
  FUN_109f65c2c(puVar3,param_1);
  lVar17 = 0;
  puVar3[4] = puVar11;
  plVar1 = (long *)(((long)param_4 >> 1) + 0x113834718);
  do {
    uVar14 = (uint)param_6;
    uVar2 = *(uint *)(*(long *)((long)&PTR_DAT_110b5e948 + lVar17) + 4);
    if (((((uVar2 & 0xff00) != 0x200 || (param_6 & 8) != 0) &&
         ((param_6 & 0x800) != 0 || (uVar2 & 0xff00) != 0x100)) &&
        (((uVar14 >> 7 & 1) == 0 || ((uVar2 & 0xf0000) == 0x70000)))) &&
       ((uVar14 < 0x1000 || (uVar2 = uVar2 >> 0x10 & 0xf, uVar2 - 1 < 4 || uVar2 == 7)))) {
      pcVar9 = param_3;
      if ((param_4 & 1) != 0) {
        pcVar9 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
      }
      plVar4 = plVar1;
      (*pcVar9)(plVar1,*(long *)((long)&PTR_DAT_110b5e948 + lVar17),param_5,param_6);
      if ((param_6 & 1) == 0) {
        *(undefined4 *)((long)plVar4 + 0x4c) = param_7;
        bVar8 = *(byte *)(plVar4 + 9);
      }
      else {
        plStack_70 = plVar4 + 10;
        puStack_68 = puRam0000000113834720;
        lVar5 = *(long *)(*(long *)(lRam0000000113834718 + 200) + 8);
        FUN_109f61800(lVar5,param_2);
        if (lVar5 == 0) {
          puVar11 = (undefined8 *)0x0;
          if ((uVar14 >> 1 & 1) != 0) goto LAB_109e4ded0;
LAB_109e4de3c:
          if (uVar14 < 0x1000) {
            pplVar6 = &plStack_70;
            FUN_109eabf1c(pplVar6,plVar4[4],&UNK_10f60a9e8);
            *(ushort *)((long)pplVar6 + 0x44) = *(ushort *)((long)pplVar6 + 0x44) & 0xffef | 8;
            FUN_109e4e670(puVar11,pplVar6,plVar4[5]);
            puVar11[1] = plVar4 + 0xc;
            puVar10 = (undefined8 *)plVar4[0xd];
            puVar11[2] = puVar10;
            plVar16 = (long *)0x0;
            if (puVar11 != (undefined8 *)0x0) {
              plVar16 = puVar11 + 1;
            }
            *puVar10 = plVar16;
            plVar4[0xd] = (long)plVar16;
            func_0x000109e24460(&puStack_78,pplVar6);
            puVar11 = puStack_78;
            FUN_109eac02c();
          }
          else {
            puVar10 = puVar11;
            FUN_109eb38b8(puVar11,0,plVar4 + 5);
            pplVar6 = &plStack_70;
            FUN_109eabf1c(pplVar6,puVar10[4],&UNK_10f60a9e8);
            puVar10 = puRam0000000113834720;
            FUN_109f658b0(puRam0000000113834720,0x38);
            if (puVar10 != (undefined8 *)0x0) {
              puVar10[6] = 0;
              puVar10[3] = 0;
              puVar10[2] = 0;
              puVar10[5] = 0;
              puVar10[4] = 0;
              puVar10[1] = 0;
              *puVar10 = 0;
            }
            func_0x000109eab518(puVar10,pplVar6,&UNK_10f60a9f1);
            uVar15 = puVar10[4];
            puVar7 = puRam0000000113834720;
            FUN_109f658b0(puRam0000000113834720,0x90);
            if (puVar7 != (undefined8 *)0x0) {
              puVar7[0xf] = 0;
              puVar7[0xe] = 0;
              puVar7[0x11] = 0;
              puVar7[0x10] = 0;
              puVar7[0xb] = 0;
              puVar7[10] = 0;
              puVar7[0xd] = 0;
              puVar7[0xc] = 0;
              puVar7[7] = 0;
              puVar7[6] = 0;
              puVar7[9] = 0;
              puVar7[8] = 0;
              puVar7[3] = 0;
              puVar7[2] = 0;
              puVar7[5] = 0;
              puVar7[4] = 0;
              puVar7[1] = 0;
              *puVar7 = 0;
            }
            FUN_109eaba7c(puVar7,uVar15,&UNK_10f60a9f1,7);
            FUN_109e4e670(puVar11,pplVar6,plVar4[5]);
            puVar11[1] = plVar4 + 0xc;
            plVar16 = (long *)0x0;
            if (puVar11 != (undefined8 *)0x0) {
              plVar16 = puVar11 + 1;
            }
            puVar13 = (undefined8 *)plVar4[0xd];
            puVar11[2] = puVar13;
            *puVar13 = plVar16;
            plVar4[0xd] = (long)plVar16;
            puVar7[1] = plVar4 + 7;
            plVar16 = (long *)0x0;
            if (puVar7 != (undefined8 *)0x0) {
              plVar16 = puVar7 + 1;
            }
            puVar11 = (undefined8 *)plVar4[8];
            puVar7[2] = puVar11;
            *puVar11 = plVar16;
            plVar4[8] = (long)plVar16;
            func_0x000109e244dc(&puStack_78,puVar7);
            puVar11 = puStack_78;
            func_0x000109eabfa8(puStack_78,puVar10,
                                ~(-1 << (ulong)(*(byte *)(puStack_78[4] + 0xd) & 0x1f)));
            puVar11[1] = plVar4 + 0xc;
            plVar16 = (long *)0x0;
            if (puVar11 != (undefined8 *)0x0) {
              plVar16 = puVar11 + 1;
            }
            puVar10 = (undefined8 *)plVar4[0xd];
            puVar11[2] = puVar10;
            *puVar10 = plVar16;
            plVar4[0xd] = (long)plVar16;
            puVar11 = puRam0000000113834720;
            FUN_109f658b0(puRam0000000113834720,0x38);
            if (puVar11 != (undefined8 *)0x0) {
              puVar11[6] = 0;
              puVar11[3] = 0;
              puVar11[2] = 0;
              puVar11[5] = 0;
              puVar11[4] = 0;
              puVar11[1] = 0;
              *puVar11 = 0;
            }
            func_0x000109eab518();
            FUN_109eac02c();
          }
        }
        else {
          puVar11 = *(undefined8 **)(lVar5 + 8);
          if ((uVar14 >> 1 & 1) == 0) goto LAB_109e4de3c;
LAB_109e4ded0:
          FUN_109e4e670(puVar11,0,plVar4[5]);
        }
        puVar11[1] = plVar4 + 0xc;
        plVar16 = (long *)0x0;
        if (puVar11 != (undefined8 *)0x0) {
          plVar16 = puVar11 + 1;
        }
        puVar10 = (undefined8 *)plVar4[0xd];
        puVar11[2] = puVar10;
        *puVar10 = plVar16;
        plVar4[0xd] = (long)plVar16;
        bVar8 = *(byte *)(plVar4 + 9) | 1;
      }
      plVar16 = plVar4 + 1;
      *plVar16 = (long)puVar12;
      *(byte *)(plVar4 + 9) = bVar8 & 0xfb | 2;
      plVar4[0xf] = (long)puVar3;
      puVar11 = (undefined8 *)puVar3[8];
      plVar4[2] = (long)puVar11;
      *puVar11 = plVar16;
      puVar3[8] = plVar16;
    }
    lVar17 = lVar17 + 8;
    if (lVar17 == 0x108) {
      FUN_109ea2360(*(undefined8 *)(lRam0000000113834718 + 200),puVar3);
      return;
    }
  } while( true );
}



/* Entry: 109e4e4d4; end: 109e4e66f;  */

void FUN_109e4e4d4(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar2 = *(uint *)(param_2 + 4);
  iVar1 = 2;
  if ((uVar2 & 0x2f0000) != 0x30000) {
    iVar1 = *(int *)(&UNK_10e060f48 + ((ulong)(uVar2 >> 0x10) & 0xf) * 4) +
            ((uint)((uVar2 & 0xf00ff) != 0x3000f) & uVar2 >> 0x15);
  }
  uVar3 = 1;
  func_0x000109ec6c94(1,iVar1,1,0,0,0);
  puVar4 = *(undefined8 **)(param_1 + 8);
  FUN_109f658b0(puVar4,0x90);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  FUN_109eaba7c(puVar4,param_2,"image",6);
  FUN_109e4db30(param_1,uVar3,0x109e4e970,1);
  *(ushort *)((long)puVar4 + 0x44) = *(ushort *)((long)puVar4 + 0x44) | 0x1f00;
  return;
}



/* Entry: 109e4e670; end: 109e4e877;  */

void FUN_109e4e670(long param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  long lVar7;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  uStack_78 = 0;
  uStack_70 = 0;
  plVar4 = (long *)*param_3;
  puStack_80 = &uStack_70;
  plStack_68 = (long *)&puStack_80;
  ppuVar6 = &puStack_80;
  if ((long *)*param_3 != (long *)0x0) {
    while( true ) {
      plStack_68 = (long *)ppuVar6;
      plVar2 = plVar4;
      lVar7 = *plVar2;
      if ((int)param_3[2] == 2) {
        puVar3 = (undefined8 *)param_3[1];
        plVar2[1] = (long)puVar3;
        *puVar3 = plVar2;
        *param_3 = (long)&uStack_70;
        param_3[1] = 0;
        param_3[1] = (long)plStack_68;
        *plStack_68 = (long)param_3;
        ppuVar6 = (undefined8 **)param_3;
      }
      else {
        plVar4 = param_3 + -1;
        if ((int)param_3[2] != 7) {
          plVar4 = (long *)0x0;
        }
        puVar3 = puRam0000000113834720;
        FUN_109f658b0(puRam0000000113834720,0x30);
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[3] = 0;
          puVar3[2] = 0;
          puVar3[5] = 0;
          puVar3[4] = 0;
          puVar3[1] = 0;
          *puVar3 = 0;
        }
        ppuVar6 = (undefined8 **)(puVar3 + 1);
        *ppuVar6 = (undefined8 *)0x0;
        puVar3[2] = 0;
        *(undefined4 *)(puVar3 + 3) = 2;
        *puVar3 = &PTR_DAT_110b64048;
        puVar3[4] = param_3[3];
        puVar3[5] = plVar4;
        *ppuVar6 = &uStack_70;
        puVar3[2] = plStack_68;
        *plStack_68 = (long)ppuVar6;
      }
      plStack_68 = (long *)ppuVar6;
      if (lVar7 == 0) break;
      plVar4 = (long *)*plVar2;
      param_3 = plVar2;
    }
  }
  FUN_109eb38b8(param_1,0,&puStack_80);
  if (param_1 != 0) {
    if (*(char *)(*(long *)(param_1 + 0x20) + 4) == '\x14') {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = puRam0000000113834720;
      FUN_109f658b0(puRam0000000113834720,0x30);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
      }
      puVar3[1] = 0;
      puVar3[2] = 0;
      *(undefined4 *)(puVar3 + 3) = 2;
      *puVar3 = &PTR_DAT_110b64048;
      puVar3[4] = *(undefined8 *)(param_2 + 0x20);
      puVar3[5] = param_2;
    }
    puVar1 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x60);
    if (puVar1 != (undefined8 *)0x0) {
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
    }
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 9;
    *puVar1 = &PTR_DAT_110b63a00;
    puVar5 = puVar1 + 6;
    *puVar5 = puVar1 + 8;
    puVar1[4] = puVar3;
    puVar1[5] = param_1;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[9] = puVar5;
    if (puStack_80 == &uStack_70) {
      puVar1[7] = 0;
      puVar1[8] = 0;
    }
    else {
      puVar1[6] = puStack_80;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = plStack_68;
      puStack_80[1] = puVar5;
      *(undefined8 **)puVar1[9] = puVar1 + 8;
    }
  }
  return;
}



/* Entry: 109e4e878; end: 109e4ec07;  */

byte FUN_109e4e878(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xec);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(param_1 + 0xe8);
  }
  uVar3 = 0x13f;
  if (*(char *)(param_1 + 0xe4) == '\0') {
    uVar3 = 0x1c1;
  }
  if (((uVar3 < uVar2) || ((*(byte *)(param_1 + 0x2f1) & 1) != 0)) ||
     ((*(byte *)(param_1 + 0x37f) & 1) != 0)) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x3f7);
  }
  return bVar1 & 1;
}



/* Entry: 109e4ec08; end: 109e4edaf;  */

long FUN_109e4ec08(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  
  puVar4 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  FUN_109eaba7c(puVar4,param_2,&UNK_10f42296c,6);
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,1);
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  func_0x000109e24460(&uStack_38,puVar4);
  puVar4 = puRam0000000113834720;
  if (*(char *)(param_2 + 4) == '\x03') {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[0x13] = 0;
      puVar4[0x12] = 0;
      puVar4[0x15] = 0;
      puVar4[0x14] = 0;
      puVar4[0xf] = 0;
      puVar4[0xe] = 0;
      puVar4[0x11] = 0;
      puVar4[0x10] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    FUN_109ea96a8(puVar4,0x2400,1);
  }
  else {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[0x13] = 0;
      puVar4[0x12] = 0;
      puVar4[0x15] = 0;
      puVar4[0x14] = 0;
      puVar4[0xf] = 0;
      puVar4[0xe] = 0;
      puVar4[0x11] = 0;
      puVar4[0x10] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    FUN_109ea9758(puVar4,1);
  }
  lVar3 = 0x82;
  FUN_109eac310(0x82,uStack_38,puVar4);
  FUN_109eac02c();
  puVar4 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar3 + 0x10) = puVar4;
  *(long *)(lVar3 + 8) = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
  }
  *puVar4 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e4edb0; end: 109e4edbf;  */

undefined8 FUN_109e4edb0(void)

{
  return 1;
}



/* Entry: 109e4edc0; end: 109e4ef5f;  */

long FUN_109e4edc0(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_48;
  
  puVar4 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  FUN_109eaba7c(puVar4,param_2,&UNK_10f4917eb,6);
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,1);
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  func_0x000109e24460(&uStack_48,puVar4);
  puVar4 = puRam0000000113834720;
  if (*(char *)(param_2 + 4) == '\x03') {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[0x13] = 0;
      puVar4[0x12] = 0;
      puVar4[0x15] = 0;
      puVar4[0x14] = 0;
      puVar4[0xf] = 0;
      puVar4[0xe] = 0;
      puVar4[0x11] = 0;
      puVar4[0x10] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    FUN_109ea96a8(puVar4,0x5000,1);
  }
  else {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[0x13] = 0;
      puVar4[0x12] = 0;
      puVar4[0x15] = 0;
      puVar4[0x14] = 0;
      puVar4[0xf] = 0;
      puVar4[0xe] = 0;
      puVar4[0x11] = 0;
      puVar4[0x10] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    FUN_109ea9758(puVar4,1);
  }
  lVar3 = 0x82;
  FUN_109eac310(0x82,uStack_48,puVar4);
  FUN_109eac02c();
  puVar4 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar3 + 0x10) = puVar4;
  *(long *)(lVar3 + 8) = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
  }
  *puVar4 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e4ef60; end: 109e4f4db;  */

long FUN_109e4ef60(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  
  puVar6 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  FUN_109eaba7c(puVar6,param_2,&UNK_10f60c195,6);
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,1);
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  func_0x000109e24460(&uStack_38,puVar6);
  uVar3 = 0x51;
  FUN_109eac2ac(0x51,uStack_38);
  func_0x000109e24460(&uStack_38,puVar6);
  uVar4 = 0x52;
  FUN_109eac2ac(0x52,uStack_38);
  lVar5 = 0x85;
  FUN_109eac310(0x85,uVar3,uVar4);
  FUN_109eac02c();
  *(long *)(lVar5 + 8) = lVar2 + 0x60;
  puVar6 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar5 + 0x10) = puVar6;
  plVar1 = (long *)0x0;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
  }
  *puVar6 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e4f4dc; end: 109e4f507;  */

bool FUN_109e4f4dc(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xec);
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_1 + 0xe8);
  }
  uVar2 = 299;
  if (*(char *)(param_1 + 0xe4) == '\0') {
    uVar2 = 0x81;
  }
  return uVar2 < uVar1;
}



/* Entry: 109e4f508; end: 109e4f6db;  */

long FUN_109e4f508(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_38;
  
  puVar8 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[0xf] = 0;
    puVar8[0xe] = 0;
    puVar8[0x11] = 0;
    puVar8[0x10] = 0;
    puVar8[0xb] = 0;
    puVar8[10] = 0;
    puVar8[0xd] = 0;
    puVar8[0xc] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
  }
  FUN_109eaba7c(puVar8,param_2,&DAT_10f62b0e2,6);
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,1);
  puVar3 = puRam0000000113834720;
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  if (*(char *)(param_2 + 4) == '\x03') {
    FUN_109f658b0(puVar3,0xb0);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    FUN_109ea96a8(puVar3,0x3800,1);
  }
  else {
    FUN_109f658b0(puVar3,0xb0);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    FUN_109ea9758(puVar3,1);
  }
  func_0x000109e24460(&uStack_38,puVar8);
  uVar4 = 8;
  FUN_109eac2ac(8,uStack_38);
  func_0x000109e24460(&uStack_38,puVar8);
  uVar5 = 2;
  FUN_109eac2ac(2,uStack_38);
  uVar6 = 8;
  FUN_109eac2ac(8,uVar5);
  uVar5 = 0x7b;
  FUN_109eac310(0x7b,uVar4,uVar6);
  lVar7 = 0x82;
  FUN_109eac310(0x82,puVar3,uVar5);
  FUN_109eac02c();
  *(long *)(lVar7 + 8) = lVar2 + 0x60;
  puVar8 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar7 + 0x10) = puVar8;
  plVar1 = (long *)0x0;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
  }
  *puVar8 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e4f6dc; end: 109e4fca7;  */

long FUN_109e4f6dc(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  
  puVar9 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
  }
  FUN_109eaba7c(puVar9,param_2,&DAT_10f62b0e2,6);
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,1);
  lStack_60 = lVar2 + 0x50;
  puStack_58 = puRam0000000113834720;
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  plVar3 = &lStack_60;
  FUN_109eabf1c(plVar3,param_2,&DAT_10f5893b4);
  func_0x000109e244dc(&lStack_68,plVar3);
  func_0x000109e24460(&uStack_70,puVar9);
  puVar9 = puRam0000000113834720;
  if (*(char *)(param_2 + 4) == '\x03') {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[0x13] = 0;
      puVar9[0x12] = 0;
      puVar9[0x15] = 0;
      puVar9[0x14] = 0;
      puVar9[0xf] = 0;
      puVar9[0xe] = 0;
      puVar9[0x11] = 0;
      puVar9[0x10] = 0;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[0xd] = 0;
      puVar9[0xc] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    FUN_109ea96a8(puVar9,0xc800,1);
  }
  else {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[0x13] = 0;
      puVar9[0x12] = 0;
      puVar9[0x15] = 0;
      puVar9[0x14] = 0;
      puVar9[0xf] = 0;
      puVar9[0xe] = 0;
      puVar9[0x11] = 0;
      puVar9[0x10] = 0;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[0xd] = 0;
      puVar9[0xc] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    FUN_109ea9758(puVar9,1);
  }
  uVar4 = 0x99;
  FUN_109eac310(0x99,uStack_70,puVar9);
  puVar9 = puRam0000000113834720;
  if (*(char *)(param_2 + 4) == '\x03') {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[0x13] = 0;
      puVar9[0x12] = 0;
      puVar9[0x15] = 0;
      puVar9[0x14] = 0;
      puVar9[0xf] = 0;
      puVar9[0xe] = 0;
      puVar9[0x11] = 0;
      puVar9[0x10] = 0;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[0xd] = 0;
      puVar9[0xc] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    FUN_109ea96a8(puVar9,0x4800,1);
  }
  else {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[0x13] = 0;
      puVar9[0x12] = 0;
      puVar9[0x15] = 0;
      puVar9[0x14] = 0;
      puVar9[0xf] = 0;
      puVar9[0xe] = 0;
      puVar9[0x11] = 0;
      puVar9[0x10] = 0;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[0xd] = 0;
      puVar9[0xc] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    FUN_109ea9758(puVar9,1);
  }
  uVar5 = 0x98;
  FUN_109eac310(0x98,uVar4,puVar9);
  lVar8 = lStack_68;
  func_0x000109eabfa8(lStack_68,uVar5,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_68 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar8 + 8) = lVar2 + 0x60;
  puVar9 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar8 + 0x10) = puVar9;
  plVar1 = (long *)0x0;
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
  }
  *puVar9 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  func_0x000109e24460(&lStack_68,plVar3);
  uVar4 = 8;
  FUN_109eac2ac(8,lStack_68);
  func_0x000109e24460(&lStack_68,plVar3);
  uVar5 = 2;
  FUN_109eac2ac(2,lStack_68);
  uVar6 = 8;
  FUN_109eac2ac(8,uVar5);
  uVar5 = 0x7c;
  FUN_109eac310(0x7c,uVar4,uVar6);
  func_0x000109e24460(&lStack_68,plVar3);
  uVar4 = 8;
  FUN_109eac2ac(8,lStack_68);
  func_0x000109e24460(&lStack_68,plVar3);
  uVar6 = 2;
  FUN_109eac2ac(2,lStack_68);
  uVar7 = 8;
  FUN_109eac2ac(8,uVar6);
  uVar6 = 0x7b;
  FUN_109eac310(0x7b,uVar4,uVar7);
  lVar8 = 0x85;
  FUN_109eac310(0x85,uVar5,uVar6);
  FUN_109eac02c();
  *(long *)(lVar8 + 8) = lVar2 + 0x60;
  puVar9 = *(undefined8 **)(lVar2 + 0x68);
  plVar3 = (long *)0x0;
  if (lVar8 != 0) {
    plVar3 = (long *)(lVar8 + 8);
  }
  *(undefined8 **)(lVar8 + 0x10) = puVar9;
  *puVar9 = plVar3;
  *(long **)(lVar2 + 0x68) = plVar3;
  return lVar2;
}



/* Entry: 109e4fca8; end: 109e4fe9b;  */

long FUN_109e4fca8(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar6 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  FUN_109eaba7c(puVar6,param_2,&DAT_10f62b0e2,6);
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,1);
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  func_0x000109e24460(&uStack_48,puVar6);
  func_0x000109e24460(&uStack_50,puVar6);
  func_0x000109e24460(&uStack_58,puVar6);
  uVar3 = 0x82;
  FUN_109eac310(0x82,uStack_50,uStack_58);
  puVar6 = puRam0000000113834720;
  if (*(char *)(param_2 + 4) == '\x03') {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[0x13] = 0;
      puVar6[0x12] = 0;
      puVar6[0x15] = 0;
      puVar6[0x14] = 0;
      puVar6[0xf] = 0;
      puVar6[0xe] = 0;
      puVar6[0x11] = 0;
      puVar6[0x10] = 0;
      puVar6[0xb] = 0;
      puVar6[10] = 0;
      puVar6[0xd] = 0;
      puVar6[0xc] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
    }
    FUN_109ea96a8(puVar6,0x3c00,1);
  }
  else {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[0x13] = 0;
      puVar6[0x12] = 0;
      puVar6[0x15] = 0;
      puVar6[0x14] = 0;
      puVar6[0xf] = 0;
      puVar6[0xe] = 0;
      puVar6[0x11] = 0;
      puVar6[0x10] = 0;
      puVar6[0xb] = 0;
      puVar6[10] = 0;
      puVar6[0xd] = 0;
      puVar6[0xc] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
    }
    FUN_109ea9758(puVar6,1);
  }
  uVar4 = 0x7c;
  FUN_109eac310(0x7c,uVar3,puVar6);
  uVar3 = 7;
  FUN_109eac2ac(7,uVar4);
  uVar4 = 0x7b;
  FUN_109eac310(0x7b,uStack_48,uVar3);
  lVar5 = 9;
  FUN_109eac2ac(9,uVar4);
  FUN_109eac02c();
  puVar6 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar5 + 0x10) = puVar6;
  *(long *)(lVar5 + 8) = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
  }
  *puVar6 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e4fe9c; end: 109e501ef;  */

long FUN_109e4fe9c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uStack_58;
  
  puVar9 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
  }
  FUN_109eaba7c(puVar9,param_2,&DAT_10f62b0e2,6);
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,1);
  puVar3 = puRam0000000113834720;
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  if (*(char *)(param_2 + 4) == '\x03') {
    FUN_109f658b0(puVar3,0xb0);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    FUN_109ea96a8(puVar3,0x3800,1);
  }
  else {
    FUN_109f658b0(puVar3,0xb0);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    FUN_109ea9758(puVar3,1);
  }
  puVar4 = puRam0000000113834720;
  if (*(char *)(param_2 + 4) == '\x03') {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[0x13] = 0;
      puVar4[0x12] = 0;
      puVar4[0x15] = 0;
      puVar4[0x14] = 0;
      puVar4[0xf] = 0;
      puVar4[0xe] = 0;
      puVar4[0x11] = 0;
      puVar4[0x10] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    FUN_109ea96a8(puVar4,0x3c00,1);
  }
  else {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[0x13] = 0;
      puVar4[0x12] = 0;
      puVar4[0x15] = 0;
      puVar4[0x14] = 0;
      puVar4[0xf] = 0;
      puVar4[0xe] = 0;
      puVar4[0x11] = 0;
      puVar4[0x10] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    FUN_109ea9758(puVar4,1);
  }
  func_0x000109e24460(&uStack_58,puVar9);
  uVar5 = 0x7b;
  FUN_109eac310(0x7b,puVar4,uStack_58);
  puVar4 = puRam0000000113834720;
  if (*(char *)(param_2 + 4) == '\x03') {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[0x13] = 0;
      puVar4[0x12] = 0;
      puVar4[0x15] = 0;
      puVar4[0x14] = 0;
      puVar4[0xf] = 0;
      puVar4[0xe] = 0;
      puVar4[0x11] = 0;
      puVar4[0x10] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    FUN_109ea96a8(puVar4,0x3c00,1);
  }
  else {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[0x13] = 0;
      puVar4[0x12] = 0;
      puVar4[0x15] = 0;
      puVar4[0x14] = 0;
      puVar4[0xf] = 0;
      puVar4[0xe] = 0;
      puVar4[0x11] = 0;
      puVar4[0x10] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    FUN_109ea9758(puVar4,1);
  }
  func_0x000109e24460(&uStack_58,puVar9);
  uVar6 = 0x7c;
  FUN_109eac310(0x7c,puVar4,uStack_58);
  uVar7 = 0x85;
  FUN_109eac310(0x85,uVar5,uVar6);
  uVar5 = 9;
  FUN_109eac2ac(9,uVar7);
  lVar8 = 0x82;
  FUN_109eac310(0x82,puVar3,uVar5);
  FUN_109eac02c();
  *(long *)(lVar8 + 8) = lVar2 + 0x60;
  puVar9 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar8 + 0x10) = puVar9;
  plVar1 = (long *)0x0;
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
  }
  *puVar9 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e501f0; end: 109e5024f;  */

byte FUN_109e501f0(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x319) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x399);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 109e50250; end: 109e50943;  */

long FUN_109e50250(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  
  puVar9 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
  }
  FUN_109eaba7c(puVar9,param_2,&DAT_10f62b0e2,6);
  puVar8 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[0xf] = 0;
    puVar8[0xe] = 0;
    puVar8[0x11] = 0;
    puVar8[0x10] = 0;
    puVar8[0xb] = 0;
    puVar8[10] = 0;
    puVar8[0xd] = 0;
    puVar8[0xc] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
  }
  FUN_109eaba7c(puVar8,param_2,"i",7);
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,2);
  lStack_50 = lVar3 + 0x50;
  puStack_48 = puRam0000000113834720;
  *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) | 1;
  plVar4 = &lStack_50;
  FUN_109eabf1c(plVar4,param_2,"t");
  func_0x000109e244dc(&lStack_58,plVar4);
  func_0x000109e24460(&uStack_60,puVar9);
  uVar5 = 0x4c;
  FUN_109eac2ac(0x4c,uStack_60);
  lVar6 = lStack_58;
  func_0x000109eabfa8(lStack_58,uVar5,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_58 + 0x20) + 0xd) & 0x1f)));
  lVar1 = lVar3 + 0x60;
  *(long *)(lVar6 + 8) = lVar1;
  puVar7 = *(undefined8 **)(lVar3 + 0x68);
  *(undefined8 **)(lVar6 + 0x10) = puVar7;
  plVar2 = (long *)0x0;
  if (lVar6 != 0) {
    plVar2 = (long *)(lVar6 + 8);
  }
  *puVar7 = plVar2;
  *(long **)(lVar3 + 0x68) = plVar2;
  func_0x000109e244dc(&lStack_58,puVar8);
  func_0x000109e24460(&uStack_60,plVar4);
  lVar6 = lStack_58;
  func_0x000109eabfa8(lStack_58,uStack_60,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_58 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar6 + 8) = lVar1;
  puVar8 = *(undefined8 **)(lVar3 + 0x68);
  plVar2 = (long *)0x0;
  if (lVar6 != 0) {
    plVar2 = (long *)(lVar6 + 8);
  }
  *(undefined8 **)(lVar6 + 0x10) = puVar8;
  *puVar8 = plVar2;
  *(long **)(lVar3 + 0x68) = plVar2;
  func_0x000109e24460(&lStack_58,puVar9);
  func_0x000109e24460(&uStack_60,plVar4);
  lVar6 = 0x7c;
  FUN_109eac310(0x7c,lStack_58,uStack_60);
  FUN_109eac02c();
  *(long *)(lVar6 + 8) = lVar1;
  puVar9 = *(undefined8 **)(lVar3 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar6 != 0) {
    plVar4 = (long *)(lVar6 + 8);
  }
  *(undefined8 **)(lVar6 + 0x10) = puVar9;
  *puVar9 = plVar4;
  *(long **)(lVar3 + 0x68) = plVar4;
  return lVar3;
}



/* Entry: 109e50944; end: 109e509b3;  */

byte FUN_109e50944(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 0xec);
  uVar3 = uVar2;
  if (uVar2 == 0) {
    uVar3 = *(uint *)(param_1 + 0xe8);
  }
  uVar4 = 0x135;
  if (*(char *)(param_1 + 0xe4) == '\0') {
    uVar4 = 0x1c1;
  }
  if ((uVar4 < uVar3) || ((*(byte *)(param_1 + 0x2f1) & 1) != 0)) {
    bVar1 = 1;
  }
  else {
    if (uVar2 == 0) {
      uVar2 = *(uint *)(param_1 + 0xe8);
    }
    uVar3 = 299;
    if (*(char *)(param_1 + 0xe4) == '\0') {
      uVar3 = 0x81;
    }
    if (uVar3 < uVar2) {
      bVar1 = *(byte *)(param_1 + 0x3d1);
    }
    else {
      bVar1 = 0;
    }
  }
  return bVar1 & 1;
}



/* Entry: 109e509b4; end: 109e50f6f;  */

long FUN_109e509b4(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  
  puVar11 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[0xf] = 0;
    puVar11[0xe] = 0;
    puVar11[0x11] = 0;
    puVar11[0x10] = 0;
    puVar11[0xb] = 0;
    puVar11[10] = 0;
    puVar11[0xd] = 0;
    puVar11[0xc] = 0;
    puVar11[7] = 0;
    puVar11[6] = 0;
    puVar11[9] = 0;
    puVar11[8] = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    puVar11[1] = 0;
    *puVar11 = 0;
  }
  FUN_109eaba7c(puVar11,param_2,&UNK_10f60c1a9,6);
  puVar3 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  FUN_109eaba7c(puVar3,param_3,&DAT_10f62b0e2,6);
  lVar4 = 0x113834718;
  FUN_109e4db30(0x113834718,param_3,param_1,2);
  lStack_70 = lVar4 + 0x50;
  puStack_68 = puRam0000000113834720;
  *(byte *)(lVar4 + 0x48) = *(byte *)(lVar4 + 0x48) | 1;
  plVar5 = &lStack_70;
  FUN_109eabf1c(plVar5,param_3,"t");
  cVar2 = *(char *)(param_3 + 0xd);
  if (cVar2 == '\x01') {
    if (*(char *)(param_2 + 4) == '\x03') {
      func_0x000109e244dc(&lStack_78,plVar5);
      func_0x000109e24460(&uStack_80,puVar3);
      func_0x000109e24460(&uStack_88,puVar11);
      uVar6 = 0x8a;
      FUN_109eac310(0x8a,uStack_80,uStack_88);
      uVar7 = 0x10;
      FUN_109eac2ac(0x10,uVar6);
      uVar6 = 0x19;
    }
    else if (*(char *)(param_2 + 4) == '\x04') {
      func_0x000109e244dc(&lStack_78,plVar5);
      func_0x000109e24460(&uStack_80,puVar3);
      func_0x000109e24460(&uStack_88,puVar11);
      uVar6 = 0x8a;
      FUN_109eac310(0x8a,uStack_80,uStack_88);
      uVar7 = 0x10;
      FUN_109eac2ac(0x10,uVar6);
      uVar6 = 0x18;
    }
    else {
      func_0x000109e244dc(&lStack_78,plVar5);
      func_0x000109e24460(&uStack_80,puVar3);
      func_0x000109e24460(&uStack_88,puVar11);
      uVar7 = 0x8a;
      FUN_109eac310(0x8a,uStack_80,uStack_88);
      uVar6 = 0x10;
    }
    FUN_109eac2ac(uVar6,uVar7);
    lVar10 = lStack_78;
    func_0x000109eabfa8(lStack_78,uVar6,
                        ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_78 + 0x20) + 0xd) & 0x1f)));
    *(long *)(lVar10 + 8) = lVar4 + 0x60;
    puVar11 = *(undefined8 **)(lVar4 + 0x68);
    plVar1 = (long *)0x0;
    if (lVar10 != 0) {
      plVar1 = (long *)(lVar10 + 8);
    }
    *(undefined8 **)(lVar10 + 0x10) = puVar11;
    *puVar11 = plVar1;
    *(long **)(lVar4 + 0x68) = plVar1;
  }
  else if (*(char *)(param_2 + 0xd) == '\x01') {
    if (cVar2 != '\0') {
      uVar13 = 0;
      do {
        if (*(char *)(param_2 + 4) == '\x03') {
          func_0x000109e244dc(&lStack_78,plVar5);
          func_0x000109e24460(&uStack_80,puVar3);
          uVar7 = uStack_80;
          FUN_109eac090(uStack_80,uVar13,1);
          func_0x000109e24460(&uStack_80,puVar11);
          uVar6 = 0x8a;
          FUN_109eac310(0x8a,uVar7,uStack_80);
          uVar7 = 0x10;
          FUN_109eac2ac(0x10,uVar6);
          uVar6 = 0x19;
        }
        else if (*(char *)(param_2 + 4) == '\x04') {
          func_0x000109e244dc(&lStack_78,plVar5);
          func_0x000109e24460(&uStack_80,puVar3);
          uVar7 = uStack_80;
          FUN_109eac090(uStack_80,uVar13,1);
          func_0x000109e24460(&uStack_80,puVar11);
          uVar6 = 0x8a;
          FUN_109eac310(0x8a,uVar7,uStack_80);
          uVar7 = 0x10;
          FUN_109eac2ac(0x10,uVar6);
          uVar6 = 0x18;
        }
        else {
          func_0x000109e244dc(&lStack_78,plVar5);
          func_0x000109e24460(&uStack_80,puVar3);
          uVar6 = uStack_80;
          FUN_109eac090(uStack_80,uVar13,1);
          func_0x000109e24460(&uStack_80,puVar11);
          uVar7 = 0x8a;
          FUN_109eac310(0x8a,uVar6,uStack_80);
          uVar6 = 0x10;
        }
        FUN_109eac2ac(uVar6,uVar7);
        lVar10 = lStack_78;
        func_0x000109eabfa8(lStack_78,uVar6,1 << (ulong)(uVar13 & 0x1f));
        *(long *)(lVar10 + 8) = lVar4 + 0x60;
        plVar1 = (long *)0x0;
        if (lVar10 != 0) {
          plVar1 = (long *)(lVar10 + 8);
        }
        puVar12 = *(undefined8 **)(lVar4 + 0x68);
        *(undefined8 **)(lVar10 + 0x10) = puVar12;
        *puVar12 = plVar1;
        *(long **)(lVar4 + 0x68) = plVar1;
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(byte *)(param_3 + 0xd));
    }
  }
  else if (cVar2 != '\0') {
    uVar13 = 0;
    do {
      if (*(char *)(param_2 + 4) == '\x03') {
        func_0x000109e244dc(&lStack_78,plVar5);
        func_0x000109e24460(&uStack_80,puVar3);
        uVar7 = uStack_80;
        FUN_109eac090(uStack_80,uVar13,1);
        func_0x000109e24460(&uStack_80,puVar11);
        uVar6 = uStack_80;
        FUN_109eac090(uStack_80,uVar13,1);
        uVar9 = 0x8a;
        FUN_109eac310(0x8a,uVar7,uVar6);
        uVar7 = 0x10;
        FUN_109eac2ac(0x10,uVar9);
        uVar6 = 0x19;
        FUN_109eac2ac(0x19,uVar7);
      }
      else {
        if (*(char *)(param_2 + 4) == '\x04') {
          func_0x000109e244dc(&lStack_78,plVar5);
          func_0x000109e24460(&uStack_80,puVar3);
          uVar7 = uStack_80;
          FUN_109eac090(uStack_80,uVar13,1);
          func_0x000109e24460(&uStack_80,puVar11);
          uVar6 = uStack_80;
          FUN_109eac090(uStack_80,uVar13,1);
          uVar8 = 0x8a;
          FUN_109eac310(0x8a,uVar7,uVar6);
          uVar9 = 0x10;
          FUN_109eac2ac(0x10,uVar8);
          uVar6 = 0x18;
        }
        else {
          func_0x000109e244dc(&lStack_78,plVar5);
          func_0x000109e24460(&uStack_80,puVar3);
          uVar7 = uStack_80;
          FUN_109eac090(uStack_80,uVar13,1);
          func_0x000109e24460(&uStack_80,puVar11);
          uVar6 = uStack_80;
          FUN_109eac090(uStack_80,uVar13,1);
          uVar9 = 0x8a;
          FUN_109eac310(0x8a,uVar7,uVar6);
          uVar6 = 0x10;
        }
        FUN_109eac2ac(uVar6,uVar9);
      }
      lVar10 = lStack_78;
      func_0x000109eabfa8(lStack_78,uVar6,1 << (ulong)(uVar13 & 0x1f));
      *(long *)(lVar10 + 8) = lVar4 + 0x60;
      plVar1 = (long *)0x0;
      if (lVar10 != 0) {
        plVar1 = (long *)(lVar10 + 8);
      }
      puVar12 = *(undefined8 **)(lVar4 + 0x68);
      *(undefined8 **)(lVar10 + 0x10) = puVar12;
      *puVar12 = plVar1;
      *(long **)(lVar4 + 0x68) = plVar1;
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(byte *)(param_3 + 0xd));
  }
  func_0x000109e24460(&lStack_78,plVar5);
  FUN_109eac02c();
  *(long *)(lStack_78 + 8) = lVar4 + 0x60;
  puVar11 = *(undefined8 **)(lVar4 + 0x68);
  *(undefined8 **)(lStack_78 + 0x10) = puVar11;
  plVar5 = (long *)0x0;
  if (lStack_78 != 0) {
    plVar5 = (long *)(lStack_78 + 8);
  }
  *puVar11 = plVar5;
  *(long **)(lVar4 + 0x68) = plVar5;
  return lVar4;
}



/* Entry: 109e50f70; end: 109e515c7;  */

long FUN_109e50f70(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  
  puVar11 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[0xf] = 0;
    puVar11[0xe] = 0;
    puVar11[0x11] = 0;
    puVar11[0x10] = 0;
    puVar11[0xb] = 0;
    puVar11[10] = 0;
    puVar11[0xd] = 0;
    puVar11[0xc] = 0;
    puVar11[7] = 0;
    puVar11[6] = 0;
    puVar11[9] = 0;
    puVar11[8] = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    puVar11[1] = 0;
    *puVar11 = 0;
  }
  FUN_109eaba7c(puVar11,param_2,&UNK_10f60c1ae,6);
  puVar3 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  FUN_109eaba7c(puVar3,param_2,&UNK_10f60c1b4,6);
  puVar4 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  FUN_109eaba7c(puVar4,param_3,&DAT_10f62b0e2,6);
  lVar5 = 0x113834718;
  FUN_109e4db30(0x113834718,param_3,param_1,3);
  lStack_60 = lVar5 + 0x50;
  puStack_58 = puRam0000000113834720;
  *(byte *)(lVar5 + 0x48) = *(byte *)(lVar5 + 0x48) | 1;
  plVar6 = &lStack_60;
  FUN_109eabf1c(plVar6,param_3,"t");
  func_0x000109e244dc(&lStack_68,plVar6);
  func_0x000109e24460(&uStack_70,puVar4);
  func_0x000109e24460(&uStack_78,puVar11);
  uVar7 = 0x7c;
  FUN_109eac310(0x7c,uStack_70,uStack_78);
  func_0x000109e24460(&uStack_70,puVar3);
  func_0x000109e24460(&uStack_78,puVar11);
  uVar8 = 0x7c;
  FUN_109eac310(0x7c,uStack_70,uStack_78);
  uVar9 = 0x85;
  FUN_109eac310(0x85,uVar7,uVar8);
  cVar2 = *(char *)(param_3 + 4);
  puVar11 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0xb0);
  if (cVar2 == '\x03') {
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[0x13] = 0;
      puVar11[0x12] = 0;
      puVar11[0x15] = 0;
      puVar11[0x14] = 0;
      puVar11[0xf] = 0;
      puVar11[0xe] = 0;
      puVar11[0x11] = 0;
      puVar11[0x10] = 0;
      puVar11[0xb] = 0;
      puVar11[10] = 0;
      puVar11[0xd] = 0;
      puVar11[0xc] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
    }
    FUN_109ea96a8(puVar11,0,1);
  }
  else if (cVar2 == '\x04') {
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[0x13] = 0;
      puVar11[0x12] = 0;
      puVar11[0x15] = 0;
      puVar11[0x14] = 0;
      puVar11[0xf] = 0;
      puVar11[0xe] = 0;
      puVar11[0x11] = 0;
      puVar11[0x10] = 0;
      puVar11[0xb] = 0;
      puVar11[10] = 0;
      puVar11[0xd] = 0;
      puVar11[0xc] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
    }
    func_0x000109ea9804(0,puVar11,1);
  }
  else {
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[0x13] = 0;
      puVar11[0x12] = 0;
      puVar11[0x15] = 0;
      puVar11[0x14] = 0;
      puVar11[0xf] = 0;
      puVar11[0xe] = 0;
      puVar11[0x11] = 0;
      puVar11[0x10] = 0;
      puVar11[0xb] = 0;
      puVar11[10] = 0;
      puVar11[0xd] = 0;
      puVar11[0xc] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
    }
    func_0x000109ea9758(0,puVar11,1);
  }
  puVar3 = puRam0000000113834720;
  if (*(char *)(param_3 + 4) == '\x03') {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    FUN_109ea96a8(puVar3,0x3c00,1);
  }
  else if (*(char *)(param_3 + 4) == '\x04') {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    func_0x000109ea9804(0x3ff0000000000000,puVar3,1);
  }
  else {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    func_0x000109ea9758(0x3f800000,puVar3,1);
  }
  uVar7 = 0x99;
  FUN_109eac310(0x99,uVar9,puVar11);
  uVar8 = 0x98;
  FUN_109eac310(0x98,uVar7,puVar3);
  lVar10 = lStack_68;
  func_0x000109eabfa8(lStack_68,uVar8,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_68 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar10 + 8) = lVar5 + 0x60;
  puVar11 = *(undefined8 **)(lVar5 + 0x68);
  *(undefined8 **)(lVar10 + 0x10) = puVar11;
  plVar1 = (long *)0x0;
  if (lVar10 != 0) {
    plVar1 = (long *)(lVar10 + 8);
  }
  *puVar11 = plVar1;
  *(long **)(lVar5 + 0x68) = plVar1;
  func_0x000109e24460(&lStack_68,plVar6);
  func_0x000109e24460(&uStack_70,plVar6);
  puVar11 = puRam0000000113834720;
  if (*(char *)(param_3 + 4) == '\x03') {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[0x13] = 0;
      puVar11[0x12] = 0;
      puVar11[0x15] = 0;
      puVar11[0x14] = 0;
      puVar11[0xf] = 0;
      puVar11[0xe] = 0;
      puVar11[0x11] = 0;
      puVar11[0x10] = 0;
      puVar11[0xb] = 0;
      puVar11[10] = 0;
      puVar11[0xd] = 0;
      puVar11[0xc] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
    }
    FUN_109ea96a8(puVar11,0x4000,1);
  }
  else if (*(char *)(param_3 + 4) == '\x04') {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[0x13] = 0;
      puVar11[0x12] = 0;
      puVar11[0x15] = 0;
      puVar11[0x14] = 0;
      puVar11[0xf] = 0;
      puVar11[0xe] = 0;
      puVar11[0x11] = 0;
      puVar11[0x10] = 0;
      puVar11[0xb] = 0;
      puVar11[10] = 0;
      puVar11[0xd] = 0;
      puVar11[0xc] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
    }
    func_0x000109ea9804(0x4008000000000000,puVar11,1);
  }
  else {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[0x13] = 0;
      puVar11[0x12] = 0;
      puVar11[0x15] = 0;
      puVar11[0x14] = 0;
      puVar11[0xf] = 0;
      puVar11[0xe] = 0;
      puVar11[0x11] = 0;
      puVar11[0x10] = 0;
      puVar11[0xb] = 0;
      puVar11[10] = 0;
      puVar11[0xd] = 0;
      puVar11[0xc] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
    }
    func_0x000109ea9758(0x40400000,puVar11,1);
  }
  puVar3 = puRam0000000113834720;
  if (*(char *)(param_3 + 4) == '\x03') {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    FUN_109ea96a8(puVar3,0x4000,1);
  }
  else if (*(char *)(param_3 + 4) == '\x04') {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    func_0x000109ea9804(0x4000000000000000,puVar3,1);
  }
  else {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    func_0x000109ea9758(0x40000000,puVar3,1);
  }
  func_0x000109e24460(&uStack_78,plVar6);
  uVar7 = 0x82;
  FUN_109eac310(0x82,puVar3,uStack_78);
  uVar8 = 0x7c;
  FUN_109eac310(0x7c,puVar11,uVar7);
  uVar7 = 0x82;
  FUN_109eac310(0x82,uStack_70,uVar8);
  lVar10 = 0x82;
  FUN_109eac310(0x82,lStack_68,uVar7);
  FUN_109eac02c();
  *(long *)(lVar10 + 8) = lVar5 + 0x60;
  puVar11 = *(undefined8 **)(lVar5 + 0x68);
  plVar6 = (long *)0x0;
  if (lVar10 != 0) {
    plVar6 = (long *)(lVar10 + 8);
  }
  *(undefined8 **)(lVar10 + 0x10) = puVar11;
  *puVar11 = plVar6;
  *(long **)(lVar5 + 0x68) = plVar6;
  return lVar5;
}



/* Entry: 109e515c8; end: 109e516fb;  */

long FUN_109e515c8(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar7 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  FUN_109eaba7c(puVar7,param_2,&DAT_10f62b0e2,6);
  uVar6 = (ulong)*(byte *)(param_2 + 0xd);
  uVar5 = (uint)*(byte *)(param_2 + 0xd);
  if (uVar5 == 8) {
    uVar6 = 6;
  }
  else if (uVar5 == 0x10) {
    uVar6 = 7;
  }
  else if (uVar5 - 8 < 0xfffffff9) {
    puVar4 = &UNK_10e05d730;
    goto LAB_109e51674;
  }
  puVar4 = (&PTR_DAT_110b66dd8)[uVar6];
LAB_109e51674:
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,puVar4,param_1,1);
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  func_0x000109e24460(&uStack_38,puVar7);
  func_0x000109e24460(&uStack_40,puVar7);
  lVar3 = 0x8c;
  FUN_109eac310(0x8c,uStack_38,uStack_40);
  FUN_109eac02c();
  puVar7 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar3 + 0x10) = puVar7;
  *(long *)(lVar3 + 8) = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
  }
  *puVar7 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e516fc; end: 109e5190f;  */

long FUN_109e516fc(undefined8 param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uStack_c8;
  undefined8 auStack_c0 [4];
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
  
  puVar9 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
  }
  FUN_109eaba7c(puVar9,param_2,&DAT_10f62b0e2,6);
  uVar8 = (ulong)*(byte *)(param_2 + 0xd);
  uVar7 = (uint)*(byte *)(param_2 + 0xd);
  if (uVar7 == 8) {
    uVar8 = 6;
  }
  else if (uVar7 == 0x10) {
    uVar8 = 7;
  }
  else if (uVar7 - 8 < 0xfffffff9) {
    puVar6 = &UNK_10e05d730;
    goto LAB_109e517ac;
  }
  puVar6 = (&PTR_DAT_110b66dd8)[uVar8];
LAB_109e517ac:
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,puVar6,param_1,1);
  *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) | 1;
  bVar2 = *(byte *)(param_2 + 0xd);
  if ((ulong)bVar2 != 0) {
    uVar8 = 0;
    uVar7 = *(uint *)(param_2 + 4) & 0xff;
    do {
      if (uVar7 == 2) {
        *(undefined4 *)((long)auStack_c0 + uVar8 * 4) = 0x7f800000;
      }
      else if (uVar7 == 4) {
        auStack_c0[uVar8] = 0x7ff0000000000000;
      }
      else {
        *(undefined2 *)((long)auStack_c0 + uVar8 * 2) = 0x7c00;
      }
      uVar8 = uVar8 + 1;
    } while (bVar2 != uVar8);
  }
  func_0x000109e24460(&uStack_c8,puVar9);
  uVar4 = 3;
  FUN_109eac2ac(3,uStack_c8);
  puVar9 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0xb0);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[0x13] = 0;
    puVar9[0x12] = 0;
    puVar9[0x15] = 0;
    puVar9[0x14] = 0;
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
  }
  puVar9[0xe] = uStack_78;
  puVar9[0xd] = uStack_80;
  puVar9[0x10] = uStack_68;
  puVar9[0xf] = uStack_70;
  puVar9[0x12] = uStack_58;
  puVar9[0x11] = uStack_60;
  puVar9[0x14] = uStack_48;
  puVar9[0x13] = uStack_50;
  puVar9[6] = auStack_c0[1];
  puVar9[5] = auStack_c0[0];
  puVar9[8] = auStack_c0[3];
  puVar9[7] = auStack_c0[2];
  puVar9[10] = uStack_98;
  puVar9[9] = uStack_a0;
  *(undefined4 *)(puVar9 + 3) = 3;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_DAT_110b63f80;
  puVar9[0x15] = 0;
  puVar9[4] = param_2;
  puVar9[0xc] = uStack_88;
  puVar9[0xb] = uStack_90;
  lVar5 = 0x8b;
  FUN_109eac310(0x8b,uVar4);
  FUN_109eac02c();
  puVar9 = *(undefined8 **)(lVar3 + 0x68);
  *(undefined8 **)(lVar5 + 0x10) = puVar9;
  *(long *)(lVar5 + 8) = lVar3 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
  }
  *puVar9 = plVar1;
  *(long **)(lVar3 + 0x68) = plVar1;
  return lVar3;
}



/* Entry: 109e51910; end: 109e51e1f;  */

long FUN_109e51910(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  
  puVar7 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  FUN_109eaba7c(puVar7,param_1,&DAT_10f62b0e2,6);
  uVar6 = (ulong)*(byte *)(param_1 + 0xd);
  uVar5 = (uint)*(byte *)(param_1 + 0xd);
  if (uVar5 == 8) {
    uVar6 = 6;
  }
  else if (uVar5 == 0x10) {
    uVar6 = 7;
  }
  else if (uVar5 - 8 < 0xfffffff9) {
    puVar4 = &UNK_10e05d730;
    goto LAB_109e519b8;
  }
  puVar4 = (&PTR_DAT_110b66d68)[uVar6];
LAB_109e519b8:
  lVar1 = 0x113834718;
  FUN_109e4db30(0x113834718,puVar4,FUN_109e621ac,1);
  lStack_40 = lVar1 + 0x50;
  puStack_38 = puRam0000000113834720;
  *(byte *)(lVar1 + 0x48) = *(byte *)(lVar1 + 0x48) | 1;
  plVar2 = &lStack_40;
  FUN_109e621f0(plVar2,puVar7);
  func_0x000109e24460(&uStack_48,plVar2);
  lVar3 = 0x31;
  FUN_109eac2ac(0x31,uStack_48);
  FUN_109eac02c();
  puVar7 = *(undefined8 **)(lVar1 + 0x68);
  *(undefined8 **)(lVar3 + 0x10) = puVar7;
  *(long *)(lVar3 + 8) = lVar1 + 0x60;
  plVar2 = (long *)0x0;
  if (lVar3 != 0) {
    plVar2 = (long *)(lVar3 + 8);
  }
  *puVar7 = plVar2;
  *(long **)(lVar1 + 0x68) = plVar2;
  return lVar1;
}



/* Entry: 109e51e20; end: 109e51f3f;  */

long FUN_109e51e20(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uStack_28;
  
  puVar7 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  FUN_109eaba7c(puVar7,param_1,&DAT_10f62b0e2,6);
  uVar6 = (ulong)*(byte *)(param_1 + 0xd);
  uVar5 = (uint)*(byte *)(param_1 + 0xd);
  if (uVar5 == 8) {
    uVar6 = 6;
  }
  else if (uVar5 == 0x10) {
    uVar6 = 7;
  }
  else if (uVar5 - 8 < 0xfffffff9) {
    puVar4 = &UNK_10e05d730;
    goto LAB_109e51ec4;
  }
  puVar4 = (&PTR_DAT_110b66e10)[uVar6];
LAB_109e51ec4:
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,puVar4,FUN_109e51f40,1);
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  func_0x000109e24460(&uStack_28,puVar7);
  lVar3 = 0x37;
  FUN_109eac2ac(0x37,uStack_28);
  FUN_109eac02c();
  puVar7 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar3 + 0x10) = puVar7;
  *(long *)(lVar3 + 8) = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
  }
  *puVar7 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e51f40; end: 109e51f8b;  */

byte FUN_109e51f40(long param_1)

{
  byte bVar1;
  uint uVar2;
  
  if (((*(byte *)(param_1 + 0x319) & 1) == 0) && (*(char *)(param_1 + 0x399) != '\x01')) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x317) & 1) != 0) {
    return 1;
  }
  uVar2 = *(uint *)(param_1 + 0xec);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(param_1 + 0xe8);
  }
  bVar1 = 0;
  if (399 < uVar2) {
    bVar1 = *(byte *)(param_1 + 0xe4) ^ 1;
  }
  return bVar1;
}



/* Entry: 109e51f8c; end: 109e522eb;  */

long FUN_109e51f8c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uStack_28;
  
  puVar7 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  FUN_109eaba7c(puVar7,param_1,&DAT_10f62b0e2,6);
  uVar6 = (ulong)*(byte *)(param_1 + 0xd);
  uVar5 = (uint)*(byte *)(param_1 + 0xd);
  if (uVar5 == 8) {
    uVar6 = 6;
  }
  else if (uVar5 == 0x10) {
    uVar6 = 7;
  }
  else if (uVar5 - 8 < 0xfffffff9) {
    puVar4 = &UNK_10e05d730;
    goto LAB_109e52030;
  }
  puVar4 = (&PTR_DAT_110b66e48)[uVar6];
LAB_109e52030:
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,puVar4,FUN_109e51f40,1);
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  func_0x000109e24460(&uStack_28,puVar7);
  lVar3 = 0x36;
  FUN_109eac2ac(0x36,uStack_28);
  FUN_109eac02c();
  puVar7 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar3 + 0x10) = puVar7;
  *(long *)(lVar3 + 8) = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
  }
  *puVar7 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e522ec; end: 109e523af;  */

bool FUN_109e522ec(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (((*(byte *)(param_1 + 0x345) & 1) == 0) && ((*(byte *)(param_1 + 0x315) & 1) == 0)) {
    uVar1 = *(uint *)(param_1 + 0xec);
    if (uVar1 == 0) {
      uVar1 = *(uint *)(param_1 + 0xe8);
    }
    uVar2 = 299;
    if (*(char *)(param_1 + 0xe4) == '\0') {
      uVar2 = 399;
    }
    return uVar2 < uVar1;
  }
  return true;
}



/* Entry: 109e523b0; end: 109e524c7;  */

long FUN_109e523b0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar6 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  FUN_109eaba7c(puVar6,param_2,&DAT_10f62b0e2,6);
  FUN_109ec6810(param_2);
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,1);
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  func_0x000109e24460(&lStack_38,puVar6);
  func_0x000109e24460(&uStack_40,puVar6);
  uVar5 = 0x82;
  if (*(char *)(*(long *)(lStack_38 + 0x20) + 0xd) != '\x01') {
    uVar5 = 0x97;
  }
  uVar3 = (ulong)uVar5;
  FUN_109eac310(uVar3,lStack_38,uStack_40);
  lVar4 = 7;
  FUN_109eac2ac(7,uVar3);
  FUN_109eac02c();
  puVar6 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar4 + 0x10) = puVar6;
  *(long *)(lVar4 + 8) = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
  }
  *puVar6 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e524c8; end: 109e52707;  */

long FUN_109e524c8(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  
  puVar9 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
  }
  FUN_109eaba7c(puVar9,param_2,&UNK_10f60c1c4,6);
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c(puVar2,param_2,&DAT_10f4370ed,6);
  lVar5 = param_2;
  FUN_109ec6810(param_2);
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,lVar5,param_1,2);
  lStack_50 = lVar3 + 0x50;
  puStack_48 = puRam0000000113834720;
  *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) | 1;
  if (*(char *)(param_2 + 0xd) == '\x01') {
    func_0x000109e24460(&lStack_58,puVar9);
    func_0x000109e24460(&uStack_60,puVar2);
    uVar4 = 0x7c;
    FUN_109eac310(0x7c,lStack_58,uStack_60);
    lVar5 = 3;
  }
  else {
    plVar6 = &lStack_50;
    FUN_109eabf1c(plVar6,param_2,&DAT_10f3dc1a1);
    func_0x000109e244dc(&lStack_58,plVar6);
    func_0x000109e24460(&uStack_60,puVar9);
    func_0x000109e24460(&uStack_68,puVar2);
    uVar7 = 0x7c;
    FUN_109eac310(0x7c,uStack_60,uStack_68);
    lVar5 = lStack_58;
    func_0x000109eabfa8(lStack_58,uVar7,
                        ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_58 + 0x20) + 0xd) & 0x1f)));
    *(long *)(lVar5 + 8) = lVar3 + 0x60;
    puVar9 = *(undefined8 **)(lVar3 + 0x68);
    *(undefined8 **)(lVar5 + 0x10) = puVar9;
    plVar1 = (long *)0x0;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
    }
    *puVar9 = plVar1;
    *(long **)(lVar3 + 0x68) = plVar1;
    func_0x000109e24460(&lStack_58,plVar6);
    func_0x000109e24460(&uStack_60,plVar6);
    uVar8 = 0x82;
    if (*(char *)(*(long *)(lStack_58 + 0x20) + 0xd) != '\x01') {
      uVar8 = 0x97;
    }
    uVar4 = (ulong)uVar8;
    FUN_109eac310(uVar4,lStack_58,uStack_60);
    lVar5 = 7;
  }
  FUN_109eac2ac(lVar5,uVar4);
  FUN_109eac02c();
  *(long *)(lVar5 + 8) = lVar3 + 0x60;
  puVar9 = *(undefined8 **)(lVar3 + 0x68);
  *(undefined8 **)(lVar5 + 0x10) = puVar9;
  plVar6 = (long *)0x0;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
  }
  *puVar9 = plVar6;
  *(long **)(lVar3 + 0x68) = plVar6;
  return lVar3;
}



/* Entry: 109e52708; end: 109e52763;  */

/* WARNING: Removing unreachable block (ram,0x000109e62130) */

long FUN_109e52708(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_2;
  if (*(char *)(param_2 + 0xd) == '\x01') {
    lVar5 = 0x82;
  }
  else {
    FUN_109ec6810(param_2);
    lVar5 = 0x97;
  }
  puVar6 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  FUN_109eaba7c(puVar6,param_2,&DAT_10f62b0e2,6);
  puVar3 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  FUN_109eaba7c(puVar3,param_2,"y",6);
  lVar4 = 0x113834718;
  FUN_109e4db30(0x113834718,lVar2,param_1,2);
  *(byte *)(lVar4 + 0x48) = *(byte *)(lVar4 + 0x48) | 1;
  func_0x000109e24460(&uStack_58,puVar6);
  func_0x000109e24460(&uStack_60,puVar3);
  FUN_109eac310(lVar5,uStack_58,uStack_60);
  FUN_109eac02c();
  *(long *)(lVar5 + 8) = lVar4 + 0x60;
  puVar6 = *(undefined8 **)(lVar4 + 0x68);
  *(undefined8 **)(lVar5 + 0x10) = puVar6;
  plVar1 = (long *)0x0;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
  }
  *puVar6 = plVar1;
  *(long **)(lVar4 + 0x68) = plVar1;
  return lVar4;
}



/* Entry: 109e52764; end: 109e52a77;  */

long FUN_109e52764(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_38;
  
  puVar8 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[0xf] = 0;
    puVar8[0xe] = 0;
    puVar8[0x11] = 0;
    puVar8[0x10] = 0;
    puVar8[0xb] = 0;
    puVar8[10] = 0;
    puVar8[0xd] = 0;
    puVar8[0xc] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
  }
  FUN_109eaba7c(puVar8,param_2,&DAT_10f3dc16b,6);
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c(puVar2,param_2,"b",6);
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,2);
  *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) | 1;
  func_0x000109e24460(&uStack_38,puVar8);
  uVar4 = uStack_38;
  FUN_109eac090(uStack_38,0x11,3);
  func_0x000109e24460(&uStack_38,puVar2);
  uVar6 = uStack_38;
  FUN_109eac090(uStack_38,0x42,3);
  uVar5 = 0x82;
  FUN_109eac310(0x82,uVar4,uVar6);
  func_0x000109e24460(&uStack_38,puVar8);
  uVar4 = uStack_38;
  FUN_109eac090(uStack_38,0x42,3);
  func_0x000109e24460(&uStack_38,puVar2);
  FUN_109eac090(uStack_38,0x11,3);
  uVar6 = 0x82;
  FUN_109eac310(0x82,uVar4,uStack_38);
  lVar7 = 0x7c;
  FUN_109eac310(0x7c,uVar5,uVar6);
  FUN_109eac02c();
  *(long *)(lVar7 + 8) = lVar3 + 0x60;
  puVar8 = *(undefined8 **)(lVar3 + 0x68);
  *(undefined8 **)(lVar7 + 0x10) = puVar8;
  plVar1 = (long *)0x0;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
  }
  *puVar8 = plVar1;
  *(long **)(lVar3 + 0x68) = plVar1;
  return lVar3;
}



/* Entry: 109e52a78; end: 109e52fb7;  */

long FUN_109e52a78(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar11 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[0xf] = 0;
    puVar11[0xe] = 0;
    puVar11[0x11] = 0;
    puVar11[0x10] = 0;
    puVar11[0xb] = 0;
    puVar11[10] = 0;
    puVar11[0xd] = 0;
    puVar11[0xc] = 0;
    puVar11[7] = 0;
    puVar11[6] = 0;
    puVar11[9] = 0;
    puVar11[8] = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    puVar11[1] = 0;
    *puVar11 = 0;
  }
  FUN_109eaba7c(puVar11,param_2,&DAT_10f31a20b,6);
  puVar3 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  FUN_109eaba7c(puVar3,param_2,"I",6);
  puVar4 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  FUN_109eaba7c(puVar4,param_2,&UNK_10f60c1c7,6);
  lVar5 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,3);
  *(byte *)(lVar5 + 0x48) = *(byte *)(lVar5 + 0x48) | 1;
  func_0x000109e24460(&lStack_48,puVar4);
  func_0x000109e24460(&uStack_50,puVar3);
  uVar10 = 0x82;
  if (*(char *)(*(long *)(lStack_48 + 0x20) + 0xd) != '\x01') {
    uVar10 = 0x97;
  }
  uVar6 = (ulong)uVar10;
  FUN_109eac310(uVar6,lStack_48,uStack_50);
  cVar2 = *(char *)(param_2 + 4);
  puVar3 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0xb0);
  if (cVar2 == '\x03') {
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    FUN_109ea96a8(puVar3,0,1);
  }
  else if (cVar2 == '\x04') {
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    func_0x000109ea9804(0,puVar3,1);
  }
  else {
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    func_0x000109ea9758(0,puVar3,1);
  }
  lVar7 = 0x89;
  FUN_109eac310(0x89,uVar6,puVar3);
  func_0x000109e24460(&lStack_48,puVar11);
  lVar8 = lStack_48;
  FUN_109eac02c(lStack_48);
  func_0x000109e24460(&lStack_48,puVar11);
  uVar9 = 2;
  FUN_109eac2ac(2,lStack_48);
  FUN_109eac02c();
  FUN_109eac54c(lVar7,lVar8,uVar9);
  *(long *)(lVar7 + 8) = lVar5 + 0x60;
  puVar11 = *(undefined8 **)(lVar5 + 0x68);
  *(undefined8 **)(lVar7 + 0x10) = puVar11;
  plVar1 = (long *)0x0;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
  }
  *puVar11 = plVar1;
  *(long **)(lVar5 + 0x68) = plVar1;
  return lVar5;
}



/* Entry: 109e52fb8; end: 109e53cdb;  */

long FUN_109e52fb8(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  
  puVar18 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar18 != (undefined8 *)0x0) {
    puVar18[0xf] = 0;
    puVar18[0xe] = 0;
    puVar18[0x11] = 0;
    puVar18[0x10] = 0;
    puVar18[0xb] = 0;
    puVar18[10] = 0;
    puVar18[0xd] = 0;
    puVar18[0xc] = 0;
    puVar18[7] = 0;
    puVar18[6] = 0;
    puVar18[9] = 0;
    puVar18[8] = 0;
    puVar18[3] = 0;
    puVar18[2] = 0;
    puVar18[5] = 0;
    puVar18[4] = 0;
    puVar18[1] = 0;
    *puVar18 = 0;
  }
  FUN_109eaba7c(puVar18,param_2,"I",6);
  puVar3 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  FUN_109eaba7c(puVar3,param_2,&DAT_10f31a20b,6);
  lVar4 = param_2;
  FUN_109ec6810(param_2);
  puVar5 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x11] = 0;
    puVar5[0x10] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
  }
  FUN_109eaba7c(puVar5,lVar4,&UNK_10f56f739,6);
  lVar4 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,3);
  lStack_70 = lVar4 + 0x50;
  puStack_68 = puRam0000000113834720;
  *(byte *)(lVar4 + 0x48) = *(byte *)(lVar4 + 0x48) | 1;
  lVar6 = param_2;
  FUN_109ec6810(param_2);
  plVar7 = &lStack_70;
  FUN_109eabf1c(plVar7,lVar6,&UNK_10f60c1cc);
  func_0x000109e244dc(&lStack_78,plVar7);
  func_0x000109e24460(&lStack_80,puVar3);
  func_0x000109e24460(&uStack_88,puVar18);
  uVar16 = 0x82;
  if (*(char *)(*(long *)(lStack_80 + 0x20) + 0xd) != '\x01') {
    uVar16 = 0x97;
  }
  uVar8 = (ulong)uVar16;
  FUN_109eac310(uVar8,lStack_80,uStack_88);
  lVar13 = lStack_78;
  func_0x000109eabfa8(lStack_78,uVar8,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_78 + 0x20) + 0xd) & 0x1f)));
  lVar6 = lVar4 + 0x60;
  *(long *)(lVar13 + 8) = lVar6;
  puVar17 = *(undefined8 **)(lVar4 + 0x68);
  *(undefined8 **)(lVar13 + 0x10) = puVar17;
  plVar9 = (long *)0x0;
  if (lVar13 != 0) {
    plVar9 = (long *)(lVar13 + 8);
  }
  *puVar17 = plVar9;
  *(long **)(lVar4 + 0x68) = plVar9;
  lVar13 = param_2;
  FUN_109ec6810(param_2);
  plVar9 = &lStack_70;
  FUN_109eabf1c(plVar9,lVar13,&DAT_10f3dc18b);
  func_0x000109e244dc(&lStack_78,plVar9);
  puVar17 = puRam0000000113834720;
  if (*(char *)(param_2 + 4) == '\x03') {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar17 != (undefined8 *)0x0) {
      puVar17[0x13] = 0;
      puVar17[0x12] = 0;
      puVar17[0x15] = 0;
      puVar17[0x14] = 0;
      puVar17[0xf] = 0;
      puVar17[0xe] = 0;
      puVar17[0x11] = 0;
      puVar17[0x10] = 0;
      puVar17[0xb] = 0;
      puVar17[10] = 0;
      puVar17[0xd] = 0;
      puVar17[0xc] = 0;
      puVar17[7] = 0;
      puVar17[6] = 0;
      puVar17[9] = 0;
      puVar17[8] = 0;
      puVar17[3] = 0;
      puVar17[2] = 0;
      puVar17[5] = 0;
      puVar17[4] = 0;
      puVar17[1] = 0;
      *puVar17 = 0;
    }
    FUN_109ea96a8(puVar17,0x3c00,1);
  }
  else if (*(char *)(param_2 + 4) == '\x04') {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar17 != (undefined8 *)0x0) {
      puVar17[0x13] = 0;
      puVar17[0x12] = 0;
      puVar17[0x15] = 0;
      puVar17[0x14] = 0;
      puVar17[0xf] = 0;
      puVar17[0xe] = 0;
      puVar17[0x11] = 0;
      puVar17[0x10] = 0;
      puVar17[0xb] = 0;
      puVar17[10] = 0;
      puVar17[0xd] = 0;
      puVar17[0xc] = 0;
      puVar17[7] = 0;
      puVar17[6] = 0;
      puVar17[9] = 0;
      puVar17[8] = 0;
      puVar17[3] = 0;
      puVar17[2] = 0;
      puVar17[5] = 0;
      puVar17[4] = 0;
      puVar17[1] = 0;
      *puVar17 = 0;
    }
    func_0x000109ea9804(0x3ff0000000000000,puVar17,1);
  }
  else {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar17 != (undefined8 *)0x0) {
      puVar17[0x13] = 0;
      puVar17[0x12] = 0;
      puVar17[0x15] = 0;
      puVar17[0x14] = 0;
      puVar17[0xf] = 0;
      puVar17[0xe] = 0;
      puVar17[0x11] = 0;
      puVar17[0x10] = 0;
      puVar17[0xb] = 0;
      puVar17[10] = 0;
      puVar17[0xd] = 0;
      puVar17[0xc] = 0;
      puVar17[7] = 0;
      puVar17[6] = 0;
      puVar17[9] = 0;
      puVar17[8] = 0;
      puVar17[3] = 0;
      puVar17[2] = 0;
      puVar17[5] = 0;
      puVar17[4] = 0;
      puVar17[1] = 0;
      *puVar17 = 0;
    }
    func_0x000109ea9758(0x3f800000,puVar17,1);
  }
  func_0x000109e24460(&lStack_80,puVar5);
  func_0x000109e24460(&uStack_88,puVar5);
  puVar10 = puRam0000000113834720;
  if (*(char *)(param_2 + 4) == '\x03') {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[0x13] = 0;
      puVar10[0x12] = 0;
      puVar10[0x15] = 0;
      puVar10[0x14] = 0;
      puVar10[0xf] = 0;
      puVar10[0xe] = 0;
      puVar10[0x11] = 0;
      puVar10[0x10] = 0;
      puVar10[0xb] = 0;
      puVar10[10] = 0;
      puVar10[0xd] = 0;
      puVar10[0xc] = 0;
      puVar10[7] = 0;
      puVar10[6] = 0;
      puVar10[9] = 0;
      puVar10[8] = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
    }
    FUN_109ea96a8(puVar10,0x3c00,1);
  }
  else if (*(char *)(param_2 + 4) == '\x04') {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[0x13] = 0;
      puVar10[0x12] = 0;
      puVar10[0x15] = 0;
      puVar10[0x14] = 0;
      puVar10[0xf] = 0;
      puVar10[0xe] = 0;
      puVar10[0x11] = 0;
      puVar10[0x10] = 0;
      puVar10[0xb] = 0;
      puVar10[10] = 0;
      puVar10[0xd] = 0;
      puVar10[0xc] = 0;
      puVar10[7] = 0;
      puVar10[6] = 0;
      puVar10[9] = 0;
      puVar10[8] = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
    }
    func_0x000109ea9804(0x3ff0000000000000,puVar10,1);
  }
  else {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[0x13] = 0;
      puVar10[0x12] = 0;
      puVar10[0x15] = 0;
      puVar10[0x14] = 0;
      puVar10[0xf] = 0;
      puVar10[0xe] = 0;
      puVar10[0x11] = 0;
      puVar10[0x10] = 0;
      puVar10[0xb] = 0;
      puVar10[10] = 0;
      puVar10[0xd] = 0;
      puVar10[0xc] = 0;
      puVar10[7] = 0;
      puVar10[6] = 0;
      puVar10[9] = 0;
      puVar10[8] = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
    }
    func_0x000109ea9758(0x3f800000,puVar10,1);
  }
  func_0x000109e24460(&uStack_90,plVar7);
  func_0x000109e24460(&uStack_98,plVar7);
  uVar11 = 0x82;
  FUN_109eac310(0x82,uStack_90,uStack_98);
  uVar12 = 0x7c;
  FUN_109eac310(0x7c,puVar10,uVar11);
  uVar11 = 0x82;
  FUN_109eac310(0x82,uStack_88,uVar12);
  uVar12 = 0x82;
  FUN_109eac310(0x82,lStack_80,uVar11);
  uVar11 = 0x7c;
  FUN_109eac310(0x7c,puVar17,uVar12);
  lVar13 = lStack_78;
  func_0x000109eabfa8(lStack_78,uVar11,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_78 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar13 + 8) = lVar6;
  puVar17 = *(undefined8 **)(lVar4 + 0x68);
  plVar1 = (long *)0x0;
  if (lVar13 != 0) {
    plVar1 = (long *)(lVar13 + 8);
  }
  *(undefined8 **)(lVar13 + 0x10) = puVar17;
  *puVar17 = plVar1;
  *(long **)(lVar4 + 0x68) = plVar1;
  func_0x000109e24460(&lStack_78,plVar9);
  cVar2 = *(char *)(param_2 + 4);
  puVar17 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0xb0);
  if (cVar2 == '\x03') {
    if (puVar17 != (undefined8 *)0x0) {
      puVar17[0x13] = 0;
      puVar17[0x12] = 0;
      puVar17[0x15] = 0;
      puVar17[0x14] = 0;
      puVar17[0xf] = 0;
      puVar17[0xe] = 0;
      puVar17[0x11] = 0;
      puVar17[0x10] = 0;
      puVar17[0xb] = 0;
      puVar17[10] = 0;
      puVar17[0xd] = 0;
      puVar17[0xc] = 0;
      puVar17[7] = 0;
      puVar17[6] = 0;
      puVar17[9] = 0;
      puVar17[8] = 0;
      puVar17[3] = 0;
      puVar17[2] = 0;
      puVar17[5] = 0;
      puVar17[4] = 0;
      puVar17[1] = 0;
      *puVar17 = 0;
    }
    FUN_109ea96a8(puVar17,0,1);
  }
  else if (cVar2 == '\x04') {
    if (puVar17 != (undefined8 *)0x0) {
      puVar17[0x13] = 0;
      puVar17[0x12] = 0;
      puVar17[0x15] = 0;
      puVar17[0x14] = 0;
      puVar17[0xf] = 0;
      puVar17[0xe] = 0;
      puVar17[0x11] = 0;
      puVar17[0x10] = 0;
      puVar17[0xb] = 0;
      puVar17[10] = 0;
      puVar17[0xd] = 0;
      puVar17[0xc] = 0;
      puVar17[7] = 0;
      puVar17[6] = 0;
      puVar17[9] = 0;
      puVar17[8] = 0;
      puVar17[3] = 0;
      puVar17[2] = 0;
      puVar17[5] = 0;
      puVar17[4] = 0;
      puVar17[1] = 0;
      *puVar17 = 0;
    }
    func_0x000109ea9804(0,puVar17,1);
  }
  else {
    if (puVar17 != (undefined8 *)0x0) {
      puVar17[0x13] = 0;
      puVar17[0x12] = 0;
      puVar17[0x15] = 0;
      puVar17[0x14] = 0;
      puVar17[0xf] = 0;
      puVar17[0xe] = 0;
      puVar17[0x11] = 0;
      puVar17[0x10] = 0;
      puVar17[0xb] = 0;
      puVar17[10] = 0;
      puVar17[0xd] = 0;
      puVar17[0xc] = 0;
      puVar17[7] = 0;
      puVar17[6] = 0;
      puVar17[9] = 0;
      puVar17[8] = 0;
      puVar17[3] = 0;
      puVar17[2] = 0;
      puVar17[5] = 0;
      puVar17[4] = 0;
      puVar17[1] = 0;
      *puVar17 = 0;
    }
    func_0x000109ea9758(0,puVar17,1);
  }
  lVar13 = 0x89;
  FUN_109eac310(0x89,lStack_78,puVar17);
  puVar17 = puRam0000000113834720;
  FUN_109eaaac0(puRam0000000113834720,param_2);
  FUN_109eac02c();
  func_0x000109e24460(&lStack_78,puVar5);
  func_0x000109e24460(&lStack_80,puVar18);
  uVar11 = 0x82;
  FUN_109eac310(0x82,lStack_78,lStack_80);
  func_0x000109e24460(&lStack_78,puVar5);
  func_0x000109e24460(&lStack_80,plVar7);
  uVar12 = 0x82;
  FUN_109eac310(0x82,lStack_78,lStack_80);
  func_0x000109e24460(&lStack_78,plVar9);
  uVar14 = 7;
  FUN_109eac2ac(7,lStack_78);
  uVar15 = 0x7b;
  FUN_109eac310(0x7b,uVar12,uVar14);
  func_0x000109e24460(&lStack_78,puVar3);
  uVar12 = 0x82;
  FUN_109eac310(0x82,uVar15,lStack_78);
  uVar14 = 0x7c;
  FUN_109eac310(0x7c,uVar11,uVar12);
  FUN_109eac02c();
  FUN_109eac54c(lVar13,puVar17,uVar14);
  *(long *)(lVar13 + 8) = lVar6;
  puVar18 = *(undefined8 **)(lVar4 + 0x68);
  plVar7 = (long *)0x0;
  if (lVar13 != 0) {
    plVar7 = (long *)(lVar13 + 8);
  }
  *(undefined8 **)(lVar13 + 0x10) = puVar18;
  *puVar18 = plVar7;
  *(long **)(lVar4 + 0x68) = plVar7;
  return lVar4;
}



/* Entry: 109e53cdc; end: 109e53d07;  */

bool FUN_109e53cdc(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xec);
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_1 + 0xe8);
  }
  uVar2 = 299;
  if (*(char *)(param_1 + 0xe4) == '\0') {
    uVar2 = 0x77;
  }
  return uVar2 < uVar1;
}



/* Entry: 109e53d08; end: 109e53e77;  */

long FUN_109e53d08(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar8 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[0xf] = 0;
    puVar8[0xe] = 0;
    puVar8[0x11] = 0;
    puVar8[0x10] = 0;
    puVar8[0xb] = 0;
    puVar8[10] = 0;
    puVar8[0xd] = 0;
    puVar8[0xc] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
  }
  FUN_109eaba7c(puVar8,param_2,&DAT_10f321b20,6);
  FUN_109ec6810(param_2);
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,1);
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  puVar3 = puVar8;
  FUN_109e622c4(puVar8,0);
  FUN_109eac090();
  puVar4 = puVar8;
  FUN_109e622c4(puVar8,1);
  FUN_109eac090();
  uVar5 = 0x82;
  FUN_109eac310(0x82,puVar3,puVar4);
  puVar3 = puVar8;
  FUN_109e622c4(puVar8,1);
  FUN_109eac090();
  FUN_109e622c4(puVar8,0);
  FUN_109eac090();
  uVar6 = 0x82;
  FUN_109eac310(0x82,puVar3,puVar8);
  lVar7 = 0x7c;
  FUN_109eac310(0x7c,uVar5,uVar6);
  FUN_109eac02c();
  puVar8 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar7 + 0x10) = puVar8;
  *(long *)(lVar7 + 8) = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
  }
  *puVar8 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e53e78; end: 109e541d3;  */

long FUN_109e53e78(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  
  puVar11 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[0xf] = 0;
    puVar11[0xe] = 0;
    puVar11[0x11] = 0;
    puVar11[0x10] = 0;
    puVar11[0xb] = 0;
    puVar11[10] = 0;
    puVar11[0xd] = 0;
    puVar11[0xc] = 0;
    puVar11[7] = 0;
    puVar11[6] = 0;
    puVar11[9] = 0;
    puVar11[8] = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    puVar11[1] = 0;
    *puVar11 = 0;
  }
  FUN_109eaba7c(puVar11,param_2,&DAT_10f321b20,6);
  FUN_109ec6810(param_2);
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,1);
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  puVar3 = puVar11;
  FUN_109e622c4(puVar11,1);
  FUN_109eac090();
  puVar4 = puVar11;
  FUN_109e622c4(puVar11,2);
  FUN_109eac090();
  uVar5 = 0x82;
  FUN_109eac310(0x82,puVar3,puVar4);
  puVar3 = puVar11;
  FUN_109e622c4(puVar11,1);
  FUN_109eac090();
  puVar4 = puVar11;
  FUN_109e622c4(puVar11,2);
  FUN_109eac090();
  uVar6 = 0x82;
  FUN_109eac310(0x82,puVar3,puVar4);
  uVar7 = 0x7c;
  FUN_109eac310(0x7c,uVar5,uVar6);
  puVar3 = puVar11;
  FUN_109e622c4(puVar11,1);
  FUN_109eac090();
  puVar4 = puVar11;
  FUN_109e622c4(puVar11,2);
  FUN_109eac090();
  uVar5 = 0x82;
  FUN_109eac310(0x82,puVar3,puVar4);
  puVar3 = puVar11;
  FUN_109e622c4(puVar11,1);
  FUN_109eac090();
  puVar4 = puVar11;
  FUN_109e622c4(puVar11,2);
  FUN_109eac090();
  uVar6 = 0x82;
  FUN_109eac310(0x82,puVar3,puVar4);
  uVar8 = 0x7c;
  FUN_109eac310(0x7c,uVar5,uVar6);
  puVar3 = puVar11;
  FUN_109e622c4(puVar11,1);
  FUN_109eac090();
  puVar4 = puVar11;
  FUN_109e622c4(puVar11,2);
  FUN_109eac090();
  uVar5 = 0x82;
  FUN_109eac310(0x82,puVar3,puVar4);
  puVar3 = puVar11;
  FUN_109e622c4(puVar11,1);
  FUN_109eac090();
  puVar4 = puVar11;
  FUN_109e622c4(puVar11,2);
  FUN_109eac090();
  uVar6 = 0x82;
  FUN_109eac310(0x82,puVar3,puVar4);
  uVar9 = 0x7c;
  FUN_109eac310(0x7c,uVar5,uVar6);
  puVar3 = puVar11;
  FUN_109e622c4(puVar11,0);
  FUN_109eac090();
  uVar5 = 0x82;
  FUN_109eac310(0x82,puVar3,uVar7);
  puVar3 = puVar11;
  FUN_109e622c4(puVar11,0);
  FUN_109eac090();
  uVar6 = 0x82;
  FUN_109eac310(0x82,puVar3,uVar8);
  uVar7 = 0x7c;
  FUN_109eac310(0x7c,uVar5,uVar6);
  FUN_109e622c4(puVar11,0);
  FUN_109eac090();
  uVar5 = 0x82;
  FUN_109eac310(0x82,puVar11,uVar9);
  lVar10 = 0x7b;
  FUN_109eac310(0x7b,uVar7,uVar5);
  FUN_109eac02c();
  puVar11 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar10 + 0x10) = puVar11;
  *(long *)(lVar10 + 8) = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar10 != 0) {
    plVar1 = (long *)(lVar10 + 8);
  }
  *puVar11 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e541d4; end: 109e55a97;  */

long FUN_109e541d4(undefined8 param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  
  puVar33 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar33 != (undefined8 *)0x0) {
    puVar33[0xf] = 0;
    puVar33[0xe] = 0;
    puVar33[0x11] = 0;
    puVar33[0x10] = 0;
    puVar33[0xb] = 0;
    puVar33[10] = 0;
    puVar33[0xd] = 0;
    puVar33[0xc] = 0;
    puVar33[7] = 0;
    puVar33[6] = 0;
    puVar33[9] = 0;
    puVar33[8] = 0;
    puVar33[3] = 0;
    puVar33[2] = 0;
    puVar33[5] = 0;
    puVar33[4] = 0;
    puVar33[1] = 0;
    *puVar33 = 0;
  }
  FUN_109eaba7c(puVar33,param_2,&DAT_10f321b20,6);
  FUN_109ec6810();
  lVar5 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,1);
  lStack_78 = lVar5 + 0x50;
  puStack_70 = puRam0000000113834720;
  *(byte *)(lVar5 + 0x48) = *(byte *)(lVar5 + 0x48) | 1;
  plVar6 = &lStack_78;
  FUN_109eabf1c(plVar6,param_2,&UNK_10f60c1d4);
  plVar7 = &lStack_78;
  FUN_109eabf1c(plVar7,param_2,&UNK_10f60c1e0);
  plVar8 = &lStack_78;
  FUN_109eabf1c(plVar8,param_2,&UNK_10f60c1ec);
  plVar9 = &lStack_78;
  FUN_109eabf1c(plVar9,param_2,&UNK_10f60c1f8);
  plVar10 = &lStack_78;
  FUN_109eabf1c(plVar10,param_2,&UNK_10f60c204);
  plVar11 = &lStack_78;
  FUN_109eabf1c(plVar11,param_2,&UNK_10f60c210);
  plVar12 = &lStack_78;
  FUN_109eabf1c(plVar12,param_2,&UNK_10f60c21c);
  plVar13 = &lStack_78;
  FUN_109eabf1c(plVar13,param_2,&UNK_10f60c228);
  plVar14 = &lStack_78;
  FUN_109eabf1c(plVar14,param_2,&UNK_10f60c234);
  plVar15 = &lStack_78;
  FUN_109eabf1c(plVar15,param_2,&UNK_10f60c240);
  plVar16 = &lStack_78;
  FUN_109eabf1c(plVar16,param_2,&UNK_10f60c24c);
  plVar17 = &lStack_78;
  FUN_109eabf1c(plVar17,param_2,&UNK_10f60c258);
  plVar18 = &lStack_78;
  FUN_109eabf1c(plVar18,param_2,&UNK_10f60c264);
  plVar19 = &lStack_78;
  FUN_109eabf1c(plVar19,param_2,&UNK_10f60c270);
  plVar20 = &lStack_78;
  FUN_109eabf1c(plVar20,param_2,&UNK_10f60c27c);
  plVar21 = &lStack_78;
  FUN_109eabf1c(plVar21,param_2,&UNK_10f60c288);
  plVar22 = &lStack_78;
  FUN_109eabf1c(plVar22,param_2,&UNK_10f60c294);
  plVar23 = &lStack_78;
  FUN_109eabf1c(plVar23,param_2,&UNK_10f60c2a0);
  plVar24 = &lStack_78;
  FUN_109eabf1c(plVar24,param_2,&UNK_10f60c2ac);
  func_0x000109e244dc(&lStack_80,plVar6);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  lVar1 = lVar5 + 0x60;
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar7);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar8);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar9);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar10);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar11);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar12);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar13);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar14);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar15);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar16);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar17);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar18);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,3);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar19);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar20);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar21);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar22);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar23);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar24);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,2);
  FUN_109eac090();
  puVar25 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,puVar25);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar28,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar29 + 8) = lVar1;
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  puVar2 = &DAT_10e05de68;
  if (param_2 != &DAT_10e05ddc0) {
    puVar2 = &DAT_10e05dff0;
  }
  puVar3 = &DAT_10e05dce0;
  if (param_2 != &DAT_10e05dc38) {
    puVar3 = puVar2;
  }
  plVar12 = &lStack_78;
  FUN_109eabf1c(plVar12,puVar3,&UNK_10f60c2b8);
  func_0x000109e244dc(&lStack_80,plVar12);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  func_0x000109e24460(&uStack_88,plVar6);
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,uStack_88);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  func_0x000109e24460(&uStack_88,plVar7);
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,uStack_88);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  func_0x000109e24460(&uStack_88,plVar8);
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,uStack_88);
  uVar27 = 0x7b;
  FUN_109eac310(0x7b,uVar28,uVar26);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar27,1);
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar12);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  func_0x000109e24460(&uStack_88,plVar6);
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,uStack_88);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  func_0x000109e24460(&uStack_88,plVar9);
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,uStack_88);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  func_0x000109e24460(&uStack_88,plVar10);
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,uStack_88);
  uVar27 = 0x7b;
  FUN_109eac310(0x7b,uVar28,uVar26);
  uVar26 = 2;
  FUN_109eac2ac(2,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar26,2);
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar12);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  func_0x000109e24460(&uStack_88,plVar7);
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,uStack_88);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  func_0x000109e24460(&uStack_88,plVar9);
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,uStack_88);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  func_0x000109e24460(&uStack_88,plVar11);
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,uStack_88);
  uVar27 = 0x7b;
  FUN_109eac310(0x7b,uVar28,uVar26);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar27,4);
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  func_0x000109e244dc(&lStack_80,plVar12);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  func_0x000109e24460(&uStack_88,plVar8);
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,uStack_88);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  func_0x000109e24460(&uStack_88,plVar10);
  uVar27 = 0x82;
  FUN_109eac310(0x82,puVar32,uStack_88);
  uVar28 = 0x7c;
  FUN_109eac310(0x7c,uVar26,uVar27);
  puVar32 = puVar33;
  FUN_109e622c4(puVar33,1);
  FUN_109eac090();
  func_0x000109e24460(&uStack_88,plVar11);
  uVar26 = 0x82;
  FUN_109eac310(0x82,puVar32,uStack_88);
  uVar27 = 0x7b;
  FUN_109eac310(0x7b,uVar28,uVar26);
  uVar26 = 2;
  FUN_109eac2ac(2,uVar27);
  lVar29 = lStack_80;
  func_0x000109eabfa8(lStack_80,uVar26,8);
  *(long *)(lVar29 + 8) = lVar1;
  puVar32 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar29 != 0) {
    plVar4 = (long *)(lVar29 + 8);
  }
  *(undefined8 **)(lVar29 + 0x10) = puVar32;
  *puVar32 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  FUN_109e622c4(puVar33,0);
  func_0x000109e24460(&lStack_80,plVar12);
  uVar31 = 0x82;
  if (*(char *)(puVar33[4] + 0xd) != '\x01') {
    uVar31 = 0x97;
  }
  uVar30 = (ulong)uVar31;
  FUN_109eac310(uVar30,puVar33,lStack_80);
  FUN_109eac02c();
  *(long *)(uVar30 + 8) = lVar1;
  puVar33 = *(undefined8 **)(lVar5 + 0x68);
  plVar4 = (long *)0x0;
  if (uVar30 != 0) {
    plVar4 = (long *)(uVar30 + 8);
  }
  *(undefined8 **)(uVar30 + 0x10) = puVar33;
  *puVar33 = plVar4;
  *(long **)(lVar5 + 0x68) = plVar4;
  return lVar5;
}



/* Entry: 109e55a98; end: 109e55db3;  */

long FUN_109e55a98(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  
  puVar12 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[0xf] = 0;
    puVar12[0xe] = 0;
    puVar12[0x11] = 0;
    puVar12[0x10] = 0;
    puVar12[0xb] = 0;
    puVar12[10] = 0;
    puVar12[0xd] = 0;
    puVar12[0xc] = 0;
    puVar12[7] = 0;
    puVar12[6] = 0;
    puVar12[9] = 0;
    puVar12[8] = 0;
    puVar12[3] = 0;
    puVar12[2] = 0;
    puVar12[5] = 0;
    puVar12[4] = 0;
    puVar12[1] = 0;
    *puVar12 = 0;
  }
  FUN_109eaba7c(puVar12,param_2,&DAT_10f321b20,6);
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,1);
  lStack_50 = lVar3 + 0x50;
  puStack_48 = puRam0000000113834720;
  *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) | 1;
  plVar4 = &lStack_50;
  FUN_109eabf1c(plVar4,param_2,&UNK_10f60c2be);
  plVar5 = plVar4;
  FUN_109e622c4();
  puVar11 = puVar12;
  FUN_109e622c4(puVar12,1);
  FUN_109eac090();
  func_0x000109eabfa8(plVar5,puVar11,1);
  lVar1 = lVar3 + 0x60;
  puVar11 = *(undefined8 **)(lVar3 + 0x68);
  plVar5[2] = (long)puVar11;
  plVar5[1] = lVar1;
  plVar2 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
  }
  *puVar11 = plVar2;
  *(long **)(lVar3 + 0x68) = plVar2;
  plVar5 = plVar4;
  FUN_109e622c4(plVar4,0);
  puVar11 = puVar12;
  FUN_109e622c4(puVar12,0);
  FUN_109eac090();
  uVar6 = 2;
  FUN_109eac2ac(2,puVar11);
  func_0x000109eabfa8(plVar5,uVar6,2);
  puVar11 = *(undefined8 **)(lVar3 + 0x68);
  plVar5[2] = (long)puVar11;
  plVar5[1] = lVar1;
  plVar2 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
  }
  *puVar11 = plVar2;
  *(long **)(lVar3 + 0x68) = plVar2;
  plVar5 = plVar4;
  FUN_109e622c4(plVar4,1);
  puVar11 = puVar12;
  FUN_109e622c4(puVar12,1);
  FUN_109eac090();
  uVar6 = 2;
  FUN_109eac2ac(2,puVar11);
  func_0x000109eabfa8(plVar5,uVar6,1);
  puVar11 = *(undefined8 **)(lVar3 + 0x68);
  plVar5[2] = (long)puVar11;
  plVar5[1] = lVar1;
  plVar2 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
  }
  *puVar11 = plVar2;
  *(long **)(lVar3 + 0x68) = plVar2;
  plVar5 = plVar4;
  FUN_109e622c4(plVar4,1);
  puVar11 = puVar12;
  FUN_109e622c4(puVar12,0);
  FUN_109eac090();
  func_0x000109eabfa8(plVar5,puVar11,2);
  puVar11 = *(undefined8 **)(lVar3 + 0x68);
  plVar5[2] = (long)puVar11;
  plVar5[1] = lVar1;
  plVar2 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
  }
  *puVar11 = plVar2;
  *(long **)(lVar3 + 0x68) = plVar2;
  puVar11 = puVar12;
  FUN_109e622c4(puVar12,0);
  FUN_109eac090();
  puVar7 = puVar12;
  FUN_109e622c4(puVar12,1);
  FUN_109eac090();
  uVar6 = 0x82;
  FUN_109eac310(0x82,puVar11,puVar7);
  puVar11 = puVar12;
  FUN_109e622c4(puVar12,1);
  FUN_109eac090();
  FUN_109e622c4(puVar12,0);
  FUN_109eac090();
  uVar8 = 0x82;
  FUN_109eac310(0x82,puVar11,puVar12);
  uVar9 = 0x7c;
  FUN_109eac310(0x7c,uVar6,uVar8);
  func_0x000109e24460(&uStack_58,plVar4);
  lVar10 = 0x85;
  FUN_109eac310(0x85,uStack_58,uVar9);
  FUN_109eac02c();
  puVar12 = *(undefined8 **)(lVar3 + 0x68);
  *(undefined8 **)(lVar10 + 0x10) = puVar12;
  *(long *)(lVar10 + 8) = lVar1;
  plVar4 = (long *)0x0;
  if (lVar10 != 0) {
    plVar4 = (long *)(lVar10 + 8);
  }
  *puVar12 = plVar4;
  *(long **)(lVar3 + 0x68) = plVar4;
  return lVar3;
}



/* Entry: 109e55db4; end: 109e55ddf;  */

bool FUN_109e55db4(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xec);
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_1 + 0xe8);
  }
  uVar2 = 299;
  if (*(char *)(param_1 + 0xe4) == '\0') {
    uVar2 = 0x8b;
  }
  return uVar2 < uVar1;
}



/* Entry: 109e55de0; end: 109e5923b;  */

long FUN_109e55de0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  
  puVar15 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar15 != (undefined8 *)0x0) {
    puVar15[0xf] = 0;
    puVar15[0xe] = 0;
    puVar15[0x11] = 0;
    puVar15[0x10] = 0;
    puVar15[0xb] = 0;
    puVar15[10] = 0;
    puVar15[0xd] = 0;
    puVar15[0xc] = 0;
    puVar15[7] = 0;
    puVar15[6] = 0;
    puVar15[9] = 0;
    puVar15[8] = 0;
    puVar15[3] = 0;
    puVar15[2] = 0;
    puVar15[5] = 0;
    puVar15[4] = 0;
    puVar15[1] = 0;
    *puVar15 = 0;
  }
  FUN_109eaba7c(puVar15,param_2,&DAT_10f321b20,6);
  uVar8 = param_2;
  FUN_109ec6810(param_2);
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,1);
  lStack_70 = lVar3 + 0x50;
  puStack_68 = puRam0000000113834720;
  *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) | 1;
  plVar4 = &lStack_70;
  FUN_109eabf1c(plVar4,uVar8,&UNK_10f60c2c2);
  plVar5 = &lStack_70;
  FUN_109eabf1c(plVar5,uVar8,&UNK_10f60c2cf);
  plVar6 = &lStack_70;
  FUN_109eabf1c(plVar6,uVar8,&UNK_10f60c2dc);
  func_0x000109e244dc(&lStack_78,plVar4);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,1);
  FUN_109eac090();
  puVar7 = puVar15;
  FUN_109e622c4(puVar15,2);
  FUN_109eac090();
  uVar8 = 0x82;
  FUN_109eac310(0x82,puVar14,puVar7);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,2);
  FUN_109eac090();
  puVar7 = puVar15;
  FUN_109e622c4(puVar15,1);
  FUN_109eac090();
  uVar9 = 0x82;
  FUN_109eac310(0x82,puVar14,puVar7);
  uVar10 = 0x7c;
  FUN_109eac310(0x7c,uVar8,uVar9);
  lVar13 = lStack_78;
  func_0x000109eabfa8(lStack_78,uVar10,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_78 + 0x20) + 0xd) & 0x1f)));
  lVar1 = lVar3 + 0x60;
  *(long *)(lVar13 + 8) = lVar1;
  puVar14 = *(undefined8 **)(lVar3 + 0x68);
  *(undefined8 **)(lVar13 + 0x10) = puVar14;
  plVar11 = (long *)0x0;
  if (lVar13 != 0) {
    plVar11 = (long *)(lVar13 + 8);
  }
  *puVar14 = plVar11;
  *(long **)(lVar3 + 0x68) = plVar11;
  func_0x000109e244dc(&lStack_78,plVar5);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,1);
  FUN_109eac090();
  puVar7 = puVar15;
  FUN_109e622c4(puVar15,2);
  FUN_109eac090();
  uVar8 = 0x82;
  FUN_109eac310(0x82,puVar14,puVar7);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,2);
  FUN_109eac090();
  puVar7 = puVar15;
  FUN_109e622c4(puVar15,1);
  FUN_109eac090();
  uVar9 = 0x82;
  FUN_109eac310(0x82,puVar14,puVar7);
  uVar10 = 0x7c;
  FUN_109eac310(0x7c,uVar8,uVar9);
  lVar13 = lStack_78;
  func_0x000109eabfa8(lStack_78,uVar10,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_78 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar13 + 8) = lVar1;
  puVar14 = *(undefined8 **)(lVar3 + 0x68);
  plVar11 = (long *)0x0;
  if (lVar13 != 0) {
    plVar11 = (long *)(lVar13 + 8);
  }
  *(undefined8 **)(lVar13 + 0x10) = puVar14;
  *puVar14 = plVar11;
  *(long **)(lVar3 + 0x68) = plVar11;
  func_0x000109e244dc(&lStack_78,plVar6);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,1);
  FUN_109eac090();
  puVar7 = puVar15;
  FUN_109e622c4(puVar15,2);
  FUN_109eac090();
  uVar8 = 0x82;
  FUN_109eac310(0x82,puVar14,puVar7);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,2);
  FUN_109eac090();
  puVar7 = puVar15;
  FUN_109e622c4(puVar15,1);
  FUN_109eac090();
  uVar9 = 0x82;
  FUN_109eac310(0x82,puVar14,puVar7);
  uVar10 = 0x7c;
  FUN_109eac310(0x7c,uVar8,uVar9);
  lVar13 = lStack_78;
  func_0x000109eabfa8(lStack_78,uVar10,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_78 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lVar13 + 8) = lVar1;
  puVar14 = *(undefined8 **)(lVar3 + 0x68);
  plVar11 = (long *)0x0;
  if (lVar13 != 0) {
    plVar11 = (long *)(lVar13 + 8);
  }
  *(undefined8 **)(lVar13 + 0x10) = puVar14;
  *puVar14 = plVar11;
  *(long **)(lVar3 + 0x68) = plVar11;
  plVar11 = &lStack_70;
  FUN_109eabf1c(plVar11,param_2,&UNK_10f60c2be);
  plVar12 = plVar11;
  FUN_109e622c4();
  func_0x000109e24460(&lStack_78,plVar4);
  func_0x000109eabfa8(plVar12,lStack_78,1);
  plVar12[1] = lVar1;
  puVar14 = *(undefined8 **)(lVar3 + 0x68);
  plVar2 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 1;
  }
  plVar12[2] = (long)puVar14;
  *puVar14 = plVar2;
  *(long **)(lVar3 + 0x68) = plVar2;
  plVar12 = plVar11;
  FUN_109e622c4(plVar11,1);
  func_0x000109e24460(&lStack_78,plVar5);
  uVar8 = 2;
  FUN_109eac2ac(2,lStack_78);
  func_0x000109eabfa8(plVar12,uVar8,1);
  plVar12[1] = lVar1;
  puVar14 = *(undefined8 **)(lVar3 + 0x68);
  plVar2 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 1;
  }
  plVar12[2] = (long)puVar14;
  *puVar14 = plVar2;
  *(long **)(lVar3 + 0x68) = plVar2;
  plVar12 = plVar11;
  FUN_109e622c4(plVar11,2);
  func_0x000109e24460(&lStack_78,plVar6);
  func_0x000109eabfa8(plVar12,lStack_78,1);
  plVar12[1] = lVar1;
  puVar14 = *(undefined8 **)(lVar3 + 0x68);
  plVar2 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 1;
  }
  plVar12[2] = (long)puVar14;
  *puVar14 = plVar2;
  *(long **)(lVar3 + 0x68) = plVar2;
  plVar12 = plVar11;
  FUN_109e622c4(plVar11,0);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,0);
  FUN_109eac090();
  puVar7 = puVar15;
  FUN_109e622c4(puVar15,2);
  FUN_109eac090();
  uVar8 = 0x82;
  FUN_109eac310(0x82,puVar14,puVar7);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,2);
  FUN_109eac090();
  puVar7 = puVar15;
  FUN_109e622c4(puVar15,0);
  FUN_109eac090();
  uVar9 = 0x82;
  FUN_109eac310(0x82,puVar14,puVar7);
  uVar10 = 0x7c;
  FUN_109eac310(0x7c,uVar8,uVar9);
  uVar8 = 2;
  FUN_109eac2ac(2,uVar10);
  func_0x000109eabfa8(plVar12,uVar8,2);
  plVar12[1] = lVar1;
  puVar14 = *(undefined8 **)(lVar3 + 0x68);
  plVar2 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 1;
  }
  plVar12[2] = (long)puVar14;
  *puVar14 = plVar2;
  *(long **)(lVar3 + 0x68) = plVar2;
  plVar12 = plVar11;
  FUN_109e622c4(plVar11,1);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,0);
  FUN_109eac090();
  puVar7 = puVar15;
  FUN_109e622c4(puVar15,2);
  FUN_109eac090();
  uVar8 = 0x82;
  FUN_109eac310(0x82,puVar14,puVar7);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,2);
  FUN_109eac090();
  puVar7 = puVar15;
  FUN_109e622c4(puVar15,0);
  FUN_109eac090();
  uVar9 = 0x82;
  FUN_109eac310(0x82,puVar14,puVar7);
  uVar10 = 0x7c;
  FUN_109eac310(0x7c,uVar8,uVar9);
  func_0x000109eabfa8(plVar12,uVar10,2);
  plVar12[1] = lVar1;
  puVar14 = *(undefined8 **)(lVar3 + 0x68);
  plVar2 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 1;
  }
  plVar12[2] = (long)puVar14;
  *puVar14 = plVar2;
  *(long **)(lVar3 + 0x68) = plVar2;
  plVar12 = plVar11;
  FUN_109e622c4(plVar11,2);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,0);
  FUN_109eac090();
  puVar7 = puVar15;
  FUN_109e622c4(puVar15,2);
  FUN_109eac090();
  uVar8 = 0x82;
  FUN_109eac310(0x82,puVar14,puVar7);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,2);
  FUN_109eac090();
  puVar7 = puVar15;
  FUN_109e622c4(puVar15,0);
  FUN_109eac090();
  uVar9 = 0x82;
  FUN_109eac310(0x82,puVar14,puVar7);
  uVar10 = 0x7c;
  FUN_109eac310(0x7c,uVar8,uVar9);
  uVar8 = 2;
  FUN_109eac2ac(2,uVar10);
  func_0x000109eabfa8(plVar12,uVar8,2);
  plVar12[1] = lVar1;
  puVar14 = *(undefined8 **)(lVar3 + 0x68);
  plVar2 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 1;
  }
  plVar12[2] = (long)puVar14;
  *puVar14 = plVar2;
  *(long **)(lVar3 + 0x68) = plVar2;
  plVar12 = plVar11;
  FUN_109e622c4(plVar11,0);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,0);
  FUN_109eac090();
  puVar7 = puVar15;
  FUN_109e622c4(puVar15,1);
  FUN_109eac090();
  uVar8 = 0x82;
  FUN_109eac310(0x82,puVar14,puVar7);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,1);
  FUN_109eac090();
  puVar7 = puVar15;
  FUN_109e622c4(puVar15,0);
  FUN_109eac090();
  uVar9 = 0x82;
  FUN_109eac310(0x82,puVar14,puVar7);
  uVar10 = 0x7c;
  FUN_109eac310(0x7c,uVar8,uVar9);
  func_0x000109eabfa8(plVar12,uVar10,4);
  plVar12[1] = lVar1;
  puVar14 = *(undefined8 **)(lVar3 + 0x68);
  plVar2 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 1;
  }
  plVar12[2] = (long)puVar14;
  *puVar14 = plVar2;
  *(long **)(lVar3 + 0x68) = plVar2;
  plVar12 = plVar11;
  FUN_109e622c4(plVar11,1);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,0);
  FUN_109eac090();
  puVar7 = puVar15;
  FUN_109e622c4(puVar15,1);
  FUN_109eac090();
  uVar8 = 0x82;
  FUN_109eac310(0x82,puVar14,puVar7);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,1);
  FUN_109eac090();
  puVar7 = puVar15;
  FUN_109e622c4(puVar15,0);
  FUN_109eac090();
  uVar9 = 0x82;
  FUN_109eac310(0x82,puVar14,puVar7);
  uVar10 = 0x7c;
  FUN_109eac310(0x7c,uVar8,uVar9);
  uVar8 = 2;
  FUN_109eac2ac(2,uVar10);
  func_0x000109eabfa8(plVar12,uVar8,4);
  plVar12[1] = lVar1;
  puVar14 = *(undefined8 **)(lVar3 + 0x68);
  plVar2 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 1;
  }
  plVar12[2] = (long)puVar14;
  *puVar14 = plVar2;
  *(long **)(lVar3 + 0x68) = plVar2;
  plVar12 = plVar11;
  FUN_109e622c4(plVar11,2);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,0);
  FUN_109eac090();
  puVar7 = puVar15;
  FUN_109e622c4(puVar15,1);
  FUN_109eac090();
  uVar8 = 0x82;
  FUN_109eac310(0x82,puVar14,puVar7);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,1);
  FUN_109eac090();
  puVar7 = puVar15;
  FUN_109e622c4(puVar15,0);
  FUN_109eac090();
  uVar9 = 0x82;
  FUN_109eac310(0x82,puVar14,puVar7);
  uVar10 = 0x7c;
  FUN_109eac310(0x7c,uVar8,uVar9);
  func_0x000109eabfa8(plVar12,uVar10,4);
  plVar12[1] = lVar1;
  puVar14 = *(undefined8 **)(lVar3 + 0x68);
  plVar2 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 1;
  }
  plVar12[2] = (long)puVar14;
  *puVar14 = plVar2;
  *(long **)(lVar3 + 0x68) = plVar2;
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,0);
  FUN_109eac090();
  func_0x000109e24460(&lStack_78,plVar4);
  uVar8 = 0x82;
  FUN_109eac310(0x82,puVar14,lStack_78);
  puVar14 = puVar15;
  FUN_109e622c4(puVar15,0);
  FUN_109eac090();
  func_0x000109e24460(&lStack_78,plVar5);
  uVar9 = 0x82;
  FUN_109eac310(0x82,puVar14,lStack_78);
  uVar10 = 0x7c;
  FUN_109eac310(0x7c,uVar8,uVar9);
  FUN_109e622c4(puVar15,0);
  FUN_109eac090();
  func_0x000109e24460(&lStack_78,plVar6);
  uVar8 = 0x82;
  FUN_109eac310(0x82,puVar15,lStack_78);
  uVar9 = 0x7b;
  FUN_109eac310(0x7b,uVar10,uVar8);
  func_0x000109e24460(&lStack_78,plVar11);
  lVar13 = 0x85;
  FUN_109eac310(0x85,lStack_78,uVar9);
  FUN_109eac02c();
  *(long *)(lVar13 + 8) = lVar1;
  puVar15 = *(undefined8 **)(lVar3 + 0x68);
  plVar4 = (long *)0x0;
  if (lVar13 != 0) {
    plVar4 = (long *)(lVar13 + 8);
  }
  *(undefined8 **)(lVar13 + 0x10) = puVar15;
  *puVar15 = plVar4;
  *(long **)(lVar3 + 0x68) = plVar4;
  return lVar3;
}



/* Entry: 109e5923c; end: 109e594ab;  */

long FUN_109e5923c(undefined8 param_1)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  
  puVar5 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x11] = 0;
    puVar5[0x10] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
  }
  FUN_109eaba7c(puVar5,param_1,&DAT_10f2ef733,6);
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,&DAT_10e05d7a0,FUN_109e4edb0,1);
  *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) | 1;
  uVar2 = *(undefined1 *)(puVar5[4] + 0xd);
  func_0x000109e24460(&uStack_38,puVar5);
  puVar5 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0xb0);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[0x13] = 0;
    puVar5[0x12] = 0;
    puVar5[0x15] = 0;
    puVar5[0x14] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x11] = 0;
    puVar5[0x10] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
  }
  func_0x000109ea9b70(puVar5,0,uVar2);
  lVar4 = 0x8e;
  FUN_109eac310(0x8e,uStack_38,puVar5);
  FUN_109eac02c();
  puVar5 = *(undefined8 **)(lVar3 + 0x68);
  *(undefined8 **)(lVar4 + 0x10) = puVar5;
  *(long *)(lVar4 + 8) = lVar3 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
  }
  *puVar5 = plVar1;
  *(long **)(lVar3 + 0x68) = plVar1;
  return lVar3;
}



/* Entry: 109e594ac; end: 109e5974b;  */

long FUN_109e594ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  FUN_109eaba7c(puVar6,param_3,&DAT_10f638aa0,6);
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,1);
  puVar4 = puRam0000000113834720;
  *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) & 0xf8 | 3;
  FUN_109f658b0(puVar4,0x78);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xe] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 6;
  puVar4[4] = &UNK_10e05d730;
  *puVar4 = &PTR_DAT_110b63bd8;
  *(undefined4 *)(puVar4 + 5) = 6;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  *(undefined1 *)(puVar4 + 0xe) = 0;
  puVar5 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x30);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
  }
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined4 *)(puVar5 + 3) = 2;
  *puVar5 = &PTR_DAT_110b64048;
  puVar5[4] = puVar6[4];
  puVar5[5] = puVar6;
  func_0x000109eab694(puVar4,puVar5,param_2);
  uVar1 = *(ushort *)(param_3 + 6) & 0xf;
  if ((uVar1 < 8) && ((1 << (ulong)uVar1 & 0xb0U) != 0)) {
    puVar5 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[0x13] = 0;
      puVar5[0x12] = 0;
      puVar5[0x15] = 0;
      puVar5[0x14] = 0;
      puVar5[0xf] = 0;
      puVar5[0xe] = 0;
      puVar5[0x11] = 0;
      puVar5[0x10] = 0;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
      puVar5[0xd] = 0;
      puVar5[0xc] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
    }
    FUN_109ea98b0();
  }
  else {
    puVar6 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x90);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[0xf] = 0;
      puVar6[0xe] = 0;
      puVar6[0x11] = 0;
      puVar6[0x10] = 0;
      puVar6[0xb] = 0;
      puVar6[10] = 0;
      puVar6[0xd] = 0;
      puVar6[0xc] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
    }
    FUN_109eaba7c(puVar6,&DAT_10e05d928,&DAT_10f2c472a,6);
    puVar6[1] = lVar3 + 0x38;
    plVar2 = (long *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      plVar2 = puVar6 + 1;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0x40);
    puVar6[2] = puVar5;
    *puVar5 = plVar2;
    *(long **)(lVar3 + 0x40) = plVar2;
    puVar5 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x30);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 2;
    *puVar5 = &PTR_DAT_110b64048;
    puVar5[4] = puVar6[4];
    puVar5[5] = puVar6;
  }
  puVar4[0xc] = puVar5;
  FUN_109eac02c();
  puVar6 = *(undefined8 **)(lVar3 + 0x68);
  puVar4[2] = puVar6;
  puVar4[1] = lVar3 + 0x60;
  plVar2 = (long *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar2 = puVar4 + 1;
  }
  *puVar6 = plVar2;
  *(long **)(lVar3 + 0x68) = plVar2;
  return lVar3;
}



/* Entry: 109e5974c; end: 109e599c3;  */

bool FUN_109e5974c(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((((*(byte *)(param_1 + 0x34d) & 1) == 0) && ((*(byte *)(param_1 + 0x3e3) & 1) == 0)) &&
     ((*(byte *)(param_1 + 0x38f) & 1) == 0)) {
    uVar1 = *(uint *)(param_1 + 0xec);
    if (uVar1 == 0) {
      uVar1 = *(uint *)(param_1 + 0xe8);
    }
    uVar2 = 0x13f;
    if (*(char *)(param_1 + 0xe4) == '\0') {
      uVar2 = 399;
    }
    return uVar2 < uVar1;
  }
  return true;
}



/* Entry: 109e599c4; end: 109e59b5b;  */

long FUN_109e599c4(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x11] = 0;
    puVar5[0x10] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
  }
  FUN_109eaba7c(puVar5,param_1,&DAT_10f638aa0,6);
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,&DAT_10e05d928,0x109e4e9ac,1);
  puVar3 = puRam0000000113834720;
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  FUN_109f658b0(puVar3,0x78);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[0xe] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  *(undefined4 *)(puVar3 + 3) = 6;
  puVar3[4] = &UNK_10e05d730;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110b63bd8;
  *(undefined4 *)(puVar3 + 5) = 10;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  *(undefined1 *)(puVar3 + 0xe) = 0;
  puVar4 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x30);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 2;
  *puVar4 = &PTR_DAT_110b64048;
  puVar4[4] = puVar5[4];
  puVar4[5] = puVar5;
  func_0x000109eab694(puVar3,puVar4,&DAT_10e05d928);
  FUN_109eac02c();
  puVar5 = *(undefined8 **)(lVar2 + 0x68);
  puVar3[2] = puVar5;
  puVar3[1] = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar1 = puVar3 + 1;
  }
  *puVar5 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e59b5c; end: 109e5ad7b;  */

long FUN_109e59b5c(int param_1,undefined8 param_2,undefined *param_3,long param_4,long param_5,
                  uint param_6)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  
  puVar14 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar14 != (undefined8 *)0x0) {
    puVar14[0xf] = 0;
    puVar14[0xe] = 0;
    puVar14[0x11] = 0;
    puVar14[0x10] = 0;
    puVar14[0xb] = 0;
    puVar14[10] = 0;
    puVar14[0xd] = 0;
    puVar14[0xc] = 0;
    puVar14[7] = 0;
    puVar14[6] = 0;
    puVar14[9] = 0;
    puVar14[8] = 0;
    puVar14[3] = 0;
    puVar14[2] = 0;
    puVar14[5] = 0;
    puVar14[4] = 0;
    puVar14[1] = 0;
    *puVar14 = 0;
  }
  FUN_109eaba7c(puVar14,param_4,&DAT_10f638aa0,6);
  puVar10 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[0xf] = 0;
    puVar10[0xe] = 0;
    puVar10[0x11] = 0;
    puVar10[0x10] = 0;
    puVar10[0xb] = 0;
    puVar10[10] = 0;
    puVar10[0xd] = 0;
    puVar10[0xc] = 0;
    puVar10[7] = 0;
    puVar10[6] = 0;
    puVar10[9] = 0;
    puVar10[8] = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    puVar10[5] = 0;
    puVar10[4] = 0;
    puVar10[1] = 0;
    *puVar10 = 0;
  }
  FUN_109eaba7c(puVar10,param_5,&DAT_10f31a20f,6);
  puVar5 = param_3;
  if ((param_6 & 0x20) != 0) {
    puVar5 = &DAT_10e05d928;
  }
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,puVar5,param_2,2);
  puVar12 = puRam0000000113834720;
  lStack_70 = lVar3 + 0x50;
  puStack_68 = puRam0000000113834720;
  *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) | 1;
  FUN_109f658b0(puVar12,0x78);
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[0xe] = 0;
    puVar12[0xb] = 0;
    puVar12[10] = 0;
    puVar12[0xd] = 0;
    puVar12[0xc] = 0;
    puVar12[7] = 0;
    puVar12[6] = 0;
    puVar12[9] = 0;
    puVar12[8] = 0;
    puVar12[3] = 0;
    puVar12[2] = 0;
    puVar12[5] = 0;
    puVar12[4] = 0;
    puVar12[1] = 0;
    *puVar12 = 0;
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *(undefined4 *)(puVar12 + 3) = 6;
  puVar12[4] = &UNK_10e05d730;
  *puVar12 = &PTR_DAT_110b63bd8;
  *(int *)(puVar12 + 5) = param_1;
  puVar12[7] = 0;
  puVar12[6] = 0;
  puVar12[9] = 0;
  puVar12[8] = 0;
  puVar12[0xb] = 0;
  puVar12[10] = 0;
  *(char *)(puVar12 + 0xe) = (char)((param_6 & 0x20) >> 5);
  puVar15 = puVar12 + 0xc;
  *puVar15 = 0;
  puVar12[0xd] = 0;
  puVar11 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x30);
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[3] = 0;
    puVar11[2] = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    puVar11[1] = 0;
    *puVar11 = 0;
  }
  puVar11[1] = 0;
  puVar11[2] = 0;
  *(undefined4 *)(puVar11 + 3) = 2;
  *puVar11 = &PTR_DAT_110b64048;
  puVar11[5] = puVar14;
  puVar11[4] = puVar14[4];
  func_0x000109eab694(puVar12,puVar11,param_3);
  uVar2 = *(uint *)(param_4 + 4);
  uVar2 = *(int *)(&UNK_10e060f48 + ((ulong)(uVar2 >> 0x10) & 0xf) * 4) +
          ((uint)((uVar2 & 0xf00ff) != 0x3000f) & uVar2 >> 0x15);
  if (uVar2 == *(byte *)(param_5 + 0xd)) {
    puVar14 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x30);
    if (puVar14 != (undefined8 *)0x0) {
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      puVar14[1] = 0;
      *puVar14 = 0;
    }
    puVar14[1] = 0;
    puVar14[2] = 0;
    *(undefined4 *)(puVar14 + 3) = 2;
    *puVar14 = &PTR_DAT_110b64048;
    puVar14[5] = puVar10;
    puVar14[4] = puVar10[4];
  }
  else {
    func_0x000109e24460(&puStack_78,puVar10);
    puVar14 = puStack_78;
    FUN_109eac18c(puStack_78,uVar2);
  }
  puVar12[7] = puVar14;
  if ((param_6 & 1) != 0) {
    func_0x000109e24460(&puStack_78,puVar10);
    puVar14 = puStack_78;
    FUN_109eac090(puStack_78,*(byte *)(param_5 + 0xd) - 1,1);
    puVar12[8] = puVar14;
  }
  if ((*(byte *)(param_4 + 6) >> 4 & 1) == 0) {
LAB_109e59ee4:
    if (param_1 == 3) {
      uVar8 = uVar2 + ((*(int *)(param_4 + 4) << 10) >> 0x1f);
      if (uVar8 == 0) {
        puVar5 = &UNK_10e05d730;
      }
      else {
        puVar5 = (&PTR_PTR_110b66cc0)[uVar8];
      }
      puVar14 = puRam0000000113834720;
      FUN_109f658b0(puRam0000000113834720,0x90);
      if (puVar14 != (undefined8 *)0x0) {
        puVar14[0xf] = 0;
        puVar14[0xe] = 0;
        puVar14[0x11] = 0;
        puVar14[0x10] = 0;
        puVar14[0xb] = 0;
        puVar14[10] = 0;
        puVar14[0xd] = 0;
        puVar14[0xc] = 0;
        puVar14[7] = 0;
        puVar14[6] = 0;
        puVar14[9] = 0;
        puVar14[8] = 0;
        puVar14[3] = 0;
        puVar14[2] = 0;
        puVar14[5] = 0;
        puVar14[4] = 0;
        puVar14[1] = 0;
        *puVar14 = 0;
      }
      FUN_109eaba7c(puVar14,puVar5,&UNK_10f60c2ee,6);
      if (uVar8 == 0) {
        puVar5 = &UNK_10e05d730;
      }
      else {
        puVar5 = (&PTR_PTR_110b66cc0)[uVar8];
      }
      puVar10 = puRam0000000113834720;
      FUN_109f658b0(puRam0000000113834720,0x90);
      if (puVar10 != (undefined8 *)0x0) {
        puVar10[0xf] = 0;
        puVar10[0xe] = 0;
        puVar10[0x11] = 0;
        puVar10[0x10] = 0;
        puVar10[0xb] = 0;
        puVar10[10] = 0;
        puVar10[0xd] = 0;
        puVar10[0xc] = 0;
        puVar10[7] = 0;
        puVar10[6] = 0;
        puVar10[9] = 0;
        puVar10[8] = 0;
        puVar10[3] = 0;
        puVar10[2] = 0;
        puVar10[5] = 0;
        puVar10[4] = 0;
        puVar10[1] = 0;
        *puVar10 = 0;
      }
      FUN_109eaba7c(puVar10,puVar5,&UNK_10f60c2f3,6);
      puVar11 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        puVar11 = puVar14 + 1;
      }
      puVar13 = *(undefined8 **)(lVar3 + 0x40);
      puVar14[2] = puVar13;
      *puVar13 = puVar11;
      puVar10[1] = lVar3 + 0x38;
      plVar4 = (long *)0x0;
      if (puVar10 != (undefined8 *)0x0) {
        plVar4 = puVar10 + 1;
      }
      puVar10[2] = puVar11;
      puVar14[1] = plVar4;
      *(long **)(lVar3 + 0x40) = plVar4;
      puVar11 = puRam0000000113834720;
      FUN_109f658b0(puRam0000000113834720,0x30);
      if (puVar11 != (undefined8 *)0x0) {
        puVar11[3] = 0;
        puVar11[2] = 0;
        puVar11[5] = 0;
        puVar11[4] = 0;
        puVar11[1] = 0;
        *puVar11 = 0;
      }
      puVar11[1] = 0;
      puVar11[2] = 0;
      *(undefined4 *)(puVar11 + 3) = 2;
      *puVar11 = &PTR_DAT_110b64048;
      puVar11[5] = puVar14;
      puVar11[4] = puVar14[4];
      *puVar15 = puVar11;
      puVar14 = puRam0000000113834720;
      FUN_109f658b0(puRam0000000113834720,0x30);
      if (puVar14 != (undefined8 *)0x0) {
        puVar14[3] = 0;
        puVar14[2] = 0;
        puVar14[5] = 0;
        puVar14[4] = 0;
        puVar14[1] = 0;
        *puVar14 = 0;
      }
      puVar14[1] = 0;
      puVar14[2] = 0;
      *(undefined4 *)(puVar14 + 3) = 2;
      *puVar14 = &PTR_DAT_110b64048;
      puVar14[5] = puVar10;
      puVar14[4] = puVar10[4];
      puVar12[0xd] = puVar14;
    }
    else if (param_1 == 2) {
      puVar14 = puRam0000000113834720;
      FUN_109f658b0(puRam0000000113834720,0x90);
      if (puVar14 != (undefined8 *)0x0) {
        puVar14[0xf] = 0;
        puVar14[0xe] = 0;
        puVar14[0x11] = 0;
        puVar14[0x10] = 0;
        puVar14[0xb] = 0;
        puVar14[10] = 0;
        puVar14[0xd] = 0;
        puVar14[0xc] = 0;
        puVar14[7] = 0;
        puVar14[6] = 0;
        puVar14[9] = 0;
        puVar14[8] = 0;
        puVar14[3] = 0;
        puVar14[2] = 0;
        puVar14[5] = 0;
        puVar14[4] = 0;
        puVar14[1] = 0;
        *puVar14 = 0;
      }
      FUN_109eaba7c(puVar14,&DAT_10e05dc38,&DAT_10f2c472a,6);
      puVar14[1] = lVar3 + 0x38;
      plVar4 = (long *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        plVar4 = puVar14 + 1;
      }
      puVar10 = *(undefined8 **)(lVar3 + 0x40);
      puVar14[2] = puVar10;
      *puVar10 = plVar4;
      *(long **)(lVar3 + 0x40) = plVar4;
      puVar10 = puRam0000000113834720;
      FUN_109f658b0(puRam0000000113834720,0x30);
      if (puVar10 != (undefined8 *)0x0) {
        puVar10[3] = 0;
        puVar10[2] = 0;
        puVar10[5] = 0;
        puVar10[4] = 0;
        puVar10[1] = 0;
        *puVar10 = 0;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *(undefined4 *)(puVar10 + 3) = 2;
      *puVar10 = &PTR_DAT_110b64048;
      puVar10[5] = puVar14;
      puVar10[4] = puVar14[4];
      *puVar15 = puVar10;
    }
  }
  else {
    if (param_1 != 8) {
      func_0x000109e24460(&puStack_78,puVar10);
      uVar8 = uVar2;
      if (uVar2 < 3) {
        uVar8 = 2;
      }
      puVar14 = puStack_78;
      FUN_109eac090(puStack_78,uVar8,1);
      puVar12[9] = puVar14;
      goto LAB_109e59ee4;
    }
    puVar14 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x90);
    if (puVar14 != (undefined8 *)0x0) {
      puVar14[0xf] = 0;
      puVar14[0xe] = 0;
      puVar14[0x11] = 0;
      puVar14[0x10] = 0;
      puVar14[0xb] = 0;
      puVar14[10] = 0;
      puVar14[0xd] = 0;
      puVar14[0xc] = 0;
      puVar14[7] = 0;
      puVar14[6] = 0;
      puVar14[9] = 0;
      puVar14[8] = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      puVar14[1] = 0;
      *puVar14 = 0;
    }
    FUN_109eaba7c(puVar14,&DAT_10e05dc38,&UNK_10f60c2e9,6);
    puVar14[1] = lVar3 + 0x38;
    plVar4 = (long *)0x0;
    if (puVar14 != (undefined8 *)0x0) {
      plVar4 = puVar14 + 1;
    }
    puVar10 = *(undefined8 **)(lVar3 + 0x40);
    puVar14[2] = puVar10;
    *puVar10 = plVar4;
    *(long **)(lVar3 + 0x40) = plVar4;
    puVar10 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x30);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *(undefined4 *)(puVar10 + 3) = 2;
    *puVar10 = &PTR_DAT_110b64048;
    puVar10[5] = puVar14;
    puVar10[4] = puVar14[4];
    puVar12[9] = puVar10;
  }
  if ((param_6 & 10) != 0) {
    uVar2 = uVar2 + ((*(int *)(param_4 + 4) << 10) >> 0x1f);
    puVar14 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x90);
    if (puVar14 != (undefined8 *)0x0) {
      puVar14[0xf] = 0;
      puVar14[0xe] = 0;
      puVar14[0x11] = 0;
      puVar14[0x10] = 0;
      puVar14[0xb] = 0;
      puVar14[10] = 0;
      puVar14[0xd] = 0;
      puVar14[0xc] = 0;
      puVar14[7] = 0;
      puVar14[6] = 0;
      puVar14[9] = 0;
      puVar14[8] = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      puVar14[1] = 0;
      *puVar14 = 0;
    }
    if (uVar2 == 0) {
      puVar5 = &UNK_10e05d730;
    }
    else {
      puVar5 = (&PTR_DAT_110b66d68)[uVar2];
    }
    uVar9 = 6;
    if ((param_6 & 2) != 0) {
      uVar9 = 9;
    }
    FUN_109eaba7c(puVar14,puVar5,&DAT_10f63975c,uVar9);
    puVar14[1] = lVar3 + 0x38;
    plVar4 = (long *)0x0;
    if (puVar14 != (undefined8 *)0x0) {
      plVar4 = puVar14 + 1;
    }
    puVar10 = *(undefined8 **)(lVar3 + 0x40);
    puVar14[2] = puVar10;
    *puVar10 = plVar4;
    *(long **)(lVar3 + 0x40) = plVar4;
    puVar10 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x30);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *(undefined4 *)(puVar10 + 3) = 2;
    *puVar10 = &PTR_DAT_110b64048;
    puVar10[5] = puVar14;
    puVar10[4] = puVar14[4];
    puVar12[10] = puVar10;
  }
  if ((param_6 >> 4 & 1) != 0) {
    puVar14 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x90);
    if (puVar14 != (undefined8 *)0x0) {
      puVar14[0xf] = 0;
      puVar14[0xe] = 0;
      puVar14[0x11] = 0;
      puVar14[0x10] = 0;
      puVar14[0xb] = 0;
      puVar14[10] = 0;
      puVar14[0xd] = 0;
      puVar14[0xc] = 0;
      puVar14[7] = 0;
      puVar14[6] = 0;
      puVar14[9] = 0;
      puVar14[8] = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      puVar14[1] = 0;
      *puVar14 = 0;
    }
    puVar5 = &DAT_10e05d960;
    FUN_109ec69f4(&DAT_10e05d960,4,0);
    FUN_109eaba7c(puVar14,puVar5,&DAT_10f48f1f8,9);
    puVar14[1] = lVar3 + 0x38;
    plVar4 = (long *)0x0;
    if (puVar14 != (undefined8 *)0x0) {
      plVar4 = puVar14 + 1;
    }
    puVar10 = *(undefined8 **)(lVar3 + 0x40);
    puVar14[2] = puVar10;
    *puVar10 = plVar4;
    *(long **)(lVar3 + 0x40) = plVar4;
    puVar10 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x30);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *(undefined4 *)(puVar10 + 3) = 2;
    *puVar10 = &PTR_DAT_110b64048;
    puVar10[5] = puVar14;
    puVar10[4] = puVar14[4];
    puVar12[10] = puVar10;
  }
  if ((param_6 >> 6 & 1) != 0) {
    puVar14 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x90);
    if (puVar14 != (undefined8 *)0x0) {
      puVar14[0xf] = 0;
      puVar14[0xe] = 0;
      puVar14[0x11] = 0;
      puVar14[0x10] = 0;
      puVar14[0xb] = 0;
      puVar14[10] = 0;
      puVar14[0xd] = 0;
      puVar14[0xc] = 0;
      puVar14[7] = 0;
      puVar14[6] = 0;
      puVar14[9] = 0;
      puVar14[8] = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      puVar14[1] = 0;
      *puVar14 = 0;
    }
    FUN_109eaba7c(puVar14,&DAT_10e05dc38,&UNK_10f60c2f8,6);
    puVar14[1] = lVar3 + 0x38;
    plVar4 = (long *)0x0;
    if (puVar14 != (undefined8 *)0x0) {
      plVar4 = puVar14 + 1;
    }
    puVar10 = *(undefined8 **)(lVar3 + 0x40);
    puVar14[2] = puVar10;
    *puVar10 = plVar4;
    *(long **)(lVar3 + 0x40) = plVar4;
    puVar10 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x30);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *(undefined4 *)(puVar10 + 3) = 2;
    *puVar10 = &PTR_DAT_110b64048;
    puVar10[5] = puVar14;
    puVar10[4] = puVar14[4];
    puVar12[0xb] = puVar10;
  }
  if ((param_6 & 0x20) == 0) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    puVar14 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x90);
    if (puVar14 != (undefined8 *)0x0) {
      puVar14[0xf] = 0;
      puVar14[0xe] = 0;
      puVar14[0x11] = 0;
      puVar14[0x10] = 0;
      puVar14[0xb] = 0;
      puVar14[10] = 0;
      puVar14[0xd] = 0;
      puVar14[0xc] = 0;
      puVar14[7] = 0;
      puVar14[6] = 0;
      puVar14[9] = 0;
      puVar14[8] = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      puVar14[1] = 0;
      *puVar14 = 0;
    }
    FUN_109eaba7c(puVar14,param_3,&UNK_10f60a9f1,7);
    puVar14[1] = lVar3 + 0x38;
    puVar10 = *(undefined8 **)(lVar3 + 0x40);
    plVar4 = (long *)0x0;
    if (puVar14 != (undefined8 *)0x0) {
      plVar4 = puVar14 + 1;
    }
    puVar14[2] = puVar10;
    *puVar10 = plVar4;
    *(long **)(lVar3 + 0x40) = plVar4;
  }
  puVar10 = puRam0000000113834720;
  if (param_1 == 1) {
    FUN_109f658b0(puRam0000000113834720,0x90);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[0xf] = 0;
      puVar10[0xe] = 0;
      puVar10[0x11] = 0;
      puVar10[0x10] = 0;
      puVar10[0xb] = 0;
      puVar10[10] = 0;
      puVar10[0xd] = 0;
      puVar10[0xc] = 0;
      puVar10[7] = 0;
      puVar10[6] = 0;
      puVar10[9] = 0;
      puVar10[8] = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
    }
    puVar5 = &DAT_10e05dc38;
    puVar6 = &UNK_10f466726;
    uVar7 = 6;
LAB_109e5a4ec:
    FUN_109eaba7c(puVar10,puVar5,puVar6,uVar7);
    puVar10[1] = lVar3 + 0x38;
    plVar4 = (long *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      plVar4 = puVar10 + 1;
    }
    puVar11 = *(undefined8 **)(lVar3 + 0x40);
    puVar10[2] = puVar11;
    *puVar11 = plVar4;
    *(long **)(lVar3 + 0x40) = plVar4;
    puVar11 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x30);
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
    }
    puVar11[1] = 0;
    puVar11[2] = 0;
    *(undefined4 *)(puVar11 + 3) = 2;
    *puVar11 = &PTR_DAT_110b64048;
    puVar11[5] = puVar10;
    puVar11[4] = puVar10[4];
  }
  else {
    if (param_1 != 8) goto LAB_109e5a550;
    if ((param_6 >> 2 & 1) != 0) {
      FUN_109f658b0(puRam0000000113834720,0x90);
      if (puVar10 != (undefined8 *)0x0) {
        puVar10[0xf] = 0;
        puVar10[0xe] = 0;
        puVar10[0x11] = 0;
        puVar10[0x10] = 0;
        puVar10[0xb] = 0;
        puVar10[10] = 0;
        puVar10[0xd] = 0;
        puVar10[0xc] = 0;
        puVar10[7] = 0;
        puVar10[6] = 0;
        puVar10[9] = 0;
        puVar10[8] = 0;
        puVar10[3] = 0;
        puVar10[2] = 0;
        puVar10[5] = 0;
        puVar10[4] = 0;
        puVar10[1] = 0;
        *puVar10 = 0;
      }
      puVar5 = &DAT_10e05d928;
      puVar6 = &DAT_10f375e38;
      uVar7 = 9;
      goto LAB_109e5a4ec;
    }
    puVar11 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[0x13] = 0;
      puVar11[0x12] = 0;
      puVar11[0x15] = 0;
      puVar11[0x14] = 0;
      puVar11[0xf] = 0;
      puVar11[0xe] = 0;
      puVar11[0x11] = 0;
      puVar11[0x10] = 0;
      puVar11[0xb] = 0;
      puVar11[10] = 0;
      puVar11[0xd] = 0;
      puVar11[0xc] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
    }
    func_0x000109ea9960();
  }
  *puVar15 = puVar11;
LAB_109e5a550:
  if ((param_6 & 0x20) != 0) {
    plVar4 = &lStack_70;
    FUN_109eabf1c(plVar4,puVar12[4],"result");
    func_0x000109e244dc(&puStack_78,plVar4);
    puVar10 = puStack_78;
    func_0x000109eabfa8(puStack_78,puVar12,~(-1 << (ulong)(*(byte *)(puStack_78[4] + 0xd) & 0x1f)));
    puVar10[1] = lVar3 + 0x60;
    puVar12 = *(undefined8 **)(lVar3 + 0x68);
    puVar10[2] = puVar12;
    plVar1 = (long *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      plVar1 = puVar10 + 1;
    }
    *puVar12 = plVar1;
    *(long **)(lVar3 + 0x68) = plVar1;
    func_0x000109e244dc(&puStack_78,puVar14);
    puVar14 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x38);
    if (puVar14 != (undefined8 *)0x0) {
      puVar14[6] = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      puVar14[1] = 0;
      *puVar14 = 0;
    }
    func_0x000109eab518(puVar14,plVar4,&UNK_10f60a9f1);
    func_0x000109eabfa8(puStack_78,puVar14,~(-1 << (ulong)(*(byte *)(puStack_78[4] + 0xd) & 0x1f)));
    puStack_78[1] = lVar3 + 0x60;
    plVar1 = (long *)0x0;
    if (puStack_78 != (undefined8 *)0x0) {
      plVar1 = puStack_78 + 1;
    }
    puVar14 = *(undefined8 **)(lVar3 + 0x68);
    puStack_78[2] = puVar14;
    *puVar14 = plVar1;
    *(long **)(lVar3 + 0x68) = plVar1;
    puVar12 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x38);
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[6] = 0;
      puVar12[3] = 0;
      puVar12[2] = 0;
      puVar12[5] = 0;
      puVar12[4] = 0;
      puVar12[1] = 0;
      *puVar12 = 0;
    }
    func_0x000109eab518(puVar12,plVar4,"code");
  }
  FUN_109eac02c();
  puVar12[1] = lVar3 + 0x60;
  puVar14 = *(undefined8 **)(lVar3 + 0x68);
  puVar12[2] = puVar14;
  plVar4 = (long *)0x0;
  if (puVar12 != (undefined8 *)0x0) {
    plVar4 = puVar12 + 1;
  }
  *puVar14 = plVar4;
  *(long **)(lVar3 + 0x68) = plVar4;
  return lVar3;
}



/* Entry: 109e5ad7c; end: 109e5b04f;  */

byte FUN_109e5ad7c(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xec);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(param_1 + 0xe8);
  }
  uVar3 = 299;
  if (*(char *)(param_1 + 0xe4) == '\0') {
    uVar3 = 0x81;
  }
  if (uVar3 < uVar2) {
    if (*(int *)(param_1 + 0xf8) == 4) {
      bVar1 = 1;
      goto LAB_109e5adc4;
    }
    if (*(int *)(param_1 + 0xf8) == 5) {
      bVar1 = *(byte *)(param_1 + 0x3f1);
      goto LAB_109e5adc4;
    }
  }
  bVar1 = 0;
LAB_109e5adc4:
  return bVar1 & 1;
}



/* Entry: 109e5b050; end: 109e5b6cb;  */

long FUN_109e5b050(undefined8 param_1,undefined *param_2,long param_3,undefined8 param_4,
                  long param_5,int param_6)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  
  puVar10 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[0xf] = 0;
    puVar10[0xe] = 0;
    puVar10[0x11] = 0;
    puVar10[0x10] = 0;
    puVar10[0xb] = 0;
    puVar10[10] = 0;
    puVar10[0xd] = 0;
    puVar10[0xc] = 0;
    puVar10[7] = 0;
    puVar10[6] = 0;
    puVar10[9] = 0;
    puVar10[8] = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    puVar10[5] = 0;
    puVar10[4] = 0;
    puVar10[1] = 0;
    *puVar10 = 0;
  }
  FUN_109eaba7c(puVar10,param_3,&DAT_10f638aa0,6);
  puVar9 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
  }
  FUN_109eaba7c(puVar9,param_4,&DAT_10f31a20f,6);
  puVar1 = &DAT_10e05d928;
  if (param_6 == 0) {
    puVar1 = param_2;
  }
  lVar4 = 0x113834718;
  FUN_109e4db30(0x113834718,puVar1,param_1,2);
  puVar5 = puRam0000000113834720;
  lStack_70 = lVar4 + 0x50;
  puStack_68 = puRam0000000113834720;
  *(byte *)(lVar4 + 0x48) = *(byte *)(lVar4 + 0x48) | 1;
  FUN_109f658b0(puVar5,0x78);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[0xe] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
  }
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined4 *)(puVar5 + 3) = 6;
  puVar5[4] = &UNK_10e05d730;
  *puVar5 = &PTR_DAT_110b63bd8;
  *(undefined4 *)(puVar5 + 5) = 4;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  *(char *)(puVar5 + 0xe) = (char)param_6;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar6 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x30);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  puVar6[1] = 0;
  puVar6[2] = 0;
  *(undefined4 *)(puVar6 + 3) = 2;
  *puVar6 = &PTR_DAT_110b64048;
  puVar6[5] = puVar9;
  puVar6[4] = puVar9[4];
  puVar5[7] = puVar6;
  puVar9 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x30);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *(undefined4 *)(puVar9 + 3) = 2;
  *puVar9 = &PTR_DAT_110b64048;
  puVar9[5] = puVar10;
  puVar9[4] = puVar10[4];
  func_0x000109eab694(puVar5,puVar9,param_2);
  if ((*(uint *)(param_3 + 4) & 0xf0000) == 0x70000) {
    puVar10 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x90);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[0xf] = 0;
      puVar10[0xe] = 0;
      puVar10[0x11] = 0;
      puVar10[0x10] = 0;
      puVar10[0xb] = 0;
      puVar10[10] = 0;
      puVar10[0xd] = 0;
      puVar10[0xc] = 0;
      puVar10[7] = 0;
      puVar10[6] = 0;
      puVar10[9] = 0;
      puVar10[8] = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
    }
    FUN_109eaba7c(puVar10,&DAT_10e05d928,&UNK_10f49180d,6);
    puVar10[1] = lVar4 + 0x38;
    plVar7 = (long *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      plVar7 = puVar10 + 1;
    }
    puVar9 = *(undefined8 **)(lVar4 + 0x40);
    puVar10[2] = puVar9;
    *puVar9 = plVar7;
    *(long **)(lVar4 + 0x40) = plVar7;
    puVar9 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x30);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined4 *)(puVar9 + 3) = 2;
    *puVar9 = &PTR_DAT_110b64048;
    puVar9[5] = puVar10;
    puVar9[4] = puVar10[4];
    puVar5[0xc] = puVar9;
    *(undefined4 *)(puVar5 + 5) = 5;
    puVar10 = puRam0000000113834720;
  }
  else {
    uVar3 = *(uint *)(param_3 + 4) >> 0x10 & 0xf;
    if ((uVar3 < 8) && ((1 << (ulong)uVar3 & 0xb0U) != 0)) {
      puVar9 = puRam0000000113834720;
      FUN_109f658b0(puRam0000000113834720,0xb0);
      if (puVar9 != (undefined8 *)0x0) {
        puVar9[0x13] = 0;
        puVar9[0x12] = 0;
        puVar9[0x15] = 0;
        puVar9[0x14] = 0;
        puVar9[0xf] = 0;
        puVar9[0xe] = 0;
        puVar9[0x11] = 0;
        puVar9[0x10] = 0;
        puVar9[0xb] = 0;
        puVar9[10] = 0;
        puVar9[0xd] = 0;
        puVar9[0xc] = 0;
        puVar9[7] = 0;
        puVar9[6] = 0;
        puVar9[9] = 0;
        puVar9[8] = 0;
        puVar9[3] = 0;
        puVar9[2] = 0;
        puVar9[5] = 0;
        puVar9[4] = 0;
        puVar9[1] = 0;
        *puVar9 = 0;
      }
      FUN_109ea98b0();
    }
    else {
      puVar10 = puRam0000000113834720;
      FUN_109f658b0(puRam0000000113834720,0x90);
      if (puVar10 != (undefined8 *)0x0) {
        puVar10[0xf] = 0;
        puVar10[0xe] = 0;
        puVar10[0x11] = 0;
        puVar10[0x10] = 0;
        puVar10[0xb] = 0;
        puVar10[10] = 0;
        puVar10[0xd] = 0;
        puVar10[0xc] = 0;
        puVar10[7] = 0;
        puVar10[6] = 0;
        puVar10[9] = 0;
        puVar10[8] = 0;
        puVar10[3] = 0;
        puVar10[2] = 0;
        puVar10[5] = 0;
        puVar10[4] = 0;
        puVar10[1] = 0;
        *puVar10 = 0;
      }
      FUN_109eaba7c(puVar10,&DAT_10e05d928,&DAT_10f2c472a,6);
      puVar10[1] = lVar4 + 0x38;
      plVar7 = (long *)0x0;
      if (puVar10 != (undefined8 *)0x0) {
        plVar7 = puVar10 + 1;
      }
      puVar9 = *(undefined8 **)(lVar4 + 0x40);
      puVar10[2] = puVar9;
      *puVar9 = plVar7;
      *(long **)(lVar4 + 0x40) = plVar7;
      puVar9 = puRam0000000113834720;
      FUN_109f658b0(puRam0000000113834720,0x30);
      if (puVar9 != (undefined8 *)0x0) {
        puVar9[3] = 0;
        puVar9[2] = 0;
        puVar9[5] = 0;
        puVar9[4] = 0;
        puVar9[1] = 0;
        *puVar9 = 0;
      }
      puVar9[1] = 0;
      puVar9[2] = 0;
      *(undefined4 *)(puVar9 + 3) = 2;
      *puVar9 = &PTR_DAT_110b64048;
      puVar9[5] = puVar10;
      puVar9[4] = puVar10[4];
    }
    puVar5[0xc] = puVar9;
    puVar10 = puRam0000000113834720;
  }
  if (param_5 != 0) {
    puRam0000000113834720 = puVar10;
    FUN_109f658b0(puVar10,0x90);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[0xf] = 0;
      puVar10[0xe] = 0;
      puVar10[0x11] = 0;
      puVar10[0x10] = 0;
      puVar10[0xb] = 0;
      puVar10[10] = 0;
      puVar10[0xd] = 0;
      puVar10[0xc] = 0;
      puVar10[7] = 0;
      puVar10[6] = 0;
      puVar10[9] = 0;
      puVar10[8] = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
    }
    FUN_109eaba7c(puVar10,param_5,&DAT_10f63975c,9);
    puVar10[1] = lVar4 + 0x38;
    plVar7 = (long *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      plVar7 = puVar10 + 1;
    }
    puVar9 = *(undefined8 **)(lVar4 + 0x40);
    puVar10[2] = puVar9;
    *puVar9 = plVar7;
    *(long **)(lVar4 + 0x40) = plVar7;
    puVar9 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x30);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined4 *)(puVar9 + 3) = 2;
    *puVar9 = &PTR_DAT_110b64048;
    puVar9[5] = puVar10;
    puVar9[4] = puVar10[4];
    puVar5[10] = puVar9;
    puVar10 = puRam0000000113834720;
  }
  puRam0000000113834720 = puVar10;
  if (param_6 != 0) {
    FUN_109f658b0(puVar10,0x90);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[0xf] = 0;
      puVar10[0xe] = 0;
      puVar10[0x11] = 0;
      puVar10[0x10] = 0;
      puVar10[0xb] = 0;
      puVar10[10] = 0;
      puVar10[0xd] = 0;
      puVar10[0xc] = 0;
      puVar10[7] = 0;
      puVar10[6] = 0;
      puVar10[9] = 0;
      puVar10[8] = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
    }
    FUN_109eaba7c(puVar10,param_2,&UNK_10f60a9f1,7);
    puVar10[1] = lVar4 + 0x38;
    plVar7 = (long *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      plVar7 = puVar10 + 1;
    }
    puVar9 = *(undefined8 **)(lVar4 + 0x40);
    puVar10[2] = puVar9;
    *puVar9 = plVar7;
    *(long **)(lVar4 + 0x40) = plVar7;
    plVar7 = &lStack_70;
    FUN_109eabf1c(plVar7,puVar5[4],"result");
    func_0x000109e244dc(&lStack_78,plVar7);
    lVar8 = lStack_78;
    func_0x000109eabfa8(lStack_78,puVar5,
                        ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_78 + 0x20) + 0xd) & 0x1f)));
    *(long *)(lVar8 + 8) = lVar4 + 0x60;
    puVar9 = *(undefined8 **)(lVar4 + 0x68);
    *(undefined8 **)(lVar8 + 0x10) = puVar9;
    plVar2 = (long *)0x0;
    if (lVar8 != 0) {
      plVar2 = (long *)(lVar8 + 8);
    }
    *puVar9 = plVar2;
    *(long **)(lVar4 + 0x68) = plVar2;
    func_0x000109e244dc(&lStack_78,puVar10);
    puVar10 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x38);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[6] = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
    }
    func_0x000109eab518(puVar10,plVar7,&UNK_10f60a9f1);
    func_0x000109eabfa8(lStack_78,puVar10,
                        ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_78 + 0x20) + 0xd) & 0x1f)));
    *(long *)(lStack_78 + 8) = lVar4 + 0x60;
    plVar7 = (long *)0x0;
    if (lStack_78 != 0) {
      plVar7 = (long *)(lStack_78 + 8);
    }
    puVar10 = *(undefined8 **)(lVar4 + 0x68);
    *(undefined8 **)(lStack_78 + 0x10) = puVar10;
    *puVar10 = plVar7;
    *(long **)(lVar4 + 0x68) = plVar7;
    puVar5 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0x38);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[6] = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
    }
    func_0x000109eab518();
  }
  FUN_109eac02c();
  puVar5[1] = lVar4 + 0x60;
  puVar10 = *(undefined8 **)(lVar4 + 0x68);
  plVar7 = (long *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar7 = puVar5 + 1;
  }
  puVar5[2] = puVar10;
  *puVar10 = plVar7;
  *(long **)(lVar4 + 0x68) = plVar7;
  return lVar4;
}



/* Entry: 109e5b6cc; end: 109e5b80f;  */

long FUN_109e5b6cc(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  puVar4 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  FUN_109eaba7c(puVar4,param_1,&DAT_10f34fa9f,9);
  lVar1 = 0x113834718;
  FUN_109e4db30(0x113834718,&DAT_10e05d768,FUN_109e5b810,1);
  puVar2 = puRam0000000113834720;
  *(byte *)(lVar1 + 0x48) = *(byte *)(lVar1 + 0x48) | 1;
  FUN_109f658b0(puVar2,0x28);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  puVar3 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x30);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 2;
  *puVar3 = &PTR_DAT_110b64048;
  puVar3[4] = puVar4[4];
  puVar3[5] = puVar4;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 0x12;
  *puVar2 = &PTR_DAT_110b64820;
  plVar5 = puVar2 + 1;
  *plVar5 = lVar1 + 0x60;
  puVar2[4] = puVar3;
  puVar4 = *(undefined8 **)(lVar1 + 0x68);
  puVar2[2] = puVar4;
  *puVar4 = plVar5;
  *(long **)(lVar1 + 0x68) = plVar5;
  return lVar1;
}



/* Entry: 109e5b810; end: 109e5b84f;  */

bool FUN_109e5b810(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xec);
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_1 + 0xe8);
  }
  if ((uVar1 < 400 || *(char *)(param_1 + 0xe4) != '\0') && (*(char *)(param_1 + 0x315) != '\x01'))
  {
    return false;
  }
  return *(int *)(param_1 + 0xf8) == 3;
}



/* Entry: 109e5b850; end: 109e5b993;  */

long FUN_109e5b850(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  puVar4 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  FUN_109eaba7c(puVar4,param_1,&DAT_10f34fa9f,9);
  lVar1 = 0x113834718;
  FUN_109e4db30(0x113834718,&DAT_10e05d768,FUN_109e5b810,1);
  puVar2 = puRam0000000113834720;
  *(byte *)(lVar1 + 0x48) = *(byte *)(lVar1 + 0x48) | 1;
  FUN_109f658b0(puVar2,0x28);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  puVar3 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x30);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 2;
  *puVar3 = &PTR_DAT_110b64048;
  puVar3[4] = puVar4[4];
  puVar3[5] = puVar4;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 0x13;
  *puVar2 = &PTR_FUN_110b64878;
  plVar5 = puVar2 + 1;
  *plVar5 = lVar1 + 0x60;
  puVar2[4] = puVar3;
  puVar4 = *(undefined8 **)(lVar1 + 0x68);
  puVar2[2] = puVar4;
  *puVar4 = plVar5;
  *(long **)(lVar1 + 0x68) = plVar5;
  return lVar1;
}



/* Entry: 109e5b994; end: 109e5bbaf;  */

long FUN_109e5b994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  FUN_109eaba7c(puVar6,param_2,&DAT_10f638aa0,6);
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c(puVar2,param_3,&DAT_10f60a9f7,6);
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,&DAT_10e05dc70,param_1,2);
  puVar4 = puRam0000000113834720;
  *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) | 1;
  FUN_109f658b0(puVar4,0x78);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xe] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  *(undefined4 *)(puVar4 + 3) = 6;
  puVar4[4] = &UNK_10e05d730;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110b63bd8;
  *(undefined4 *)(puVar4 + 5) = 7;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  *(undefined1 *)(puVar4 + 0xe) = 0;
  puVar5 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x30);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
  }
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined4 *)(puVar5 + 3) = 2;
  *puVar5 = &PTR_DAT_110b64048;
  puVar5[4] = puVar2[4];
  puVar5[5] = puVar2;
  puVar4[7] = puVar5;
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x30);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 2;
  *puVar2 = &PTR_DAT_110b64048;
  puVar2[4] = puVar6[4];
  puVar2[5] = puVar6;
  func_0x000109eab694(puVar4,puVar2,&DAT_10e05dc70);
  FUN_109eac02c();
  puVar6 = *(undefined8 **)(lVar3 + 0x68);
  puVar4[2] = puVar6;
  puVar4[1] = lVar3 + 0x60;
  plVar1 = (long *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
  }
  *puVar6 = plVar1;
  *(long **)(lVar3 + 0x68) = plVar1;
  return lVar3;
}



/* Entry: 109e5bbb0; end: 109e5bc43;  */

byte FUN_109e5bbb0(long param_1)

{
  byte bVar1;
  
  if ((*(int *)(param_1 + 0xf8) == 4) ||
     ((*(int *)(param_1 + 0xf8) == 5 && (*(char *)(param_1 + 0x3f1) == '\x01')))) {
    if ((*(byte *)(param_1 + 0x355) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 0x3e5);
    }
    else {
      bVar1 = 1;
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 109e5bc44; end: 109e5bddb;  */

long FUN_109e5bc44(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x11] = 0;
    puVar5[0x10] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
  }
  FUN_109eaba7c(puVar5,param_1,&DAT_10f638aa0,6);
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,&DAT_10e05d928,FUN_109e5bddc,1);
  puVar3 = puRam0000000113834720;
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  FUN_109f658b0(puVar3,0x78);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[0xe] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  *(undefined4 *)(puVar3 + 3) = 6;
  puVar3[4] = &UNK_10e05d730;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110b63bd8;
  *(undefined4 *)(puVar3 + 5) = 9;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  *(undefined1 *)(puVar3 + 0xe) = 0;
  puVar4 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x30);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 2;
  *puVar4 = &PTR_DAT_110b64048;
  puVar4[4] = puVar5[4];
  puVar4[5] = puVar5;
  func_0x000109eab694(puVar3,puVar4,&DAT_10e05d928);
  FUN_109eac02c();
  puVar5 = *(undefined8 **)(lVar2 + 0x68);
  puVar3[2] = puVar5;
  puVar3[1] = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar1 = puVar3 + 1;
  }
  *puVar5 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e5bddc; end: 109e5be0b;  */

byte FUN_109e5bddc(long param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xec);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(param_1 + 0xe8);
  }
  if (uVar2 < 0x1ae || *(char *)(param_1 + 0xe4) != '\0') {
    bVar1 = *(byte *)(param_1 + 0x353);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 109e5be0c; end: 109e5c027;  */

long FUN_109e5be0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  FUN_109eaba7c(puVar6,param_2,&DAT_10f638aa0,6);
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c(puVar2,param_3,&DAT_10f31a20f,6);
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,&DAT_10e05d7a0,param_1,2);
  puVar4 = puRam0000000113834720;
  *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) | 1;
  FUN_109f658b0(puVar4,0x78);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xe] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  *(undefined4 *)(puVar4 + 3) = 6;
  puVar4[4] = &UNK_10e05d730;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110b63bd8;
  *(undefined4 *)(puVar4 + 5) = 0xb;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  *(undefined1 *)(puVar4 + 0xe) = 0;
  puVar5 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x30);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
  }
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined4 *)(puVar5 + 3) = 2;
  *puVar5 = &PTR_DAT_110b64048;
  puVar5[4] = puVar2[4];
  puVar5[5] = puVar2;
  puVar4[7] = puVar5;
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x30);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 2;
  *puVar2 = &PTR_DAT_110b64048;
  puVar2[4] = puVar6[4];
  puVar2[5] = puVar6;
  func_0x000109eab694(puVar4,puVar2,&DAT_10e05d7a0);
  FUN_109eac02c();
  puVar6 = *(undefined8 **)(lVar3 + 0x68);
  puVar4[2] = puVar6;
  puVar4[1] = lVar3 + 0x60;
  plVar1 = (long *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
  }
  *puVar6 = plVar1;
  *(long **)(lVar3 + 0x68) = plVar1;
  return lVar3;
}



/* Entry: 109e5c028; end: 109e5c87f;  */

byte FUN_109e5c028(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xec);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(param_1 + 0xe8);
  }
  uVar3 = 0x135;
  if (*(char *)(param_1 + 0xe4) == '\0') {
    uVar3 = 0x95;
  }
  if ((uVar3 < uVar2) || (*(char *)(param_1 + 0x351) == '\x01')) {
    bVar1 = *(byte *)(param_1 + 0x3d5);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 109e5c880; end: 109e5c8b3;  */

byte FUN_109e5c880(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1;
  func_0x000109e5add4();
  if ((int)lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x347);
  }
  return bVar2 & 1;
}



/* Entry: 109e5c8b4; end: 109e5caa7;  */

byte FUN_109e5c8b4(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xec);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(param_1 + 0xe8);
  }
  uVar3 = 0x135;
  if (*(char *)(param_1 + 0xe4) == '\0') {
    uVar3 = 0x95;
  }
  if ((uVar3 < uVar2) || (*(char *)(param_1 + 0x351) == '\x01')) {
    bVar1 = *(byte *)(param_1 + 0x347);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 109e5caa8; end: 109e5cadb;  */

byte FUN_109e5caa8(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1;
  func_0x000109e5add4();
  if ((int)lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x349);
  }
  return bVar2 & 1;
}



/* Entry: 109e5cadc; end: 109e5cb4f;  */

bool FUN_109e5cadc(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0xf8) != 4) &&
     ((*(int *)(param_1 + 0xf8) != 5 || (*(char *)(param_1 + 0x3f1) != '\x01')))) {
    return false;
  }
  uVar1 = *(uint *)(param_1 + 0xec);
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_1 + 0xe8);
  }
  uVar2 = 299;
  if (*(char *)(param_1 + 0xe4) == '\0') {
    uVar2 = 0x6d;
  }
  if ((uVar1 <= uVar2) && ((*(byte *)(param_1 + 0x385) & 1) == 0)) {
    return *(char *)(*(long *)(param_1 + 0x10) + 0x447) != '\0';
  }
  return true;
}



/* Entry: 109e5cb50; end: 109e5cb83;  */

byte FUN_109e5cb50(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1;
  FUN_109e5cadc();
  if ((int)lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x397);
  }
  return bVar2 & 1;
}



/* Entry: 109e5cb84; end: 109e5ccaf;  */

long FUN_109e5cb84(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_38;
  
  puVar7 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  FUN_109eaba7c(puVar7,param_2,&DAT_10f3dc1a1,6);
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,1);
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  func_0x000109e24460(&uStack_38,puVar7);
  uVar3 = 0x54;
  FUN_109eac2ac(0x54,uStack_38);
  uVar4 = 3;
  FUN_109eac2ac(3,uVar3);
  func_0x000109e24460(&uStack_38,puVar7);
  uVar3 = 0x57;
  FUN_109eac2ac(0x57,uStack_38);
  uVar5 = 3;
  FUN_109eac2ac(3,uVar3);
  lVar6 = 0x7b;
  FUN_109eac310(0x7b,uVar4,uVar5);
  FUN_109eac02c();
  *(long *)(lVar6 + 8) = lVar2 + 0x60;
  puVar7 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar6 + 0x10) = puVar7;
  plVar1 = (long *)0x0;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
  }
  *puVar7 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e5ccb0; end: 109e5cd07;  */

byte FUN_109e5ccb0(long param_1)

{
  byte bVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0xf8) == 4) ||
     ((*(int *)(param_1 + 0xf8) == 5 && (*(char *)(param_1 + 0x3f1) == '\x01')))) {
    uVar2 = *(uint *)(param_1 + 0xec);
    if (uVar2 == 0) {
      uVar2 = *(uint *)(param_1 + 0xe8);
    }
    if (uVar2 < 0x1c2 || *(char *)(param_1 + 0xe4) != '\0') {
      bVar1 = *(byte *)(param_1 + 0x303);
    }
    else {
      bVar1 = 1;
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 109e5cd08; end: 109e5cd3b;  */

byte FUN_109e5cd08(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1;
  FUN_109e5ccb0();
  if ((int)lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x397);
  }
  return bVar2 & 1;
}



/* Entry: 109e5cd3c; end: 109e5d493;  */

long FUN_109e5cd3c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_38;
  
  puVar7 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  FUN_109eaba7c(puVar7,param_2,&DAT_10f3dc1a1,6);
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,1);
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  func_0x000109e24460(&uStack_38,puVar7);
  uVar3 = 0x55;
  FUN_109eac2ac(0x55,uStack_38);
  uVar4 = 3;
  FUN_109eac2ac(3,uVar3);
  func_0x000109e24460(&uStack_38,puVar7);
  uVar3 = 0x58;
  FUN_109eac2ac(0x58,uStack_38);
  uVar5 = 3;
  FUN_109eac2ac(3,uVar3);
  lVar6 = 0x7b;
  FUN_109eac310(0x7b,uVar4,uVar5);
  FUN_109eac02c();
  *(long *)(lVar6 + 8) = lVar2 + 0x60;
  puVar7 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar6 + 0x10) = puVar7;
  plVar1 = (long *)0x0;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
  }
  *puVar7 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e5d494; end: 109e5d697;  */

long FUN_109e5d494(long param_1)

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  cVar2 = *(char *)(param_1 + 4);
  puVar9 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
  }
  FUN_109eaba7c(puVar9,param_1,"value",6);
  puVar3 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  FUN_109eaba7c(puVar3,&DAT_10e05d928,&DAT_10f63975c,6);
  puVar4 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  FUN_109eaba7c(puVar4,&DAT_10e05d928,&UNK_10f60c308,6);
  lVar5 = 0x113834718;
  FUN_109e4db30(0x113834718,param_1,0x109e62394,3);
  *(byte *)(lVar5 + 0x48) = *(byte *)(lVar5 + 0x48) | 1;
  if (cVar2 == '\0') {
    func_0x000109e24460(&uStack_48,puVar3);
    uVar6 = 0x15;
    FUN_109eac2ac(0x15,uStack_48);
    uStack_48 = uVar6;
    func_0x000109e24460(&uStack_58,puVar4);
    uVar6 = 0x15;
    FUN_109eac2ac(0x15,uStack_58);
    uStack_50 = uVar6;
  }
  else {
    func_0x000109e24460(&uStack_48,puVar3);
    func_0x000109e24460(&uStack_50,puVar4);
  }
  func_0x000109e24460(&uStack_58,puVar9);
  uVar6 = uStack_48;
  FUN_109eac090(uStack_48,0,*(undefined1 *)(param_1 + 0xd));
  uVar7 = uStack_50;
  FUN_109eac090(uStack_50,0,*(undefined1 *)(param_1 + 0xd));
  lVar8 = 0xa3;
  func_0x000109eac384(0xa3,uStack_58,uVar6,uVar7);
  FUN_109eac02c();
  *(long *)(lVar8 + 8) = lVar5 + 0x60;
  puVar9 = *(undefined8 **)(lVar5 + 0x68);
  *(undefined8 **)(lVar8 + 0x10) = puVar9;
  plVar1 = (long *)0x0;
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
  }
  *puVar9 = plVar1;
  *(long **)(lVar5 + 0x68) = plVar1;
  return lVar5;
}



/* Entry: 109e5d698; end: 109e5d8ef;  */

long FUN_109e5d698(long param_1)

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  cVar2 = *(char *)(param_1 + 4);
  puVar9 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
  }
  FUN_109eaba7c(puVar9,param_1,&DAT_10f3dd7cb,6);
  puVar3 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  FUN_109eaba7c(puVar3,param_1,&DAT_10f46195a,6);
  puVar4 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  FUN_109eaba7c(puVar4,&DAT_10e05d928,&DAT_10f63975c,6);
  puVar5 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x11] = 0;
    puVar5[0x10] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
  }
  FUN_109eaba7c(puVar5,&DAT_10e05d928,&UNK_10f60c308,6);
  lVar6 = 0x113834718;
  FUN_109e4db30(0x113834718,param_1,0x109e62394,4);
  *(byte *)(lVar6 + 0x48) = *(byte *)(lVar6 + 0x48) | 1;
  if (cVar2 == '\0') {
    func_0x000109e24460(&uStack_58,puVar4);
    uVar7 = 0x15;
    FUN_109eac2ac(0x15,uStack_58);
    uStack_58 = uVar7;
    func_0x000109e24460(&lStack_68,puVar5);
    uVar7 = 0x15;
    FUN_109eac2ac(0x15,lStack_68);
    uStack_60 = uVar7;
  }
  else {
    func_0x000109e24460(&uStack_58,puVar4);
    func_0x000109e24460(&uStack_60,puVar5);
  }
  func_0x000109e24460(&lStack_68,puVar9);
  func_0x000109e24460(&uStack_70,puVar3);
  uVar7 = uStack_58;
  FUN_109eac090(uStack_58,0,*(undefined1 *)(param_1 + 0xd));
  uVar8 = uStack_60;
  FUN_109eac090(uStack_60,0,*(undefined1 *)(param_1 + 0xd));
  func_0x000109eac400(lStack_68,uStack_70,uVar7,uVar8);
  FUN_109eac02c();
  *(long *)(lStack_68 + 8) = lVar6 + 0x60;
  puVar9 = *(undefined8 **)(lVar6 + 0x68);
  *(undefined8 **)(lStack_68 + 0x10) = puVar9;
  plVar1 = (long *)0x0;
  if (lStack_68 != 0) {
    plVar1 = (long *)(lStack_68 + 8);
  }
  *puVar9 = plVar1;
  *(long **)(lVar6 + 0x68) = plVar1;
  return lVar6;
}



/* Entry: 109e5d8f0; end: 109e5dd5f;  */

long FUN_109e5d8f0(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  
  puVar4 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  FUN_109eaba7c(puVar4,param_1,&DAT_10f62b0e2,6);
  *(ushort *)((long)puVar4 + 0x44) = *(ushort *)((long)puVar4 + 0x44) & 0xffef | 8;
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_1,0x109e62394,1);
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) & 0xf8 | 3;
  func_0x000109e24460(&uStack_28,puVar4);
  lVar3 = 100;
  FUN_109eac2ac(100,uStack_28);
  FUN_109eac02c();
  puVar4 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar3 + 0x10) = puVar4;
  *(long *)(lVar3 + 8) = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
  }
  *puVar4 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e5dd60; end: 109e5def3;  */

long FUN_109e5dd60(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar6 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  FUN_109eaba7c(puVar6,param_2,&DAT_10f3dc16b,6);
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c(puVar2,param_2,"b",6);
  puVar3 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  FUN_109eaba7c(puVar3,param_2,&DAT_10f30a8b7,6);
  lVar4 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,3);
  *(byte *)(lVar4 + 0x48) = *(byte *)(lVar4 + 0x48) | 1;
  func_0x000109e24460(&uStack_48,puVar6);
  func_0x000109e24460(&uStack_50,puVar2);
  func_0x000109e24460(&uStack_58,puVar3);
  lVar5 = 0xa0;
  func_0x000109eac384(0xa0,uStack_48,uStack_50,uStack_58);
  FUN_109eac02c();
  puVar6 = *(undefined8 **)(lVar4 + 0x68);
  *(undefined8 **)(lVar5 + 0x10) = puVar6;
  *(long *)(lVar5 + 8) = lVar4 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
  }
  *puVar6 = plVar1;
  *(long **)(lVar4 + 0x68) = plVar1;
  return lVar4;
}



/* Entry: 109e5def4; end: 109e5e67f;  */

long FUN_109e5def4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar7 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  FUN_109eaba7c(puVar7,param_1,&DAT_10f62b0e2,6);
  *(ushort *)((long)puVar7 + 0x44) = *(ushort *)((long)puVar7 + 0x44) & 0xffef | 8;
  puVar4 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  FUN_109eaba7c(puVar4,param_2,"y",6);
  *(ushort *)((long)puVar4 + 0x44) = *(ushort *)((long)puVar4 + 0x44) & 0xffef | 8;
  uVar1 = 0x109e4edb8;
  if (*(char *)(param_1 + 4) != '\x03') {
    uVar1 = 0x109e62394;
  }
  uVar2 = 0x109e4e9dc;
  if (*(char *)(param_1 + 4) != '\x04') {
    uVar2 = uVar1;
  }
  lVar5 = 0x113834718;
  FUN_109e4db30(0x113834718,param_1,uVar2,2);
  *(byte *)(lVar5 + 0x48) = *(byte *)(lVar5 + 0x48) & 0xf8 | 3;
  func_0x000109e24460(&uStack_38,puVar7);
  func_0x000109e24460(&uStack_40,puVar4);
  lVar6 = 0x9b;
  FUN_109eac310(0x9b,uStack_38,uStack_40);
  FUN_109eac02c();
  puVar7 = *(undefined8 **)(lVar5 + 0x68);
  *(undefined8 **)(lVar6 + 0x10) = puVar7;
  *(long *)(lVar6 + 8) = lVar5 + 0x60;
  plVar3 = (long *)0x0;
  if (lVar6 != 0) {
    plVar3 = (long *)(lVar6 + 8);
  }
  *puVar7 = plVar3;
  *(long **)(lVar5 + 0x68) = plVar3;
  return lVar5;
}



/* Entry: 109e5e680; end: 109e5ec2b;  */

long FUN_109e5e680(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  
  bVar4 = *(char *)(param_1 + 4) == '\x01';
  uVar14 = 9;
  if (bVar4) {
    uVar14 = 10;
  }
  uVar5 = (ulong)uVar14;
  uVar14 = 0x79;
  if (!bVar4) {
    uVar14 = 0x7a;
  }
  uVar17 = (ulong)uVar14;
  puVar2 = &DAT_10e05d960;
  if (!bVar4) {
    puVar2 = &DAT_10e05dae8;
  }
  func_0x000109ec6c94(uVar5,*(undefined1 *)(param_1 + 0xd),1,0,0,0);
  puVar15 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar15 != (undefined8 *)0x0) {
    puVar15[0xf] = 0;
    puVar15[0xe] = 0;
    puVar15[0x11] = 0;
    puVar15[0x10] = 0;
    puVar15[0xb] = 0;
    puVar15[10] = 0;
    puVar15[0xd] = 0;
    puVar15[0xc] = 0;
    puVar15[7] = 0;
    puVar15[6] = 0;
    puVar15[9] = 0;
    puVar15[8] = 0;
    puVar15[3] = 0;
    puVar15[2] = 0;
    puVar15[5] = 0;
    puVar15[4] = 0;
    puVar15[1] = 0;
    *puVar15 = 0;
  }
  FUN_109eaba7c(puVar15,param_1,&DAT_10f62b0e2,6);
  *(ushort *)((long)puVar15 + 0x44) = *(ushort *)((long)puVar15 + 0x44) & 0xffef | 8;
  puVar16 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar16 != (undefined8 *)0x0) {
    puVar16[0xf] = 0;
    puVar16[0xe] = 0;
    puVar16[0x11] = 0;
    puVar16[0x10] = 0;
    puVar16[0xb] = 0;
    puVar16[10] = 0;
    puVar16[0xd] = 0;
    puVar16[0xc] = 0;
    puVar16[7] = 0;
    puVar16[6] = 0;
    puVar16[9] = 0;
    puVar16[8] = 0;
    puVar16[3] = 0;
    puVar16[2] = 0;
    puVar16[5] = 0;
    puVar16[4] = 0;
    puVar16[1] = 0;
    *puVar16 = 0;
  }
  FUN_109eaba7c(puVar16,param_1,"y",6);
  *(ushort *)((long)puVar16 + 0x44) = *(ushort *)((long)puVar16 + 0x44) & 0xffef | 8;
  puVar6 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  FUN_109eaba7c(puVar6,param_1,&UNK_10f60c31a,7);
  *(ushort *)((long)puVar6 + 0x44) = *(ushort *)((long)puVar6 + 0x44) & 0xffef | 8;
  puVar7 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  FUN_109eaba7c();
  *(ushort *)((long)puVar7 + 0x44) = *(ushort *)((long)puVar7 + 0x44) & 0xffef | 8;
  lVar8 = 0x113834718;
  FUN_109e4db30(0x113834718,&DAT_10e05d768,0x109e62394,4);
  lStack_70 = lVar8 + 0x50;
  puStack_68 = puRam0000000113834720;
  *(byte *)(lVar8 + 0x48) = *(byte *)(lVar8 + 0x48) | 1;
  plVar9 = &lStack_70;
  FUN_109eabf1c(plVar9,puVar2,&UNK_10f60c322);
  puVar10 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x58);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[10] = 0;
    puVar10[7] = 0;
    puVar10[6] = 0;
    puVar10[9] = 0;
    puVar10[8] = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    puVar10[5] = 0;
    puVar10[4] = 0;
    puVar10[1] = 0;
    *puVar10 = 0;
  }
  puVar11 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x30);
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[3] = 0;
    puVar11[2] = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    puVar11[1] = 0;
    *puVar11 = 0;
  }
  puVar11[1] = 0;
  puVar11[2] = 0;
  *(undefined4 *)(puVar11 + 3) = 2;
  *puVar11 = &PTR_DAT_110b64048;
  puVar11[5] = puVar15;
  puVar11[4] = puVar15[4];
  puVar15 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x30);
  if (puVar15 != (undefined8 *)0x0) {
    puVar15[3] = 0;
    puVar15[2] = 0;
    puVar15[5] = 0;
    puVar15[4] = 0;
    puVar15[1] = 0;
    *puVar15 = 0;
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *(undefined4 *)(puVar15 + 3) = 2;
  *puVar15 = &PTR_DAT_110b64048;
  puVar15[5] = puVar16;
  puVar15[4] = puVar16[4];
  puVar10[1] = 0;
  puVar10[2] = 0;
  *(undefined4 *)(puVar10 + 3) = 4;
  *puVar10 = &PTR_FUN_110b64370;
  puVar10[4] = uVar5;
  *(undefined4 *)(puVar10 + 5) = 0x82;
  puVar10[6] = puVar11;
  puVar10[7] = puVar15;
  puVar10[8] = 0;
  puVar10[9] = 0;
  *(undefined1 *)(puVar10 + 10) = 2;
  if (*(char *)(param_1 + 0xd) != '\0') {
    if (*(char *)(param_1 + 0xd) == '\x01') {
      func_0x000109e244dc(&lStack_78,plVar9);
      FUN_109eac2ac(uVar17,puVar10);
      lVar13 = lStack_78;
      func_0x000109eabfa8(lStack_78,uVar17,
                          ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_78 + 0x20) + 0xd) & 0x1f)));
      lVar1 = lVar8 + 0x60;
      *(long *)(lVar13 + 8) = lVar1;
      puVar15 = *(undefined8 **)(lVar8 + 0x68);
      *(undefined8 **)(lVar13 + 0x10) = puVar15;
      plVar3 = (long *)0x0;
      if (lVar13 != 0) {
        plVar3 = (long *)(lVar13 + 8);
      }
      *puVar15 = plVar3;
      *(long **)(lVar8 + 0x68) = plVar3;
      func_0x000109e244dc(&lStack_78,puVar6);
      func_0x000109e24460(&uStack_80,plVar9);
      uVar12 = uStack_80;
      FUN_109eac090(uStack_80,0x249,1);
      lVar13 = lStack_78;
      func_0x000109eabfa8(lStack_78,uVar12,
                          ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_78 + 0x20) + 0xd) & 0x1f)));
      *(long *)(lVar13 + 8) = lVar1;
      puVar15 = *(undefined8 **)(lVar8 + 0x68);
      plVar3 = (long *)0x0;
      if (lVar13 != 0) {
        plVar3 = (long *)(lVar13 + 8);
      }
      *(undefined8 **)(lVar13 + 0x10) = puVar15;
      *puVar15 = plVar3;
      *(long **)(lVar8 + 0x68) = plVar3;
      func_0x000109e244dc(&lStack_78,puVar7);
      func_0x000109e24460(&uStack_80,plVar9);
      FUN_109eac090(uStack_80,0,1);
      func_0x000109eabfa8(lStack_78,uStack_80,
                          ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_78 + 0x20) + 0xd) & 0x1f)));
      *(long *)(lStack_78 + 8) = lVar1;
      puVar15 = *(undefined8 **)(lVar8 + 0x68);
      plVar9 = (long *)0x0;
      if (lStack_78 != 0) {
        plVar9 = (long *)(lStack_78 + 8);
      }
      *(undefined8 **)(lStack_78 + 0x10) = puVar15;
      *puVar15 = plVar9;
      *(long **)(lVar8 + 0x68) = plVar9;
    }
    else {
      uVar18 = 0;
      lVar1 = lVar8 + 0x60;
      do {
        func_0x000109e244dc(&lStack_78,plVar9);
        puVar15 = puVar10;
        FUN_109eac090(puVar10,uVar18,1);
        uVar5 = (ulong)uVar14;
        FUN_109eac2ac(uVar5,puVar15);
        lVar13 = lStack_78;
        func_0x000109eabfa8(lStack_78,uVar5,
                            ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_78 + 0x20) + 0xd) & 0x1f)));
        *(long *)(lVar13 + 8) = lVar1;
        puVar15 = *(undefined8 **)(lVar8 + 0x68);
        plVar3 = (long *)0x0;
        if (lVar13 != 0) {
          plVar3 = (long *)(lVar13 + 8);
        }
        *(undefined8 **)(lVar13 + 0x10) = puVar15;
        *puVar15 = plVar3;
        *(long **)(lVar8 + 0x68) = plVar3;
        puVar15 = puVar6;
        FUN_109e622c4(puVar6,uVar18);
        func_0x000109e24460(&lStack_78,plVar9);
        lVar13 = lStack_78;
        FUN_109eac090(lStack_78,0x249,1);
        func_0x000109eabfa8(puVar15,lVar13,~(-1 << (ulong)(*(byte *)(puVar15[4] + 0xd) & 0x1f)));
        puVar15[1] = lVar1;
        puVar16 = *(undefined8 **)(lVar8 + 0x68);
        plVar3 = (long *)0x0;
        if (puVar15 != (undefined8 *)0x0) {
          plVar3 = puVar15 + 1;
        }
        puVar15[2] = puVar16;
        *puVar16 = plVar3;
        *(long **)(lVar8 + 0x68) = plVar3;
        puVar15 = puVar7;
        FUN_109e622c4(puVar7,uVar18);
        func_0x000109e24460(&lStack_78,plVar9);
        lVar13 = lStack_78;
        FUN_109eac090(lStack_78,0,1);
        func_0x000109eabfa8(puVar15,lVar13,~(-1 << (ulong)(*(byte *)(puVar15[4] + 0xd) & 0x1f)));
        puVar15[1] = lVar1;
        plVar3 = (long *)0x0;
        if (puVar15 != (undefined8 *)0x0) {
          plVar3 = puVar15 + 1;
        }
        puVar16 = *(undefined8 **)(lVar8 + 0x68);
        puVar15[2] = puVar16;
        *puVar16 = plVar3;
        *(long **)(lVar8 + 0x68) = plVar3;
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(byte *)(param_1 + 0xd));
    }
  }
  return lVar8;
}



/* Entry: 109e5ec2c; end: 109e5ed13;  */

long FUN_109e5ec2c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  
  puVar4 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  FUN_109eaba7c(puVar4,param_1,&UNK_10f60c32e,6);
  *(ushort *)((long)puVar4 + 0x44) = *(ushort *)((long)puVar4 + 0x44) | 2;
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_1,FUN_109e5ed14,1);
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  func_0x000109e24460(&uStack_28,puVar4);
  lVar3 = 0x73;
  FUN_109eac2ac(0x73,uStack_28);
  FUN_109eac02c();
  puVar4 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar3 + 0x10) = puVar4;
  *(long *)(lVar3 + 8) = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
  }
  *puVar4 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e5ed14; end: 109e5ed6b;  */

byte FUN_109e5ed14(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xf8) == 4) {
    uVar2 = *(uint *)(param_1 + 0xec);
    if (uVar2 == 0) {
      uVar2 = *(uint *)(param_1 + 0xe8);
    }
    uVar3 = 0x13f;
    if (*(char *)(param_1 + 0xe4) == '\0') {
      uVar3 = 399;
    }
    if ((uVar3 < uVar2) || ((*(byte *)(param_1 + 0x315) & 1) != 0)) {
      bVar1 = 1;
    }
    else {
      bVar1 = *(byte *)(param_1 + 899);
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 109e5ed6c; end: 109e5f163;  */

long FUN_109e5ed6c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar7 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  FUN_109eaba7c(puVar7,param_1,&UNK_10f60c32e,6);
  *(ushort *)((long)puVar7 + 0x44) = *(ushort *)((long)puVar7 + 0x44) | 2;
  cVar3 = *(char *)(param_1 + 4);
  puVar4 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  puVar1 = &DAT_10e05ddf8;
  if (cVar3 != '\x03') {
    puVar1 = &DAT_10e05dc70;
  }
  FUN_109eaba7c(puVar4,puVar1,&DAT_10f63975c,6);
  lVar5 = 0x113834718;
  FUN_109e4db30(0x113834718,param_1,FUN_109e5ed14,2);
  *(byte *)(lVar5 + 0x48) = *(byte *)(lVar5 + 0x48) | 1;
  func_0x000109e24460(&uStack_38,puVar7);
  func_0x000109e24460(&uStack_40,puVar4);
  lVar6 = 0x9d;
  FUN_109eac310(0x9d,uStack_38,uStack_40);
  FUN_109eac02c();
  puVar7 = *(undefined8 **)(lVar5 + 0x68);
  *(undefined8 **)(lVar6 + 0x10) = puVar7;
  *(long *)(lVar6 + 8) = lVar5 + 0x60;
  plVar2 = (long *)0x0;
  if (lVar6 != 0) {
    plVar2 = (long *)(lVar6 + 8);
  }
  *puVar7 = plVar2;
  *(long **)(lVar5 + 0x68) = plVar2;
  return lVar5;
}



/* Entry: 109e5f164; end: 109e5f4df;  */

long FUN_109e5f164(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  
  puVar8 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[0xf] = 0;
    puVar8[0xe] = 0;
    puVar8[0x11] = 0;
    puVar8[0x10] = 0;
    puVar8[0xb] = 0;
    puVar8[10] = 0;
    puVar8[0xd] = 0;
    puVar8[0xc] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
  }
  FUN_109eaba7c(puVar8,&DAT_10e05efe8,&UNK_10f60c345,6);
  *(ushort *)((long)puVar8 + 0x44) = *(ushort *)((long)puVar8 + 0x44) & 0xffef | 8;
  puVar10 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[0xf] = 0;
    puVar10[0xe] = 0;
    puVar10[0x11] = 0;
    puVar10[0x10] = 0;
    puVar10[0xb] = 0;
    puVar10[10] = 0;
    puVar10[0xd] = 0;
    puVar10[0xc] = 0;
    puVar10[7] = 0;
    puVar10[6] = 0;
    puVar10[9] = 0;
    puVar10[8] = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    puVar10[5] = 0;
    puVar10[4] = 0;
    puVar10[1] = 0;
    *puVar10 = 0;
  }
  FUN_109eaba7c(puVar10,&DAT_10e05dab0,"data",6);
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,&DAT_10e05dab0,param_2,2);
  lStack_70 = lVar2 + 0x50;
  puStack_68 = puRam0000000113834720;
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  plVar3 = &lStack_70;
  FUN_109eabf1c(plVar3,&DAT_10e05dab0,&UNK_10f60c354);
  iVar1 = 0xf60b9c5;
  _strcmp(&UNK_10f60b9c5,param_1);
  if (iVar1 == 0) {
    plVar6 = &lStack_70;
    FUN_109eabf1c(plVar6,&DAT_10e05dab0,&UNK_10f60c362);
    func_0x000109e244dc(&puStack_98,plVar6);
    func_0x000109e24460(&uStack_78,puVar10);
    uVar7 = 2;
    FUN_109eac2ac(2,uStack_78);
    func_0x000109eabfa8(puStack_98,uVar7,~(-1 << (ulong)(*(byte *)(puStack_98[4] + 0xd) & 0x1f)));
    puStack_98[1] = lVar2 + 0x60;
    plVar9 = (long *)0x0;
    if (puStack_98 != (undefined8 *)0x0) {
      plVar9 = puStack_98 + 1;
    }
    puVar10 = *(undefined8 **)(lVar2 + 0x68);
    puStack_98[2] = puVar10;
    *puVar10 = plVar9;
    *(long **)(lVar2 + 0x68) = plVar9;
    uStack_90 = 0;
    uStack_88 = 0;
    puVar10 = puRam0000000113834720;
    puStack_98 = &uStack_88;
    ppuStack_80 = &puStack_98;
    FUN_109f658b0(puRam0000000113834720,0x30);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
    }
    puVar10[2] = 0;
    plVar9 = puVar10 + 1;
    *plVar9 = 0;
    *(undefined4 *)(puVar10 + 3) = 2;
    *puVar10 = &PTR_DAT_110b64048;
    puVar10[5] = puVar8;
    puVar10[4] = puVar8[4];
    *plVar9 = (long)&uStack_88;
    puVar10[2] = ppuStack_80;
    *ppuStack_80 = plVar9;
    puVar8 = puRam0000000113834720;
    ppuStack_80 = (undefined8 **)plVar9;
    FUN_109f658b0(puRam0000000113834720,0x30);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[3] = 0;
      puVar8[2] = 0;
      puVar8[5] = 0;
      puVar8[4] = 0;
      puVar8[1] = 0;
      *puVar8 = 0;
    }
    puVar8[2] = 0;
    plVar9 = puVar8 + 1;
    *plVar9 = 0;
    *(undefined4 *)(puVar8 + 3) = 2;
    *puVar8 = &PTR_DAT_110b64048;
    puVar8[5] = plVar6;
    puVar8[4] = plVar6[4];
    *plVar9 = (long)&uStack_88;
    puVar8[2] = ppuStack_80;
    *ppuStack_80 = plVar9;
    lVar4 = *(long *)(*(long *)(lRam0000000113834718 + 200) + 8);
    ppuStack_80 = (undefined8 **)plVar9;
    FUN_109f61800(lVar4,&UNK_10f609fe9);
    lVar5 = 0;
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 8);
    }
    FUN_109e4e670();
    *(long *)(lVar5 + 8) = lVar2 + 0x60;
    puVar8 = *(undefined8 **)(lVar2 + 0x68);
    plVar6 = (long *)0x0;
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 8);
    }
    *(undefined8 **)(lVar5 + 0x10) = puVar8;
    *puVar8 = plVar6;
    *(long **)(lVar2 + 0x68) = plVar6;
  }
  else {
    lVar4 = *(long *)(*(long *)(lRam0000000113834718 + 200) + 8);
    FUN_109f61800(lVar4,param_1);
    lVar5 = 0;
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 8);
    }
    FUN_109e4e670();
    *(long *)(lVar5 + 8) = lVar2 + 0x60;
    puVar8 = *(undefined8 **)(lVar2 + 0x68);
    *(undefined8 **)(lVar5 + 0x10) = puVar8;
    plVar6 = (long *)0x0;
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 8);
    }
    *puVar8 = plVar6;
    *(long **)(lVar2 + 0x68) = plVar6;
  }
  func_0x000109e24460(&puStack_98,plVar3);
  FUN_109eac02c();
  puStack_98[1] = lVar2 + 0x60;
  puVar8 = *(undefined8 **)(lVar2 + 0x68);
  puStack_98[2] = puVar8;
  plVar3 = (long *)0x0;
  if (puStack_98 != (undefined8 *)0x0) {
    plVar3 = puStack_98 + 1;
  }
  *puVar8 = plVar3;
  *(long **)(lVar2 + 0x68) = plVar3;
  return lVar2;
}



/* Entry: 109e5f4e0; end: 109e5f4e7;  */

undefined1 FUN_109e5f4e0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x321);
}



/* Entry: 109e5f4e8; end: 109e5f6d3;  */

long FUN_109e5f4e8(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  
  puVar6 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  FUN_109eaba7c(puVar6,&DAT_10e05efe8,&UNK_10f60c345,6);
  *(ushort *)((long)puVar6 + 0x44) = *(ushort *)((long)puVar6 + 0x44) & 0xffef | 8;
  puVar6 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  FUN_109eaba7c(puVar6,&DAT_10e05dab0,&UNK_10f594ecd,6);
  puVar6 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  FUN_109eaba7c();
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,&DAT_10e05dab0,param_1,3);
  lStack_40 = lVar2 + 0x50;
  puStack_38 = puRam0000000113834720;
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  plVar3 = &lStack_40;
  FUN_109eabf1c(plVar3,&DAT_10e05dab0,&UNK_10f60c354);
  lVar4 = *(long *)(*(long *)(lRam0000000113834718 + 200) + 8);
  FUN_109f61800(lVar4,&UNK_10f60a08e);
  lVar5 = 0;
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 8);
  }
  FUN_109e4e670();
  puVar6 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar5 + 0x10) = puVar6;
  *(long *)(lVar5 + 8) = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
  }
  *puVar6 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  func_0x000109e24460(&lStack_48,plVar3);
  FUN_109eac02c();
  puVar6 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lStack_48 + 0x10) = puVar6;
  *(long *)(lStack_48 + 8) = lVar2 + 0x60;
  plVar3 = (long *)0x0;
  if (lStack_48 != 0) {
    plVar3 = (long *)(lStack_48 + 8);
  }
  *puVar6 = plVar3;
  *(long **)(lVar2 + 0x68) = plVar3;
  return lVar2;
}



/* Entry: 109e5f6d4; end: 109e5f86f;  */

long FUN_109e5f6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  
  puVar7 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  FUN_109eaba7c(puVar7,param_3,&UNK_10f60c36b,6);
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c();
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,param_3,param_2,2);
  lStack_50 = lVar3 + 0x50;
  puStack_48 = puRam0000000113834720;
  *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) | 1;
  *(byte *)((long)puVar7 + 0x46) = *(byte *)((long)puVar7 + 0x46) | 4;
  plVar4 = &lStack_50;
  FUN_109eabf1c(plVar4,param_3,&UNK_10f60c354);
  lVar5 = *(long *)(*(long *)(lRam0000000113834718 + 200) + 8);
  FUN_109f61800(lVar5,param_1);
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar5 + 8);
  }
  FUN_109e4e670();
  puVar7 = *(undefined8 **)(lVar3 + 0x68);
  *(undefined8 **)(lVar6 + 0x10) = puVar7;
  *(long *)(lVar6 + 8) = lVar3 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
  }
  *puVar7 = plVar1;
  *(long **)(lVar3 + 0x68) = plVar1;
  func_0x000109e24460(&lStack_58,plVar4);
  FUN_109eac02c();
  puVar7 = *(undefined8 **)(lVar3 + 0x68);
  *(undefined8 **)(lStack_58 + 0x10) = puVar7;
  *(long *)(lStack_58 + 8) = lVar3 + 0x60;
  plVar4 = (long *)0x0;
  if (lStack_58 != 0) {
    plVar4 = (long *)(lStack_58 + 8);
  }
  *puVar7 = plVar4;
  *(long **)(lVar3 + 0x68) = plVar4;
  return lVar3;
}



/* Entry: 109e5f870; end: 109e5f89b;  */

undefined1 FUN_109e5f870(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3f7);
}



/* Entry: 109e5f89c; end: 109e5fc1f;  */

long FUN_109e5f89c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  
  puVar7 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  FUN_109eaba7c(puVar7,param_2,&UNK_10f60c36b,6);
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c(puVar2,param_2,&UNK_10f60c382,6);
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c();
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,3);
  lStack_50 = lVar3 + 0x50;
  puStack_48 = puRam0000000113834720;
  *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) | 1;
  *(byte *)((long)puVar7 + 0x46) = *(byte *)((long)puVar7 + 0x46) | 4;
  plVar4 = &lStack_50;
  FUN_109eabf1c(plVar4,param_2,&UNK_10f60c354);
  lVar5 = *(long *)(*(long *)(lRam0000000113834718 + 200) + 8);
  FUN_109f61800(lVar5,&UNK_10f60a08e);
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar5 + 8);
  }
  FUN_109e4e670();
  puVar7 = *(undefined8 **)(lVar3 + 0x68);
  *(undefined8 **)(lVar6 + 0x10) = puVar7;
  *(long *)(lVar6 + 8) = lVar3 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
  }
  *puVar7 = plVar1;
  *(long **)(lVar3 + 0x68) = plVar1;
  func_0x000109e24460(&lStack_58,plVar4);
  FUN_109eac02c();
  puVar7 = *(undefined8 **)(lVar3 + 0x68);
  *(undefined8 **)(lStack_58 + 0x10) = puVar7;
  *(long *)(lStack_58 + 8) = lVar3 + 0x60;
  plVar4 = (long *)0x0;
  if (lStack_58 != 0) {
    plVar4 = (long *)(lStack_58 + 8);
  }
  *puVar7 = plVar4;
  *(long **)(lVar3 + 0x68) = plVar4;
  return lVar3;
}



/* Entry: 109e5fc20; end: 109e5fc47;  */

undefined1 FUN_109e5fc20(long param_1)

{
  return *(undefined1 *)(param_1 + 0x39d);
}



/* Entry: 109e5fc48; end: 109e5ffdf;  */

long FUN_109e5fc48(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar7 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  FUN_109eaba7c(puVar7,param_2,&DAT_10f62b0e2,6);
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c(puVar2,param_2,"y",6);
  puVar3 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  FUN_109eaba7c(puVar3,param_2,"z",6);
  lVar4 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,3);
  *(byte *)(lVar4 + 0x48) = *(byte *)(lVar4 + 0x48) | 1;
  func_0x000109e24460(&uStack_48,puVar7);
  func_0x000109e24460(&uStack_50,puVar2);
  func_0x000109e24460(&uStack_58,puVar3);
  uVar5 = 0x99;
  FUN_109eac310(0x99,uStack_50,uStack_58);
  lVar6 = 0x99;
  FUN_109eac310(0x99,uStack_48,uVar5);
  FUN_109eac02c();
  puVar7 = *(undefined8 **)(lVar4 + 0x68);
  *(undefined8 **)(lVar6 + 0x10) = puVar7;
  *(long *)(lVar6 + 8) = lVar4 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
  }
  *puVar7 = plVar1;
  *(long **)(lVar4 + 0x68) = plVar1;
  return lVar4;
}



/* Entry: 109e5ffe0; end: 109e601c7;  */

long FUN_109e5ffe0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,&DAT_10e05d768,param_2,0);
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  lVar3 = *(long *)(*(long *)(lRam0000000113834718 + 200) + 8);
  FUN_109f61800(lVar3,param_1);
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  FUN_109e4e670();
  puVar5 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar4 + 0x10) = puVar5;
  *(long *)(lVar4 + 8) = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
  }
  *puVar5 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e601c8; end: 109e601cf;  */

undefined1 FUN_109e601c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x325);
}



/* Entry: 109e601d0; end: 109e605c7;  */

long FUN_109e601d0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  
  puVar6 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  FUN_109eaba7c(puVar6,param_1,"value",6);
  puVar6 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  FUN_109eaba7c();
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_1,param_2,2);
  lStack_40 = lVar2 + 0x50;
  puStack_38 = puRam0000000113834720;
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  plVar3 = &lStack_40;
  FUN_109eabf1c(plVar3,param_1,&UNK_10f60c301);
  lVar4 = *(long *)(*(long *)(lRam0000000113834718 + 200) + 8);
  FUN_109f61800(lVar4,&UNK_10f60a309);
  lVar5 = 0;
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 8);
  }
  FUN_109e4e670();
  puVar6 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar5 + 0x10) = puVar6;
  *(long *)(lVar5 + 8) = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
  }
  *puVar6 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  func_0x000109e24460(&lStack_48,plVar3);
  FUN_109eac02c();
  puVar6 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lStack_48 + 0x10) = puVar6;
  *(long *)(lStack_48 + 8) = lVar2 + 0x60;
  plVar3 = (long *)0x0;
  if (lStack_48 != 0) {
    plVar3 = (long *)(lStack_48 + 8);
  }
  *puVar6 = plVar3;
  *(long **)(lVar2 + 0x68) = plVar3;
  return lVar2;
}



/* Entry: 109e605c8; end: 109e605f7;  */

byte FUN_109e605c8(long param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x329) == '\x01') {
    if ((*(byte *)(param_1 + 0x319) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 0x399);
    }
    else {
      bVar1 = 1;
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 109e605f8; end: 109e60697;  */

long FUN_109e605f8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,&DAT_10e05d768,param_2,0);
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  lVar3 = *(long *)(*(long *)(lRam0000000113834718 + 200) + 8);
  FUN_109f61800(lVar3,param_1);
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  FUN_109e4e670();
  puVar5 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar4 + 0x10) = puVar5;
  *(long *)(lVar4 + 8) = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
  }
  *puVar5 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e60698; end: 109e6069f;  */

undefined1 FUN_109e60698(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3f3);
}



/* Entry: 109e606a0; end: 109e607eb;  */

long FUN_109e606a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  
  puVar6 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  FUN_109eaba7c();
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,&DAT_10e05d7a0,param_2,1);
  lStack_40 = lVar2 + 0x50;
  puStack_38 = puRam0000000113834720;
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  plVar3 = &lStack_40;
  FUN_109eabf1c(plVar3,&DAT_10e05d7a0,&UNK_10f60c301);
  lVar4 = *(long *)(*(long *)(lRam0000000113834718 + 200) + 8);
  FUN_109f61800(lVar4,param_3);
  lVar5 = 0;
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 8);
  }
  FUN_109e4e670();
  puVar6 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar5 + 0x10) = puVar6;
  *(long *)(lVar5 + 8) = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
  }
  *puVar6 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  func_0x000109e24460(&lStack_48,plVar3);
  FUN_109eac02c();
  puVar6 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lStack_48 + 0x10) = puVar6;
  *(long *)(lStack_48 + 8) = lVar2 + 0x60;
  plVar3 = (long *)0x0;
  if (lStack_48 != 0) {
    plVar3 = (long *)(lStack_48 + 8);
  }
  *puVar6 = plVar3;
  *(long **)(lVar2 + 0x68) = plVar3;
  return lVar2;
}



/* Entry: 109e607ec; end: 109e60803;  */

undefined1 FUN_109e607ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x32d);
}


