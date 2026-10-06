/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109e60804; end: 109e6098f;  */

long FUN_109e60804(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uStack_38;
  
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
  FUN_109eaba7c(puVar9,param_1,&DAT_10f3dc16b,6);
  uVar8 = (ulong)*(byte *)(param_1 + 0xd);
  uVar7 = (uint)*(byte *)(param_1 + 0xd);
  if (uVar7 == 8) {
    uVar8 = 6;
  }
  else if (uVar7 == 0x10) {
    uVar8 = 7;
  }
  else if (uVar7 - 8 < 0xfffffff9) {
    puVar6 = &UNK_10e05d730;
    goto LAB_109e608ac;
  }
  puVar6 = (&PTR_DAT_110b66da0)[uVar8];
LAB_109e608ac:
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,puVar6,0x109e607fc,1);
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  func_0x000109e24460(&uStack_38,puVar9);
  uVar3 = 0x67;
  FUN_109eac2ac(0x67,uStack_38);
  uVar4 = 0x15;
  FUN_109eac2ac(0x15,uVar3);
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
  FUN_109ea98b0(puVar9,0x20,1);
  lVar5 = 0x98;
  FUN_109eac310(0x98,uVar4,puVar9);
  FUN_109eac02c();
  puVar9 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(lVar5 + 0x10) = puVar9;
  *(long *)(lVar5 + 8) = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
  }
  *puVar9 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e60990; end: 109e60a13;  */

/* WARNING: Removing unreachable block (ram,0x000109e62130) */

long FUN_109e60990(undefined8 param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = (ulong)(*(uint *)(param_2 + 4) & 0xff);
  uVar2 = *(uint *)(param_2 + 4) - 1;
  if (((uVar2 & 0xff) < 10) && ((0x2a1U >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
    uVar3 = (ulong)*(uint *)(&UNK_10e060f70 + ((ulong)uVar2 & 0xff) * 4);
  }
  func_0x000109ec6c94(uVar3,*(undefined1 *)(param_2 + 0xd),1,0,0,0);
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
  lVar5 = 0x113834718;
  FUN_109e4db30(0x113834718,uVar3,param_1,2);
  *(byte *)(lVar5 + 0x48) = *(byte *)(lVar5 + 0x48) | 1;
  func_0x000109e24460(&uStack_58,puVar7);
  func_0x000109e24460(&uStack_60,puVar4);
  lVar6 = 0x7f;
  FUN_109eac310(0x7f,uStack_58,uStack_60);
  FUN_109eac02c();
  *(long *)(lVar6 + 8) = lVar5 + 0x60;
  puVar7 = *(undefined8 **)(lVar5 + 0x68);
  *(undefined8 **)(lVar6 + 0x10) = puVar7;
  plVar1 = (long *)0x0;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
  }
  *puVar7 = plVar1;
  *(long **)(lVar5 + 0x68) = plVar1;
  return lVar5;
}



/* Entry: 109e60a14; end: 109e60a43;  */

byte FUN_109e60a14(long param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x3ed) == '\x01') {
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



/* Entry: 109e60a44; end: 109e60ae3;  */

long FUN_109e60a44(undefined8 param_1,undefined8 param_2)

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



/* Entry: 109e60ae4; end: 109e60b73;  */

undefined1 FUN_109e60ae4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x36f);
}



/* Entry: 109e60b74; end: 109e6192f;  */

long FUN_109e60b74(undefined8 param_1)

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
  FUN_109e4db30(0x113834718,&DAT_10e05dab0,0x109e4ea28,1);
  lStack_40 = lVar2 + 0x50;
  puStack_38 = puRam0000000113834720;
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  plVar3 = &lStack_40;
  FUN_109eabf1c(plVar3,&DAT_10e05dab0,&UNK_10f60c301);
  lVar4 = *(long *)(*(long *)(lRam0000000113834718 + 200) + 8);
  FUN_109f61800(lVar4,param_1);
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



/* Entry: 109e61930; end: 109e61a23;  */

long FUN_109e61930(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_48;
  
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
  FUN_109eaba7c(puVar3,param_4,&DAT_10f62b0e2,6);
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_3,param_1,1);
  *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
  func_0x000109e24460(&uStack_48,puVar3);
  FUN_109eac2ac(param_2,uStack_48);
  FUN_109eac02c();
  puVar3 = *(undefined8 **)(lVar2 + 0x68);
  *(undefined8 **)(param_2 + 0x10) = puVar3;
  *(long *)(param_2 + 8) = lVar2 + 0x60;
  plVar1 = (long *)0x0;
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 8);
  }
  *puVar3 = plVar1;
  *(long **)(lVar2 + 0x68) = plVar1;
  return lVar2;
}



/* Entry: 109e61a24; end: 109e6203b;  */

void FUN_109e61a24(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_78;
  
  func_0x000109e24460(&uStack_78,param_3);
  uVar1 = 4;
  FUN_109eac2ac(4,uStack_78);
  puVar2 = puRam0000000113834720;
  if (*(char *)(*(long *)(param_3 + 0x20) + 4) == '\x03') {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[0x13] = 0;
      puVar2[0x12] = 0;
      puVar2[0x15] = 0;
      puVar2[0x14] = 0;
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
    FUN_109ea96a8(puVar2,0x3c00,1);
  }
  else {
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[0x13] = 0;
      puVar2[0x12] = 0;
      puVar2[0x15] = 0;
      puVar2[0x14] = 0;
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
    FUN_109ea9758(0x3fc90fdb,puVar2,1);
  }
  puVar3 = puRam0000000113834720;
  if (*(char *)(*(long *)(param_3 + 0x20) + 4) == '\x03') {
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
    FUN_109ea9758(0x3f800000,puVar3,1);
  }
  func_0x000109e24460(&uStack_78,param_3);
  uVar4 = 3;
  FUN_109eac2ac(3,uStack_78);
  uVar5 = 0x7c;
  FUN_109eac310(0x7c,puVar3,uVar4);
  uVar4 = 7;
  FUN_109eac2ac(7,uVar5);
  puVar3 = puRam0000000113834720;
  if (*(char *)(*(long *)(param_3 + 0x20) + 4) == '\x03') {
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
    FUN_109ea9758(0x3fc90fdb,puVar3,1);
  }
  func_0x000109e24460(&uStack_78,param_3);
  uVar5 = 3;
  FUN_109eac2ac(3,uStack_78);
  puVar6 = puRam0000000113834720;
  if (*(char *)(*(long *)(param_3 + 0x20) + 4) == '\x03') {
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
    FUN_109ea96a8(puVar6,0xb000,1);
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
    FUN_109ea9758(0xbe5bc094,puVar6,1);
  }
  func_0x000109e24460(&uStack_78,param_3);
  uVar7 = 3;
  FUN_109eac2ac(3,uStack_78);
  if (*(char *)(*(long *)(param_3 + 0x20) + 4) == '\x03') {
    uVar9 = uVar7;
    FUN_109f64b28(param_1);
    puVar8 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[0x13] = 0;
      puVar8[0x12] = 0;
      puVar8[0x15] = 0;
      puVar8[0x14] = 0;
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
    FUN_109ea96a8(puVar8,uVar9 & 0xffffffff,1);
  }
  else {
    puVar8 = puRam0000000113834720;
    FUN_109f658b0(puRam0000000113834720,0xb0);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[0x13] = 0;
      puVar8[0x12] = 0;
      puVar8[0x15] = 0;
      puVar8[0x14] = 0;
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
    FUN_109ea9758(param_1,puVar8,1);
  }
  func_0x000109e24460(&uStack_78,param_3);
  uVar9 = 3;
  FUN_109eac2ac(3,uStack_78);
  if (*(char *)(*(long *)(param_3 + 0x20) + 4) == '\x03') {
    uVar10 = uVar9;
    FUN_109f64b28(param_2);
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
    FUN_109ea96a8(puVar11,uVar10 & 0xffffffff,1);
  }
  else {
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
    FUN_109ea9758(param_2,puVar11,1);
  }
  uVar12 = 0x82;
  FUN_109eac310(0x82,uVar9,puVar11);
  uVar13 = 0x7b;
  FUN_109eac310(0x7b,puVar8,uVar12);
  uVar12 = 0x82;
  FUN_109eac310(0x82,uVar7,uVar13);
  uVar13 = 0x7b;
  FUN_109eac310(0x7b,puVar6,uVar12);
  uVar12 = 0x82;
  FUN_109eac310(0x82,uVar5,uVar13);
  uVar5 = 0x7b;
  FUN_109eac310(0x7b,puVar3,uVar12);
  uVar12 = 0x82;
  FUN_109eac310(0x82,uVar4,uVar5);
  uVar4 = 0x7c;
  FUN_109eac310(0x7c,puVar2,uVar12);
  FUN_109eac310(0x82,uVar1,uVar4);
  return;
}



/* Entry: 109e6203c; end: 109e621ab;  */

long FUN_109e6203c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
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
  FUN_109eaba7c(puVar4,param_4,&DAT_10f62b0e2,6);
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
  FUN_109eaba7c(puVar2,param_5,"y",6);
  lVar3 = 0x113834718;
  FUN_109e4db30(0x113834718,param_3,param_1,2);
  *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) | 1;
  if (param_6 == 0) {
    func_0x000109e24460(&uStack_58,puVar4);
  }
  else {
    func_0x000109e24460(&uStack_58,puVar2);
    puVar2 = puVar4;
  }
  func_0x000109e24460(&uStack_60,puVar2);
  FUN_109eac310(param_2,uStack_58,uStack_60);
  FUN_109eac02c();
  *(long *)(param_2 + 8) = lVar3 + 0x60;
  puVar4 = *(undefined8 **)(lVar3 + 0x68);
  *(undefined8 **)(param_2 + 0x10) = puVar4;
  plVar1 = (long *)0x0;
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 8);
  }
  *puVar4 = plVar1;
  *(long **)(lVar3 + 0x68) = plVar1;
  return lVar3;
}



/* Entry: 109e621ac; end: 109e621ef;  */

byte FUN_109e621ac(long param_1)

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
    uVar3 = 0x149;
  }
  if ((uVar3 < uVar2) || ((*(byte *)(param_1 + 0x327) & 1) != 0)) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x315);
  }
  return bVar1 & 1;
}



/* Entry: 109e621f0; end: 109e6228f;  */

long * FUN_109e621f0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_40;
  long lStack_38;
  
  plVar2 = param_1;
  FUN_109eabf1c(param_1,*(undefined8 *)(param_2 + 0x20),&UNK_10f60c1ba);
  func_0x000109e244dc(&lStack_38,plVar2);
  func_0x000109e24460(&uStack_40,param_2);
  func_0x000109eabfa8(lStack_38,uStack_40,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_38 + 0x20) + 0xd) & 0x1f)));
  lVar3 = *param_1;
  puVar4 = *(undefined8 **)(lVar3 + 0x18);
  *(undefined8 **)(lStack_38 + 0x10) = puVar4;
  *(long *)(lStack_38 + 8) = lVar3 + 0x10;
  plVar1 = (long *)0x0;
  if (lStack_38 != 0) {
    plVar1 = (long *)(lStack_38 + 8);
  }
  *puVar4 = plVar1;
  *(long **)(lVar3 + 0x18) = plVar1;
  return plVar2;
}



/* Entry: 109e62290; end: 109e622c3;  */

byte FUN_109e62290(long param_1)

{
  byte bVar1;
  
  if ((*(int *)(param_1 + 0xf8) == 0) &&
     (((*(byte *)(param_1 + 0xe5) & 1) != 0 || (*(char *)(param_1 + 0x2f9) == '\x01')))) {
    bVar1 = *(byte *)(param_1 + 0xe4) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 109e622c4; end: 109e6235f;  */

undefined8 * FUN_109e622c4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x38);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[6] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar2 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0xb0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0x13] = 0;
    puVar2[0x12] = 0;
    puVar2[0x15] = 0;
    puVar2[0x14] = 0;
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
  func_0x000109ea9960(puVar2,param_2,1);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[4] = &UNK_10e05d730;
  *puVar1 = &PTR_DAT_110b640d0;
  if (param_1 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)0x0;
    if (*(long *)(param_1 + -0x30) != 0) {
      puVar3 = (undefined8 *)(*(long *)(param_1 + -0x30) + 0x30);
    }
  }
  puVar1[6] = puVar2;
  FUN_109f658b0(puVar3,0x30);
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
  puVar3[4] = *(undefined8 *)(param_1 + 0x20);
  puVar3[5] = param_1;
  FUN_109eab364(puVar1);
  return puVar1;
}



/* Entry: 109e62360; end: 109e623d7;  */

bool FUN_109e62360(long param_1)

{
  return *(int *)(param_1 + 0xf8) == 3;
}



/* Entry: 109e623d8; end: 109e6431f;  */

long FUN_109e623d8(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined *puVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  int iVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long *plVar17;
  
  lVar14 = *(long *)(param_1 + 0x48);
  piVar15 = (int *)&UNK_110b5f14c;
  lVar16 = 0x71;
  lVar4 = param_1;
  do {
    uVar10 = *(uint *)(param_1 + 0xec);
    if (uVar10 == 0) {
      uVar10 = *(uint *)(param_1 + 0xe8);
    }
    piVar1 = piVar15;
    if (*(char *)(param_1 + 0xe4) == '\0') {
      piVar1 = piVar15 + -1;
    }
    if (*piVar1 - 1U < uVar10) {
      puVar12 = *(undefined **)(piVar15 + -3);
      if (((byte)puVar12[0xc] >> 1 & 1) == 0) {
        puVar2 = puVar12;
        FUN_109eca058(puVar12);
      }
      else {
        puVar2 = &UNK_10e05bf38 + *(long *)(puVar12 + 0x18);
      }
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = puVar12;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      lVar4 = *(long *)(lVar14 + 8);
      FUN_109f61854(lVar4,puVar2,puVar3);
    }
    piVar15 = piVar15 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  uVar10 = *(uint *)(param_1 + 0xec);
  if (uVar10 == 0) {
    uVar10 = *(uint *)(param_1 + 0xe8);
  }
  uVar11 = 99;
  if (*(char *)(param_1 + 0xe4) == '\0') {
    uVar11 = 0x6d;
  }
  if (uVar11 < uVar10) {
    ppuVar5 = &PTR_DAT_110b5ea50;
    FUN_109ec7c64(&PTR_DAT_110b5ea50,3,&UNK_10f60c4d8,0,0);
    if ((*(byte *)((long)ppuVar5 + 0xc) >> 1 & 1) == 0) {
      ppuVar6 = ppuVar5;
      FUN_109eca058(ppuVar5);
    }
    else {
      ppuVar6 = (undefined **)(&UNK_10e05bf38 + (long)ppuVar5[3]);
    }
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = ppuVar5;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    lVar4 = *(long *)(lVar14 + 8);
    FUN_109f61854(lVar4,ppuVar6,puVar3);
  }
  if (((*(byte *)(param_1 + 0xe5) & 1) != 0) || (*(char *)(param_1 + 0x2f9) == '\x01')) {
    ppuVar5 = &PTR_DAT_110b5eae0;
    FUN_109ec7c64(&PTR_DAT_110b5eae0,7,&UNK_10f60c4f0,0,0);
    if ((*(byte *)((long)ppuVar5 + 0xc) >> 1 & 1) == 0) {
      ppuVar6 = ppuVar5;
      FUN_109eca058(ppuVar5);
    }
    else {
      ppuVar6 = (undefined **)(&UNK_10e05bf38 + (long)ppuVar5[3]);
    }
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = ppuVar5;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),ppuVar6,puVar3);
    ppuVar5 = &PTR_DAT_110b5ec30;
    FUN_109ec7c64(&PTR_DAT_110b5ec30,5,&UNK_10f60c503,0,0);
    if ((*(byte *)((long)ppuVar5 + 0xc) >> 1 & 1) == 0) {
      ppuVar6 = ppuVar5;
      FUN_109eca058(ppuVar5);
    }
    else {
      ppuVar6 = (undefined **)(&UNK_10e05bf38 + (long)ppuVar5[3]);
    }
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = ppuVar5;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),ppuVar6,puVar3);
    ppuVar5 = &PTR_DAT_110b5ed20;
    FUN_109ec7c64(&PTR_DAT_110b5ed20,0xc,&UNK_10f60c519,0,0);
    if ((*(byte *)((long)ppuVar5 + 0xc) >> 1 & 1) == 0) {
      ppuVar6 = ppuVar5;
      FUN_109eca058(ppuVar5);
    }
    else {
      ppuVar6 = (undefined **)(&UNK_10e05bf38 + (long)ppuVar5[3]);
    }
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = ppuVar5;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),ppuVar6,puVar3);
    ppuVar5 = &PTR_DAT_110b5ef60;
    FUN_109ec7c64(&PTR_DAT_110b5ef60,1,&UNK_10f60c532,0,0);
    if ((*(byte *)((long)ppuVar5 + 0xc) >> 1 & 1) == 0) {
      ppuVar6 = ppuVar5;
      FUN_109eca058(ppuVar5);
    }
    else {
      ppuVar6 = (undefined **)(&UNK_10e05bf38 + (long)ppuVar5[3]);
    }
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = ppuVar5;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),ppuVar6,puVar3);
    ppuVar5 = &PTR_DAT_110b5ef90;
    FUN_109ec7c64(&PTR_DAT_110b5ef90,1,&UNK_10f60c54a,0,0);
    if ((*(byte *)((long)ppuVar5 + 0xc) >> 1 & 1) == 0) {
      ppuVar6 = ppuVar5;
      FUN_109eca058(ppuVar5);
    }
    else {
      ppuVar6 = (undefined **)(&UNK_10e05bf38 + (long)ppuVar5[3]);
    }
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = ppuVar5;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),ppuVar6,puVar3);
    ppuVar5 = &PTR_DAT_110b5efc0;
    FUN_109ec7c64(&PTR_DAT_110b5efc0,3,&UNK_10f60c560,0,0);
    if ((*(byte *)((long)ppuVar5 + 0xc) >> 1 & 1) == 0) {
      ppuVar6 = ppuVar5;
      FUN_109eca058(ppuVar5);
    }
    else {
      ppuVar6 = (undefined **)(&UNK_10e05bf38 + (long)ppuVar5[3]);
    }
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = ppuVar5;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),ppuVar6,puVar3);
    ppuVar5 = &PTR_DAT_110b5f050;
    FUN_109ec7c64(&PTR_DAT_110b5f050,5,&UNK_10f60c571,0,0);
    if ((*(byte *)((long)ppuVar5 + 0xc) >> 1 & 1) == 0) {
      ppuVar6 = ppuVar5;
      FUN_109eca058(ppuVar5);
    }
    else {
      ppuVar6 = (undefined **)(&UNK_10e05bf38 + (long)ppuVar5[3]);
    }
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = ppuVar5;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    lVar4 = *(long *)(lVar14 + 8);
    FUN_109f61854(lVar4,ppuVar6,puVar3);
  }
  if ((((*(byte *)(param_1 + 0x34d) & 1) != 0) || ((*(byte *)(param_1 + 0x3e3) & 1) != 0)) ||
     (*(char *)(param_1 + 0x38f) == '\x01')) {
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f1a8;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c2ca,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f8a8;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c4b8,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f410;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c362,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f678;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    lVar4 = *(long *)(lVar14 + 8);
    FUN_109f61854(lVar4,&UNK_10e05c3ff,puVar3);
  }
  if (*(char *)(param_1 + 0x351) == '\x01') {
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f250;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c2f7,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f4b8;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c392,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f720;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    lVar4 = *(long *)(lVar14 + 8);
    FUN_109f61854(lVar4,&UNK_10e05c42f,puVar3);
    if ((*(byte *)(param_1 + 0x351) & 1) == 0) goto LAB_109e62a78;
LAB_109e62a84:
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f288;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c303,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f4f0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c39f,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f758;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    lVar4 = *(long *)(lVar14 + 8);
    FUN_109f61854(lVar4,&UNK_10e05c43c,puVar3);
  }
  else {
LAB_109e62a78:
    if (*(char *)(param_1 + 0x391) == '\x01') goto LAB_109e62a84;
  }
  if (*(char *)(param_1 + 0x357) == '\x01') {
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f1e0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c2db,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f8e0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    lVar4 = *(long *)(lVar14 + 8);
    FUN_109f61854(lVar4,&UNK_10e05c4cf,puVar3);
  }
  if (*(char *)(param_1 + 0x3bd) == '\x01') {
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05dab0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05bf9e,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05dae8;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05bfa3,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05db20;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05bfa9,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05db58;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05bfaf,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f800;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    lVar4 = *(long *)(lVar14 + 8);
    FUN_109f61854(lVar4,&UNK_10e05c47c,puVar3);
    lVar16 = *(long *)(param_1 + 8);
    if (*(char *)(lVar16 + 0x96) != '\0') {
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e05f138;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c2ac,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e05f170;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c2bb,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e05f838;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c48e,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e05f870;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      lVar4 = *(long *)(lVar14 + 8);
      FUN_109f61854(lVar4,&UNK_10e05c4a3,puVar3);
      lVar16 = *(long *)(param_1 + 8);
    }
    if (*(char *)(lVar16 + 0x97) != '\0') {
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e05f218;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      lVar4 = *(long *)(lVar14 + 8);
      FUN_109f61854(lVar4,&UNK_10e05c2e9,puVar3);
      lVar16 = *(long *)(param_1 + 8);
    }
    if (*(char *)(lVar16 + 0x9f) != '\0') {
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e05f2c0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c314,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e05f2f8;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c31f,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e05f330;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c32a,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e05f368;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c335,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e05f528;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c3b1,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e05f560;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c3bc,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e05f598;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c3c7,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e05f5d0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      lVar4 = *(long *)(lVar14 + 8);
      FUN_109f61854(lVar4,&UNK_10e05c3d2,puVar3);
      lVar16 = *(long *)(param_1 + 8);
      if (*(char *)(lVar16 + 0xed) != '\0') {
        puVar3 = *(undefined8 **)(lVar14 + 0x18);
        FUN_109f6650c(puVar3,0x40);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = &DAT_10e05f448;
        puVar3[4] = 0;
        puVar3[3] = 0;
        puVar3[6] = 0;
        puVar3[5] = 0;
        puVar3[7] = 0;
        FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c374,puVar3);
        puVar3 = *(undefined8 **)(lVar14 + 0x18);
        FUN_109f6650c(puVar3,0x40);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = &DAT_10e05f6b0;
        puVar3[4] = 0;
        puVar3[3] = 0;
        puVar3[6] = 0;
        puVar3[5] = 0;
        puVar3[7] = 0;
        lVar4 = *(long *)(lVar14 + 8);
        FUN_109f61854(lVar4,&UNK_10e05c411,puVar3);
        lVar16 = *(long *)(param_1 + 8);
      }
      if (*(char *)(lVar16 + 0x96) != '\0') {
        puVar3 = *(undefined8 **)(lVar14 + 0x18);
        FUN_109f6650c(puVar3,0x40);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = &DAT_10e05f3a0;
        puVar3[4] = 0;
        puVar3[3] = 0;
        puVar3[6] = 0;
        puVar3[5] = 0;
        puVar3[7] = 0;
        FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c342,puVar3);
        puVar3 = *(undefined8 **)(lVar14 + 0x18);
        FUN_109f6650c(puVar3,0x40);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = &DAT_10e05f3d8;
        puVar3[4] = 0;
        puVar3[3] = 0;
        puVar3[6] = 0;
        puVar3[5] = 0;
        puVar3[7] = 0;
        FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c352,puVar3);
        puVar3 = *(undefined8 **)(lVar14 + 0x18);
        FUN_109f6650c(puVar3,0x40);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = &DAT_10e05f608;
        puVar3[4] = 0;
        puVar3[3] = 0;
        puVar3[6] = 0;
        puVar3[5] = 0;
        puVar3[7] = 0;
        FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c3df,puVar3);
        puVar3 = *(undefined8 **)(lVar14 + 0x18);
        FUN_109f6650c(puVar3,0x40);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = &DAT_10e05f640;
        puVar3[4] = 0;
        puVar3[3] = 0;
        puVar3[6] = 0;
        puVar3[5] = 0;
        puVar3[7] = 0;
        lVar4 = *(long *)(lVar14 + 8);
        FUN_109f61854(lVar4,&UNK_10e05c3ef,puVar3);
        lVar16 = *(long *)(param_1 + 8);
      }
      if (*(char *)(lVar16 + 0x97) != '\0') {
        puVar3 = *(undefined8 **)(lVar14 + 0x18);
        FUN_109f6650c(puVar3,0x40);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = &DAT_10e05f480;
        puVar3[4] = 0;
        puVar3[3] = 0;
        puVar3[6] = 0;
        puVar3[5] = 0;
        puVar3[7] = 0;
        FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c383,puVar3);
        puVar3 = *(undefined8 **)(lVar14 + 0x18);
        FUN_109f6650c(puVar3,0x40);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = &DAT_10e05f6e8;
        puVar3[4] = 0;
        puVar3[3] = 0;
        puVar3[6] = 0;
        puVar3[5] = 0;
        puVar3[7] = 0;
        lVar4 = *(long *)(lVar14 + 8);
        FUN_109f61854(lVar4,&UNK_10e05c420,puVar3);
      }
    }
  }
  if (*(char *)(param_1 + 0x3df) == '\x01') {
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f138;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c2ac,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f170;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c2bb,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f838;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c48e,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f870;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    lVar4 = *(long *)(lVar14 + 8);
    FUN_109f61854(lVar4,&UNK_10e05c4a3,puVar3);
  }
  if (((*(byte *)(param_1 + 0x371) & 1) != 0) || (*(char *)(param_1 + 0x373) == '\x01')) {
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &UNK_10e05f918;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    lVar4 = *(long *)(lVar14 + 8);
    FUN_109f61854(lVar4,&UNK_10e05c4e3,puVar3);
  }
  if (*(char *)(param_1 + 0x38b) == '\x01') {
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f0c8;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    lVar4 = *(long *)(lVar14 + 8);
    FUN_109f61854(lVar4,&UNK_10e05c296,puVar3);
  }
  if ((((*(byte *)(param_1 + 0x32f) & 1) != 0) || ((*(byte *)(param_1 + 0x3e3) & 1) != 0)) ||
     (*(char *)(param_1 + 0x38f) == '\x01')) {
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e060440;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c798,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e0606a8;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c81c,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e060910;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    lVar4 = *(long *)(lVar14 + 8);
    FUN_109f61854(lVar4,&UNK_10e05c8a3,puVar3);
    if (*(char *)(param_1 + 0x32f) == '\x01') {
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060280;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c744,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e0602b8;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c74c,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e0602f0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c754,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060328;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c75c,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060360;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c768,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060398;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c772,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e0603d0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c77e,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060408;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c78b,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060478;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c7a7,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e0604b0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c7b1,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e0604e8;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c7c0,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060520;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c7c9,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060558;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c7d2,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060590;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c7db,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e0605c8;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c7e8,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060600;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c7f3,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060638;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c800,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060670;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c80e,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e0606e0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c82c,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060718;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c837,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060750;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c847,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060788;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c850,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e0607c0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c859,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e0607f8;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c862,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060830;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c86f,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060868;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c87a,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e0608a0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c887,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e0608d8;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c895,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060948;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c8b3,puVar3);
      puVar3 = *(undefined8 **)(lVar14 + 0x18);
      FUN_109f6650c(puVar3,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = &DAT_10e060980;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      puVar3[7] = 0;
      lVar4 = *(long *)(lVar14 + 8);
      FUN_109f61854(lVar4,&UNK_10e05c8be,puVar3);
    }
  }
  if (((*(byte *)(param_1 + 0x3e1) & 1) != 0) || (*(char *)(param_1 + 0x38d) == '\x01')) {
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f218;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c2e9,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f480;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c383,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05f6e8;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c420,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e060398;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c772,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e060600;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c7f3,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e060868;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    lVar4 = *(long *)(lVar14 + 8);
    FUN_109f61854(lVar4,&UNK_10e05c87a,puVar3);
  }
  if ((*(byte *)(param_1 + 0x323) & 1) == 0) {
    uVar10 = *(uint *)(param_1 + 0xec);
    if (uVar10 == 0) {
      uVar10 = *(uint *)(param_1 + 0xe8);
    }
    uVar11 = 0x135;
    if (*(char *)(param_1 + 0xe4) == '\0') {
      uVar11 = 0x1a3;
    }
    if (uVar11 < uVar10) goto LAB_109e63d98;
  }
  else {
LAB_109e63d98:
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05efe8;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    lVar4 = *(long *)(lVar14 + 8);
    FUN_109f61854(lVar4,&UNK_10e05c26e,puVar3);
  }
  if (*(char *)(param_1 + 0x317) == '\x01') {
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05df48;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c028,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05df80;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c02f,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05dfb8;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c035,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05dff0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c03b,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05edf0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c22c,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05ee28;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c232,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05ee60;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c238,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05ee98;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c23e,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05eed0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c246,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05ef08;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c24e,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05ef40;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c256,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05ef78;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c25e,puVar3);
    puVar3 = *(undefined8 **)(lVar14 + 0x18);
    FUN_109f6650c(puVar3,0x40);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = &DAT_10e05efb0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    lVar4 = *(long *)(lVar14 + 8);
    FUN_109f61854(lVar4,&UNK_10e05c266,puVar3);
  }
  if (((*(byte *)(param_1 + 0x319) & 1) == 0) && (*(char *)(param_1 + 0x399) != '\x01')) {
    return lVar4;
  }
  puVar3 = *(undefined8 **)(lVar14 + 0x18);
  FUN_109f6650c(puVar3,0x40);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = &DAT_10e05e0d0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[7] = 0;
  FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c054,puVar3);
  puVar3 = *(undefined8 **)(lVar14 + 0x18);
  FUN_109f6650c(puVar3,0x40);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = &DAT_10e05e108;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[7] = 0;
  FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c05c,puVar3);
  puVar3 = *(undefined8 **)(lVar14 + 0x18);
  FUN_109f6650c(puVar3,0x40);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = &DAT_10e05e140;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[7] = 0;
  FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c064,puVar3);
  puVar3 = *(undefined8 **)(lVar14 + 0x18);
  FUN_109f6650c(puVar3,0x40);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = &DAT_10e05e178;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[7] = 0;
  FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c06c,puVar3);
  puVar3 = *(undefined8 **)(lVar14 + 0x18);
  FUN_109f6650c(puVar3,0x40);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = &DAT_10e05e258;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[7] = 0;
  FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c08d,puVar3);
  puVar3 = *(undefined8 **)(lVar14 + 0x18);
  FUN_109f6650c(puVar3,0x40);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = &DAT_10e05e290;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[7] = 0;
  FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c096,puVar3);
  puVar3 = *(undefined8 **)(lVar14 + 0x18);
  FUN_109f6650c(puVar3,0x40);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = &DAT_10e05e2c8;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[7] = 0;
  FUN_109f61854(*(undefined8 *)(lVar14 + 8),&UNK_10e05c09e,puVar3);
  puVar3 = *(undefined8 **)(lVar14 + 0x18);
  FUN_109f6650c(puVar3,0x40);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = &DAT_10e05e300;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[7] = 0;
  plVar7 = *(long **)(lVar14 + 8);
  puVar12 = &UNK_10e05c0a6;
  puVar2 = puVar12;
  _strlen(&UNK_10e05c0a6);
  puVar8 = puVar12;
  FUN_109f65540(&UNK_10e05c0a6,puVar2);
  lVar16 = *plVar7;
  FUN_109f64fdc(lVar16,puVar8,&UNK_10e05c0a6);
  if ((lVar16 == 0) || (plVar17 = *(long **)(lVar16 + 0x10), plVar17 == (long *)0x0)) {
    _strlen(&UNK_10e05c0a6);
    plVar9 = (long *)0x1;
    _calloc(1,puVar12 + 0x29);
    if (plVar9 != (long *)0x0) {
      plVar17 = plVar9 + 5;
      *plVar9 = (long)plVar17;
      _strcpy(plVar17,&UNK_10e05c0a6);
      func_0x000109f650c0(*plVar7,puVar8,plVar17,plVar9);
      iVar13 = (int)plVar7[2];
      goto LAB_109f6192c;
    }
  }
  else {
    iVar13 = (int)plVar7[2];
    if ((int)plVar17[3] == iVar13) {
      return 0xffffffff;
    }
    plVar9 = (long *)0x1;
    _calloc(1,0x28);
    if (plVar9 != (long *)0x0) {
      *plVar9 = *plVar17;
      plVar9[1] = (long)plVar17;
      *(long **)(lVar16 + 0x10) = plVar9;
LAB_109f6192c:
      lVar16 = plVar7[1];
      plVar9[2] = *(long *)(lVar16 + 8);
      plVar9[4] = (long)puVar3;
      *(int *)(plVar9 + 3) = iVar13;
      *(long **)(lVar16 + 8) = plVar9;
      return 0;
    }
  }
  FUN_109f6116c(&UNK_10f620c13);
  return 0xffffffff;
}



/* Entry: 109e64320; end: 109e67457;  */

void FUN_109e64320(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  byte bVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  uint *puVar22;
  ulong uVar23;
  undefined8 uStack_6b8;
  long lStack_6b0;
  long lStack_6a8;
  byte bStack_6a0;
  undefined *puStack_698;
  undefined *puStack_690;
  undefined *puStack_688;
  undefined *puStack_680;
  undefined *puStack_678;
  undefined *puStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  undefined *puStack_650;
  undefined *puStack_648;
  undefined *puStack_640;
  undefined8 auStack_638 [3];
  undefined4 uStack_620;
  undefined8 auStack_61c [80];
  undefined4 uStack_398;
  undefined8 auStack_390 [3];
  undefined4 uStack_378;
  undefined8 auStack_374 [80];
  undefined4 uStack_f0;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_6a8 = *(long *)(param_2 + 0x48);
  if ((*(byte *)(param_2 + 0xe5) & 1) == 0) {
    bStack_6a0 = *(byte *)(param_2 + 0x2f9);
  }
  else {
    bStack_6a0 = 1;
  }
  bStack_6a0 = bStack_6a0 & 1;
  puStack_698 = &DAT_10e05d7a0;
  puStack_690 = &DAT_10e05d928;
  puStack_688 = &DAT_10e05dab0;
  puStack_680 = &DAT_10e05e258;
  puStack_678 = &DAT_10e05dc38;
  puStack_670 = &DAT_10e05dc70;
  puStack_668 = &DAT_10e05dca8;
  puStack_660 = &DAT_10e05dce0;
  puStack_658 = &DAT_10e05db20;
  puStack_650 = &DAT_10e05db58;
  puStack_648 = &DAT_10e05ea38;
  puStack_640 = &DAT_10e05ea70;
  lVar14 = 0;
  do {
    *(undefined8 *)((long)auStack_638 + lVar14) = 0;
    *(undefined8 *)((long)auStack_638 + lVar14 + 8) = 0;
    *(undefined8 *)((long)auStack_638 + lVar14 + 0x10) = 0xffffffffffffffff;
    *(undefined4 *)((long)&uStack_620 + lVar14) = 0xffffffff;
    *(undefined8 *)((long)auStack_61c + lVar14 + 8) = 0;
    lVar20 = lVar14 + 0x30;
    *(undefined8 *)((long)auStack_61c + lVar14) = 0;
    lVar14 = lVar20;
  } while (lVar20 != 0x2a0);
  lVar14 = 0;
  uStack_398 = 0;
  do {
    *(undefined8 *)((long)auStack_390 + lVar14 + 8) = 0;
    *(undefined8 *)((long)auStack_390 + lVar14) = 0;
    *(undefined8 *)((long)auStack_390 + lVar14 + 0x10) = 0xffffffffffffffff;
    *(undefined4 *)((long)&uStack_378 + lVar14) = 0xffffffff;
    *(undefined8 *)((long)auStack_374 + lVar14 + 8) = 0;
    *(undefined8 *)((long)auStack_374 + lVar14) = 0;
    lVar14 = lVar14 + 0x30;
  } while (lVar14 != 0x2a0);
  uStack_f0 = 0;
  uStack_6b8 = param_1;
  lStack_6b0 = param_2;
  FUN_109e675a8(&uStack_6b8,&UNK_10f60cc22,2,*(undefined4 *)(param_2 + 0x160));
  FUN_109e675a8(&uStack_6b8,&UNK_10f60cc36,2,*(undefined4 *)(lStack_6b0 + 0x168));
  FUN_109e675a8(&uStack_6b8,&UNK_10f60cc54,2,*(undefined4 *)(lStack_6b0 + 0x16c));
  FUN_109e675a8(&uStack_6b8,&UNK_10f60cc74,2,*(undefined4 *)(lStack_6b0 + 0x170));
  FUN_109e675a8(&uStack_6b8,&UNK_10f60cc8c,2,*(undefined4 *)(lStack_6b0 + 0x178));
  uVar13 = 99;
  if ((*(byte *)(lStack_6b0 + 0xe4) & 1) == 0) {
    FUN_109e675a8(&uStack_6b8,&UNK_10f60cc9e,2,*(undefined4 *)(lStack_6b0 + 0x174));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60ccbe,2,*(undefined4 *)(lStack_6b0 + 0x164));
    uVar13 = 99;
    if (*(char *)(lStack_6b0 + 0xe4) == '\0') {
      uVar13 = 0x199;
    }
  }
  uVar12 = *(uint *)(lStack_6b0 + 0xec);
  if (uVar12 == 0) {
    uVar12 = *(uint *)(lStack_6b0 + 0xe8);
  }
  if (uVar13 < uVar12) {
    FUN_109e675a8(&uStack_6b8,&UNK_10f60ccdc,2,*(uint *)(lStack_6b0 + 0x164) >> 2);
    FUN_109e675a8(&uStack_6b8,&UNK_10f60ccf7,2,*(uint *)(lStack_6b0 + 0x174) >> 2);
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    if (uVar13 == 0) {
      uVar13 = *(uint *)(lStack_6b0 + 0xe8);
    }
    if ((uVar13 < 300) || (*(char *)(lStack_6b0 + 0xe4) == '\0')) {
      uVar13 = *(uint *)(*(long *)(lStack_6b0 + 0x10) + 0x400);
      puVar9 = &UNK_10f60cd49;
    }
    else {
      FUN_109e675a8(&uStack_6b8,&UNK_10f60cd14,2,*(uint *)(*(long *)(lStack_6b0 + 0x10) + 0xcc) >> 2
                   );
      uVar13 = *(uint *)(*(long *)(lStack_6b0 + 0x10) + 0x2c8) >> 2;
      puVar9 = &UNK_10f60cd2e;
    }
    FUN_109e675a8(&uStack_6b8,puVar9,2,uVar13);
    if (*(char *)(lStack_6b0 + 0x3ad) == '\x01') {
      FUN_109e675a8(&uStack_6b8,&UNK_10f60cd5e,2,*(undefined4 *)(lStack_6b0 + 0x184));
    }
  }
  if ((bStack_6a0 & 1) == 0) {
    bVar15 = *(byte *)(lStack_6b0 + 0xe4);
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    uVar12 = uVar13;
    if (uVar13 == 0) {
      uVar12 = *(uint *)(lStack_6b0 + 0xe8);
    }
    uVar19 = 99;
    if (bVar15 == 0) {
      uVar19 = 0x1a3;
    }
    if (uVar12 <= uVar19) goto LAB_109e64670;
  }
  else {
LAB_109e64670:
    FUN_109e675a8(&uStack_6b8,&UNK_10f60cd7d,2,*(int *)(*(long *)(lStack_6b0 + 0x10) + 0x400) << 2);
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    bVar15 = *(byte *)(lStack_6b0 + 0xe4);
  }
  uVar12 = uVar13;
  if (uVar13 == 0) {
    uVar12 = *(uint *)(lStack_6b0 + 0xe8);
  }
  if (((bVar15 & 1) == 0 && 0x81 < uVar12) && ((*(byte *)(lStack_6b0 + 0x341) & 1) != 0)) {
LAB_109e646e0:
    FUN_109e675a8(&uStack_6b8,&UNK_10f60cd91,2,*(undefined4 *)(lStack_6b0 + 0x188));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60cdaa,2,*(undefined4 *)(lStack_6b0 + 0x18c));
  }
  else {
    if (uVar13 == 0) {
      uVar13 = *(uint *)(lStack_6b0 + 0xe8);
    }
    uVar12 = 299;
    if ((bVar15 & 1) == 0) {
      uVar12 = 0x1a3;
    }
    if (uVar12 < uVar13) goto LAB_109e646e0;
  }
  if (((*(byte *)(lStack_6b0 + 0x3af) & 1) == 0) && ((*(byte *)(lStack_6b0 + 0x3a7) & 1) == 0)) {
    bVar15 = *(byte *)(lStack_6b0 + 0xe4);
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    uVar12 = uVar13;
    if (uVar13 == 0) {
      uVar12 = *(uint *)(lStack_6b0 + 0xe8);
    }
    if ((0x81 < uVar12) && ((bVar15 & 1) == 0)) goto LAB_109e64748;
  }
  else {
LAB_109e64748:
    FUN_109e675a8(&uStack_6b8,&UNK_10f60cdc3,2,*(undefined4 *)(lStack_6b0 + 0x154));
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    bVar15 = *(byte *)(lStack_6b0 + 0xe4);
  }
  if (uVar13 == 0) {
    uVar13 = *(uint *)(lStack_6b0 + 0xe8);
  }
  if ((bVar15 & 1) == 0 && 0x81 < uVar13) {
    FUN_109e675a8(&uStack_6b8,&UNK_10f60cdd7,2,*(int *)(*(long *)(lStack_6b0 + 0x10) + 0x400) << 2);
  }
  if (((*(byte *)(lStack_6b0 + 0x3af) & 1) == 0) && ((*(byte *)(lStack_6b0 + 0x301) & 1) == 0)) {
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    if (uVar13 == 0) {
      uVar13 = *(uint *)(lStack_6b0 + 0xe8);
    }
    if ((0x1c1 < uVar13) && ((*(byte *)(lStack_6b0 + 0xe4) & 1) == 0)) goto LAB_109e647d4;
  }
  else {
LAB_109e647d4:
    FUN_109e675a8(&uStack_6b8,&UNK_10f60cdef,2,*(undefined4 *)(lStack_6b0 + 0x154));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60ce03,2,*(undefined4 *)(lStack_6b0 + 0x154));
  }
  if (((*(byte *)(lStack_6b0 + 0x377) & 1) == 0) && ((*(byte *)(lStack_6b0 + 0x3bb) & 1) == 0)) {
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    if (uVar13 == 0) {
      uVar13 = *(uint *)(lStack_6b0 + 0xe8);
    }
    uVar12 = 0x13f;
    if (*(char *)(lStack_6b0 + 0xe4) == '\0') {
      uVar12 = 0x95;
    }
    if (uVar12 < uVar13) goto LAB_109e64844;
  }
  else {
LAB_109e64844:
    FUN_109e675a8(&uStack_6b8,&UNK_10f60ce26,2,*(undefined4 *)(lStack_6b0 + 400));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60ce43,2,*(undefined4 *)(lStack_6b0 + 0x194));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60ce61,2,*(undefined4 *)(lStack_6b0 + 0x198));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60ce80,2,*(undefined4 *)(lStack_6b0 + 0x1a0));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60ce9e,2,*(undefined4 *)(lStack_6b0 + 0x1a4));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60cebe,2,*(undefined4 *)(lStack_6b0 + 0x1a8));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60cedb,2,*(undefined4 *)(lStack_6b0 + 0x1ac));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60ceff,2,*(undefined4 *)(lStack_6b0 + 0x1b0));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60cf1f,2,*(undefined4 *)(lStack_6b0 + 0x198));
  }
  if (bStack_6a0 == 1) {
    FUN_109e675a8(&uStack_6b8,&UNK_10f60cf3f,2,*(undefined4 *)(lStack_6b0 + 0x150));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60cf4c,2,*(undefined4 *)(lStack_6b0 + 0x154));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60cf5d,2,*(undefined4 *)(lStack_6b0 + 0x158));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60cf70,2,*(undefined4 *)(lStack_6b0 + 0x15c));
  }
  if ((*(byte *)(lStack_6b0 + 0x323) & 1) == 0) {
    bVar15 = *(byte *)(lStack_6b0 + 0xe4);
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    uVar12 = uVar13;
    if (uVar13 == 0) {
      uVar12 = *(uint *)(lStack_6b0 + 0xe8);
    }
    uVar19 = 0x135;
    if (bVar15 == 0) {
      uVar19 = 0x1a3;
    }
    if (uVar19 < uVar12) goto LAB_109e649f0;
  }
  else {
LAB_109e649f0:
    FUN_109e675a8(&uStack_6b8,&UNK_10f60cf84,2,*(undefined4 *)(lStack_6b0 + 0x1b4));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60cf9f,2,*(undefined4 *)(lStack_6b0 + 0x1c4));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60cfbc,2,*(undefined4 *)(lStack_6b0 + 0x1c8));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60cfd9,2,*(undefined4 *)(lStack_6b0 + 0x1cc));
    if (((*(byte *)(lStack_6b0 + 0x377) & 1) == 0) && ((*(byte *)(lStack_6b0 + 0x3bb) & 1) == 0)) {
      bVar15 = *(byte *)(lStack_6b0 + 0xe4);
      uVar13 = *(uint *)(lStack_6b0 + 0xec);
      uVar12 = uVar13;
      if (uVar13 == 0) {
        uVar12 = *(uint *)(lStack_6b0 + 0xe8);
      }
      uVar19 = 0x13f;
      if (bVar15 == 0) {
        uVar19 = 0x95;
      }
      if (uVar19 < uVar12) goto LAB_109e64a9c;
    }
    else {
LAB_109e64a9c:
      FUN_109e675a8(&uStack_6b8,&UNK_10f60cff5,2,*(undefined4 *)(lStack_6b0 + 0x1c0));
      uVar13 = *(uint *)(lStack_6b0 + 0xec);
      bVar15 = *(byte *)(lStack_6b0 + 0xe4);
    }
    uVar12 = uVar13;
    if (uVar13 == 0) {
      uVar12 = *(uint *)(lStack_6b0 + 0xe8);
    }
    uVar19 = 0x13f;
    if ((bVar15 & 1) == 0) {
      uVar19 = 0x6d;
    }
    if (uVar19 < uVar12) {
      FUN_109e675a8(&uStack_6b8,&UNK_10f60d012,2,*(undefined4 *)(lStack_6b0 + 0x1b8));
      FUN_109e675a8(&uStack_6b8,&UNK_10f60d032,2,*(undefined4 *)(lStack_6b0 + 0x1bc));
      uVar13 = *(uint *)(lStack_6b0 + 0xec);
      bVar15 = *(byte *)(lStack_6b0 + 0xe4);
    }
  }
  uVar12 = uVar13;
  if (uVar13 == 0) {
    uVar12 = *(uint *)(lStack_6b0 + 0xe8);
  }
  uVar19 = 0x135;
  if ((bVar15 & 1) == 0) {
    uVar19 = 0x1a3;
  }
  if (uVar19 < uVar12) {
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d055,2,*(undefined4 *)(lStack_6b0 + 0x1d0));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d076,2,*(undefined4 *)(lStack_6b0 + 0x1e0));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d099,2,*(undefined4 *)(lStack_6b0 + 0x1e4));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d0bc,2,*(undefined4 *)(lStack_6b0 + 0x1e8));
    if (((*(byte *)(lStack_6b0 + 0x377) & 1) == 0) && ((*(byte *)(lStack_6b0 + 0x3bb) & 1) == 0)) {
      bVar15 = *(byte *)(lStack_6b0 + 0xe4);
      uVar13 = *(uint *)(lStack_6b0 + 0xec);
      uVar12 = uVar13;
      if (uVar13 == 0) {
        uVar12 = *(uint *)(lStack_6b0 + 0xe8);
      }
      uVar19 = 0x13f;
      if (bVar15 == 0) {
        uVar19 = 0x95;
      }
      if (uVar19 < uVar12) goto LAB_109e64bf4;
    }
    else {
LAB_109e64bf4:
      FUN_109e675a8(&uStack_6b8,&UNK_10f60d0da,2,*(undefined4 *)(lStack_6b0 + 0x1dc));
      uVar13 = *(uint *)(lStack_6b0 + 0xec);
      bVar15 = *(byte *)(lStack_6b0 + 0xe4);
    }
    uVar12 = uVar13;
    if (uVar13 == 0) {
      uVar12 = *(uint *)(lStack_6b0 + 0xe8);
    }
    uVar19 = 0x13f;
    if ((bVar15 & 1) == 0) {
      uVar19 = 0x6d;
    }
    if (uVar19 < uVar12) {
      FUN_109e675a8(&uStack_6b8,&UNK_10f60d0fd,2,*(undefined4 *)(lStack_6b0 + 0x1d4));
      FUN_109e675a8(&uStack_6b8,&UNK_10f60d123,2,*(undefined4 *)(lStack_6b0 + 0x1d8));
      uVar13 = *(uint *)(lStack_6b0 + 0xec);
      bVar15 = *(byte *)(lStack_6b0 + 0xe4);
    }
  }
  if (uVar13 == 0) {
    uVar13 = *(uint *)(lStack_6b0 + 0xe8);
  }
  uVar12 = 0x135;
  if ((bVar15 & 1) == 0) {
    uVar12 = 0x1ad;
  }
  if ((uVar12 < uVar13) || (*(char *)(lStack_6b0 + 0x2fb) == '\x01')) {
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d14c,2,*(undefined4 *)(lStack_6b0 + 0x1ec));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d16e,2,*(undefined4 *)(lStack_6b0 + 0x1f0));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d18a,2,*(undefined4 *)(lStack_6b0 + 500));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d1a5,2,*(undefined4 *)(lStack_6b0 + 0x1f8));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d1c4,2,*(undefined4 *)(lStack_6b0 + 0x1fc));
    FUN_109e67458(&uStack_6b8,&UNK_10f60d1e3,*(undefined4 *)(lStack_6b0 + 0x200),
                  *(undefined4 *)(lStack_6b0 + 0x204),*(undefined4 *)(lStack_6b0 + 0x208));
    param_5 = (ulong)*(uint *)(lStack_6b0 + 0x214);
    FUN_109e67458(&uStack_6b8,&UNK_10f60d1ff,*(undefined4 *)(lStack_6b0 + 0x20c),
                  *(undefined4 *)(lStack_6b0 + 0x210));
  }
  if ((*(byte *)(lStack_6b0 + 0x309) & 1) == 0) {
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    if (uVar13 == 0) {
      uVar13 = *(uint *)(lStack_6b0 + 0xe8);
    }
    if ((0x1b7 < uVar13) && ((*(byte *)(lStack_6b0 + 0xe4) & 1) == 0)) goto LAB_109e64d98;
  }
  else {
LAB_109e64d98:
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d21a,2,*(undefined4 *)(lStack_6b0 + 0x17c));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d239,2,*(undefined4 *)(lStack_6b0 + 0x180));
  }
  if (((*(byte *)(lStack_6b0 + 0x32f) & 1) == 0) && ((*(byte *)(lStack_6b0 + 0x3cd) & 1) == 0)) {
    bVar15 = *(byte *)(lStack_6b0 + 0xe4);
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    uVar12 = uVar13;
    if (uVar13 == 0) {
      uVar12 = *(uint *)(lStack_6b0 + 0xe8);
    }
    uVar19 = 0x135;
    if (bVar15 == 0) {
      uVar19 = 0x1a3;
    }
    if (uVar19 < uVar12) goto LAB_109e64e0c;
  }
  else {
LAB_109e64e0c:
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d266,2,*(undefined4 *)(lStack_6b0 + 0x218));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d277,2,*(undefined4 *)(lStack_6b0 + 0x224));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d291,2,*(undefined4 *)(lStack_6b0 + 0x234));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d2ad,2,*(undefined4 *)(lStack_6b0 + 0x238));
    if (((*(byte *)(lStack_6b0 + 0x377) & 1) == 0) && ((*(byte *)(lStack_6b0 + 0x3bb) & 1) == 0)) {
      bVar15 = *(byte *)(lStack_6b0 + 0xe4);
      uVar13 = *(uint *)(lStack_6b0 + 0xec);
      if (uVar13 == 0) {
        uVar13 = *(uint *)(lStack_6b0 + 0xe8);
      }
      uVar12 = 0x13f;
      if (bVar15 == 0) {
        uVar12 = 0x95;
      }
      if (uVar12 < uVar13) goto LAB_109e64eb4;
    }
    else {
LAB_109e64eb4:
      FUN_109e675a8(&uStack_6b8,&UNK_10f60d2c9,2,*(undefined4 *)(lStack_6b0 + 0x230));
      bVar15 = *(byte *)(lStack_6b0 + 0xe4);
    }
    if ((bVar15 & 1) == 0) {
      FUN_109e675a8(&uStack_6b8,&UNK_10f60d2e5,2,*(undefined4 *)(lStack_6b0 + 0x21c));
      FUN_109e675a8(&uStack_6b8,&UNK_10f60d310,2,*(undefined4 *)(lStack_6b0 + 0x220));
    }
    if ((((*(byte *)(lStack_6b0 + 0x34b) & 1) == 0) && ((*(byte *)(lStack_6b0 + 0x389) & 1) == 0))
       && ((*(byte *)(lStack_6b0 + 0x3dd) & 1) == 0)) {
      bVar15 = *(byte *)(lStack_6b0 + 0xe4);
      uVar13 = *(uint *)(lStack_6b0 + 0xec);
      uVar12 = uVar13;
      if (uVar13 == 0) {
        uVar12 = *(uint *)(lStack_6b0 + 0xe8);
      }
      uVar19 = 0x13f;
      if (bVar15 == 0) {
        uVar19 = 399;
      }
      if (uVar12 <= uVar19) goto LAB_109e64f94;
    }
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d323,2,*(undefined4 *)(lStack_6b0 + 0x228));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d342,2,*(undefined4 *)(lStack_6b0 + 0x22c));
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    bVar15 = *(byte *)(lStack_6b0 + 0xe4);
  }
LAB_109e64f94:
  uVar12 = uVar13;
  if (uVar13 == 0) {
    uVar12 = *(uint *)(lStack_6b0 + 0xe8);
  }
  uVar19 = 0x135;
  if ((bVar15 & 1) == 0) {
    uVar19 = 0x1b7;
  }
  if ((uVar19 < uVar12) || (*(char *)(lStack_6b0 + 0x2f1) == '\x01')) {
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d364,2,*(undefined4 *)(lStack_6b0 + 0x21c));
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    bVar15 = *(byte *)(lStack_6b0 + 0xe4);
  }
  if (uVar13 == 0) {
    uVar13 = *(uint *)(lStack_6b0 + 0xe8);
  }
  if ((((0x199 < uVar13 & (bVar15 ^ 0xff)) != 0) || ((*(byte *)(lStack_6b0 + 0x35d) & 1) != 0)) ||
     (*(char *)(lStack_6b0 + 0x393) == '\x01')) {
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d388,1,*(undefined4 *)(lStack_6b0 + 0x23c));
  }
  if ((((*(byte *)(lStack_6b0 + 0x34b) & 1) == 0) && ((*(byte *)(lStack_6b0 + 0x389) & 1) == 0)) &&
     ((*(byte *)(lStack_6b0 + 0x3dd) & 1) == 0)) {
    bVar15 = *(byte *)(lStack_6b0 + 0xe4);
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    uVar12 = uVar13;
    if (uVar13 == 0) {
      uVar12 = *(uint *)(lStack_6b0 + 0xe8);
    }
    uVar19 = 0x13f;
    if (bVar15 == 0) {
      uVar19 = 399;
    }
    if (uVar19 < uVar12) goto LAB_109e65074;
  }
  else {
LAB_109e65074:
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d398,2,*(undefined4 *)(lStack_6b0 + 0x240));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d3ac,2,*(undefined4 *)(lStack_6b0 + 0x244));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d3bf,2,*(undefined4 *)(lStack_6b0 + 0x248));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d3e0,2,*(undefined4 *)(lStack_6b0 + 0x24c));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d402,2,*(undefined4 *)(lStack_6b0 + 0x250));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d425,2,*(undefined4 *)(lStack_6b0 + 0x254));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d449,2,*(undefined4 *)(lStack_6b0 + 600));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d46e,2,*(undefined4 *)(lStack_6b0 + 0x25c));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d494,2,*(undefined4 *)(lStack_6b0 + 0x260));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d4ae,2,*(undefined4 *)(lStack_6b0 + 0x264));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d4d5,2,*(undefined4 *)(lStack_6b0 + 0x268));
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d4f8,2,*(undefined4 *)(lStack_6b0 + 0x26c));
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    bVar15 = *(byte *)(lStack_6b0 + 0xe4);
  }
  if (uVar13 == 0) {
    uVar13 = *(uint *)(lStack_6b0 + 0xe8);
  }
  uVar12 = 0x13f;
  if ((bVar15 & 1) == 0) {
    uVar12 = 0x1c1;
  }
  if (((uVar12 < uVar13) || ((*(byte *)(lStack_6b0 + 0x37d) & 1) != 0)) ||
     (*(char *)(lStack_6b0 + 0x2f1) == '\x01')) {
    FUN_109e675a8(&uStack_6b8,&UNK_10f60d51e,2,*(undefined4 *)(lStack_6b0 + 0x270));
  }
  uVar13 = *(uint *)(lStack_6b0 + 0xec);
  if (uVar13 == 0) {
    uVar13 = *(uint *)(lStack_6b0 + 0xe8);
  }
  uVar12 = 0x13f;
  if (*(char *)(lStack_6b0 + 0xe4) == '\0') {
    uVar12 = 399;
  }
  if (((uVar12 < uVar13) || ((*(byte *)(lStack_6b0 + 0x31d) & 1) != 0)) ||
     (*(char *)(lStack_6b0 + 0x37d) == '\x01')) {
    FUN_109e67794(&uStack_6b8,puStack_690,3,&DAT_10f60c582);
  }
  lVar14 = *(long *)(lStack_6a8 + 8);
  FUN_109f61800(lVar14,&UNK_10f60c4d8);
  if (lVar14 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar14 + 0x10);
  }
  FUN_109e67794(&uStack_6b8,uVar8,0,&DAT_10f60c590);
  uVar21 = 0;
  do {
    uVar23 = uVar21;
    _snprintf(auStack_e8,0x80,&UNK_10f60d52c);
    puVar7 = &uStack_6b8;
    uVar12 = (uint)auStack_e8;
    uVar10 = 0;
    FUN_109e67794(puVar7,puStack_660);
    uVar16 = (undefined4)param_5;
    uVar13 = (int)uVar21 + 1;
    uVar21 = (ulong)uVar13;
  } while (uVar13 != 0x20);
  if ((bStack_6a0 & 1) != 0) {
    FUN_109e67794(&uStack_6b8,puStack_640,0,&DAT_10f60c6dc);
    FUN_109e67794(&uStack_6b8,puStack_640,0,&DAT_10f60c748);
    FUN_109e67794(&uStack_6b8,puStack_640,0,&DAT_10f603c6f);
    FUN_109e67794(&uStack_6b8,puStack_648,0,&DAT_10f60c893);
    FUN_109e67794(&uStack_6b8,puStack_640,0,&DAT_10f60c6ef);
    FUN_109e67794(&uStack_6b8,puStack_640,0,&DAT_10f60c75c);
    FUN_109e67794(&uStack_6b8,puStack_640,0,&DAT_10f60c7b8);
    FUN_109e67794(&uStack_6b8,puStack_640,0,&DAT_10f60c709);
    FUN_109e67794(&uStack_6b8,puStack_640,0,&DAT_10f60c777);
    FUN_109e67794(&uStack_6b8,puStack_640,0,&DAT_10f60c7dc);
    FUN_109e67794(&uStack_6b8,puStack_640,0,&DAT_10f60c725);
    FUN_109e67794(&uStack_6b8,puStack_640,0,&DAT_10f60c794);
    FUN_109e67794(&uStack_6b8,puStack_640,0,&DAT_10f60c802);
    FUN_109e67794(&uStack_6b8,puStack_678,0,&DAT_10f60c8a3);
    lVar14 = *(long *)(lStack_6a8 + 8);
    FUN_109f61800(lVar14,&UNK_10f60c532);
    if (lVar14 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar14 + 0x10);
    }
    FUN_109e67794(&uStack_6b8,uVar8,0,&DAT_10f60c5e4);
    FUN_109e67794(&uStack_6b8,puStack_660,0,&DAT_10f60c8b2);
    puVar9 = puStack_640;
    FUN_109ec69f4(puStack_640,*(undefined4 *)(lStack_6b0 + 0x15c),0);
    FUN_109e67794(&uStack_6b8,puVar9,0,&DAT_10f60c82f);
    FUN_109e67794(&uStack_6b8,puVar9,0,&DAT_10f60c840);
    FUN_109e67794(&uStack_6b8,puVar9,0,&DAT_10f60c858);
    FUN_109e67794(&uStack_6b8,puVar9,0,&DAT_10f60c872);
    puVar9 = puStack_660;
    FUN_109ec69f4(puStack_660,*(undefined4 *)(lStack_6b0 + 0x154),0);
    FUN_109e67794(&uStack_6b8,puVar9,0,&DAT_10f60c59e);
    lVar14 = *(long *)(lStack_6a8 + 8);
    FUN_109f61800(lVar14,&UNK_10f60c4f0);
    if (lVar14 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar14 + 0x10);
    }
    FUN_109e67794(&uStack_6b8,uVar8,0,&DAT_10f60c5ab);
    lVar14 = *(long *)(lStack_6a8 + 8);
    FUN_109f61800(lVar14,&UNK_10f60c503);
    if (lVar14 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar14 + 0x10);
    }
    FUN_109e67794(&uStack_6b8,uVar8,0,&DAT_10f60c5b4);
    FUN_109e67794(&uStack_6b8,uVar8,0,&DAT_10f60c5c5);
    lVar14 = *(long *)(lStack_6a8 + 8);
    FUN_109f61800(lVar14,&UNK_10f60c519);
    uVar8 = 0;
    if (lVar14 != 0) {
      uVar8 = *(undefined8 *)(lVar14 + 0x10);
    }
    FUN_109ec69f4();
    FUN_109e67794(&uStack_6b8,uVar8,0,&DAT_10f60c5d5);
    lVar14 = *(long *)(lStack_6a8 + 8);
    FUN_109f61800(lVar14,&UNK_10f60c54a);
    if (lVar14 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar14 + 0x10);
    }
    FUN_109e67794(&uStack_6b8,uVar8,0,&DAT_10f60c5f2);
    FUN_109e67794(&uStack_6b8,uVar8,0,&DAT_10f60c60c);
    lVar14 = *(long *)(lStack_6a8 + 8);
    FUN_109f61800(lVar14,&UNK_10f60c560);
    uVar8 = 0;
    if (lVar14 != 0) {
      uVar8 = *(undefined8 *)(lVar14 + 0x10);
    }
    FUN_109ec69f4();
    FUN_109e67794(&uStack_6b8,uVar8,0,&DAT_10f60c625);
    FUN_109e67794(&uStack_6b8,uVar8,0,&DAT_10f60c63a);
    puVar9 = puStack_660;
    FUN_109ec69f4(puStack_660,*(undefined4 *)(lStack_6b0 + 0x158),0);
    FUN_109e67794(&uStack_6b8,puVar9,0,&DAT_10f60c64e);
    puVar9 = puStack_660;
    FUN_109ec69f4(puStack_660,*(undefined4 *)(lStack_6b0 + 0x15c),0);
    FUN_109e67794(&uStack_6b8,puVar9,0,&DAT_10f60c661);
    FUN_109e67794(&uStack_6b8,puVar9,0,&DAT_10f60c66e);
    FUN_109e67794(&uStack_6b8,puVar9,0,&DAT_10f60c67b);
    FUN_109e67794(&uStack_6b8,puVar9,0,&DAT_10f60c688);
    FUN_109e67794(&uStack_6b8,puVar9,0,&DAT_10f60c695);
    FUN_109e67794(&uStack_6b8,puVar9,0,&DAT_10f60c6a5);
    FUN_109e67794(&uStack_6b8,puVar9,0,&DAT_10f60c6b5);
    FUN_109e67794(&uStack_6b8,puVar9,0,&DAT_10f60c6c5);
    lVar14 = *(long *)(lStack_6a8 + 8);
    FUN_109f61800(lVar14,&UNK_10f60c571);
    if (lVar14 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar14 + 0x10);
    }
    uVar12 = 0xf60c6d5;
    puVar7 = &uStack_6b8;
    uVar10 = 0;
    FUN_109e67794(puVar7,uVar8);
  }
  if (*(char *)(lStack_6b0 + 0x325) == '\x01') {
    FUN_109e67664(&uStack_6b8,&UNK_10f60d547,puStack_688,0,10,0,0,param_8,uVar23);
    FUN_109e67664(&uStack_6b8,&UNK_10f60d55a,puStack_688,0,10,1,0);
    FUN_109e67664(&uStack_6b8,&UNK_10f60d573,puStack_680,0,10,2,0);
    FUN_109e67664(&uStack_6b8,&UNK_10f60d588,puStack_680,0,10,3,0);
    FUN_109e67664(&uStack_6b8,&UNK_10f60d59d,puStack_680,0,10,4,0);
    FUN_109e67664(&uStack_6b8,&UNK_10f60d5b2,puStack_680,0,10,5,0);
    puVar7 = &uStack_6b8;
    uVar12 = 0;
    uVar16 = 10;
    puVar9 = puStack_680;
    FUN_109e67664(puVar7,&UNK_10f60d5c7);
    uVar10 = SUB84(puVar9,0);
  }
  if (*(char *)(lStack_6b0 + 0x365) == '\x01') {
    FUN_109e67664(&uStack_6b8,&UNK_10f60d5dc,puStack_688,0,10,0,0,param_8,uVar23);
    puVar7 = &uStack_6b8;
    uVar12 = 0;
    uVar16 = 10;
    puVar9 = puStack_688;
    FUN_109e67664(puVar7,&UNK_10f60d5ec);
    uVar10 = SUB84(puVar9,0);
  }
  if (*(char *)(lStack_6b0 + 0x363) == '\x01') {
    FUN_109e67664(&uStack_6b8,&UNK_10f60d604,puStack_650,0,10,2,0);
    FUN_109e67664(&uStack_6b8,&UNK_10f60d616,puStack_650,0,10,3,0);
    FUN_109e67664(&uStack_6b8,&UNK_10f60d628,puStack_650,0,10,4,0);
    FUN_109e67664(&uStack_6b8,&UNK_10f60d63a,puStack_650,0,10,5,0);
    puVar7 = &uStack_6b8;
    uVar12 = 0;
    uVar16 = 10;
    puVar9 = puStack_650;
    FUN_109e67664(puVar7,&UNK_10f60d64c);
    uVar10 = SUB84(puVar9,0);
  }
  lVar14 = *(long *)(lStack_6b0 + 0x10);
  iVar2 = *(int *)(lStack_6b0 + 0xf8);
  if (iVar2 == 4) goto LAB_109e65bac;
  uVar16 = 0xf606096;
  puVar7 = &uStack_6b8;
  uVar12 = 1;
  puVar9 = puStack_660;
  FUN_109e678cc(puVar7,0);
  uVar10 = SUB84(puVar9,0);
  if ((*(byte *)(lStack_6b0 + 0xe4) == 1) && (iVar17 = *(int *)(lStack_6b0 + 0xf8), iVar17 != 0)) {
    if (iVar17 == 3) {
      if (((*(byte *)(lStack_6b0 + 0x375) & 1) != 0) || ((*(byte *)(lStack_6b0 + 0x3b9) & 1) != 0))
      goto LAB_109e65aa4;
    }
    else {
      if (1 < iVar17 - 1U) goto LAB_109e65ae8;
      if (((*(byte *)(lStack_6b0 + 0x387) & 1) != 0) || (*(char *)(lStack_6b0 + 0x3db) == '\x01'))
      goto LAB_109e65aa4;
    }
  }
  else {
LAB_109e65aa4:
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    if (uVar13 == 0) {
      uVar13 = *(uint *)(lStack_6b0 + 0xe8);
    }
    uVar12 = 1;
    if ((299 < uVar13 & *(byte *)(lStack_6b0 + 0xe4)) == 0) {
      uVar12 = 2;
    }
    uVar16 = 0xf6087fb;
    puVar7 = &uStack_6b8;
    puVar9 = puStack_678;
    FUN_109e678cc(puVar7,0xc);
    uVar10 = SUB84(puVar9,0);
    iVar17 = *(int *)(lStack_6b0 + 0xf8);
LAB_109e65ae8:
    if (iVar17 == 0) {
      if ((((*(byte *)(lStack_6b0 + 0x3a3) & 1) != 0) || ((*(byte *)(lStack_6b0 + 0x33f) & 1) != 0))
         || (*(char *)(lStack_6b0 + 0x3fd) == '\x01')) {
        uVar16 = 0xf60d65e;
        puVar7 = &uStack_6b8;
        uVar12 = 0;
        puVar9 = puStack_690;
        FUN_109e678cc(puVar7,0x17);
        uVar10 = SUB84(puVar9,0);
      }
      if ((((*(byte *)(lStack_6b0 + 0x3a1) & 1) != 0) || ((*(byte *)(lStack_6b0 + 0x33f) & 1) != 0))
         || (*(char *)(lStack_6b0 + 0x3fd) == '\x01')) {
        uVar16 = 0xf607f02;
        puVar7 = &uStack_6b8;
        uVar12 = 1;
        puVar9 = puStack_690;
        FUN_109e678cc(puVar7,0x16);
        uVar10 = SUB84(puVar9,0);
        if (*(char *)(lStack_6b0 + 0x3fd) == '\x01') {
          puVar9 = puStack_690;
          FUN_109ec69f4(puStack_690,1,0);
          uVar10 = SUB84(puVar9,0);
          uVar16 = 0xf60d66f;
          puVar7 = &uStack_6b8;
          uVar12 = 0;
          FUN_109e678cc(puVar7,0x1f);
        }
      }
    }
  }
LAB_109e65bac:
  if (((*(byte *)(lStack_6b0 + 0x3af) & 1) == 0) && ((*(byte *)(lStack_6b0 + 0x3a7) & 1) == 0)) {
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    if (uVar13 == 0) {
      uVar13 = *(uint *)(lStack_6b0 + 0xe8);
    }
    if ((0x81 < uVar13) && ((*(byte *)(lStack_6b0 + 0xe4) & 1) == 0)) goto LAB_109e65bd8;
LAB_109e65c14:
    if ((*(byte *)(lStack_6b0 + 0x301) & 1) != 0) goto LAB_109e65c38;
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    if (uVar13 == 0) {
      uVar13 = *(uint *)(lStack_6b0 + 0xe8);
    }
    if ((0x1c1 < uVar13) && ((*(byte *)(lStack_6b0 + 0xe4) & 1) == 0)) goto LAB_109e65c38;
  }
  else {
LAB_109e65bd8:
    puVar9 = puStack_678;
    FUN_109ec69f4(puStack_678,0,0);
    uVar10 = SUB84(puVar9,0);
    uVar16 = 0xf60d67f;
    puVar7 = &uStack_6b8;
    uVar12 = 1;
    FUN_109e678cc(puVar7,0x11);
    if ((*(byte *)(lStack_6b0 + 0x3af) & 1) == 0) goto LAB_109e65c14;
LAB_109e65c38:
    puVar9 = puStack_678;
    FUN_109ec69f4(puStack_678,0,0);
    uVar10 = SUB84(puVar9,0);
    uVar16 = 0xf60d68f;
    puVar7 = &uStack_6b8;
    uVar12 = 1;
    FUN_109e678cc(puVar7,0x13);
  }
  if (bStack_6a0 == 1) {
    puVar9 = puStack_660;
    FUN_109ec69f4(puStack_660,0,0);
    FUN_109e678cc(&uStack_6b8,4,puVar9,0,&UNK_10f60d69f,0);
    FUN_109e678cc(&uStack_6b8,3,puStack_678,0,&UNK_10f60d6ab,0);
    if (*(int *)(lStack_6b0 + 0xf8) == 4) {
      FUN_109e678cc(&uStack_6b8,1,puStack_660,0,&UNK_10f608732,0);
      uVar16 = 0xf60873b;
      uVar8 = 2;
    }
    else {
      FUN_109e678cc(&uStack_6b8,0x10,puStack_660,0,&UNK_10f60d6bb,0);
      FUN_109e678cc(&uStack_6b8,1,puStack_660,0,&UNK_10f6086ea,0);
      FUN_109e678cc(&uStack_6b8,0xd,puStack_660,0,&UNK_10f6086f8,0);
      FUN_109e678cc(&uStack_6b8,2,puStack_660,0,&UNK_10f608705,0);
      uVar16 = 0xf60871c;
      uVar8 = 0xe;
    }
    puVar7 = &uStack_6b8;
    uVar12 = 0;
    puVar9 = puStack_660;
    FUN_109e678cc(puVar7,uVar8);
    uVar10 = SUB84(puVar9,0);
  }
  uVar13 = *(uint *)(lStack_6b0 + 0xf8);
  if (uVar13 - 1 < 2) {
    puVar7 = auStack_638;
    FUN_109ec7fc4(puVar7,uStack_398,0,0,&UNK_10f605f65);
    uVar10 = SUB84(puVar7,0);
    FUN_109ec69f4();
    puVar7 = &uStack_6b8;
    uVar12 = 0;
    uVar16 = 4;
    FUN_109e67664(puVar7,&UNK_10f60601e);
    uVar13 = *(uint *)(lStack_6b0 + 0xf8);
  }
  if (uVar13 == 3) {
    puVar7 = auStack_638;
    FUN_109ec7fc4(puVar7,uStack_398,0,0,&UNK_10f605f65);
    uVar10 = SUB84(puVar7,0);
    FUN_109ec69f4();
    puVar7 = &uStack_6b8;
    uVar12 = 0;
    uVar16 = 4;
    FUN_109e67664(puVar7,&UNK_10f60601e);
    uVar13 = *(uint *)(lStack_6b0 + 0xf8);
  }
  if (uVar13 == 1) {
    puVar7 = auStack_390;
    FUN_109ec7fc4(puVar7,uStack_f0,0,0,&UNK_10f605f65);
    uVar10 = SUB84(puVar7,0);
    FUN_109ec69f4();
    puVar7 = &uStack_6b8;
    uVar12 = 0;
    uVar16 = 5;
    FUN_109e67664(puVar7,&UNK_10f6060a2);
    uVar13 = *(uint *)(lStack_6b0 + 0xf8);
  }
  if ((uVar13 < 4) && (uVar13 != 1)) {
    uVar16 = 0xf605f65;
    puVar4 = auStack_390;
    uVar10 = 0;
    uVar12 = 0;
    FUN_109ec7fc4(puVar4,uStack_f0);
    puVar7 = puVar4;
    if (*(int *)(puVar4 + 2) != 0) {
      uVar21 = 0;
      lVar14 = lVar14 + (long)iVar2 * 0x28;
      puVar22 = (uint *)(puVar4[6] + 0x28);
      do {
        uVar10 = (undefined4)*(undefined8 *)(puVar22 + -10);
        uVar12 = *puVar22 >> 8 & 3;
        puVar5 = &uStack_6b8;
        uVar16 = 5;
        FUN_109e67664(puVar5,*(undefined8 *)(puVar22 + -8));
        uVar18 = *(uint *)(puVar5 + 8);
        uVar3 = (*puVar22 & 3) << 0xf;
        uVar13 = uVar18 & 0xfffe0000;
        *(uint *)(puVar5 + 8) = uVar13 | uVar18 & 0x7fff | uVar3;
        uVar19 = uVar18 & 1 | (*puVar22 >> 3 & 1) << 1;
        *(uint *)(puVar5 + 8) = uVar13 | uVar18 & 0x7ffc | uVar3 | uVar19;
        uVar19 = uVar19 | (*puVar22 >> 4 & 1) << 2;
        *(uint *)(puVar5 + 8) = uVar13 | uVar18 & 0x7ff8 | uVar3 | uVar19;
        *(uint *)(puVar5 + 8) = uVar13 | uVar18 & 0x7ff0 | uVar3 | uVar19 | (*puVar22 >> 7 & 1) << 3
        ;
        puVar7 = puVar5;
        FUN_109e232ac();
        uVar13 = 0;
        if ((puVar22[-6] == 0) && (uVar13 = 0, *(char *)(lVar14 + 0x752) != '\0')) {
          uVar13 = 0x20;
        }
        uVar19 = *(uint *)(puVar5 + 8);
        *(uint *)(puVar5 + 8) = uVar19 & 0xffffffdf | uVar13;
        if (puVar22[-6] == 0) {
          uVar18 = 0;
          if (*(char *)(lVar14 + 0x753) != '\0') {
            uVar18 = 0x40;
          }
        }
        else {
          uVar18 = 0;
        }
        *(uint *)(puVar5 + 8) = uVar18 | uVar19 & 0xffffff9f | uVar13;
        uVar21 = uVar21 + 1;
        puVar22 = puVar22 + 0xc;
      } while (uVar21 < *(uint *)(puVar4 + 2));
    }
  }
  iVar2 = *(int *)(param_2 + 0xf8);
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      uVar13 = *(uint *)(lStack_6b0 + 0xec);
      uVar19 = uVar13;
      if (uVar13 == 0) {
        uVar19 = *(uint *)(lStack_6b0 + 0xe8);
      }
      uVar18 = 299;
      if (*(char *)(lStack_6b0 + 0xe4) == '\0') {
        uVar18 = 0x81;
      }
      if ((uVar18 < uVar19) || (*(char *)(lStack_6b0 + 0x3bd) == '\x01')) {
        puVar7 = &uStack_6b8;
        uVar12 = 1;
        uVar16 = 10;
        puVar9 = puStack_690;
        FUN_109e67664(puVar7,&UNK_10f60d6c9);
        uVar10 = SUB84(puVar9,0);
        uVar13 = *(uint *)(lStack_6b0 + 0xec);
      }
      uVar19 = uVar13;
      if (uVar13 == 0) {
        uVar19 = *(uint *)(lStack_6b0 + 0xe8);
      }
      if ((299 < uVar19) &&
         (((*(byte *)(lStack_6b0 + 0x401) & 1) != 0 || (*(char *)(lStack_6b0 + 0x3ff) == '\x01'))))
      {
        puVar7 = &uStack_6b8;
        uVar12 = 2;
        uVar16 = 10;
        puVar9 = puStack_688;
        FUN_109e67664(puVar7,&UNK_10f60d6d5);
        uVar10 = SUB84(puVar9,0);
        uVar13 = *(uint *)(lStack_6b0 + 0xec);
      }
      if (uVar13 == 0) {
        uVar13 = *(uint *)(lStack_6b0 + 0xe8);
      }
      if ((0x1cb < uVar13) && ((*(byte *)(lStack_6b0 + 0xe4) & 1) == 0)) {
        FUN_109e67664(&uStack_6b8,&UNK_10f60d6e3,puStack_690,0,10,0xd,0);
        FUN_109e67664(&uStack_6b8,&UNK_10f60d6f1,puStack_690,0,10,0x10,0);
        puVar7 = &uStack_6b8;
        uVar12 = 0;
        uVar16 = 10;
        puVar9 = puStack_690;
        FUN_109e67664(puVar7,&UNK_10f60d701);
        uVar10 = SUB84(puVar9,0);
      }
      if (*(char *)(lStack_6b0 + 0x3b5) == '\x01') {
        uVar13 = *(uint *)(lStack_6b0 + 0xec);
        if (uVar13 == 0) {
          uVar13 = *(uint *)(lStack_6b0 + 0xe8);
        }
        if ((99 < uVar13) && (*(char *)(lStack_6b0 + 0xe4) != '\0')) {
          puVar7 = &uStack_6b8;
          uVar12 = 1;
          uVar16 = 10;
          puVar9 = puStack_690;
          FUN_109e67664(puVar7,&DAT_10f4330a7);
          uVar10 = SUB84(puVar9,0);
        }
      }
      if (*(char *)(lStack_6b0 + 0x307) == '\x01') {
        puVar7 = &uStack_6b8;
        uVar12 = 0;
        uVar16 = 10;
        puVar9 = puStack_690;
        FUN_109e67664(puVar7,&DAT_10f4330b8);
        uVar10 = SUB84(puVar9,0);
        if ((*(byte *)(lStack_6b0 + 0x307) & 1) == 0) goto LAB_109e66438;
LAB_109e6646c:
        puVar7 = &uStack_6b8;
        uVar12 = 1;
        uVar16 = 10;
        puVar9 = puStack_690;
        FUN_109e67664(puVar7,&UNK_10f60d70b);
        uVar10 = SUB84(puVar9,0);
      }
      else {
LAB_109e66438:
        uVar13 = *(uint *)(lStack_6b0 + 0xec);
        if (uVar13 == 0) {
          uVar13 = *(uint *)(lStack_6b0 + 0xe8);
        }
        uVar19 = 299;
        if (*(char *)(lStack_6b0 + 0xe4) == '\0') {
          uVar19 = 0x8b;
        }
        if ((uVar19 < uVar13) || (*(char *)(lStack_6b0 + 0x3bd) == '\x01')) goto LAB_109e6646c;
      }
      if (*(char *)(lStack_6b0 + 0x32b) == '\x01') {
        FUN_109e67664(&uStack_6b8,&UNK_10f60d719,puStack_690,0,10,0xd,0);
        FUN_109e67664(&uStack_6b8,&UNK_10f60d72a,puStack_690,0,10,0x10,0);
        puVar7 = &uStack_6b8;
        uVar12 = 0;
        uVar16 = 10;
        puVar9 = puStack_690;
        FUN_109e67664(puVar7,&UNK_10f60d73d);
        uVar10 = SUB84(puVar9,0);
      }
      if (bStack_6a0 != 1) goto LAB_109e6741c;
      FUN_109e67664(&uStack_6b8,&UNK_10f603c8c,puStack_660,0,4,0,0);
      FUN_109e67664(&uStack_6b8,&UNK_10f60d74a,puStack_668,0,4,1,0);
      FUN_109e67664(&uStack_6b8,&UNK_10f608732,puStack_660,0,4,2,0);
      FUN_109e67664(&uStack_6b8,&UNK_10f60873b,puStack_660,0,4,3,0);
      FUN_109e67664(&uStack_6b8,&UNK_10f60d754,puStack_660,0,4,6,0);
      FUN_109e67664(&uStack_6b8,&UNK_10f60d766,puStack_660,0,4,7,0);
      FUN_109e67664(&uStack_6b8,&UNK_10f60d778,puStack_660,0,4,8,0);
      FUN_109e67664(&uStack_6b8,&UNK_10f60d78a,puStack_660,0,4,9,0);
      FUN_109e67664(&uStack_6b8,&UNK_10f60d79c,puStack_660,0,4,10,0);
      FUN_109e67664(&uStack_6b8,&UNK_10f60d7ae,puStack_660,0,4,0xb,0);
      FUN_109e67664(&uStack_6b8,&UNK_10f60d7c0,puStack_660,0,4,0xc,0);
      FUN_109e67664(&uStack_6b8,&UNK_10f60d7d2,puStack_660,0,4,0xd,0);
      puVar9 = &UNK_10f60d7e4;
      uVar16 = 4;
      puVar6 = puStack_678;
    }
    else {
      if (iVar2 != 1) {
        if (iVar2 != 2) goto LAB_109e6741c;
        FUN_109e67664(&uStack_6b8,&UNK_10f60d7f0,puStack_690,1,10,0x22,0);
        FUN_109e67664(&uStack_6b8,&UNK_10f60d7ff,puStack_690,1,10,0x21,0);
        FUN_109e67664(&uStack_6b8,&UNK_10f60d869,puStack_668,1,10,0x20,0);
        cVar1 = *(char *)(*(long *)(lStack_6b0 + 0x10) + 0x4aa);
        puVar9 = puStack_678;
        FUN_109ec69f4(puStack_678,4,0);
        puVar7 = &uStack_6b8;
        if (cVar1 == '\x01') {
          FUN_109e67664(puVar7,&UNK_10f60d812,puVar9,1,4,0x1a,0);
          *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) | 8;
          puVar9 = puStack_678;
          FUN_109ec69f4(puStack_678,2,0);
          uVar10 = SUB84(puVar9,0);
          puVar7 = &uStack_6b8;
          uVar12 = 1;
          uVar16 = 4;
          FUN_109e67664(puVar7,&UNK_10f60d824);
          *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) | 8;
        }
        else {
          FUN_109e67664(puVar7,&UNK_10f60d812,puVar9,1,10,0x23,0);
          puVar9 = puStack_678;
          FUN_109ec69f4(puStack_678,2,0);
          uVar10 = SUB84(puVar9,0);
          puVar7 = &uStack_6b8;
          uVar12 = 1;
          uVar16 = 10;
          FUN_109e67664(puVar7,&UNK_10f60d824);
        }
        if (((*(byte *)(lStack_6b0 + 0x33f) & 1) == 0) && (*(char *)(lStack_6b0 + 0x3fd) != '\x01'))
        goto LAB_109e6741c;
        puVar7 = &uStack_6b8;
        FUN_109e67664(puVar7,&UNK_10f607f02,puStack_690,0,5,0x16,0);
        *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) & 0xfffe7fff | 0x10000;
        puVar7 = &uStack_6b8;
        uVar12 = 0;
        uVar16 = 5;
        puVar9 = puStack_690;
        FUN_109e67664(puVar7,&UNK_10f60d65e);
        uVar10 = SUB84(puVar9,0);
        *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) & 0xfffe7fff | 0x10000;
        if (*(char *)(lStack_6b0 + 0x3fd) != '\x01') goto LAB_109e6741c;
        puVar6 = puStack_690;
        FUN_109ec69f4(puStack_690,1,0);
        puVar9 = &UNK_10f60d66f;
        uVar12 = 0;
        goto LAB_109e66c80;
      }
      FUN_109e67664(&uStack_6b8,&UNK_10f60d7f0,puStack_690,1,10,0x22,0);
      FUN_109e67664(&uStack_6b8,&UNK_10f606900,puStack_690,1,10,0x12,0);
      FUN_109e67664(&uStack_6b8,&UNK_10f60d7ff,puStack_690,1,10,0x21,0);
      puVar9 = puStack_678;
      FUN_109ec69f4(puStack_678,4,0);
      puVar7 = &uStack_6b8;
      FUN_109e67664(puVar7,&UNK_10f60d812,puVar9,1,5,0x1a,0);
      *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) | 8;
      puVar9 = puStack_678;
      FUN_109ec69f4(puStack_678,2,0);
      uVar10 = SUB84(puVar9,0);
      puVar7 = &uStack_6b8;
      uVar12 = 1;
      uVar16 = 5;
      FUN_109e67664(puVar7,&UNK_10f60d824);
      *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) | 8;
      if (*(char *)(lStack_6b0 + 0x3c1) == '\x01') {
        puVar9 = puStack_660;
        FUN_109ec69f4(puStack_660,2,0);
        uVar10 = SUB84(puVar9,0);
        puVar7 = &uStack_6b8;
        uVar12 = 0;
        uVar16 = 5;
        FUN_109e67664(puVar7,&UNK_10f60d836);
        *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) | 8;
      }
      if (*(char *)(lStack_6b0 + 0x37b) == '\x01') {
        puVar9 = puStack_660;
        FUN_109ec69f4(puStack_660,2,0);
        uVar10 = SUB84(puVar9,0);
        puVar7 = &uStack_6b8;
        uVar12 = 1;
        uVar16 = 5;
        FUN_109e67664(puVar7,&UNK_10f60d848);
        *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) | 8;
      }
      uVar13 = *(uint *)(lStack_6b0 + 0xec);
      if (uVar13 == 0) {
        uVar13 = *(uint *)(lStack_6b0 + 0xe8);
      }
      if (((0x13f < uVar13) && ((*(byte *)(lStack_6b0 + 0xe4) & 1) != 0)) ||
         (*(char *)(lStack_6b0 + 0x2f3) == '\x01')) {
        puVar9 = puStack_660;
        FUN_109ec69f4(puStack_660,2,0);
        uVar10 = SUB84(puVar9,0);
        puVar7 = &uStack_6b8;
        uVar12 = 1;
        uVar16 = 5;
        FUN_109e67664(puVar7,&UNK_10f60d85a);
        *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) | 8;
      }
      if (*(char *)(lStack_6b0 + 0x3fd) != '\x01') goto LAB_109e6741c;
      FUN_109e67664(&uStack_6b8,&UNK_10f607f02,puStack_690,0,5,0xffffffff,0);
      FUN_109e67664(&uStack_6b8,&UNK_10f60d65e,puStack_690,0,5,0xffffffff,0);
      puVar6 = puStack_690;
      FUN_109ec69f4(puStack_690,1,0);
      puVar9 = &UNK_10f60d66f;
      uVar16 = 5;
    }
  }
  else {
    if (iVar2 == 3) {
      puVar7 = &uStack_6b8;
      FUN_109e67664(puVar7,&UNK_10f607f02,puStack_690,1,5,0x16,0);
      *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) & 0xfffe7fff | 0x10000;
      uVar13 = *(uint *)(lStack_6b0 + 0xec);
      if (uVar13 == 0) {
        uVar13 = *(uint *)(lStack_6b0 + 0xe8);
      }
      if ((((0x199 < uVar13) && (*(char *)(lStack_6b0 + 0xe4) == '\0')) ||
          ((*(byte *)(lStack_6b0 + 0x35d) & 1) != 0)) || (*(char *)(lStack_6b0 + 0x393) == '\x01'))
      {
        puVar7 = &uStack_6b8;
        FUN_109e67664(puVar7,&UNK_10f60d65e,puStack_690,1,5,0x17,0);
        *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) & 0xfffe7fff | 0x10000;
      }
      if (*(char *)(lStack_6b0 + 0x3fd) == '\x01') {
        puVar9 = puStack_690;
        FUN_109ec69f4(puStack_690,1,0);
        puVar7 = &uStack_6b8;
        FUN_109e67664(puVar7,&UNK_10f60d66f,puVar9,0,5,0x1f,0);
        *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) & 0xfffe7fff | 0x10000;
      }
      uVar13 = *(uint *)(lStack_6b0 + 0xec);
      if (uVar13 == 0) {
        uVar13 = *(uint *)(lStack_6b0 + 0xe8);
      }
      uVar12 = 0x13f;
      if (*(char *)(lStack_6b0 + 0xe4) == '\0') {
        uVar12 = 399;
      }
      if (((uVar12 < uVar13) || ((*(byte *)(lStack_6b0 + 0x315) & 1) != 0)) ||
         (((*(byte *)(lStack_6b0 + 0x377) & 1) != 0 || (*(char *)(lStack_6b0 + 0x3bb) == '\x01'))))
      {
        FUN_109e67664(&uStack_6b8,&UNK_10f606900,puStack_690,1,10,0x12,0);
      }
      puVar7 = &uStack_6b8;
      FUN_109e67664(puVar7,&UNK_10f60d876,puStack_690,1,4,0x15,0);
      *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) & 0xfffe7fff | 0x10000;
      puVar9 = &UNK_10f60d7f0;
      uVar12 = 1;
      puVar6 = puStack_690;
LAB_109e66c80:
      uVar10 = SUB84(puVar6,0);
      puVar7 = &uStack_6b8;
      uVar16 = 5;
      FUN_109e67664(puVar7,puVar9);
      *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) & 0xfffe7fff | 0x10000;
      goto LAB_109e6741c;
    }
    if (iVar2 != 4) {
      if (iVar2 != 5) goto LAB_109e6741c;
      FUN_109e67664(&uStack_6b8,&UNK_10f60d968,puStack_658,0,10,0x27,0);
      FUN_109e67664(&uStack_6b8,&UNK_10f60d97d,puStack_658,0,10,0x2c,0);
      FUN_109e67664(&uStack_6b8,&UNK_10f60d98c,puStack_658,0,10,0x2f,0);
      if (*(char *)(lStack_6b0 + 0x2fd) == '\x01') {
        FUN_109e67664(&uStack_6b8,&UNK_10f60d99d,puStack_658,0,10,0x30,0);
      }
      FUN_109e67664(&uStack_6b8,&UNK_10f60d9b2,puStack_658,0,10,0x29,0);
      puVar7 = &uStack_6b8;
      uVar12 = 0;
      uVar16 = 10;
      puVar9 = puStack_688;
      FUN_109e67664(puVar7,&UNK_10f60d9c8);
      uVar10 = SUB84(puVar9,0);
      if (*(char *)(lStack_6b0 + 0x365) != '\x01') goto LAB_109e6741c;
      FUN_109e67664(&uStack_6b8,&UNK_10f60d9e0,puStack_688,0,10,7,0);
      puVar9 = &UNK_10f60d9f0;
      uVar16 = 10;
      puVar6 = puStack_688;
      goto LAB_109e67414;
    }
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    if (uVar13 == 0) {
      uVar13 = *(uint *)(lStack_6b0 + 0xe8);
    }
    uVar16 = 1;
    if ((299 < uVar13 & *(byte *)(lStack_6b0 + 0xe4)) == 0) {
      uVar16 = 2;
    }
    if (*(char *)(*(long *)(lStack_6b0 + 0x10) + 0x4a6) == '\x01') {
      uVar8 = 10;
      uVar11 = 0x13;
    }
    else {
      uVar8 = 4;
      uVar11 = 0;
    }
    FUN_109e67664(&uStack_6b8,&UNK_10f62bc68,puStack_660,uVar16,uVar8,uVar11,0);
    puVar7 = &uStack_6b8;
    if (*(char *)(*(long *)(lStack_6b0 + 0x10) + 0x4a8) == '\x01') {
      uVar16 = 10;
    }
    else {
      uVar16 = 4;
    }
    uVar12 = 0;
    puVar9 = puStack_698;
    FUN_109e67664(puVar7,&UNK_10f60d887);
    uVar10 = SUB84(puVar9,0);
    *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) & 0xfffe7fff | 0x10000;
    uVar13 = *(uint *)(lStack_6b0 + 0xec);
    if (uVar13 == 0) {
      uVar13 = *(uint *)(lStack_6b0 + 0xe8);
    }
    uVar19 = 99;
    if (*(char *)(lStack_6b0 + 0xe4) == '\0') {
      uVar19 = 0x77;
    }
    if (uVar19 < uVar13) {
      puVar7 = &uStack_6b8;
      uVar12 = 2;
      if (*(char *)(*(long *)(lStack_6b0 + 0x10) + 0x4a7) == '\x01') {
        uVar16 = 10;
      }
      else {
        uVar16 = 4;
      }
      puVar9 = puStack_670;
      FUN_109e67664(puVar7,&UNK_10f60d896);
      uVar10 = SUB84(puVar9,0);
    }
    if (((*(byte *)(lStack_6b0 + 0x377) & 1) == 0) && ((*(byte *)(lStack_6b0 + 0x3bb) & 1) == 0)) {
      uVar13 = *(uint *)(lStack_6b0 + 0xec);
      if (uVar13 == 0) {
        uVar13 = *(uint *)(lStack_6b0 + 0xe8);
      }
      uVar19 = 0x13f;
      if (*(char *)(lStack_6b0 + 0xe4) == '\0') {
        uVar19 = 0x95;
      }
      if ((uVar19 < uVar13) || (*(char *)(lStack_6b0 + 0x3bd) == '\x01')) goto LAB_109e66db8;
    }
    else {
LAB_109e66db8:
      puVar7 = &uStack_6b8;
      uVar12 = 1;
      uVar16 = 4;
      puVar9 = puStack_690;
      FUN_109e67664(puVar7,&UNK_10f60d7f0);
      uVar10 = SUB84(puVar9,0);
      *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) & 0xfffe7fff | 0x10000;
    }
    if ((bStack_6a0 & 1) == 0) {
      uVar13 = *(uint *)(lStack_6b0 + 0xec);
      if (uVar13 == 0) {
        uVar13 = *(uint *)(lStack_6b0 + 0xe8);
      }
      uVar19 = 299;
      if (*(char *)(lStack_6b0 + 0xe4) == '\0') {
        uVar19 = 0x1a3;
      }
      if (uVar13 <= uVar19) goto LAB_109e66e20;
    }
    else {
LAB_109e66e20:
      FUN_109e67664(&uStack_6b8,&UNK_10f609618,puStack_660,2,5,2,0);
      puVar9 = puStack_660;
      FUN_109ec69f4(puStack_660,*(undefined4 *)(lStack_6b0 + 0x178),0);
      uVar10 = SUB84(puVar9,0);
      puVar7 = &uStack_6b8;
      uVar12 = 2;
      uVar16 = 5;
      FUN_109e67664(puVar7,&UNK_10f609625);
    }
    if ((*(byte *)(lStack_6b0 + 0x3a9) & 1) == 0) {
      if (((*(byte *)(lStack_6b0 + 0x3c5) & 1) != 0) || ((*(byte *)(lStack_6b0 + 0x3c7) & 1) != 0))
      {
        uVar13 = *(uint *)(lStack_6b0 + 0xec);
        if (uVar13 == 0) {
          uVar13 = *(uint *)(lStack_6b0 + 0xe8);
        }
        uVar19 = 299;
        if (*(char *)(lStack_6b0 + 0xe4) == '\0') {
          uVar19 = 0x81;
        }
        if (uVar13 <= uVar19) {
          puVar9 = puStack_660;
          FUN_109ec69f4(puStack_660,*(undefined4 *)(lStack_6b0 + 0x178),0);
          uVar10 = SUB84(puVar9,0);
          puVar7 = &uStack_6b8;
          uVar12 = 0;
          uVar16 = 5;
          FUN_109e67664(puVar7,&UNK_10f60711b);
          *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) | 1;
          *(ushort *)((long)puVar7 + 0x44) = *(ushort *)((long)puVar7 + 0x44) & 0xffe7 | 0x8410;
        }
      }
    }
    else {
      puVar7 = &uStack_6b8;
      uVar12 = 2;
      uVar16 = 4;
      puVar9 = puStack_660;
      FUN_109e67664(puVar7,&UNK_10f60712b);
      uVar10 = SUB84(puVar9,0);
    }
    if (*(char *)(lStack_6b0 + 0x3ab) == '\x01') {
      puVar7 = &uStack_6b8;
      FUN_109e67664(puVar7,&UNK_10f60713f,puStack_678,1,5,0,0);
      *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) | 1;
      *(ushort *)((long)puVar7 + 0x44) = *(ushort *)((long)puVar7 + 0x44) | 0x8400;
      puVar7 = &uStack_6b8;
      uVar12 = 3;
      uVar16 = 5;
      puVar9 = puStack_690;
      FUN_109e67664(puVar7,&UNK_10f607153);
      uVar10 = SUB84(puVar9,0);
      *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) | 1;
      *(ushort *)((long)puVar7 + 0x44) = *(ushort *)((long)puVar7 + 0x44) | 0x8400;
    }
    if (*(char *)(lStack_6b0 + 0xe4) == '\x01') {
      if (*(int *)(lStack_6b0 + 0xe8) == 100) {
        uVar13 = 299;
        if (*(char *)(lStack_6b0 + 0x3ad) == '\x01') {
          FUN_109e67978(&uStack_6b8,2,puStack_660,&UNK_10f609631);
          puVar9 = puStack_660;
          FUN_109ec69f4(puStack_660,*(undefined4 *)(lStack_6b0 + 0x184),0);
          uVar10 = SUB84(puVar9,0);
          uVar12 = 0xf60964a;
          puVar7 = &uStack_6b8;
          FUN_109e67978(puVar7,4);
          uVar13 = 299;
          if (*(char *)(lStack_6b0 + 0xe4) == '\0') {
            uVar13 = 0x6d;
          }
        }
      }
      else {
        uVar13 = 299;
      }
    }
    else {
      uVar13 = 0x6d;
    }
    uVar19 = *(uint *)(lStack_6b0 + 0xec);
    if (uVar19 == 0) {
      uVar19 = *(uint *)(lStack_6b0 + 0xe8);
    }
    if (uVar13 < uVar19) {
      puVar7 = &uStack_6b8;
      uVar12 = 1;
      uVar16 = 5;
      puVar9 = puStack_678;
      FUN_109e67664(puVar7,&UNK_10f607c49);
      uVar10 = SUB84(puVar9,0);
    }
    if (*(char *)(lStack_6b0 + 0x3b7) == '\x01') {
      puVar7 = &uStack_6b8;
      uVar12 = 0;
      uVar16 = 5;
      puVar9 = puStack_678;
      FUN_109e67664(puVar7,&UNK_10f60d8a4);
      uVar10 = SUB84(puVar9,0);
    }
    lVar14 = lStack_6b0;
    if (*(char *)(lStack_6b0 + 0x335) == '\x01') {
      puVar4 = &uStack_6b8;
      uVar8 = 0;
      uVar11 = 5;
      puVar9 = puStack_690;
      FUN_109e67664(puVar4,&UNK_10f60d8b4);
      lVar14 = lStack_6b0;
      uVar16 = (undefined4)uVar11;
      uVar10 = SUB84(puVar9,0);
      uVar12 = (uint)uVar8;
      puVar7 = puVar4;
      if (*(char *)(lStack_6b0 + 0x336) == '\x01') {
        lVar20 = 0;
        do {
          puVar7 = (undefined8 *)(&PTR_DAT_110b63968)[lVar20];
          _strcmp(puVar7,&DAT_10f60d8c9);
          uVar16 = (undefined4)uVar11;
          uVar10 = SUB84(puVar9,0);
          uVar12 = (uint)uVar8;
          if ((int)puVar7 == 0) goto LAB_109e67144;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 3);
        lVar20 = 0;
LAB_109e67144:
        *(char *)((long)puVar4 + 0x47) = (char)lVar20;
      }
    }
    if (*(char *)(lVar14 + 0x39b) == '\x01') {
      puVar4 = &uStack_6b8;
      uVar8 = 0;
      uVar11 = 5;
      puVar9 = puStack_690;
      FUN_109e67664(puVar4,&UNK_10f60d8e6);
      lVar14 = lStack_6b0;
      uVar16 = (undefined4)uVar11;
      uVar10 = SUB84(puVar9,0);
      uVar12 = (uint)uVar8;
      puVar7 = puVar4;
      if (*(char *)(lStack_6b0 + 0x39c) == '\x01') {
        lVar20 = 0;
        do {
          puVar7 = (undefined8 *)(&PTR_DAT_110b63968)[lVar20];
          _strcmp(puVar7,&DAT_10f60d8fb);
          uVar16 = (undefined4)uVar11;
          uVar10 = SUB84(puVar9,0);
          uVar12 = (uint)uVar8;
          if ((int)puVar7 == 0) goto LAB_109e671c0;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 3);
        lVar20 = 0;
LAB_109e671c0:
        *(char *)((long)puVar4 + 0x47) = (char)lVar20;
      }
    }
    bVar15 = *(byte *)(lVar14 + 0xe4);
    uVar19 = *(uint *)(lVar14 + 0xec);
    uVar13 = uVar19;
    if (uVar19 == 0) {
      uVar13 = *(uint *)(lVar14 + 0xe8);
    }
    uVar18 = 0x13f;
    if (bVar15 == 0) {
      uVar18 = 399;
    }
    if (((uVar18 < uVar13) || ((*(byte *)(lVar14 + 0x31d) & 1) != 0)) ||
       (*(char *)(lVar14 + 0x37d) == '\x01')) {
      FUN_109e67664(&uStack_6b8,&UNK_10f60d918,puStack_690,3,10,0x18,0);
      FUN_109e67664(&uStack_6b8,&UNK_10f60d924,puStack_670,2,10,0x19,0);
      puVar9 = puStack_690;
      FUN_109ec69f4(puStack_690,1,0);
      uVar10 = SUB84(puVar9,0);
      puVar7 = &uStack_6b8;
      uVar12 = 1;
      uVar16 = 5;
      FUN_109e67664(puVar7,&UNK_10f60d936);
      uVar19 = *(uint *)(lStack_6b0 + 0xec);
      bVar15 = *(byte *)(lStack_6b0 + 0xe4);
      lVar14 = lStack_6b0;
    }
    uVar13 = uVar19;
    if (uVar19 == 0) {
      uVar13 = *(uint *)(lVar14 + 0xe8);
    }
    uVar18 = 0x13f;
    if ((bVar15 & 1) == 0) {
      uVar18 = 399;
    }
    if (((uVar18 < uVar13) || ((*(byte *)(lVar14 + 0x315) & 1) != 0)) ||
       (*(char *)(lVar14 + 0x37d) == '\x01')) {
      puVar9 = puStack_690;
      FUN_109ec69f4(puStack_690,1,0);
      uVar10 = SUB84(puVar9,0);
      puVar7 = &uStack_6b8;
      uVar12 = 1;
      uVar16 = 10;
      FUN_109e67664(puVar7,&UNK_10f60d944);
      uVar19 = *(uint *)(lStack_6b0 + 0xec);
      bVar15 = *(byte *)(lStack_6b0 + 0xe4);
      lVar14 = lStack_6b0;
    }
    uVar13 = uVar19;
    if (uVar19 == 0) {
      uVar13 = *(uint *)(lVar14 + 0xe8);
    }
    uVar18 = 0x13f;
    if ((bVar15 & 1) == 0) {
      uVar18 = 0x1ad;
    }
    if (((uVar18 < uVar13) || ((*(byte *)(lVar14 + 0x311) & 1) != 0)) ||
       (((*(byte *)(lVar14 + 0x377) & 1) != 0 || (*(char *)(lVar14 + 0x3bb) == '\x01')))) {
      uVar16 = 0xf607f02;
      puVar7 = &uStack_6b8;
      uVar12 = 1;
      puVar9 = puStack_690;
      FUN_109e678cc(puVar7,0x16);
      uVar10 = SUB84(puVar9,0);
      uVar19 = *(uint *)(lStack_6b0 + 0xec);
      bVar15 = *(byte *)(lStack_6b0 + 0xe4);
      lVar14 = lStack_6b0;
    }
    uVar13 = uVar19;
    if (uVar19 == 0) {
      uVar13 = *(uint *)(lVar14 + 0xe8);
    }
    if ((((0x1ad < uVar13 & (bVar15 ^ 0xff)) != 0) || ((*(byte *)(lVar14 + 0x311) & 1) != 0)) ||
       (*(char *)(lVar14 + 0x393) == '\x01')) {
      uVar16 = 0xf60d65e;
      puVar7 = &uStack_6b8;
      uVar12 = 0;
      puVar9 = puStack_690;
      FUN_109e678cc(puVar7,0x17);
      uVar10 = SUB84(puVar9,0);
      uVar19 = *(uint *)(lStack_6b0 + 0xec);
      bVar15 = *(byte *)(lStack_6b0 + 0xe4);
      lVar14 = lStack_6b0;
    }
    if (uVar19 == 0) {
      uVar19 = *(uint *)(lVar14 + 0xe8);
    }
    uVar13 = 0x135;
    if ((bVar15 & 1) == 0) {
      uVar13 = 0x1c1;
    }
    if ((uVar19 <= uVar13) && (*(char *)(lVar14 + 0x2f1) != '\x01')) goto LAB_109e6741c;
    puVar9 = &UNK_10f60d954;
    uVar16 = 10;
    puVar6 = puStack_698;
  }
LAB_109e67414:
  uVar10 = SUB84(puVar6,0);
  puVar7 = &uStack_6b8;
  uVar12 = 0;
  FUN_109e67664(puVar7,puVar9);
LAB_109e6741c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  FUN_109e67664();
  puVar4 = puVar7;
  FUN_109f658b0();
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
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 3;
  *puVar4 = &PTR_DAT_110b63f80;
  puVar4[0x15] = 0;
  puVar4[4] = &DAT_10e05d998;
  *(undefined4 *)(puVar4 + 5) = uVar10;
  *(uint *)((long)puVar4 + 0x2c) = uVar12;
  *(undefined4 *)(puVar4 + 6) = uVar16;
  *(undefined8 *)((long)puVar4 + 0x3c) = 0;
  *(undefined8 *)((long)puVar4 + 0x34) = 0;
  *(undefined8 *)((long)puVar4 + 0x4c) = 0;
  *(undefined8 *)((long)puVar4 + 0x44) = 0;
  *(undefined8 *)((long)puVar4 + 0x5c) = 0;
  *(undefined8 *)((long)puVar4 + 0x54) = 0;
  *(undefined8 *)((long)puVar4 + 0x6c) = 0;
  *(undefined8 *)((long)puVar4 + 100) = 0;
  *(undefined8 *)((long)puVar4 + 0x7c) = 0;
  *(undefined8 *)((long)puVar4 + 0x74) = 0;
  *(undefined8 *)((long)puVar4 + 0x8c) = 0;
  *(undefined8 *)((long)puVar4 + 0x84) = 0;
  *(undefined8 *)((long)puVar4 + 0x9c) = 0;
  *(undefined8 *)((long)puVar4 + 0x94) = 0;
  *(undefined4 *)((long)puVar4 + 0xa4) = 0;
  puVar7[0xe] = puVar4;
  puVar4 = puVar7;
  FUN_109f658b0(puVar7,0xb0);
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
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 3;
  *puVar4 = &PTR_DAT_110b63f80;
  puVar4[0x15] = 0;
  puVar4[4] = &DAT_10e05d998;
  *(undefined4 *)(puVar4 + 5) = uVar10;
  *(uint *)((long)puVar4 + 0x2c) = uVar12;
  *(undefined4 *)(puVar4 + 6) = uVar16;
  *(undefined8 *)((long)puVar4 + 0x3c) = 0;
  *(undefined8 *)((long)puVar4 + 0x34) = 0;
  *(undefined8 *)((long)puVar4 + 0x4c) = 0;
  *(undefined8 *)((long)puVar4 + 0x44) = 0;
  *(undefined8 *)((long)puVar4 + 0x5c) = 0;
  *(undefined8 *)((long)puVar4 + 0x54) = 0;
  *(undefined8 *)((long)puVar4 + 0x6c) = 0;
  *(undefined8 *)((long)puVar4 + 100) = 0;
  *(undefined8 *)((long)puVar4 + 0x7c) = 0;
  *(undefined8 *)((long)puVar4 + 0x74) = 0;
  *(undefined8 *)((long)puVar4 + 0x8c) = 0;
  *(undefined8 *)((long)puVar4 + 0x84) = 0;
  *(undefined8 *)((long)puVar4 + 0x9c) = 0;
  *(undefined8 *)((long)puVar4 + 0x94) = 0;
  *(undefined4 *)((long)puVar4 + 0xa4) = 0;
  puVar7[0xf] = puVar4;
  *(uint *)(puVar7 + 8) = *(uint *)(puVar7 + 8) | 0x200000;
  return;
}



/* Entry: 109e67458; end: 109e675a7;  */

void FUN_109e67458(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  
  FUN_109e67664(param_1,param_2,&DAT_10e05d998,1,0,0xffffffff,0);
  puVar1 = param_1;
  FUN_109f658b0();
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
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
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 3;
  *puVar1 = &PTR_DAT_110b63f80;
  puVar1[0x15] = 0;
  puVar1[4] = &DAT_10e05d998;
  *(undefined4 *)(puVar1 + 5) = param_3;
  *(undefined4 *)((long)puVar1 + 0x2c) = param_4;
  *(undefined4 *)(puVar1 + 6) = param_5;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined8 *)((long)puVar1 + 0x34) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  *(undefined8 *)((long)puVar1 + 0x5c) = 0;
  *(undefined8 *)((long)puVar1 + 0x54) = 0;
  *(undefined8 *)((long)puVar1 + 0x6c) = 0;
  *(undefined8 *)((long)puVar1 + 100) = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  *(undefined8 *)((long)puVar1 + 0x74) = 0;
  *(undefined8 *)((long)puVar1 + 0x8c) = 0;
  *(undefined8 *)((long)puVar1 + 0x84) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined8 *)((long)puVar1 + 0x94) = 0;
  *(undefined4 *)((long)puVar1 + 0xa4) = 0;
  param_1[0xe] = puVar1;
  puVar1 = param_1;
  FUN_109f658b0(param_1,0xb0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
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
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 3;
  *puVar1 = &PTR_DAT_110b63f80;
  puVar1[0x15] = 0;
  puVar1[4] = &DAT_10e05d998;
  *(undefined4 *)(puVar1 + 5) = param_3;
  *(undefined4 *)((long)puVar1 + 0x2c) = param_4;
  *(undefined4 *)(puVar1 + 6) = param_5;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined8 *)((long)puVar1 + 0x34) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  *(undefined8 *)((long)puVar1 + 0x5c) = 0;
  *(undefined8 *)((long)puVar1 + 0x54) = 0;
  *(undefined8 *)((long)puVar1 + 0x6c) = 0;
  *(undefined8 *)((long)puVar1 + 100) = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  *(undefined8 *)((long)puVar1 + 0x74) = 0;
  *(undefined8 *)((long)puVar1 + 0x8c) = 0;
  *(undefined8 *)((long)puVar1 + 0x84) = 0;
  *(undefined8 *)((long)puVar1 + 0x9c) = 0;
  *(undefined8 *)((long)puVar1 + 0x94) = 0;
  *(undefined4 *)((long)puVar1 + 0xa4) = 0;
  param_1[0xf] = puVar1;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x200000;
  return;
}



/* Entry: 109e675a8; end: 109e67663;  */

void FUN_109e675a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  FUN_109e67664(param_1,param_2,&DAT_10e05d928,param_3,0,0xffffffff,0);
  puVar1 = param_1;
  FUN_109f658b0();
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
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
  func_0x000109ea9960();
  param_1[0xe] = puVar1;
  puVar1 = param_1;
  FUN_109f658b0(param_1,0xb0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
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
  func_0x000109ea9960();
  param_1[0xf] = puVar1;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x200000;
  return;
}



/* Entry: 109e67664; end: 109e67793;  */

undefined8 *
FUN_109e67664(long *param_1,undefined8 param_2,undefined8 param_3,short param_4,undefined8 param_5,
             int param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar3 = (undefined8 *)param_1[2];
  FUN_109f658b0(puVar3,0x90);
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
  FUN_109eaba7c(puVar3,param_3,param_2,param_5);
  uVar5 = *(uint *)(puVar3 + 8) & 0xfffff9ff;
  uVar2 = *(uint *)(puVar3 + 8) >> 0xb & 0xf;
  uVar1 = uVar5 | 0x401;
  if (10 < uVar2 || (1 << (ulong)uVar2 & 0x413U) == 0) {
    uVar1 = uVar5 | 0x400;
  }
  *(int *)(puVar3 + 10) = param_6;
  uVar5 = 0;
  if (-1 < param_6) {
    uVar5 = 0x20000;
  }
  *(uint *)(puVar3 + 8) = uVar1 & 0xfff87fff | uVar5 | param_7 << 0xf;
  if (*(char *)(param_1[1] + 0xe4) == '\x01') {
    *(ushort *)((long)puVar3 + 0x44) = *(ushort *)((long)puVar3 + 0x44) & 0xffe7 | param_4 << 3;
  }
  lVar4 = *param_1;
  plVar7 = puVar3 + 1;
  *plVar7 = lVar4 + 0x10;
  puVar6 = *(undefined8 **)(lVar4 + 0x18);
  puVar3[2] = puVar6;
  *puVar6 = plVar7;
  *(long **)(lVar4 + 0x18) = plVar7;
  FUN_109ea2118(param_1[2],puVar3);
  return puVar3;
}



/* Entry: 109e67794; end: 109e678cb;  */

void FUN_109e67794(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined **ppuVar9;
  long lVar10;
  
  FUN_109e67664(param_1,param_4,param_2,param_3,1,0xffffffff,0);
  iVar8 = 0xf60c582;
  _strcmp(&DAT_10f60c582,param_4);
  if (iVar8 == 0) {
    ppuVar9 = &PTR_DAT_110b5f850;
  }
  else {
    lVar10 = 0x49;
    ppuVar5 = &PTR_DAT_110b5f850;
    do {
      lVar10 = lVar10 + -1;
      if (lVar10 == 0) {
        ppuVar9 = (undefined **)0x0;
        break;
      }
      ppuVar9 = ppuVar5 + 3;
      puVar2 = ppuVar5[3];
      _strcmp(puVar2,param_4);
      ppuVar5 = ppuVar9;
    } while ((int)puVar2 != 0);
  }
  if (*(char *)(param_2 + 4) == '\x13') {
    iVar8 = *(int *)(param_2 + 0x10);
  }
  else {
    iVar8 = 1;
  }
  iVar4 = *(int *)(ppuVar9 + 2);
  puVar3 = param_1;
  FUN_109f658b0(param_1,(ulong)(uint)(iVar4 * iVar8) << 3);
  param_1[0x10] = puVar3;
  uVar1 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = iVar4 * iVar8;
  }
  *(short *)((long)param_1 + 0x4c) = (short)uVar1;
  if (iVar8 != 0) {
    iVar4 = 0;
    uVar6 = (ulong)*(uint *)(ppuVar9 + 2);
    do {
      if ((int)uVar6 != 0) {
        uVar7 = 0;
        lVar10 = 8;
        do {
          *puVar3 = *(undefined8 *)(ppuVar9[1] + lVar10);
          if (*(char *)(param_2 + 4) == '\x13') {
            *(short *)((long)puVar3 + 2) = (short)iVar4;
          }
          puVar3 = puVar3 + 1;
          uVar7 = uVar7 + 1;
          uVar6 = (ulong)*(uint *)(ppuVar9 + 2);
          lVar10 = lVar10 + 0x18;
        } while (uVar7 < uVar6);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != iVar8);
  }
  return;
}



/* Entry: 109e678cc; end: 109e67977;  */

long * FUN_109e678cc(long *param_1,int param_2,long param_3,int param_4,long param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  iVar2 = *(int *)(param_1[1] + 0xf8);
  if (iVar2 - 1U < 3) {
    uVar7 = *(uint *)(param_1 + 100);
    param_1[(ulong)uVar7 * 6 + 0x10] = param_3;
    param_1[(ulong)uVar7 * 6 + 0x11] = param_5;
    uVar3 = *(ushort *)((long)param_1 + (ulong)uVar7 * 0x30 + 0xaa);
    *(int *)(param_1 + (ulong)uVar7 * 6 + 0x12) = param_2;
    param_6 = param_6 | param_4 << 8;
    *(uint *)(param_1 + (ulong)uVar7 * 6 + 0x15) = param_6 | (uint)uVar3 << 0x10;
    param_1[(ulong)uVar7 * 6 + 0x14] = 0xffffffff;
    param_1[(ulong)uVar7 * 6 + 0x13] = -1;
    *(uint *)(param_1 + 100) = uVar7 + 1;
  }
  else {
    if (iVar2 == 4) {
      plVar5 = (long *)param_1[2];
      FUN_109f658b0(plVar5,0x90);
      if (plVar5 != (long *)0x0) {
        plVar5[0xf] = 0;
        plVar5[0xe] = 0;
        plVar5[0x11] = 0;
        plVar5[0x10] = 0;
        plVar5[0xb] = 0;
        plVar5[10] = 0;
        plVar5[0xd] = 0;
        plVar5[0xc] = 0;
        plVar5[7] = 0;
        plVar5[6] = 0;
        plVar5[9] = 0;
        plVar5[8] = 0;
        plVar5[3] = 0;
        plVar5[2] = 0;
        plVar5[5] = 0;
        plVar5[4] = 0;
        plVar5[1] = 0;
        *plVar5 = 0;
      }
      FUN_109eaba7c(plVar5,param_3,param_5,4);
      uVar7 = *(uint *)(plVar5 + 8) & 0xfffff9ff;
      uVar4 = *(uint *)(plVar5 + 8) >> 0xb & 0xf;
      uVar1 = uVar7 | 0x401;
      if (10 < uVar4 || (1 << (ulong)uVar4 & 0x413U) == 0) {
        uVar1 = uVar7 | 0x400;
      }
      *(int *)(plVar5 + 10) = param_2;
      uVar7 = 0;
      if (-1 < param_2) {
        uVar7 = 0x20000;
      }
      *(uint *)(plVar5 + 8) = uVar1 & 0xfff87fff | uVar7 | param_6 << 0xf;
      if (*(char *)(param_1[1] + 0xe4) == '\x01') {
        *(ushort *)((long)plVar5 + 0x44) =
             *(ushort *)((long)plVar5 + 0x44) & 0xffe7 | (ushort)(param_4 << 3);
      }
      lVar6 = *param_1;
      plVar9 = plVar5 + 1;
      *plVar9 = lVar6 + 0x10;
      puVar8 = *(undefined8 **)(lVar6 + 0x18);
      plVar5[2] = (long)puVar8;
      *puVar8 = plVar9;
      *(long **)(lVar6 + 0x18) = plVar9;
      FUN_109ea2118(param_1[2],plVar5);
      return plVar5;
    }
    if (iVar2 != 0) {
      return param_1;
    }
    param_6 = param_6 | param_4 << 8;
  }
  uVar7 = *(uint *)(param_1 + 0xb9);
  param_1[(ulong)uVar7 * 6 + 0x65] = param_3;
  param_1[(ulong)uVar7 * 6 + 0x66] = param_5;
  uVar3 = *(ushort *)((long)param_1 + (ulong)uVar7 * 0x30 + 0x352);
  *(int *)(param_1 + (ulong)uVar7 * 6 + 0x67) = param_2;
  *(uint *)(param_1 + (ulong)uVar7 * 6 + 0x6a) = param_6 | (uint)uVar3 << 0x10;
  param_1[(ulong)uVar7 * 6 + 0x69] = 0xffffffff;
  param_1[(ulong)uVar7 * 6 + 0x68] = -1;
  *(uint *)(param_1 + 0xb9) = uVar7 + 1;
  return param_1;
}



/* Entry: 109e67978; end: 109e67a7f;  */

bool FUN_109e67978(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  
  puVar6 = (undefined8 *)param_1[2];
  FUN_109f658b0(puVar6,0x90);
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
  FUN_109eaba7c(puVar6,param_3,param_4,5);
  uVar1 = *(uint *)(puVar6 + 8) & 0xfffff9ff;
  uVar4 = *(uint *)(puVar6 + 8) >> 0xb & 0xf;
  uVar2 = uVar1 | 0x401;
  if (10 < uVar4 || (1 << (ulong)uVar4 & 0x413U) == 0) {
    uVar2 = uVar1 | 0x400;
  }
  *(undefined4 *)(puVar6 + 10) = param_2;
  *(uint *)(puVar6 + 8) = uVar2 | 0x60000;
  uVar3 = *(ushort *)((long)puVar6 + 0x44);
  *(ushort *)((long)puVar6 + 0x44) = uVar3 | 4;
  if (*(char *)(param_1[1] + 0xe4) == '\x01') {
    *(ushort *)((long)puVar6 + 0x44) = uVar3 & 0xffe7 | 0x14;
  }
  lVar10 = *param_1;
  plVar8 = puVar6 + 1;
  *plVar8 = lVar10 + 0x10;
  puVar11 = *(undefined8 **)(lVar10 + 0x18);
  puVar6[2] = puVar11;
  *puVar11 = plVar8;
  *(long **)(lVar10 + 0x18) = plVar8;
  pcVar7 = (char *)param_1[2];
  if (*pcVar7 == '\x01') {
    plVar8 = *(long **)(pcVar7 + 8);
    FUN_109f61800(plVar8,puVar6[5]);
    uVar9 = *(undefined8 *)(pcVar7 + 8);
    FUN_109f61798(uVar9,puVar6[5]);
    if ((int)uVar9 == 0) {
      if ((*plVar8 != 0) || (plVar8[2] != 0)) {
        return false;
      }
      *plVar8 = (long)puVar6;
    }
    else {
      puVar11 = *(undefined8 **)(pcVar7 + 0x18);
      FUN_109f6650c(puVar11,0x40);
      *puVar11 = puVar6;
      puVar11[2] = 0;
      puVar11[1] = 0;
      puVar11[4] = 0;
      puVar11[3] = 0;
      puVar11[6] = 0;
      puVar11[5] = 0;
      puVar11[7] = 0;
      if (plVar8 != (long *)0x0) {
        puVar11[1] = plVar8[1];
      }
      FUN_109f61854(*(undefined8 *)(pcVar7 + 8),puVar6[5],puVar11);
    }
    bVar5 = true;
  }
  else {
    puVar11 = *(undefined8 **)(pcVar7 + 0x18);
    FUN_109f6650c(puVar11,0x40);
    *puVar11 = puVar6;
    puVar11[2] = 0;
    puVar11[1] = 0;
    puVar11[4] = 0;
    puVar11[3] = 0;
    puVar11[6] = 0;
    puVar11[5] = 0;
    puVar11[7] = 0;
    uVar9 = *(undefined8 *)(pcVar7 + 8);
    FUN_109f61854(uVar9,puVar6[5],puVar11);
    bVar5 = (int)uVar9 == 0;
  }
  return bVar5;
}



/* Entry: 109e67a80; end: 109e67f47;  */

void FUN_109e67a80(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lStack_78;
  
  puVar3 = (undefined8 *)0x30;
  _malloc();
  if (puVar3 == (undefined8 *)0x0) {
    plVar13 = (long *)0x0;
  }
  else {
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    plVar13 = puVar3 + 6;
  }
  plVar4 = plVar13;
  FUN_109f64c74(plVar13,0x109f65648,FUN_109f65684);
  plVar15 = *(long **)(param_2 + 0x178);
  for (plVar5 = (long *)**(long **)(param_2 + 0x178); plVar5 != (long *)0x0;
      plVar5 = (long *)*plVar5) {
    lVar12 = plVar15[6];
    if (lVar12 != 0) {
      do {
        plVar5 = plVar13;
        FUN_109e67f48(plVar13,*(undefined8 *)(lVar12 + 0x20),plVar4);
        lVar12 = *(long *)(lVar12 + 0x30);
        if (lVar12 != 0) {
          do {
            plVar2 = *(long **)(lVar12 + 0x20);
            for (plVar8 = (long *)**(long **)(lVar12 + 0x20); plVar8 != (long *)0x0;
                plVar8 = (long *)*plVar8) {
              if (*(int *)(plVar2 + 3) == 2) {
                plVar8 = plVar13;
                FUN_109e67f48(plVar13,plVar2[5],plVar4);
                plVar6 = plVar13;
                FUN_109f658b0(plVar13,0x18);
                plVar6[2] = (long)plVar8;
                lVar9 = plVar5[1];
                *plVar6 = lVar9;
                plVar6[1] = (long)(plVar5 + 1);
                *(long **)(lVar9 + 8) = plVar6;
                plVar5[1] = (long)plVar6;
                plVar6 = plVar13;
                FUN_109f658b0(plVar13,0x18);
                plVar8 = plVar8 + 3;
                lVar9 = *plVar8;
                plVar6[1] = (long)plVar8;
                plVar6[2] = (long)plVar5;
                *plVar6 = lVar9;
                *(long **)(lVar9 + 8) = plVar6;
                *plVar8 = (long)plVar6;
                plVar8 = (long *)*plVar2;
              }
              plVar2 = plVar8;
            }
            FUN_109ecc434();
          } while (lVar12 != 0);
        }
        plVar15 = (long *)*plVar15;
        plVar5 = (long *)*plVar15;
        while( true ) {
          if (plVar5 == (long *)0x0) goto LAB_109e67b10;
          lVar12 = plVar15[6];
          if (lVar12 != 0) break;
          plVar15 = plVar5;
          plVar5 = (long *)*plVar5;
        }
      } while( true );
    }
    plVar15 = plVar5;
  }
LAB_109e67b10:
  lVar12 = *plVar4;
  uVar10 = (ulong)*(uint *)(plVar4 + 4);
LAB_109e67b24:
  if (uVar10 != 0) {
    lVar11 = uVar10 * 0x18;
    lVar17 = lVar12 + uVar10 * 0x18;
    lVar9 = lVar12;
    while ((lVar14 = *(long *)(lVar9 + 8), lVar14 == 0 || (lVar14 == plVar4[3]))) {
      lVar9 = lVar9 + 0x18;
      lVar11 = lVar11 + -0x18;
      if (lVar11 == 0) goto LAB_109e67c88;
    }
    bVar7 = false;
    do {
      lVar12 = *(long *)(lVar9 + 0x10);
      if (*(long **)(lVar12 + 0x20) == (long *)(lVar12 + 0x18)) {
LAB_109e67bb4:
        lVar17 = *(long *)(lVar12 + 0x10);
        while (lVar17 != lVar12 + 8) {
          lVar11 = *(long *)(lVar17 + 8);
          lVar1 = *(long *)(lVar17 + 0x10);
          plVar15 = *(long **)(lVar1 + 0x20);
          while (plVar5 = plVar15, lVar17 = lVar11, plVar5 != (long *)(lVar1 + 0x18)) {
            plVar15 = (long *)plVar5[1];
            if (plVar5[2] == lVar12) {
              lVar17 = *plVar5;
              *(long **)(lVar17 + 8) = plVar15;
              *plVar15 = lVar17;
              *plVar5 = 0;
              plVar5[1] = 0;
            }
          }
        }
        lVar12 = lVar14;
        (*(code *)plVar4[1])(lVar14);
        plVar15 = plVar4;
        FUN_109f64fdc(plVar4,lVar12,lVar14);
        if (plVar15 != (long *)0x0) {
          plVar15[1] = plVar4[3];
          plVar4[8] = CONCAT44((int)((ulong)plVar4[8] >> 0x20) + 1,(int)plVar4[8] + -1);
        }
        bVar7 = true;
      }
      else {
        plVar15 = *(long **)(lVar12 + 0x20);
        if (*(long *)(lVar12 + 0x10) == lVar12 + 8) {
          do {
            lVar17 = *plVar15;
            plVar5 = (long *)plVar15[1];
            *(long **)(lVar17 + 8) = plVar5;
            *plVar5 = lVar17;
            *plVar15 = 0;
            plVar15[1] = 0;
            FUN_109f65aa4(plVar15 + -6);
            FUN_109f65ae0(plVar15 + -6);
            plVar15 = plVar5;
          } while (plVar5 != (long *)(lVar12 + 0x18));
          goto LAB_109e67bb4;
        }
      }
      lVar12 = *plVar4;
      uVar10 = (ulong)*(uint *)(plVar4 + 4);
      lVar17 = lVar9;
      do {
        lVar9 = lVar17 + 0x18;
        if (lVar9 == lVar12 + uVar10 * 0x18) {
          if (bVar7) goto LAB_109e67b24;
          if (uVar10 == 0) goto LAB_109e67ca8;
          lVar17 = lVar12 + uVar10 * 0x18;
          goto LAB_109e67c88;
        }
        lVar14 = *(long *)(lVar17 + 0x20);
        lVar17 = lVar9;
      } while ((lVar14 == 0) || (lVar14 == plVar4[3]));
    } while( true );
  }
  goto LAB_109e67ca8;
  while (lVar12 = lVar12 + 0x18, lVar12 != lVar17) {
LAB_109e67c88:
    if ((*(long *)(lVar12 + 8) != 0) && (*(long *)(lVar12 + 8) != plVar4[3])) {
      do {
        lVar17 = **(long **)(lVar12 + 0x10);
        lStack_78 = 0;
        lVar9 = *(long *)(lVar17 + 0x28);
        if ((lVar9 == 0) || (*(char *)(lVar9 + 2) != '\x01')) {
          uVar10 = 0;
        }
        else {
          if ((*(byte *)(*(long *)(lVar9 + 8) + 0xc) >> 1 & 1) == 0) {
            FUN_109eca058();
          }
          lVar9 = 0;
          FUN_109f65d74(0,&UNK_10f6038cb);
          uVar10 = 1;
          lStack_78 = lVar9;
        }
        FUN_109f65e1c(&lStack_78,&UNK_10f60da23);
        if (uVar10 < *(uint *)(lVar17 + 0x20)) {
          uVar16 = uVar10 << 4 | 8;
          do {
            if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x28) + uVar16) + 0xc) >> 1 & 1) == 0) {
              FUN_109eca058();
            }
            FUN_109f65e1c(&lStack_78,&UNK_10f48da3e);
            uVar10 = uVar10 + 1;
            uVar16 = uVar16 + 0x10;
          } while (uVar10 < *(uint *)(lVar17 + 0x20));
        }
        FUN_109f65cf8(&lStack_78,&DAT_10f684600,1);
        lVar9 = lStack_78;
        func_0x000109eb844c(param_1,&UNK_10f60d9fe);
        if (lVar9 != 0) {
          lVar9 = lVar9 + -0x30;
          FUN_109f65aa4(lVar9);
          FUN_109f65ae0(lVar9);
        }
        lVar9 = lVar12;
        do {
          lVar12 = lVar9 + 0x18;
          if (lVar12 == *plVar4 + (ulong)*(uint *)(plVar4 + 4) * 0x18) goto LAB_109e67ca8;
          plVar15 = (long *)(lVar9 + 0x20);
          lVar9 = lVar12;
        } while ((*plVar15 == 0) || (*plVar15 == plVar4[3]));
      } while( true );
    }
  }
LAB_109e67ca8:
  if (plVar13 == (long *)0x0) {
    return;
  }
  FUN_109f65aa4(plVar13 + -6);
  lVar12 = plVar13[-5];
  while (lVar12 != 0) {
    plVar13[-5] = *(long *)(lVar12 + 0x18);
    FUN_109f65ae0();
    lVar12 = plVar13[-5];
  }
  if ((code *)plVar13[-2] != (code *)0x0) {
    (*(code *)plVar13[-2])(plVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(plVar13 + -6);
  return;
}



/* Entry: 109e67f48; end: 109e67fe3;  */

undefined8 * FUN_109e67f48(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  (**(code **)(param_3 + 8))(param_2);
  lVar2 = param_3;
  FUN_109f64fdc(param_3,uVar1,param_2);
  if (lVar2 == 0) {
    FUN_109f658b0(param_1,0x28);
    param_1[3] = param_1 + 3;
    param_1[4] = param_1 + 3;
    *param_1 = param_2;
    param_1[1] = param_1 + 1;
    param_1[2] = param_1 + 1;
    uVar1 = param_2;
    (**(code **)(param_3 + 8))(param_2);
    func_0x000109f650c0(param_3,uVar1,param_2,param_1);
  }
  else {
    param_1 = *(undefined8 **)(lVar2 + 0x10);
  }
  return param_1;
}



/* Entry: 109e67fe4; end: 109e6830b;  */

long * FUN_109e67fe4(long *param_1,long *param_2)

{
  int *piVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long *plStack_98;
  ulong uStack_90;
  uint uStack_84;
  long alStack_80 [4];
  
  alStack_80[3] = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_80[0] = 0;
  alStack_80[1] = 0;
  alStack_80[2] = 0;
  uVar5 = (ulong)*(uint *)(param_1 + 0xda);
  puVar9 = &uStack_84;
  FUN_109e6830c();
  uVar20 = (ulong)uStack_84;
  plVar6 = (long *)param_2[0xd];
  lVar8 = uVar20 << 5;
  func_0x000109f6590c();
  lVar10 = param_2[0xd];
  *(long **)(lVar10 + 0x40) = plVar6;
  *(uint *)(lVar10 + 0x48) = uStack_84;
  uVar11 = (ulong)*(uint *)(param_1 + 0xda);
  plStack_98 = param_1;
  uStack_90 = uVar5;
  if (*(uint *)(param_1 + 0xda) != 0) {
    uVar21 = 0;
    uVar22 = 0;
    lVar10 = uVar5 + 0x10;
    do {
      param_1 = (long *)(uVar5 + uVar21 * 0x30);
      lVar13 = param_1[5];
      if ((int)lVar13 != 0) {
        plVar6 = *(long **)(param_2[0xd] + 0x40);
        puVar2 = (ulong *)(plVar6 + uVar22 * 4);
        *(int *)((long)puVar2 + 0xc) = (int)uVar21;
        *(int *)(puVar2 + 2) = (int)lVar13;
        lVar8 = (ulong)*(uint *)(param_1 + 1) << 2;
        func_0x000109f6590c();
        lVar13 = param_1[1];
        *puVar2 = (ulong)plVar6;
        *(int *)(puVar2 + 1) = (int)lVar13;
        if ((int)lVar13 != 0) {
          uVar5 = 0;
          lVar13 = *param_1;
          lVar14 = *(long *)(param_2[0xd] + 0x20);
          do {
            puVar16 = (uint *)(lVar13 + uVar5 * 0x10);
            lVar17 = *(long *)(puVar16 + 2);
            uVar19 = *puVar16;
            lVar15 = lVar14 + (ulong)uVar19 * 0x78;
            *(uint *)((long)plVar6 + uVar5 * 4) = uVar19;
            *(int *)(lVar15 + 0x5c) = (int)uVar22;
            *(undefined4 *)(lVar15 + 0x4c) = *(undefined4 *)(lVar17 + 0x48);
            lVar18 = *(long *)(lVar17 + 0x10);
            lVar17 = lVar18;
            if (*(char *)(lVar18 + 4) == '\x13') {
              do {
                lVar17 = *(long *)(lVar17 + 0x30);
                uVar19 = (uint)*(byte *)(lVar17 + 4);
              } while (*(byte *)(lVar17 + 4) == 0x13);
              iVar23 = 1;
              while ((uVar19 & 0xff) == 0x13) {
                piVar1 = (int *)(lVar17 + 0x10);
                lVar17 = *(long *)(lVar17 + 0x30);
                iVar23 = *piVar1 * iVar23;
                uVar19 = *(uint *)(lVar17 + 4);
              }
              iVar24 = 4;
              if ((uVar19 & 0xff) != 0x10) {
                iVar24 = 0;
              }
              iVar24 = iVar24 * iVar23;
            }
            else {
              iVar24 = 0;
            }
            *(int *)(lVar15 + 0x54) = iVar24;
            if ((*(byte *)(lVar18 + 0xe) < 2) || (2 < *(byte *)(lVar18 + 4) - 2)) {
              *(undefined4 *)(lVar15 + 0x50) = 0;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(param_1 + 1));
        }
        lVar13 = 0;
        do {
          bVar4 = *(int *)(lVar10 + lVar13 * 4) != 0;
          if (bVar4) {
            *(int *)((long)alStack_80 + lVar13 * 4) = *(int *)((long)alStack_80 + lVar13 * 4) + 1;
          }
          *(bool *)((long)puVar2 + lVar13 + 0x14) = bVar4;
          lVar13 = lVar13 + 1;
        } while (lVar13 != 6);
        uVar22 = (ulong)((int)uVar22 + 1);
        uVar11 = (ulong)*(uint *)(plStack_98 + 0xda);
        uVar5 = uStack_90;
      }
      uVar21 = uVar21 + 1;
      lVar10 = lVar10 + 0x30;
    } while (uVar21 < uVar11);
  }
  lVar10 = 0;
  plVar12 = param_2 + 0x15;
  do {
    lVar13 = plVar12[lVar10];
    if (lVar13 != 0) {
      uVar19 = *(uint *)((long)alStack_80 + lVar10 * 4);
      if (uVar19 != 0) {
        param_1 = *(long **)(lVar13 + 0x28);
        *(char *)((long)param_1 + 0x35) = (char)uVar19;
        lVar8 = (ulong)uVar19 << 3;
        plVar6 = param_1;
        func_0x000109f6590c();
        param_1[0xb7] = (long)plVar6;
        *(char *)(param_1[0x2c] + 0x65) = (char)uVar19;
        if (uStack_84 != 0) {
          uVar5 = 0;
          uVar11 = 0;
          do {
            puVar3 = (undefined8 *)(*(long *)(param_2[0xd] + 0x40) + uVar5 * 0x20);
            if (*(char *)((long)puVar3 + lVar10 + 0x14) != '\0') {
              *(undefined8 **)(param_1[0xb7] + uVar11 * 8) = puVar3;
              uVar21 = (ulong)*(uint *)(puVar3 + 1);
              if (*(uint *)(puVar3 + 1) != 0) {
                lVar13 = *(long *)(param_2[0xd] + 0x20);
                puVar16 = (uint *)*puVar3;
                do {
                  lVar14 = lVar13 + lVar10 * 2 + (ulong)*puVar16 * 0x78;
                  *(char *)(lVar14 + 0x24) = (char)uVar11;
                  *(undefined1 *)(lVar14 + 0x25) = 1;
                  uVar21 = uVar21 - 1;
                  puVar16 = puVar16 + 1;
                } while (uVar21 != 0);
              }
              uVar11 = (ulong)((int)uVar11 + 1);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 != uVar20);
        }
      }
    }
    uVar5 = uStack_90;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 6);
  if (uStack_90 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_80[3]) {
      return plVar6;
    }
  }
  else {
    param_2 = (long *)(uStack_90 - 0x30);
    plVar6 = param_2;
    FUN_109f65aa4(param_2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_80[3]) {
      lVar8 = *(long *)(uVar5 - 0x28);
      while (lVar8 != 0) {
        *(undefined8 *)(uVar5 - 0x28) = *(undefined8 *)(lVar8 + 0x18);
        FUN_109f65ae0();
        lVar8 = *(long *)(uVar5 - 0x28);
      }
      if (*(code **)(uVar5 - 0x10) != (code *)0x0) {
        (**(code **)(uVar5 - 0x10))(uVar5);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(param_2);
      return param_2;
    }
  }
  ___stack_chk_fail();
  uStack_f0 = 1;
  uStack_e8 = 0x78;
  pcStack_a8 = FUN_109e6830c;
  plVar7 = (long *)0x0;
  plStack_e0 = alStack_80;
  plStack_d8 = plVar12;
  uStack_d0 = uVar20;
  plStack_c8 = param_1;
  lStack_c0 = lVar10;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109f6590c(0,((ulong)plVar6 & 0xffffffff) * 0x30);
  lVar10 = 0;
  *puVar9 = 0;
  do {
    lVar13 = *(long *)(lVar8 + 0xa8 + lVar10 * 8);
    if (lVar13 != 0) {
      plVar6 = *(long **)(*(long *)(*(long *)(lVar13 + 0x28) + 0x160) + 8);
      for (plVar12 = (long *)*plVar6; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        if ((*(byte *)(plVar6 + 4) >> 1 & 1) != 0) {
          iVar24 = 1;
          for (lVar13 = plVar6[2]; *(char *)(lVar13 + 4) == '\x13';
              lVar13 = *(long *)(lVar13 + 0x30)) {
            iVar24 = *(int *)(lVar13 + 0x10) * iVar24;
          }
          iVar23 = 4;
          if (*(char *)(lVar13 + 4) != '\x10') {
            iVar23 = 0;
          }
          if (iVar23 * iVar24 != 0) {
            uStack_f4 = *(undefined4 *)(plVar6 + 9);
            uStack_f8 = *(undefined4 *)((long)plVar6 + 0x3c);
            FUN_109e6878c(plVar6[2],lVar8,&uStack_f8,plVar6,plVar7,puVar9,&uStack_f4,lVar10);
            plVar12 = (long *)*plVar6;
          }
        }
        plVar6 = plVar12;
      }
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 6);
  return plVar7;
}



/* Entry: 109e6830c; end: 109e68417;  */

undefined8 FUN_109e6830c(ulong param_1,long param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  uVar1 = 0;
  func_0x000109f6590c(0,(param_1 & 0xffffffff) * 0x30);
  lVar5 = 0;
  *param_3 = 0;
  do {
    lVar2 = *(long *)(param_2 + 0xa8 + lVar5 * 8);
    if (lVar2 != 0) {
      plVar6 = *(long **)(*(long *)(*(long *)(lVar2 + 0x28) + 0x160) + 8);
      for (plVar3 = (long *)*plVar6; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if ((*(byte *)(plVar6 + 4) >> 1 & 1) != 0) {
          iVar4 = 1;
          for (lVar2 = plVar6[2]; *(char *)(lVar2 + 4) == '\x13'; lVar2 = *(long *)(lVar2 + 0x30)) {
            iVar4 = *(int *)(lVar2 + 0x10) * iVar4;
          }
          iVar7 = 4;
          if (*(char *)(lVar2 + 4) != '\x10') {
            iVar7 = 0;
          }
          if (iVar7 * iVar4 != 0) {
            uStack_54 = *(undefined4 *)(plVar6 + 9);
            uStack_58 = *(undefined4 *)((long)plVar6 + 0x3c);
            FUN_109e6878c(plVar6[2],param_2,&uStack_58,plVar6,uVar1,param_3,&uStack_54,lVar5);
            plVar3 = (long *)*plVar6;
          }
        }
        plVar6 = plVar3;
      }
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 6);
  return uVar1;
}



/* Entry: 109e68418; end: 109e68773;  */

undefined * FUN_109e68418(long param_1,undefined *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  uint *puVar14;
  undefined *puVar15;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_9c [4];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)(ulong)*(uint *)(param_1 + 0x6d0);
  puVar5 = param_2;
  FUN_109e6830c(puVar3,param_2,auStack_9c);
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uVar6 = (ulong)*(uint *)(param_1 + 0x6d0);
  puVar4 = puVar3;
  if (*(uint *)(param_1 + 0x6d0) == 0) {
    uVar18 = 0;
    uVar19 = 0;
  }
  else {
    uVar10 = 0;
    uVar19 = 0;
    uVar18 = 0;
    puVar15 = puVar3 + 0x10;
    do {
      plVar16 = (long *)(puVar3 + uVar10 * 0x30);
      if ((int)plVar16[5] != 0) {
        puVar4 = (undefined *)*plVar16;
        puVar5 = (undefined *)(ulong)*(uint *)(plVar16 + 1);
        _qsort(puVar4,puVar5,0x10,FUN_109e68774);
        uVar6 = (ulong)*(uint *)(plVar16 + 1);
        if (1 < *(uint *)(plVar16 + 1)) {
          uVar17 = 1;
          do {
            lVar8 = *plVar16 + uVar17 * 0x10;
            lVar7 = *(long *)(lVar8 + -8);
            lVar8 = *(long *)(lVar8 + 8);
            uVar1 = *(uint *)(lVar7 + 0x48);
            uVar2 = *(uint *)(lVar8 + 0x48);
            if (uVar1 < uVar2) {
LAB_109e6853c:
              if (uVar1 <= uVar2) {
                plVar13 = (long *)(lVar7 + 0x10);
                iVar9 = 1;
                while( true ) {
                  lVar12 = *plVar13;
                  if (*(char *)(lVar12 + 4) != '\x13') break;
                  plVar13 = (long *)(lVar12 + 0x30);
                  iVar9 = *(int *)(lVar12 + 0x10) * iVar9;
                }
                if (*(char *)(lVar12 + 4) == '\x10') {
                  iVar11 = 4;
                }
                else {
                  iVar11 = 0;
                }
                if (uVar2 < uVar1 + iVar11 * iVar9) goto LAB_109e6858c;
              }
            }
            else {
              plVar13 = (long *)(lVar8 + 0x10);
              iVar9 = 1;
              while( true ) {
                lVar12 = *plVar13;
                if (*(char *)(lVar12 + 4) != '\x13') break;
                plVar13 = (long *)(lVar12 + 0x30);
                iVar9 = *(int *)(lVar12 + 0x10) * iVar9;
              }
              if (*(char *)(lVar12 + 4) == '\x10') {
                iVar11 = 4;
              }
              else {
                iVar11 = 0;
              }
              if (uVar2 + iVar11 * iVar9 <= uVar1) goto LAB_109e6853c;
LAB_109e6858c:
              puVar4 = *(undefined **)(lVar7 + 0x18);
              puVar5 = *(undefined **)(lVar8 + 0x18);
              _strcmp();
              if ((int)puVar4 != 0) {
                puVar5 = &UNK_10f60da27;
                puVar4 = param_2;
                func_0x000109eb844c();
                uVar6 = (ulong)*(uint *)(plVar16 + 1);
              }
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar6);
        }
        lVar8 = 0;
        do {
          iVar9 = *(int *)(puVar15 + lVar8);
          if (iVar9 != 0) {
            *(int *)((long)&uStack_80 + lVar8) = *(int *)((long)&uStack_80 + lVar8) + iVar9;
            uVar19 = iVar9 + uVar19;
            *(int *)((long)&uStack_98 + lVar8) = *(int *)((long)&uStack_98 + lVar8) + 1;
            uVar18 = uVar18 + 1;
          }
          lVar8 = lVar8 + 4;
        } while (lVar8 != 0x18);
        uVar6 = (ulong)*(uint *)(param_1 + 0x6d0);
      }
      uVar10 = uVar10 + 1;
      puVar15 = puVar15 + 0x30;
    } while (uVar10 < uVar6);
  }
  lVar8 = 0;
  puVar14 = (uint *)(param_1 + 0x108);
  do {
    if (*puVar14 < *(uint *)((long)&uStack_80 + lVar8 * 4)) {
      func_0x000109f47670();
      puVar4 = param_2;
      puVar5 = &UNK_10f60da68;
      func_0x000109eb844c();
    }
    if (puVar14[-1] < *(uint *)((long)&uStack_98 + lVar8 * 4)) {
      func_0x000109f47670();
      puVar4 = param_2;
      puVar5 = &UNK_10f60da8b;
      func_0x000109eb844c();
    }
    lVar8 = lVar8 + 1;
    puVar14 = puVar14 + 0x20;
  } while (lVar8 != 6);
  if (*(uint *)(param_1 + 0x6dc) < uVar19) {
    puVar5 = &UNK_10f60dab5;
    puVar4 = param_2;
    func_0x000109eb844c();
  }
  if (*(uint *)(param_1 + 0x6d8) < uVar18) {
    puVar5 = &UNK_10f60dad7;
    func_0x000109eb844c();
    puVar4 = param_2;
  }
  if (puVar3 == (undefined *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return puVar4;
    }
  }
  else {
    puVar15 = puVar3 + -0x30;
    puVar4 = puVar15;
    FUN_109f65aa4();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      lVar8 = *(long *)(puVar3 + -0x28);
      while (lVar8 != 0) {
        *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(lVar8 + 0x18);
        FUN_109f65ae0();
        lVar8 = *(long *)(puVar3 + -0x28);
      }
      if (*(code **)(puVar3 + -0x10) != (code *)0x0) {
        (**(code **)(puVar3 + -0x10))(puVar3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(puVar15);
      return puVar15;
    }
  }
  ___stack_chk_fail();
  return (undefined *)
         (ulong)(uint)(*(int *)(*(long *)(puVar4 + 8) + 0x48) -
                      *(int *)(*(long *)(puVar5 + 8) + 0x48));
}



/* Entry: 109e68774; end: 109e6878b;  */

int FUN_109e68774(long param_1,long param_2)

{
  return *(int *)(*(long *)(param_1 + 8) + 0x48) - *(int *)(*(long *)(param_2 + 8) + 0x48);
}



/* Entry: 109e6878c; end: 109e69433;  */

void FUN_109e6878c(long param_1,long param_2,uint *param_3,long param_4,long param_5,int *param_6,
                  int *param_7,ulong param_8)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  
  if ((*(char *)(param_1 + 4) == '\x13') &&
     (lVar5 = param_1, func_0x000109eca118(), *(char *)(lVar5 + 4) == '\x13')) {
    lVar5 = param_1;
    FUN_109eca23c();
    if ((int)lVar5 != 0) {
      uVar10 = 0;
      do {
        func_0x000109eca118(param_1);
        FUN_109e6878c();
        uVar10 = uVar10 + 1;
        lVar5 = param_1;
        FUN_109eca23c();
      } while (uVar10 < (uint)lVar5);
    }
  }
  else {
    plVar11 = (long *)(param_5 + (ulong)*(uint *)(param_4 + 0x38) * 0x30);
    lVar5 = *(long *)(*(long *)(param_2 + 0x68) + 0x20);
    uVar10 = *param_3;
    uVar9 = uVar10;
    if ((int)plVar11[5] == 0) {
      *param_6 = *param_6 + 1;
      uVar9 = *param_3;
    }
    uVar4 = *(uint *)(plVar11 + 1);
    uVar2 = *(uint *)((long)plVar11 + 0xc);
    lVar8 = *plVar11;
    if (uVar2 <= uVar4) {
      iVar3 = uVar2 << 1;
      if (uVar2 == 0) {
        iVar3 = 1;
      }
      *(int *)((long)plVar11 + 0xc) = iVar3;
      FUN_109f65a40(param_5,*plVar11,0x10);
      *plVar11 = param_5;
      uVar4 = *(uint *)(plVar11 + 1);
      lVar8 = param_5;
    }
    puVar1 = (uint *)(lVar8 + (ulong)uVar4 * 0x10);
    *puVar1 = uVar9;
    *(long *)(puVar1 + 2) = param_4;
    *(uint *)(plVar11 + 1) = uVar4 + 1;
    if (*(char *)(param_1 + 4) == '\x13') {
      lVar8 = param_1;
      FUN_109eca23c();
      iVar3 = (int)lVar8;
    }
    else {
      iVar3 = 1;
    }
    *(int *)((long)plVar11 + (param_8 & 0xffffffff) * 4 + 0x10) =
         *(int *)((long)plVar11 + (param_8 & 0xffffffff) * 4 + 0x10) + iVar3;
    uVar9 = *(uint *)(plVar11 + 5);
    iVar3 = 1;
    for (lVar8 = param_1; *(char *)(lVar8 + 4) == '\x13'; lVar8 = *(long *)(lVar8 + 0x30)) {
      iVar3 = *(int *)(lVar8 + 0x10) * iVar3;
    }
    iVar6 = 4;
    if (*(char *)(lVar8 + 4) != '\x10') {
      iVar6 = 0;
    }
    if (uVar9 <= (uint)(*param_7 + iVar6 * iVar3)) {
      iVar3 = 1;
      for (lVar8 = param_1; *(char *)(lVar8 + 4) == '\x13'; lVar8 = *(long *)(lVar8 + 0x30)) {
        iVar3 = *(int *)(lVar8 + 0x10) * iVar3;
      }
      iVar6 = 4;
      if (*(char *)(lVar8 + 4) != '\x10') {
        iVar6 = 0;
      }
      uVar9 = *param_7 + iVar6 * iVar3;
    }
    *(uint *)(plVar11 + 5) = uVar9;
    iVar3 = *param_7;
    *(int *)(lVar5 + (ulong)uVar10 * 0x78 + 0x4c) = iVar3;
    iVar6 = 1;
    for (; *(char *)(param_1 + 4) == '\x13'; param_1 = *(long *)(param_1 + 0x30)) {
      iVar6 = *(int *)(param_1 + 0x10) * iVar6;
    }
    iVar7 = 4;
    if (*(char *)(param_1 + 4) != '\x10') {
      iVar7 = 0;
    }
    *param_7 = iVar3 + iVar7 * iVar6;
    *param_3 = *param_3 + 1;
  }
  return;
}



/* Entry: 109e69434; end: 109e6948b;  */

char FUN_109e69434(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  
  lVar1 = param_2;
  if (*(int *)(param_1 + 4) != 0x8000) {
    lVar1 = param_1;
    param_1 = param_2;
  }
  if (*(long *)(param_1 + 8) == *(long *)(lVar1 + 8)) {
    return '\0';
  }
  cVar2 = *(char *)(*(long *)(lVar1 + 8) + 4);
  if (cVar2 != '\x04') {
    if (cVar2 != '\x02') {
      cVar2 = '\x04';
    }
    return cVar2;
  }
  cVar2 = '\x03';
  if (*(char *)(*(long *)(param_1 + 8) + 4) == '\x02') {
    cVar2 = '\x01';
  }
  return cVar2;
}



/* Entry: 109e6948c; end: 109e69753;  */

void FUN_109e6948c(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined *puVar15;
  long lVar16;
  ulong uVar17;
  
  puVar3 = (undefined8 *)0x30;
  _malloc();
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3 = puVar3 + 6;
  }
  plVar4 = (long *)0x0;
  FUN_109f64c74(0,0x109f65648,FUN_109f65684);
  for (plVar14 = *(long **)(param_1 + 8); *plVar14 != 0; plVar14 = (long *)*plVar14) {
    FUN_109e69754(puVar3,plVar14,plVar4);
  }
  plVar14 = *(long **)(param_1 + 0x178);
  for (plVar7 = (long *)**(long **)(param_1 + 0x178); plVar7 != (long *)0x0;
      plVar7 = (long *)*plVar7) {
    lVar9 = plVar14[6];
    if (lVar9 != 0) {
      do {
        plVar12 = *(long **)(lVar9 + 0x58);
        if (*plVar12 != 0) {
          do {
            FUN_109e69754(puVar3,plVar12,plVar4);
            plVar12 = (long *)*plVar12;
          } while (*plVar12 != 0);
          plVar7 = (long *)*plVar14;
        }
        plVar12 = (long *)*plVar7;
        plVar14 = plVar7;
        while( true ) {
          plVar7 = plVar12;
          if (plVar7 == (long *)0x0) goto LAB_109e69534;
          lVar9 = plVar14[6];
          if (lVar9 != 0) break;
          plVar12 = (long *)*plVar7;
          plVar14 = plVar7;
        }
      } while( true );
    }
    plVar14 = plVar7;
  }
LAB_109e69534:
  uVar17 = (ulong)*(uint *)(plVar4 + 4);
  if (*(uint *)(plVar4 + 4) != 0) {
    lVar16 = *plVar4;
    lVar5 = uVar17 * 0x18;
    lVar9 = lVar16;
    do {
      puVar15 = *(undefined **)(lVar9 + 8);
      if ((puVar15 != (undefined *)0x0) && (puVar15 != (undefined *)plVar4[3])) {
        do {
          plVar14 = *(long **)(lVar9 + 0x10);
          uVar1 = *(uint *)(puVar15 + 0x10);
          uVar13 = (ulong)uVar1;
          lVar5 = uVar13 * 0x30;
          _malloc();
          _memcpy();
          if (uVar1 == 0) {
LAB_109e696b0:
            _free(lVar5);
          }
          else {
            uVar6 = 0;
            bVar8 = false;
            do {
              lVar10 = uVar6 * 0x30;
              while ((lVar11 = plVar14[uVar6], lVar11 == 0 ||
                     (lVar11 = *(long *)(lVar11 + 0x10), *(long *)(lVar5 + lVar10) == lVar11))) {
                uVar6 = uVar6 + 1;
                lVar10 = lVar10 + 0x30;
                if (uVar13 == uVar6) {
                  if (!bVar8) goto LAB_109e696b0;
                  goto LAB_109e69694;
                }
              }
              *(long *)(lVar5 + lVar10) = lVar11;
              bVar8 = true;
              bVar2 = uVar13 - 1 != uVar6;
              uVar6 = uVar6 + 1;
            } while (bVar2);
LAB_109e69694:
            uVar1 = *(uint *)(puVar15 + 4);
            if (((byte)puVar15[0xc] >> 1 & 1) == 0) {
              FUN_109eca058(puVar15);
            }
            else {
              puVar15 = &UNK_10e05bf38 + *(long *)(puVar15 + 0x18);
            }
            lVar16 = lVar5;
            FUN_109ec7fc4(lVar5,uVar13,uVar1 >> 0x16 & 3,uVar1 >> 0x18 & 1,puVar15);
            _free(lVar5);
            do {
              if (*plVar14 != 0) {
                *(long *)(*plVar14 + 0x88) = lVar16;
              }
              uVar13 = uVar13 - 1;
              plVar14 = plVar14 + 1;
            } while (uVar13 != 0);
            lVar16 = *plVar4;
            uVar17 = (ulong)*(uint *)(plVar4 + 4);
          }
          lVar5 = lVar9;
          do {
            lVar9 = lVar5 + 0x18;
            if (lVar9 == lVar16 + uVar17 * 0x18) goto LAB_109e6956c;
            puVar15 = *(undefined **)(lVar5 + 0x20);
            lVar5 = lVar9;
          } while ((puVar15 == (undefined *)0x0) || (puVar15 == (undefined *)plVar4[3]));
        } while( true );
      }
      lVar9 = lVar9 + 0x18;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
LAB_109e6956c:
  FUN_109f65aa4(plVar4 + -6);
  FUN_109f65ae0(plVar4 + -6);
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_109f65aa4(puVar3 + -6);
  lVar9 = puVar3[-5];
  while (lVar9 != 0) {
    puVar3[-5] = *(undefined8 *)(lVar9 + 0x18);
    FUN_109f65ae0();
    lVar9 = puVar3[-5];
  }
  if ((code *)puVar3[-2] != (code *)0x0) {
    (*(code *)puVar3[-2])(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(puVar3 + -6);
  return;
}



/* Entry: 109e69754; end: 109e698d3;  */

void FUN_109e69754(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  byte bStack_41;
  
  uVar4 = *(ulong *)(param_2 + 0x88);
  bStack_41 = (byte)(uint)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x2b) & 1;
  FUN_109e6a68c(param_2 + 0x10,*(undefined4 *)(param_2 + 0x28),*(ulong *)(param_2 + 0x2c) >> 10 & 1,
                &bStack_41);
  uVar6 = *(ulong *)(param_2 + 0x20);
  *(ulong *)(param_2 + 0x20) =
       uVar6 & 0xfffff00000000000 | uVar6 & 0x7ffffffffff | ((ulong)bStack_41 & 1) << 0x2b;
  lVar5 = *(long *)(param_2 + 0x10);
  cVar3 = *(char *)(lVar5 + 4);
  if (cVar3 == '\x12') {
    lVar2 = lVar5;
    FUN_109e6a6e4();
    if ((int)lVar2 != 0) {
      FUN_109e6a738(lVar5,*(undefined8 *)(param_2 + 0x60),(uVar6 & 0x1fffff) == 0x200);
      *(long *)(param_2 + 0x10) = lVar5;
      *(long *)(param_2 + 0x88) = lVar5;
    }
  }
  else {
    while (cVar3 == '\x13') {
      lVar5 = *(long *)(lVar5 + 0x30);
      cVar3 = *(char *)(lVar5 + 4);
    }
    if (cVar3 == '\x12') {
      lVar2 = lVar5;
      FUN_109e6a6e4();
      if ((int)lVar2 != 0) {
        FUN_109e6a738(lVar5,*(undefined8 *)(param_2 + 0x60),(uVar6 & 0x1fffff) == 0x200);
        *(long *)(param_2 + 0x88) = lVar5;
        uVar1 = *(undefined8 *)(param_2 + 0x10);
        FUN_109e6a84c(uVar1,lVar5);
        *(undefined8 *)(param_2 + 0x10) = uVar1;
      }
    }
    else if (uVar4 != 0) {
      uVar6 = uVar4;
      (**(code **)(param_3 + 8))(uVar4);
      lVar5 = param_3;
      FUN_109f64fdc(param_3,uVar6,uVar4);
      if ((lVar5 == 0) || (lVar2 = *(long *)(lVar5 + 0x10), *(long *)(lVar5 + 0x10) == 0)) {
        func_0x000109f6590c(param_1,(ulong)*(uint *)(uVar4 + 0x10) << 3);
        uVar6 = uVar4;
        (**(code **)(param_3 + 8))(uVar4);
        func_0x000109f650c0(param_3,uVar6,uVar4,param_1);
        lVar2 = param_1;
      }
      FUN_109ec85e4(uVar4,*(undefined8 *)(param_2 + 0x18));
      *(long *)(lVar2 + (uVar4 & 0xffffffff) * 8) = param_2;
    }
  }
  return;
}



/* Entry: 109e698d4; end: 109e69ae7;  */

void FUN_109e698d4(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  
  puVar2 = (undefined8 *)0x30;
  _malloc();
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 6;
  }
  puVar3 = puVar2;
  FUN_109f64c74(puVar2,FUN_109f65518,FUN_109f65668);
  puVar4 = puVar2;
  FUN_109f64c74(puVar2,FUN_109f65518,FUN_109f65668);
  puVar5 = puVar2;
  FUN_109f64c74(puVar2,FUN_109f65518,FUN_109f65668);
  puVar6 = puVar2;
  FUN_109f64c74(puVar2,FUN_109f65518,FUN_109f65668);
  if (param_3 != 0) {
    uVar12 = 0;
    do {
      lVar9 = *(long *)(param_2 + uVar12 * 8);
      if (lVar9 != 0) {
        for (plVar10 = *(long **)(*(long *)(lVar9 + 0xb8) + 8); *plVar10 != 0;
            plVar10 = (long *)*plVar10) {
          if (plVar10[0x11] != 0) {
            uVar1 = *(uint *)(plVar10 + 4) & 0x1fffff;
            if (uVar1 < 0x80) {
              puVar11 = puVar3;
              if ((uVar1 == 4) || (puVar11 = puVar4, uVar1 == 8)) {
LAB_109e699f8:
                puVar7 = puVar11;
                FUN_109e69ae8(puVar11,plVar10);
                if (puVar7 == (undefined8 *)0x0) {
                  FUN_109e69be0(puVar2,puVar11,plVar10,
                                *(undefined8 *)(*(long *)(param_2 + uVar12 * 8) + 0xb8));
                }
                else {
                  uVar8 = puVar7[1];
                  FUN_109e69d3c(uVar8,plVar10,param_1,*puVar7,1);
                  if ((int)uVar8 == 0) {
                    if ((*(byte *)(plVar10[0x11] + 0xc) >> 1 & 1) == 0) {
                      FUN_109eca058();
                    }
                    func_0x000109eb844c(param_1,&UNK_10f60db1f);
                    goto joined_r0x000109e69a58;
                  }
                }
              }
            }
            else {
              puVar11 = puVar5;
              if ((uVar1 == 0x80) || (puVar11 = puVar6, uVar1 == 0x200)) goto LAB_109e699f8;
            }
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != param_3);
  }
joined_r0x000109e69a58:
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  FUN_109f65aa4(puVar2 + -6);
  lVar9 = puVar2[-5];
  while (lVar9 != 0) {
    puVar2[-5] = *(undefined8 *)(lVar9 + 0x18);
    FUN_109f65ae0();
    lVar9 = puVar2[-5];
  }
  if ((code *)puVar2[-2] != (code *)0x0) {
    (*(code *)puVar2[-2])(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(puVar2 + -6);
  return;
}



/* Entry: 109e69ae8; end: 109e69bdf;  */

/* WARNING: Possible PIC construction at 0x000109e69c7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109e69c80) */
/* WARNING: Removing unreachable block (ram,0x000109e69c98) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_109e69ae8(long *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  uint *puVar21;
  ulong uVar22;
  uint *puVar23;
  ulong uVar24;
  long lVar25;
  uint *puVar26;
  long lVar27;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *plVar28;
  uint uVar29;
  undefined8 unaff_x24;
  ulong uVar30;
  undefined8 unaff_x25;
  ulong uVar31;
  undefined8 unaff_x26;
  ulong uVar32;
  undefined8 unaff_x27;
  ulong uVar33;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar34;
  code *pcVar35;
  ulong uStack_a0;
  undefined1 auStack_93 [11];
  long lStack_88;
  undefined8 *******pppppppuStack_50;
  code *pcStack_48;
  ulong uStack_40;
  long lStack_33;
  long lStack_28;
  
  puVar11 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((*(byte *)(param_2 + 0x25) >> 2 & 1) == 0) || ((int)*(uint *)(param_2 + 0x3c) < 0x20)) {
    for (plVar12 = *(long **)(param_2 + 0x88); *(char *)((long)plVar12 + 4) == '\x13';
        plVar12 = (long *)plVar12[6]) {
    }
    if ((*(byte *)((long)plVar12 + 0xc) >> 1 & 1) == 0) {
      FUN_109eca058();
    }
    else {
      plVar12 = (long *)(&UNK_10e05bf38 + plVar12[3]);
    }
    plVar13 = plVar12;
    (*(code *)param_1[1])();
    unaff_x20 = plVar12;
  }
  else {
    uStack_40 = (ulong)*(uint *)(param_2 + 0x3c);
    _snprintf(&lStack_33,0xb,&UNK_10f60dc98);
    plVar13 = &lStack_33;
    (*(code *)param_1[1])();
    plVar12 = &lStack_33;
  }
  plVar28 = param_1;
  FUN_109f64fdc();
  plVar14 = (long *)0x0;
  if (plVar28 != (long *)0x0) {
    plVar14 = (long *)plVar28[2];
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar14;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_109e69be0;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = 0x10;
  plVar28 = plVar14;
  plVar17 = plVar12;
  lVar19 = param_4;
  pppppppuStack_50 = (undefined8 *******)&stack0xfffffffffffffff0;
  FUN_109f658b0();
  *plVar28 = param_4;
  plVar28[1] = (long)plVar12;
  if (((*(byte *)((long)plVar12 + 0x25) >> 2 & 1) == 0) ||
     ((int)*(uint *)((long)plVar12 + 0x3c) < 0x20)) {
    for (plVar14 = (long *)plVar12[0x11]; *(char *)((long)plVar14 + 4) == '\x13';
        plVar14 = (long *)plVar14[6]) {
    }
    if ((*(byte *)((long)plVar14 + 0xc) >> 1 & 1) == 0) {
      FUN_109eca058();
    }
    else {
      plVar14 = (long *)(&UNK_10e05bf38 + plVar14[3]);
    }
    plVar15 = plVar14;
    (*(code *)plVar13[1])();
    pppppppuVar34 = pppppppuStack_50;
    pcVar35 = pcStack_48;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      cVar7 = *(char *)((long)plVar17 + 0xa5);
      uVar30 = plVar15[0x11];
      uVar31 = *(ulong *)(lVar18 + 0x88);
      if (cVar7 == '\x01') {
        if (uVar30 == uVar31) goto LAB_109e69dd8;
      }
      else {
        uVar22 = uVar30;
        FUN_109ec7a0c(uVar30,uVar31);
        if ((uVar22 & 1) != 0) goto LAB_109e69dd8;
      }
      if (((*(ulong *)((long)plVar15 + 0x2c) & 0x6000) != 0x2000) ||
         ((*(ulong *)(lVar18 + 0x2c) & 0x6000) != 0x2000)) {
        if (cVar7 == '\0') {
          return (long *)0x0;
        }
        plVar12 = plVar17;
        func_0x000109e6a400(plVar17,uVar30,uVar31);
        if (((ulong)plVar12 & 1) != 0) {
          return (long *)0x0;
        }
      }
LAB_109e69dd8:
      uVar32 = plVar15[2];
      cVar8 = *(char *)(uVar32 + 4);
      uVar22 = uVar32;
      cVar7 = cVar8;
      while (cVar7 == '\x13') {
        uVar22 = *(ulong *)(uVar22 + 0x30);
        cVar7 = *(char *)(uVar22 + 4);
      }
      uVar33 = *(ulong *)(lVar18 + 0x10);
      cVar7 = *(char *)(uVar33 + 4);
      uVar24 = uVar33;
      cVar9 = cVar7;
      while (cVar9 == '\x13') {
        uVar24 = *(ulong *)(uVar24 + 0x30);
        cVar9 = *(char *)(uVar24 + 4);
      }
      uVar10 = uVar32;
      cVar9 = cVar8;
      if ((uVar22 == uVar30) != (uVar24 == uVar31)) {
        return (long *)0x0;
      }
      while (cVar9 == '\x13') {
        puVar11 = (ulong *)(uVar10 + 0x30);
        uVar10 = *puVar11;
        cVar9 = *(char *)(*puVar11 + 4);
      }
      if (((uVar10 == uVar30) && (uVar3 = *(uint *)(lVar18 + 0x20) & 0x1fffff, uVar3 != 0x80)) &&
         (uVar3 != 0x200)) {
        lVar16 = plVar15[3];
        _strcmp(lVar16,*(undefined8 *)(lVar18 + 0x18));
        if ((int)lVar16 != 0) {
          return (long *)0x0;
        }
      }
      if ((int)param_5 == 0) {
        uVar22 = uVar32;
        FUN_109ec7a0c(uVar32,uVar33);
        if ((uVar22 & 1) != 0) {
          return (long *)0x1;
        }
      }
      else if (uVar32 == uVar33) {
        return (long *)0x1;
      }
      if (cVar7 == '\x13') {
        do {
          uVar33 = *(ulong *)(uVar33 + 0x30);
        } while (*(char *)(uVar33 + 4) == '\x13');
        if (uVar33 != uVar31) {
          while (cVar8 == '\x13') {
LAB_109e69efc:
            uVar32 = *(ulong *)(uVar32 + 0x30);
            cVar8 = *(char *)(uVar32 + 4);
          }
          if (uVar32 != uVar30) {
            return (long *)0x1;
          }
        }
      }
      else {
        if (cVar8 != '\x13') {
          return (long *)0x1;
        }
        if (uVar33 != uVar31) goto LAB_109e69efc;
      }
      FUN_109e77a3c(plVar17,lVar18,plVar15,lVar19,param_5);
      if ((int)plVar17 != 0) {
        return (long *)0x1;
      }
      return plVar17;
    }
  }
  else {
    uStack_a0 = (ulong)*(uint *)((long)plVar12 + 0x3c);
    _snprintf(auStack_93,0xb,&UNK_10f60dc98);
    FUN_109f65c2c(plVar14,auStack_93);
    plVar15 = plVar14;
    (*(code *)plVar13[1])();
    puVar11 = &uStack_a0;
    param_1 = plVar13;
    unaff_x20 = plVar28;
    unaff_x21 = plVar14;
    unaff_x22 = plVar12;
    unaff_x23 = param_4;
    pppppppuVar34 = &pppppppuStack_50;
    pcVar35 = (code *)0x109e69c80;
  }
  *(undefined8 *)((long)puVar11 + -0x60) = unaff_x28;
  *(undefined8 *)((long)puVar11 + -0x58) = unaff_x27;
  *(undefined8 *)((long)puVar11 + -0x50) = unaff_x26;
  *(undefined8 *)((long)puVar11 + -0x48) = unaff_x25;
  *(undefined8 *)((long)puVar11 + -0x40) = unaff_x24;
  *(long *)((long)puVar11 + -0x38) = unaff_x23;
  *(long **)((long)puVar11 + -0x30) = unaff_x22;
  *(long **)((long)puVar11 + -0x28) = unaff_x21;
  *(long **)((long)puVar11 + -0x20) = unaff_x20;
  *(long **)((long)puVar11 + -0x18) = param_1;
  *(undefined8 ********)((long)puVar11 + -0x10) = pppppppuVar34;
  *(code **)((long)puVar11 + -8) = pcVar35;
  *(long **)((long)puVar11 + -0x68) = plVar28;
  uVar3 = *(uint *)(plVar13 + 7);
  if (*(uint *)(plVar13 + 8) < uVar3) {
    if (*(uint *)((long)plVar13 + 0x44) + *(uint *)(plVar13 + 8) < uVar3) goto LAB_109f65210;
    uVar29 = *(uint *)((long)plVar13 + 0x3c);
    if (*(uint *)((long)plVar13 + 0x44) == uVar3) {
      _bzero(*plVar13,(ulong)*(uint *)(&UNK_10e47d50c + (ulong)uVar29 * 0x20) * 0x18);
      plVar13[8] = 0;
      goto LAB_109f65210;
    }
  }
  else {
    uVar29 = *(int *)((long)plVar13 + 0x3c) + 1;
  }
  if (uVar29 < 0x1f) {
    if (*plVar13 == 0) {
      lVar19 = 0;
    }
    else {
      lVar18 = *(long *)(*plVar13 + -0x30);
      lVar19 = 0;
      if (lVar18 != 0) {
        lVar19 = lVar18 + 0x30;
      }
    }
    lVar18 = (ulong)uVar29 * 0x20;
    uVar3 = *(uint *)(&UNK_10e47d50c + lVar18);
    func_0x000109f6590c(lVar19,(ulong)uVar3 * 0x18);
    if (lVar19 != 0) {
      puVar23 = (uint *)*plVar13;
      lVar25 = plVar13[3];
      uVar1 = *(uint *)(plVar13 + 4);
      *plVar13 = lVar19;
      uVar6 = *(uint *)(&UNK_10e47d510 + lVar18);
      *(uint *)(plVar13 + 4) = uVar3;
      *(uint *)((long)plVar13 + 0x24) = uVar6;
      lVar16 = *(long *)(&UNK_10e47d518 + lVar18);
      lVar5 = *(long *)(&UNK_10e47d520 + lVar18);
      plVar13[5] = lVar16;
      plVar13[6] = lVar5;
      *(undefined4 *)(plVar13 + 7) = *(undefined4 *)(&UNK_10e47d508 + lVar18);
      *(uint *)((long)plVar13 + 0x3c) = uVar29;
      *(undefined4 *)((long)plVar13 + 0x44) = 0;
      if (uVar1 != 0) {
        lVar18 = (ulong)uVar1 * 0x18;
        puVar26 = puVar23;
        do {
          lVar27 = *(long *)(puVar26 + 2);
          if (lVar27 != 0 && lVar27 != lVar25) {
            do {
              uVar29 = *puVar26;
              uVar30 = lVar16 * (ulong)uVar29;
              uVar30 = ((uVar30 & 0xffffffff) * (ulong)uVar3 >> 0x20) +
                       (uVar30 >> 0x20) * (ulong)uVar3 >> 0x20;
              puVar21 = (uint *)(lVar19 + uVar30 * 0x18);
              if (*(long *)(puVar21 + 2) != 0) {
                uVar31 = lVar5 * (ulong)uVar29;
                do {
                  uVar2 = (int)(((uVar31 & 0xffffffff) * (ulong)uVar6 >> 0x20) +
                                (uVar31 >> 0x20) * (ulong)uVar6 >> 0x20) + 1 + (int)uVar30;
                  uVar4 = 0;
                  if (uVar3 <= uVar2) {
                    uVar4 = uVar3;
                  }
                  uVar30 = (ulong)(uVar2 - uVar4);
                  puVar21 = (uint *)(lVar19 + uVar30 * 0x18);
                } while (*(long *)(puVar21 + 2) != 0);
              }
              uVar20 = *(undefined8 *)(puVar26 + 4);
              *puVar21 = uVar29;
              *(long *)(puVar21 + 2) = lVar27;
              *(undefined8 *)(puVar21 + 4) = uVar20;
              puVar21 = puVar26;
              do {
                puVar26 = puVar21 + 6;
                if (puVar26 == puVar23 + (ulong)uVar1 * 6) goto LAB_109f651f8;
                lVar27 = *(long *)(puVar21 + 8);
                puVar21 = puVar26;
              } while (lVar27 == 0 || lVar27 == lVar25);
            } while( true );
          }
          puVar26 = puVar26 + 6;
          lVar18 = lVar18 + -0x18;
        } while (lVar18 != 0);
      }
LAB_109f651f8:
      if (puVar23 != (uint *)0x0) {
        FUN_109f65aa4(puVar23 + -0xc);
        FUN_109f65ae0(puVar23 + -0xc);
      }
    }
  }
LAB_109f65210:
  uVar30 = plVar13[5] * ((ulong)plVar15 & 0xffffffff);
  uVar3 = *(uint *)(plVar13 + 4);
  uVar29 = *(uint *)((long)plVar13 + 0x24);
  uVar31 = ((uVar30 & 0xffffffff) * (ulong)uVar3 >> 0x20) + (uVar30 >> 0x20) * (ulong)uVar3;
  uVar22 = uVar31 >> 0x20;
  uVar30 = plVar13[6] * ((ulong)plVar15 & 0xffffffff);
  plVar12 = (long *)0x0;
  do {
    plVar28 = (long *)(*plVar13 + uVar22 * 0x18);
    lVar19 = plVar28[1];
    if (lVar19 == 0) {
      if (plVar12 != (long *)0x0) {
        plVar28 = plVar12;
      }
      goto LAB_109f652cc;
    }
    plVar17 = plVar28;
    if (plVar12 != (long *)0x0 || lVar19 != plVar13[3]) {
      plVar17 = plVar12;
    }
    if (((lVar19 != plVar13[3]) && ((int)*plVar28 == (int)plVar15)) &&
       (plVar12 = plVar14, (*(code *)plVar13[2])(), ((ulong)plVar12 & 1) != 0)) goto LAB_109f652fc;
    uVar1 = (int)(((uVar30 & 0xffffffff) * (ulong)uVar29 >> 0x20) + (uVar30 >> 0x20) * (ulong)uVar29
                 >> 0x20) + 1 + (int)uVar22;
    uVar6 = 0;
    if (uVar3 <= uVar1) {
      uVar6 = uVar3;
    }
    uVar1 = uVar1 - uVar6;
    uVar22 = (ulong)uVar1;
    plVar12 = plVar17;
  } while (uVar1 != (uint)(uVar31 >> 0x20));
  plVar28 = plVar17;
  if (plVar17 == (long *)0x0) {
    plVar28 = (long *)0x0;
  }
  else {
LAB_109f652cc:
    if (plVar28[1] == plVar13[3]) {
      *(int *)((long)plVar13 + 0x44) = *(int *)((long)plVar13 + 0x44) + -1;
    }
    *(int *)plVar28 = (int)plVar15;
    *(int *)(plVar13 + 8) = (int)plVar13[8] + 1;
LAB_109f652fc:
    lVar19 = *(long *)((long)puVar11 + -0x68);
    plVar28[1] = (long)plVar14;
    plVar28[2] = lVar19;
  }
  return plVar28;
}



/* Entry: 109e69be0; end: 109e69d3b;  */

/* WARNING: Possible PIC construction at 0x000109e69c7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109e69c80) */
/* WARNING: Removing unreachable block (ram,0x000109e69c98) */

int * FUN_109e69be0(undefined8 *param_1,long *param_2,int *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  int *piVar18;
  long lVar19;
  uint *puVar20;
  ulong uVar21;
  uint *puVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  uint *puVar27;
  long lVar28;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  int *unaff_x22;
  undefined8 unaff_x23;
  int *piVar29;
  uint uVar30;
  undefined8 unaff_x24;
  ulong uVar31;
  undefined8 unaff_x25;
  ulong uVar32;
  undefined8 unaff_x26;
  ulong uVar33;
  undefined8 unaff_x27;
  ulong uVar34;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong uStack_60;
  undefined1 auStack_53 [11];
  long lStack_48;
  
  puVar2 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = 0x10;
  puVar15 = param_1;
  piVar18 = param_3;
  uVar23 = param_4;
  FUN_109f658b0();
  *puVar15 = param_4;
  puVar15[1] = param_3;
  if (((*(byte *)((long)param_3 + 0x25) >> 2 & 1) == 0) || (param_3[0xf] < 0x20)) {
    for (param_1 = *(undefined8 **)(param_3 + 0x22); *(char *)((long)param_1 + 4) == '\x13';
        param_1 = (undefined8 *)param_1[6]) {
    }
    if ((*(byte *)((long)param_1 + 0xc) >> 1 & 1) == 0) {
      FUN_109eca058();
    }
    else {
      param_1 = (undefined8 *)(&UNK_10e05bf38 + param_1[3]);
    }
    puVar16 = param_1;
    (*(code *)param_2[1])();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      cVar11 = *(char *)((long)piVar18 + 0xa5);
      uVar31 = puVar16[0x11];
      uVar32 = *(ulong *)(lVar19 + 0x88);
      if (cVar11 == '\x01') {
        if (uVar31 == uVar32) goto LAB_109e69dd8;
      }
      else {
        uVar21 = uVar31;
        FUN_109ec7a0c(uVar31,uVar32);
        if ((uVar21 & 1) != 0) goto LAB_109e69dd8;
      }
      if (((*(ulong *)((long)puVar16 + 0x2c) & 0x6000) != 0x2000) ||
         ((*(ulong *)(lVar19 + 0x2c) & 0x6000) != 0x2000)) {
        if (cVar11 == '\0') {
          return (int *)0x0;
        }
        piVar29 = piVar18;
        func_0x000109e6a400(piVar18,uVar31,uVar32);
        if (((ulong)piVar29 & 1) != 0) {
          return (int *)0x0;
        }
      }
LAB_109e69dd8:
      uVar33 = puVar16[2];
      cVar12 = *(char *)(uVar33 + 4);
      uVar21 = uVar33;
      cVar11 = cVar12;
      while (cVar11 == '\x13') {
        uVar21 = *(ulong *)(uVar21 + 0x30);
        cVar11 = *(char *)(uVar21 + 4);
      }
      uVar34 = *(ulong *)(lVar19 + 0x10);
      cVar11 = *(char *)(uVar34 + 4);
      uVar24 = uVar34;
      cVar13 = cVar11;
      while (cVar13 == '\x13') {
        uVar24 = *(ulong *)(uVar24 + 0x30);
        cVar13 = *(char *)(uVar24 + 4);
      }
      uVar14 = uVar33;
      cVar13 = cVar12;
      if ((uVar21 == uVar31) != (uVar24 == uVar32)) {
        return (int *)0x0;
      }
      while (cVar13 == '\x13') {
        puVar1 = (ulong *)(uVar14 + 0x30);
        uVar14 = *puVar1;
        cVar13 = *(char *)(*puVar1 + 4);
      }
      if (((uVar14 == uVar31) && (uVar5 = *(uint *)(lVar19 + 0x20) & 0x1fffff, uVar5 != 0x80)) &&
         (uVar5 != 0x200)) {
        uVar17 = puVar16[3];
        _strcmp(uVar17,*(undefined8 *)(lVar19 + 0x18));
        if ((int)uVar17 != 0) {
          return (int *)0x0;
        }
      }
      if ((int)param_5 == 0) {
        uVar21 = uVar33;
        FUN_109ec7a0c(uVar33,uVar34);
        if ((uVar21 & 1) != 0) {
          return (int *)0x1;
        }
      }
      else if (uVar33 == uVar34) {
        return (int *)0x1;
      }
      if (cVar11 == '\x13') {
        do {
          uVar34 = *(ulong *)(uVar34 + 0x30);
        } while (*(char *)(uVar34 + 4) == '\x13');
        if (uVar34 != uVar32) {
          while (cVar12 == '\x13') {
LAB_109e69efc:
            uVar33 = *(ulong *)(uVar33 + 0x30);
            cVar12 = *(char *)(uVar33 + 4);
          }
          if (uVar33 != uVar31) {
            return (int *)0x1;
          }
        }
      }
      else {
        if (cVar12 != '\x13') {
          return (int *)0x1;
        }
        if (uVar34 != uVar32) goto LAB_109e69efc;
      }
      FUN_109e77a3c(piVar18,lVar19,puVar16,uVar23,param_5);
      if ((int)piVar18 != 0) {
        return (int *)0x1;
      }
      return piVar18;
    }
  }
  else {
    uStack_60 = (ulong)(uint)param_3[0xf];
    _snprintf(auStack_53,0xb,&UNK_10f60dc98);
    FUN_109f65c2c(param_1,auStack_53);
    puVar16 = param_1;
    (*(code *)param_2[1])();
    unaff_x30 = 0x109e69c80;
    register0x00000008 = (BADSPACEBASE *)&uStack_60;
    unaff_x19 = param_2;
    unaff_x20 = puVar15;
    unaff_x21 = param_1;
    unaff_x22 = param_3;
    unaff_x23 = param_4;
    unaff_x29 = puVar2;
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 **)((long)register0x00000008 + -0x68) = puVar15;
  uVar5 = *(uint *)(param_2 + 7);
  if (*(uint *)(param_2 + 8) < uVar5) {
    if (*(uint *)((long)param_2 + 0x44) + *(uint *)(param_2 + 8) < uVar5) goto LAB_109f65210;
    uVar30 = *(uint *)((long)param_2 + 0x3c);
    if (*(uint *)((long)param_2 + 0x44) == uVar5) {
      _bzero(*param_2,(ulong)*(uint *)(&UNK_10e47d50c + (ulong)uVar30 * 0x20) * 0x18);
      param_2[8] = 0;
      goto LAB_109f65210;
    }
  }
  else {
    uVar30 = *(int *)((long)param_2 + 0x3c) + 1;
  }
  if (uVar30 < 0x1f) {
    if (*param_2 == 0) {
      lVar19 = 0;
    }
    else {
      lVar25 = *(long *)(*param_2 + -0x30);
      lVar19 = 0;
      if (lVar25 != 0) {
        lVar19 = lVar25 + 0x30;
      }
    }
    lVar25 = (ulong)uVar30 * 0x20;
    uVar5 = *(uint *)(&UNK_10e47d50c + lVar25);
    func_0x000109f6590c(lVar19,(ulong)uVar5 * 0x18);
    if (lVar19 != 0) {
      puVar22 = (uint *)*param_2;
      lVar26 = param_2[3];
      uVar3 = *(uint *)(param_2 + 4);
      *param_2 = lVar19;
      uVar10 = *(uint *)(&UNK_10e47d510 + lVar25);
      *(uint *)(param_2 + 4) = uVar5;
      *(uint *)((long)param_2 + 0x24) = uVar10;
      lVar8 = *(long *)(&UNK_10e47d518 + lVar25);
      lVar9 = *(long *)(&UNK_10e47d520 + lVar25);
      param_2[5] = lVar8;
      param_2[6] = lVar9;
      *(undefined4 *)(param_2 + 7) = *(undefined4 *)(&UNK_10e47d508 + lVar25);
      *(uint *)((long)param_2 + 0x3c) = uVar30;
      *(undefined4 *)((long)param_2 + 0x44) = 0;
      if (uVar3 != 0) {
        lVar25 = (ulong)uVar3 * 0x18;
        puVar27 = puVar22;
        do {
          lVar28 = *(long *)(puVar27 + 2);
          if (lVar28 != 0 && lVar28 != lVar26) {
            do {
              uVar30 = *puVar27;
              uVar31 = lVar8 * (ulong)uVar30;
              uVar31 = ((uVar31 & 0xffffffff) * (ulong)uVar5 >> 0x20) +
                       (uVar31 >> 0x20) * (ulong)uVar5 >> 0x20;
              puVar20 = (uint *)(lVar19 + uVar31 * 0x18);
              if (*(long *)(puVar20 + 2) != 0) {
                uVar32 = lVar9 * (ulong)uVar30;
                do {
                  uVar4 = (int)(((uVar32 & 0xffffffff) * (ulong)uVar10 >> 0x20) +
                                (uVar32 >> 0x20) * (ulong)uVar10 >> 0x20) + 1 + (int)uVar31;
                  uVar6 = 0;
                  if (uVar5 <= uVar4) {
                    uVar6 = uVar5;
                  }
                  uVar31 = (ulong)(uVar4 - uVar6);
                  puVar20 = (uint *)(lVar19 + uVar31 * 0x18);
                } while (*(long *)(puVar20 + 2) != 0);
              }
              uVar23 = *(undefined8 *)(puVar27 + 4);
              *puVar20 = uVar30;
              *(long *)(puVar20 + 2) = lVar28;
              *(undefined8 *)(puVar20 + 4) = uVar23;
              puVar20 = puVar27;
              do {
                puVar27 = puVar20 + 6;
                if (puVar27 == puVar22 + (ulong)uVar3 * 6) goto LAB_109f651f8;
                lVar28 = *(long *)(puVar20 + 8);
                puVar20 = puVar27;
              } while (lVar28 == 0 || lVar28 == lVar26);
            } while( true );
          }
          puVar27 = puVar27 + 6;
          lVar25 = lVar25 + -0x18;
        } while (lVar25 != 0);
      }
LAB_109f651f8:
      if (puVar22 != (uint *)0x0) {
        FUN_109f65aa4(puVar22 + -0xc);
        FUN_109f65ae0(puVar22 + -0xc);
      }
    }
  }
LAB_109f65210:
  uVar31 = param_2[5] * ((ulong)puVar16 & 0xffffffff);
  uVar5 = *(uint *)(param_2 + 4);
  uVar30 = *(uint *)((long)param_2 + 0x24);
  uVar32 = ((uVar31 & 0xffffffff) * (ulong)uVar5 >> 0x20) + (uVar31 >> 0x20) * (ulong)uVar5;
  uVar21 = uVar32 >> 0x20;
  uVar31 = param_2[6] * ((ulong)puVar16 & 0xffffffff);
  piVar18 = (int *)0x0;
  do {
    piVar29 = (int *)(*param_2 + uVar21 * 0x18);
    lVar19 = *(long *)(piVar29 + 2);
    if (lVar19 == 0) {
      if (piVar18 != (int *)0x0) {
        piVar29 = piVar18;
      }
      goto LAB_109f652cc;
    }
    piVar7 = piVar29;
    if (piVar18 != (int *)0x0 || lVar19 != param_2[3]) {
      piVar7 = piVar18;
    }
    if (((lVar19 != param_2[3]) && (*piVar29 == (int)puVar16)) &&
       (puVar15 = param_1, (*(code *)param_2[2])(), ((ulong)puVar15 & 1) != 0)) goto LAB_109f652fc;
    uVar3 = (int)(((uVar31 & 0xffffffff) * (ulong)uVar30 >> 0x20) + (uVar31 >> 0x20) * (ulong)uVar30
                 >> 0x20) + 1 + (int)uVar21;
    uVar10 = 0;
    if (uVar5 <= uVar3) {
      uVar10 = uVar5;
    }
    uVar3 = uVar3 - uVar10;
    uVar21 = (ulong)uVar3;
    piVar18 = piVar7;
  } while (uVar3 != (uint)(uVar32 >> 0x20));
  piVar29 = piVar7;
  if (piVar7 == (int *)0x0) {
    piVar29 = (int *)0x0;
  }
  else {
LAB_109f652cc:
    if (*(long *)(piVar29 + 2) == param_2[3]) {
      *(int *)((long)param_2 + 0x44) = *(int *)((long)param_2 + 0x44) + -1;
    }
    *piVar29 = (int)puVar16;
    *(int *)(param_2 + 8) = (int)param_2[8] + 1;
LAB_109f652fc:
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x68);
    *(undefined8 **)(piVar29 + 2) = param_1;
    *(undefined8 *)(piVar29 + 4) = uVar23;
  }
  return piVar29;
}



/* Entry: 109e69d3c; end: 109e6a357;  */

void FUN_109e69d3c(long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  cVar3 = *(char *)(param_3 + 0xa5);
  uVar10 = *(ulong *)(param_1 + 0x88);
  uVar11 = *(ulong *)(param_2 + 0x88);
  if (cVar3 == '\x01') {
    if (uVar10 == uVar11) goto LAB_109e69dd8;
  }
  else {
    uVar8 = uVar10;
    FUN_109ec7a0c(uVar10,uVar11);
    if ((uVar8 & 1) != 0) goto LAB_109e69dd8;
  }
  if (((*(ulong *)(param_1 + 0x2c) & 0x6000) != 0x2000) ||
     ((*(ulong *)(param_2 + 0x2c) & 0x6000) != 0x2000)) {
    if (cVar3 == '\0') {
      return;
    }
    uVar8 = param_3;
    func_0x000109e6a400(param_3,uVar10,uVar11);
    if ((uVar8 & 1) != 0) {
      return;
    }
  }
LAB_109e69dd8:
  uVar12 = *(ulong *)(param_1 + 0x10);
  cVar4 = *(char *)(uVar12 + 4);
  uVar8 = uVar12;
  cVar3 = cVar4;
  while (cVar3 == '\x13') {
    uVar8 = *(ulong *)(uVar8 + 0x30);
    cVar3 = *(char *)(uVar8 + 4);
  }
  uVar13 = *(ulong *)(param_2 + 0x10);
  cVar3 = *(char *)(uVar13 + 4);
  uVar9 = uVar13;
  cVar5 = cVar3;
  while (cVar5 == '\x13') {
    uVar9 = *(ulong *)(uVar9 + 0x30);
    cVar5 = *(char *)(uVar9 + 4);
  }
  uVar6 = uVar12;
  cVar5 = cVar4;
  if ((uVar8 == uVar10) == (uVar9 == uVar11)) {
    while (cVar5 == '\x13') {
      puVar1 = (ulong *)(uVar6 + 0x30);
      uVar6 = *puVar1;
      cVar5 = *(char *)(*puVar1 + 4);
    }
    if (((uVar6 == uVar10) && (uVar2 = *(uint *)(param_2 + 0x20) & 0x1fffff, uVar2 != 0x80)) &&
       (uVar2 != 0x200)) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      _strcmp(uVar7,*(undefined8 *)(param_2 + 0x18));
      if ((int)uVar7 != 0) {
        return;
      }
    }
    if ((int)param_5 == 0) {
      uVar8 = uVar12;
      FUN_109ec7a0c(uVar12,uVar13);
      if ((uVar8 & 1) != 0) {
        return;
      }
    }
    else if (uVar12 == uVar13) {
      return;
    }
    if (cVar3 == '\x13') {
      do {
        uVar13 = *(ulong *)(uVar13 + 0x30);
      } while (*(char *)(uVar13 + 4) == '\x13');
      if (uVar13 != uVar11) {
        while (cVar4 == '\x13') {
LAB_109e69efc:
          uVar12 = *(ulong *)(uVar12 + 0x30);
          cVar4 = *(char *)(uVar12 + 4);
        }
        if (uVar12 != uVar10) {
          return;
        }
      }
    }
    else {
      if (cVar4 != '\x13') {
        return;
      }
      if (uVar13 != uVar11) goto LAB_109e69efc;
    }
    FUN_109e77a3c(param_3,param_2,param_1,param_4,param_5);
  }
  return;
}



/* Entry: 109e6a358; end: 109e6a503;  */

undefined * FUN_109e6a358(long *param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  
  if ((long *)*param_1 != (long *)0x0) {
    plVar4 = (long *)*param_1;
    do {
      plVar3 = plVar4;
      if (((param_2 & *(uint *)(param_1 + 4)) != 0) &&
         (puVar5 = (undefined *)param_1[0x11], (undefined *)param_1[2] == puVar5)) {
        if (((byte)puVar5[0xc] >> 1 & 1) == 0) {
          puVar2 = puVar5;
          FUN_109eca058(puVar5);
        }
        else {
          puVar2 = &UNK_10e05bf38 + *(long *)(puVar5 + 0x18);
        }
        iVar1 = 0xf605f65;
        _strcmp(&UNK_10f605f65,puVar2);
        if (iVar1 == 0) {
          return puVar5;
        }
      }
      plVar4 = (long *)*plVar3;
      param_1 = plVar3;
    } while (plVar4 != (long *)0x0);
  }
  return (undefined *)0x0;
}



/* Entry: 109e6a504; end: 109e6a68b;  */

void FUN_109e6a504(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = (undefined8 *)0x30;
  _malloc();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 6;
  }
  puVar2 = puVar1;
  FUN_109f64c74(puVar1,FUN_109f65518,FUN_109f65668);
  lVar6 = 0;
  do {
    lVar7 = *(long *)(param_2 + lVar6 * 8);
    if (lVar7 != 0) {
      for (plVar5 = *(long **)(*(long *)(*(long *)(lVar7 + 0x28) + 0x160) + 8); *plVar5 != 0;
          plVar5 = (long *)*plVar5) {
        if ((plVar5[0x11] != 0) &&
           (((*(uint *)(plVar5 + 4) & 0x1fffff) == 0x200 ||
            ((*(uint *)(plVar5 + 4) & 0x1fffff) == 0x80)))) {
          puVar3 = puVar2;
          FUN_109e69ae8(puVar2,plVar5);
          if (puVar3 == (undefined8 *)0x0) {
            FUN_109e69be0(puVar1,puVar2,plVar5,*(undefined8 *)(*(long *)(lVar7 + 0x28) + 0x160));
          }
          else {
            uVar4 = puVar3[1];
            FUN_109e69d3c(uVar4,plVar5,param_1,*puVar3,0);
            if ((int)uVar4 == 0) {
              if ((*(byte *)(plVar5[0x11] + 0xc) >> 1 & 1) == 0) {
                FUN_109eca058();
              }
              func_0x000109eb844c(param_1,&UNK_10f60dc68);
              goto joined_r0x000109e6a604;
            }
          }
        }
      }
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 6);
joined_r0x000109e6a604:
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FUN_109f65aa4(puVar1 + -6);
  lVar6 = puVar1[-5];
  while (lVar6 != 0) {
    puVar1[-5] = *(undefined8 *)(lVar6 + 0x18);
    FUN_109f65ae0();
    lVar6 = puVar1[-5];
  }
  if ((code *)puVar1[-2] != (code *)0x0) {
    (*(code *)puVar1[-2])(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(puVar1 + -6);
  return;
}



/* Entry: 109e6a68c; end: 109e6a6e3;  */

void FUN_109e6a68c(long *param_1,int param_2,ulong param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  
  if ((((param_3 & 1) == 0) && (lVar2 = *param_1, *(char *)(lVar2 + 4) == '\x13')) &&
     (*(int *)(lVar2 + 0x10) == 0)) {
    lVar1 = *(long *)(lVar2 + 0x30);
    FUN_109ec69f4(lVar1,param_2 + 1,*(undefined4 *)(lVar2 + 0x28));
    *param_1 = lVar1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 109e6a6e4; end: 109e6a737;  */

bool FUN_109e6a6e4(long param_1)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 == 0) {
    bVar2 = false;
  }
  else {
    uVar4 = 1;
    bVar2 = true;
    plVar3 = *(long **)(param_1 + 0x30);
    uVar5 = (ulong)uVar1;
    do {
      if ((*(char *)(*plVar3 + 4) == '\x13') && (*(int *)(*plVar3 + 0x10) == 0)) {
        return bVar2;
      }
      bVar2 = uVar4 < uVar1;
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 - 1;
      plVar3 = plVar3 + 6;
    } while (uVar5 != 0);
  }
  return bVar2;
}



/* Entry: 109e6a738; end: 109e6a84b;  */

long FUN_109e6a738(undefined *param_1,undefined4 *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  byte bStack_51;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar4 = (ulong)uVar2;
  lVar5 = uVar4 * 0x30;
  _malloc();
  _memcpy();
  if (uVar2 != 0) {
    uVar6 = (ulong)(uVar2 - 1);
    lVar1 = lVar5;
    uVar7 = uVar4;
    do {
      uVar2 = *(uint *)(lVar1 + 0x28);
      uVar3 = uVar2 >> 0x10 & 1;
      bStack_51 = (byte)uVar3;
      if ((param_3 == 0) || (uVar6 != 0)) {
        FUN_109e6a68c(lVar1,*param_2,0,&bStack_51);
        uVar3 = (uint)bStack_51;
        uVar2 = *(uint *)(lVar1 + 0x28);
      }
      *(uint *)(lVar1 + 0x28) = uVar2 & 0xfffe0000 | uVar2 & 0xffff | (uVar3 & 1) << 0x10;
      param_2 = param_2 + 1;
      uVar6 = uVar6 - 1;
      lVar1 = lVar1 + 0x30;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar2 = *(uint *)(param_1 + 4);
  if (((byte)param_1[0xc] >> 1 & 1) == 0) {
    FUN_109eca058(param_1);
  }
  else {
    param_1 = &UNK_10e05bf38 + *(long *)(param_1 + 0x18);
  }
  lVar1 = lVar5;
  FUN_109ec7fc4(lVar5,uVar4,uVar2 >> 0x16 & 3,uVar2 >> 0x18 & 1,param_1);
  _free(lVar5);
  return lVar1;
}



/* Entry: 109e6a84c; end: 109e6a893;  */

undefined8 FUN_109e6a84c(long param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined4 *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  puVar4 = *(undefined4 **)(param_1 + 0x30);
  if (*(char *)(puVar4 + 1) == '\x13') {
    FUN_109e6a84c(puVar4,param_2);
    param_2 = puVar4;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  uStack_70 = (ulong)uVar1;
  uVar2 = *(uint *)(param_1 + 0x28);
  uStack_68 = (ulong)uVar2;
  ppuVar5 = &puStack_78;
  puStack_78 = param_2;
  FUN_109f65414(ppuVar5,0x18);
  ppuVar6 = &PTR___tlv_bootstrap_11340ddb0;
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar6 = (undefined *)0x1132ff008;
    ppuVar6[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_lock(0x1132ff020);
  if (lRam0000000113834750 == 0) {
    lVar7 = lRam0000000113834730;
    FUN_109f64c74(lRam0000000113834730,0x109ec7790,0x109eca4cc);
    lRam0000000113834750 = lVar7;
  }
  lVar7 = lRam0000000113834750;
  lVar8 = lRam0000000113834750;
  FUN_109f64fdc(lRam0000000113834750,ppuVar5,&puStack_78);
  puVar13 = puRam0000000113834738;
  if (lVar8 != 0) goto LAB_109ec6c30;
  puVar9 = puRam0000000113834738;
  FUN_109f6650c(puRam0000000113834738,0x38);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[6] = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
  }
  *(undefined2 *)((long)puVar9 + 4) = 0x1413;
  *(uint *)(puVar9 + 2) = uVar1;
  uVar3 = param_2[0xb];
  *(uint *)(puVar9 + 5) = uVar2;
  *(undefined4 *)((long)puVar9 + 0x2c) = uVar3;
  puVar9[6] = param_2;
  *(undefined4 *)puVar9 = *param_2;
  if ((*(byte *)(param_2 + 3) >> 1 & 1) == 0) {
    FUN_109eca058();
    if (uVar1 != 0) goto LAB_109ec6b44;
LAB_109ec6b68:
    puVar14 = &UNK_10f6157f2;
  }
  else {
    param_2 = (undefined4 *)(&UNK_10e05bf38 + *(long *)(param_2 + 6));
    if (uVar1 == 0) goto LAB_109ec6b68;
LAB_109ec6b44:
    puVar14 = &UNK_10f6157f7;
  }
  puVar10 = puVar13;
  FUN_109f666b0(puVar13,puVar14);
  puVar4 = param_2;
  _strchr(param_2,0x5b);
  if (puVar4 != (undefined4 *)0x0) {
    lVar8 = (long)puVar10 + ((long)puVar4 - (long)param_2);
    puVar11 = puVar4;
    _strlen();
    lVar12 = lVar8;
    _strlen(lVar8);
    uVar15 = (ulong)(uint)((int)lVar12 - (int)puVar11);
    _memmove(lVar8,lVar8 + ((ulong)puVar11 & 0xffffffff),uVar15);
    _memcpy(lVar8 + uVar15,puVar4,(ulong)puVar11 & 0xffffffff);
  }
  puVar9[3] = puVar10;
  FUN_109f6650c(puVar13,0x18);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = 0;
  }
  puVar13[2] = uStack_68;
  puVar13[1] = uStack_70;
  *puVar13 = puStack_78;
  func_0x000109f650c0(lVar7,ppuVar5,puVar13,puVar9);
  lVar8 = lVar7;
LAB_109ec6c30:
  ppuVar6 = &PTR___tlv_bootstrap_11340ddb0;
  uVar16 = *(undefined8 *)(lVar8 + 0x10);
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar6 = (undefined *)0x1132ff008;
    ppuVar6[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_unlock(0x1132ff020);
  return uVar16;
}



/* Entry: 109e6a894; end: 109e6b727;  */

long FUN_109e6a894(long param_1,long param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  uint uStack_7c;
  long lStack_78;
  uint uStack_6c;
  long lStack_68;
  
  puVar4 = (undefined8 *)0x30;
  _malloc();
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4 = puVar4 + 6;
  }
  lVar12 = 0;
  do {
    piVar10 = *(int **)(param_2 + 0xa8 + lVar12 * 8);
    lStack_68 = 0;
    lStack_78 = 0;
    if (piVar10 != (int *)0x0) {
      func_0x000109e6ab64(puVar4,param_1,param_2,piVar10,&lStack_68,&uStack_6c,0);
      func_0x000109e6ab64(puVar4,param_1,param_2,piVar10,&lStack_78,&uStack_7c,1);
      uVar3 = uStack_6c;
      lVar6 = (long)*piVar10 * 0x80;
      uVar9 = (ulong)uStack_6c;
      if (*(uint *)(param_1 + 0xf4 + lVar6) < uStack_6c) {
        func_0x000109f47670();
        func_0x000109eb844c(param_2,&UNK_10f60dc9b);
        lVar6 = (long)*piVar10 << 7;
      }
      uVar2 = uStack_7c;
      uVar8 = (ulong)uStack_7c;
      if (*(uint *)(param_1 + 0x110 + lVar6) < uStack_7c) {
        func_0x000109f47670();
        func_0x000109eb844c(param_2,&UNK_10f60dcbf);
      }
      lVar6 = *(long *)(param_2 + 0x68);
      if (*(int *)(lVar6 + 0x114) == 0) {
        lVar12 = 0;
        if (puVar4 == (undefined8 *)0x0) {
          return 0;
        }
        goto LAB_109e6ab20;
      }
      *(uint *)(lVar6 + 0x120) = *(uint *)(lVar6 + 0x120) | 1 << (ulong)((uint)lVar12 & 0x1f);
      piVar5 = piVar10;
      FUN_109f658b0(piVar10,uVar9 * 8);
      lVar6 = lStack_68;
      *(int **)(*(long *)(piVar10 + 10) + 0x698) = piVar5;
      if (lStack_68 != 0) {
        lVar11 = lStack_68 + -0x30;
        FUN_109f65aa4(lVar11);
        *(int **)(lVar6 + -0x30) = piVar10 + -0xc;
        lVar7 = *(long *)(piVar10 + -10);
        *(long *)(lVar6 + -0x18) = lVar7;
        *(long *)(piVar10 + -10) = lVar11;
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x10) = lVar11;
        }
      }
      *(uint *)(*(long *)(piVar10 + 10) + 0x690) = uVar3;
      if (uVar3 != 0) {
        lVar7 = 0;
        do {
          *(long *)(*(long *)(*(long *)(piVar10 + 10) + 0x698) + lVar7) = lVar6;
          lVar7 = lVar7 + 8;
          lVar6 = lVar6 + 0x38;
        } while (uVar9 * 8 - lVar7 != 0);
      }
      lVar6 = *(long *)(piVar10 + 10);
      *(char *)(*(long *)(lVar6 + 0x160) + 100) = (char)uVar3;
      *(char *)(lVar6 + 0x34) = (char)uVar3;
      piVar5 = piVar10;
      FUN_109f658b0(piVar10,uVar8 * 8);
      lVar6 = lStack_78;
      *(int **)(*(long *)(piVar10 + 10) + 0x6a0) = piVar5;
      if (lStack_78 != 0) {
        lVar11 = lStack_78 + -0x30;
        FUN_109f65aa4(lVar11);
        *(int **)(lVar6 + -0x30) = piVar10 + -0xc;
        lVar7 = *(long *)(piVar10 + -10);
        *(long *)(lVar6 + -0x18) = lVar7;
        *(long *)(piVar10 + -10) = lVar11;
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x10) = lVar11;
        }
      }
      if (uVar2 != 0) {
        lVar7 = 0;
        do {
          *(long *)(*(long *)(*(long *)(piVar10 + 10) + 0x6a0) + lVar7) = lVar6;
          lVar7 = lVar7 + 8;
          lVar6 = lVar6 + 0x38;
        } while (uVar8 * 8 - lVar7 != 0);
      }
      lVar6 = *(long *)(piVar10 + 10);
      uVar1 = (undefined1)uVar2;
      *(undefined1 *)(*(long *)(lVar6 + 0x160) + 0x66) = uVar1;
      *(undefined1 *)(lVar6 + 0x36) = uVar1;
    }
    lVar12 = lVar12 + 1;
    if (lVar12 == 6) {
      lVar6 = param_2;
      func_0x000109e6b280(param_2,0);
      lVar12 = 0;
      if ((int)lVar6 != 0) {
        func_0x000109e6b280(param_2,1);
        lVar12 = param_2;
      }
      if (puVar4 != (undefined8 *)0x0) {
LAB_109e6ab20:
        FUN_109f65aa4(puVar4 + -6);
        FUN_109f65ae0(puVar4 + -6);
      }
      return lVar12;
    }
  } while( true );
}



/* Entry: 109e6b728; end: 109e6b887;  */

long * FUN_109e6b728(long *param_1,int *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 == 0) {
LAB_109e6b77c:
    *param_2 = 0;
    return (long *)0x0;
  }
  lVar9 = *param_1;
  lVar5 = (ulong)uVar1 * 0x18;
  lVar4 = lVar9;
  while( true ) {
    lVar3 = lVar4 + 0x18;
    if ((*(long *)(lVar4 + 8) != 0) && (lVar8 = param_1[3], *(long *)(lVar4 + 8) != lVar8)) break;
    lVar5 = lVar5 + -0x18;
    lVar4 = lVar3;
    if (lVar5 == 0) goto LAB_109e6b77c;
  }
  if (lVar5 == 0x18) {
    uVar6 = 1;
    *param_2 = 1;
  }
  else {
    uVar6 = 1;
    do {
      if (*(long *)(lVar3 + 8) != 0 && *(long *)(lVar3 + 8) != lVar8) {
        uVar6 = (ulong)((int)uVar6 + 1);
      }
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != lVar9 + (ulong)uVar1 * 0x18);
    *param_2 = (int)uVar6;
    if ((int)uVar6 == 0) {
      return (long *)0x0;
    }
  }
  plVar2 = (long *)(uVar6 << 3);
  _malloc();
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 * 0x18;
    lVar5 = lVar9 + (ulong)uVar1 * 0x18;
    do {
      if (*(long *)(lVar9 + 8) != 0 && *(long *)(lVar9 + 8) != lVar8) {
        *plVar2 = lVar9;
        if (lVar4 != 0x18) {
          lVar9 = lVar9 + 0x18;
          uVar7 = 1;
          do {
            if (*(long *)(lVar9 + 8) != 0 && *(long *)(lVar9 + 8) != lVar8) {
              plVar2[uVar7] = lVar9;
              uVar7 = (ulong)((int)uVar7 + 1);
            }
            lVar9 = lVar9 + 0x18;
          } while (lVar9 != lVar5);
        }
        break;
      }
      lVar9 = lVar9 + 0x18;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
  }
  _qsort(plVar2,uVar6,8,FUN_109e6c2b8);
  return plVar2;
}



/* Entry: 109e6b888; end: 109e6bc83;  */

void FUN_109e6b888(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  int param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,int *param_14,int param_15)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uStack_68;
  
  if ((int)param_1[1] != 0) {
    uVar4 = 0;
    do {
      iVar1 = *(int *)(*param_1 + uVar4 * 4);
      uVar3 = 0;
      uStack_68 = param_4;
      FUN_109f65f70(param_3,&uStack_68,&UNK_10f60dd19);
      lVar2 = param_1[2];
      if (lVar2 == 0) {
        func_0x000109e6b9bc(param_5,param_2,*param_3,param_5,param_14,param_6,param_7,param_8,
                            iVar1 + param_9,*param_14 - param_15,param_11,param_12,param_13);
      }
      else {
        FUN_109e6b888(lVar2,param_2,param_3,uStack_68,param_5,param_6,param_7,param_8,
                      param_9 + *(int *)(lVar2 + 0xc) * iVar1,uVar3,param_11,param_12,param_13,
                      param_14,param_15);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 1));
  }
  return;
}



/* Entry: 109e6bc84; end: 109e6bd0f;  */

void FUN_109e6bc84(long param_1,int *param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  int iStack_34;
  
  cVar1 = *(char *)(param_1 + 4);
  lVar3 = param_1;
  while (cVar1 == '\x13') {
    lVar3 = *(long *)(lVar3 + 0x30);
    cVar1 = *(char *)(lVar3 + 4);
  }
  FUN_109ec88a0();
  uVar2 = (uint)param_1;
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  *param_2 = *param_2 + uVar2;
  iStack_34 = 0;
  FUN_109e6bf18(lVar3,&iStack_34);
  *param_3 = *param_3 + iStack_34 * uVar2;
  return;
}



/* Entry: 109e6bd10; end: 109e6be97;  */

long * FUN_109e6bd10(long *param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  
  puVar3 = *(undefined **)(param_3 + 0x88);
  if (((byte)puVar3[0xc] >> 1 & 1) == 0) {
    FUN_109eca058();
  }
  else {
    puVar3 = &UNK_10e05bf38 + *(long *)(puVar3 + 0x18);
  }
  puVar4 = puVar3;
  (**(code **)(param_2 + 8))(puVar3);
  lVar5 = param_2;
  FUN_109f64fdc(param_2,puVar4,puVar3);
  lVar7 = *(long *)(param_3 + 0x10);
  cVar1 = *(char *)(lVar7 + 4);
  lVar8 = lVar7;
  while (cVar1 == '\x13') {
    lVar8 = *(long *)(lVar8 + 0x30);
    cVar1 = *(char *)(lVar8 + 4);
  }
  bVar2 = lVar8 == *(long *)(param_3 + 0x88);
  if (!bVar2) {
    lVar7 = *(long *)(param_3 + 0x88);
  }
  if (lVar5 == 0) {
    FUN_109f658b0(param_1,0x20);
    if (param_1 != (long *)0x0) {
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
    }
    *param_1 = lVar7;
    param_1[1] = param_3;
    *(bool *)((long)param_1 + 0x1c) = bVar2;
    *(bool *)((long)param_1 + 0x1e) = (*(ulong *)(param_3 + 0x20) & 0x1fffff) == 0x200;
    bVar2 = (*(byte *)(param_3 + 0x25) >> 1 & 1) != 0;
    if (bVar2) {
      uVar6 = *(undefined4 *)(param_3 + 0x38);
    }
    else {
      uVar6 = 0;
    }
    *(bool *)((long)param_1 + 0x1d) = bVar2;
    *(undefined4 *)(param_1 + 3) = uVar6;
    puVar3 = *(undefined **)(param_3 + 0x88);
    if (((byte)puVar3[0xc] >> 1 & 1) == 0) {
      FUN_109eca058();
    }
    else {
      puVar3 = &UNK_10e05bf38 + *(long *)(puVar3 + 0x18);
    }
    puVar4 = puVar3;
    (**(code **)(param_2 + 8))(puVar3);
    func_0x000109f650c0(param_2,puVar4,puVar3,param_1);
  }
  else {
    param_1 = *(long **)(lVar5 + 0x10);
    if (*param_1 == lVar7) {
      if ((bool)*(char *)((long)param_1 + 0x1c) != bVar2) {
        param_1 = (long *)0x0;
      }
    }
    else {
      param_1 = (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 109e6be98; end: 109e6bf17;  */

undefined4 * FUN_109e6be98(undefined4 *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined4 *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_1 + 1) != '\x13') {
    return param_1;
  }
  func_0x000109eca118();
  func_0x000109eca118();
  FUN_109e6be98();
  uVar1 = *(uint *)(param_2 + 8);
  uStack_70 = (ulong)uVar1;
  uStack_68 = 0;
  ppuVar3 = &puStack_78;
  puStack_78 = param_1;
  FUN_109f65414(ppuVar3,0x18);
  ppuVar4 = &PTR___tlv_bootstrap_11340ddb0;
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar4 = (undefined *)0x1132ff008;
    ppuVar4[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_lock(0x1132ff020);
  if (lRam0000000113834750 == 0) {
    lVar5 = lRam0000000113834730;
    FUN_109f64c74(lRam0000000113834730,0x109ec7790,0x109eca4cc);
    lRam0000000113834750 = lVar5;
  }
  lVar5 = lRam0000000113834750;
  lVar6 = lRam0000000113834750;
  FUN_109f64fdc(lRam0000000113834750,ppuVar3,&puStack_78);
  puVar11 = puRam0000000113834738;
  if (lVar6 != 0) goto LAB_109ec6c30;
  puVar7 = puRam0000000113834738;
  FUN_109f6650c(puRam0000000113834738,0x38);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[6] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  *(undefined2 *)((long)puVar7 + 4) = 0x1413;
  *(uint *)(puVar7 + 2) = uVar1;
  uVar2 = param_1[0xb];
  *(undefined4 *)(puVar7 + 5) = 0;
  *(undefined4 *)((long)puVar7 + 0x2c) = uVar2;
  puVar7[6] = param_1;
  *(undefined4 *)puVar7 = *param_1;
  if ((*(byte *)(param_1 + 3) >> 1 & 1) == 0) {
    func_0x000109eca058();
    if (uVar1 != 0) goto LAB_109ec6b44;
LAB_109ec6b68:
    puVar12 = &UNK_10f6157f2;
  }
  else {
    param_1 = (undefined4 *)(&UNK_10e05bf38 + *(long *)(param_1 + 6));
    if (uVar1 == 0) goto LAB_109ec6b68;
LAB_109ec6b44:
    puVar12 = &UNK_10f6157f7;
  }
  puVar8 = puVar11;
  FUN_109f666b0(puVar11,puVar12);
  puVar14 = param_1;
  _strchr(param_1,0x5b);
  if (puVar14 != (undefined4 *)0x0) {
    lVar6 = (long)puVar8 + ((long)puVar14 - (long)param_1);
    puVar9 = puVar14;
    _strlen();
    lVar10 = lVar6;
    _strlen(lVar6);
    uVar13 = (ulong)(uint)((int)lVar10 - (int)puVar9);
    _memmove(lVar6,lVar6 + ((ulong)puVar9 & 0xffffffff),uVar13);
    _memcpy(lVar6 + uVar13,puVar14,(ulong)puVar9 & 0xffffffff);
  }
  puVar7[3] = puVar8;
  FUN_109f6650c(puVar11,0x18);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
  }
  puVar11[2] = uStack_68;
  puVar11[1] = uStack_70;
  *puVar11 = puStack_78;
  func_0x000109f650c0(lVar5,ppuVar3,puVar11,puVar7);
  lVar6 = lVar5;
LAB_109ec6c30:
  ppuVar4 = &PTR___tlv_bootstrap_11340ddb0;
  puVar14 = *(undefined4 **)(lVar6 + 0x10);
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar4 = (undefined *)0x1132ff008;
    ppuVar4[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_unlock(0x1132ff020);
  return puVar14;
}



/* Entry: 109e6bf18; end: 109e6c2b7;  */

void FUN_109e6bf18(ulong param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = param_1;
  FUN_109eca23c();
  if ((*(char *)(param_1 + 4) == '\x13') && (*(int *)(param_1 + 0x10) == 0)) {
    uVar4 = 1;
  }
  else if ((int)uVar4 == 0) {
    return;
  }
  lVar3 = 0;
  uVar4 = uVar4 & 0xffffffff;
  do {
    if (*(byte *)(param_1 + 4) - 0x11 < 2) {
      uVar2 = *(ulong *)(*(long *)(param_1 + 0x30) + lVar3);
    }
    else {
      uVar2 = param_1;
      func_0x000109eca118();
    }
    uVar1 = uVar2;
    FUN_109eca164();
    if ((int)uVar1 == 0) {
      FUN_109e6bf18(uVar2,param_2);
    }
    else {
      *param_2 = *param_2 + 1;
    }
    lVar3 = lVar3 + 0x30;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 109e6c2b8; end: 109e6c2cb;  */

void FUN_109e6c2b8(long *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strcmp_11034cba8)(*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_2 + 8));
  return;
}



/* Entry: 109e6c2cc; end: 109e6c817;  */

void FUN_109e6c2cc(undefined8 param_1,long *param_2,undefined8 param_3,ulong param_4,long param_5,
                  uint *param_6,uint *param_7,uint *param_8,long param_9,ulong param_10,
                  undefined4 param_11,int param_12)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  ulong *puVar16;
  ulong uVar17;
  uint uVar18;
  char *pcVar19;
  ulong uVar20;
  ulong uVar21;
  uint uStack_dc;
  undefined8 auStack_70 [2];
  
  bVar3 = *(byte *)(param_4 + 4);
  uVar5 = bVar3 - 0x11;
  if (uVar5 < 2) {
    uStack_dc = *param_7;
  }
  uVar21 = param_4;
  FUN_109eca23c();
  uVar7 = (uint)uVar21;
  if (bVar3 == 0x11) {
    if ((*(byte *)(*(long *)(param_9 + 0x68) + 0x124) & 1) == 0) {
      FUN_109e6c818(param_7,param_4,param_11._1_1_,param_12);
    }
  }
  else if ((bVar3 == 0x13) && (*(int *)(param_4 + 0x10) == 0)) {
    uVar7 = 1;
  }
  pcVar19 = "%s";
  if (((char *)*param_2 != (char *)0x0) && (*(char *)*param_2 != '\0')) {
    pcVar19 = ".%s";
  }
  if (uVar7 != 0) {
    uVar21 = 0;
    do {
      auStack_70[0] = param_3;
      if (uVar5 < 2) {
        puVar16 = (ulong *)(*(long *)(param_4 + 0x30) + uVar21 * 0x30);
        uVar20 = *puVar16;
        uVar15 = (uint)puVar16[3];
        if (*(char *)(*(long *)(param_9 + 0x68) + 0x124) == '\x01') {
          uVar15 = uVar15 + uStack_dc;
LAB_109e6c420:
          *param_7 = uVar15;
        }
        else if (uVar15 != 0xffffffff) {
          cVar4 = *(char *)(param_10 + 4);
          uVar17 = param_10;
          while (cVar4 == '\x13') {
            uVar17 = *(ulong *)(uVar17 + 0x30);
            cVar4 = *(char *)(uVar17 + 4);
          }
          if (uVar17 == param_4) goto LAB_109e6c420;
        }
        if (*param_2 != 0) {
          FUN_109f65f70(param_2,auStack_70,pcVar19);
        }
      }
      else {
        uVar20 = param_4;
        func_0x000109eca118();
        if (*param_2 != 0) {
          FUN_109f65f70(param_2,auStack_70,&UNK_10f60dd19);
        }
      }
      uVar17 = uVar20;
      FUN_109eca164();
      if ((int)uVar17 == 0) {
        FUN_109e6c2cc(param_1,param_2,auStack_70[0],uVar20,param_5,param_6,param_7,param_8,param_9,
                      param_10,(char)param_11,param_12);
      }
      else {
        lVar14 = *param_2;
        uVar10 = param_4;
        FUN_109eca23c();
        puVar1 = (undefined8 *)(param_5 + (ulong)*param_6 * 0x20);
        puVar1[2] = uVar20;
        uVar15 = *(uint *)(uVar20 + 4);
        uVar17 = uVar20;
        while ((uVar15 & 0xff) == 0x13) {
          uVar17 = *(ulong *)(uVar17 + 0x30);
          uVar15 = *(uint *)(uVar17 + 4);
        }
        uVar18 = uVar15;
        uVar6 = uVar15 & 0xff;
        while (uVar6 == 0x13) {
          uVar17 = *(ulong *)(uVar17 + 0x30);
          uVar18 = (uint)*(byte *)(uVar17 + 4);
          uVar6 = uVar18;
        }
        bVar3 = 0;
        if ((uVar18 & 0xff) - 2 < 3) {
          bVar3 = (byte)(uVar15 >> 0x18) & 1;
        }
        bVar2 = 0;
        if (1 < *(byte *)(uVar17 + 0xe)) {
          bVar2 = bVar3;
        }
        *(byte *)((long)puVar1 + 0x1c) = bVar2;
        if ((*(byte *)(*(long *)(param_9 + 0x68) + 0x124) & 1) == 0) {
          uVar11 = param_1;
          FUN_109f65c2c(param_1,lVar14);
          *puVar1 = uVar11;
          if ((char)param_11 == '\0') {
            puVar1[1] = uVar11;
          }
          else {
            uVar11 = param_1;
            FUN_109f65c2c(param_1,lVar14);
            puVar1[1] = uVar11;
            _strchr();
            uVar12 = uVar11;
            _strchr();
            uVar13 = uVar12;
            _strlen();
            _memmove(uVar11,uVar12,(int)uVar13 + 1);
          }
          uVar17 = uVar20;
          if ((*(char *)(uVar20 + 4) == '\x13') && (*(int *)(uVar20 + 0x10) == 0)) {
            if (uVar21 + 1 != (uVar10 & 0xffffffff)) {
              func_0x000109eb844c(param_9,&UNK_10f60649c);
            }
            func_0x000109eca118();
          }
          if (param_12 == 3) {
            FUN_109ec920c(uVar20,*(char *)((long)puVar1 + 0x1c) != '\0');
            iVar8 = (int)uVar20;
            FUN_109ec9468(uVar17,*(char *)((long)puVar1 + 0x1c) != '\0');
            iVar9 = (int)uVar17;
          }
          else {
            FUN_109ec8a54(uVar20,*(char *)((long)puVar1 + 0x1c) != '\0');
            iVar8 = (int)uVar20;
            FUN_109ec8c8c(uVar17,*(char *)((long)puVar1 + 0x1c) != '\0');
            iVar9 = (int)uVar17;
          }
          uVar15 = (iVar8 + *param_7) - 1 & -iVar8;
          *param_7 = uVar15;
          *(uint *)(puVar1 + 3) = uVar15;
          uVar15 = *param_7;
          *param_7 = uVar15 + iVar9;
          *param_8 = uVar15 + iVar9 + 0xf & 0xfffffff0;
        }
        else {
          *(uint *)(puVar1 + 3) = *param_7;
          FUN_109ec96e8(uVar20,1);
          *param_7 = *param_7 + (int)uVar20;
        }
        *param_6 = *param_6 + 1;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar7);
  }
  if ((*(char *)(param_4 + 4) == '\x11') &&
     ((*(byte *)(*(long *)(param_9 + 0x68) + 0x124) & 1) == 0)) {
    uVar5 = *param_7;
    if (param_12 == 3) {
      FUN_109ec920c();
      iVar8 = (int)param_4;
    }
    else {
      FUN_109ec8a54(param_4,param_11._1_1_);
      iVar8 = (int)param_4;
    }
    *param_7 = (uVar5 + iVar8) - 1 & -iVar8;
    return;
  }
  return;
}



/* Entry: 109e6c818; end: 109e6c867;  */

void FUN_109e6c818(uint *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if (param_4 == 3) {
    FUN_109ec920c();
    iVar2 = (int)param_2;
  }
  else {
    FUN_109ec8a54(param_2,param_3);
    iVar2 = (int)param_2;
  }
  *param_1 = (uVar1 + iVar2) - 1 & -iVar2;
  return;
}



/* Entry: 109e6c868; end: 109e6cbef;  */

void FUN_109e6c868(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  lVar4 = 0;
  do {
    lVar5 = *(long *)(param_2 + 0xa8 + lVar4 * 8);
    if (lVar5 != 0) {
      for (plVar6 = *(long **)(*(long *)(*(long *)(lVar5 + 0x28) + 0x160) + 8); *plVar6 != 0;
          plVar6 = (long *)*plVar6) {
        uVar3 = plVar6[4];
        if ((uVar3 & 0x292) != 0) {
          if (plVar6[0xf] == 0) {
            if (((uVar3 >> 0x29 & 1) != 0) &&
               ((((uVar3 & 0x1fffff) != 0x200 && ((uVar3 & 0x1fffff) != 0x80)) ||
                (plVar6[0x11] == 0)))) {
              lVar2 = plVar6[2];
              bVar1 = *(byte *)(lVar2 + 4);
              while (bVar1 == 0x13) {
                lVar2 = *(long *)(lVar2 + 0x30);
                bVar1 = *(byte *)(lVar2 + 4);
              }
              if ((bVar1 | 2) == 0xf) {
                uStack_68 = *(undefined8 *)(lVar5 + 0x28);
                uStack_58 = plVar6[7];
                lStack_70 = param_2;
                plStack_60 = plVar6;
                FUN_109e6cbf0(&lStack_70);
              }
            }
          }
          else {
            uStack_68 = *(undefined8 *)(lVar5 + 0x28);
            uStack_58 = CONCAT44(*(undefined4 *)(param_1 + 0x458),
                                 *(undefined4 *)((long)plVar6 + 0x3c));
            lStack_70 = param_2;
            plStack_60 = plVar6;
            func_0x000109e6c9a0(&lStack_70,plVar6[2]);
          }
        }
      }
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 6);
  lVar4 = *(long *)(param_2 + 0x68);
  _memcpy(*(undefined8 *)(lVar4 + 0x58),*(undefined8 *)(lVar4 + 0x50),
          (ulong)*(uint *)(lVar4 + 0x4c) << 2);
  return;
}



/* Entry: 109e6cbf0; end: 109e6ce1f;  */

void FUN_109e6cbf0(long *param_1,long param_2)

{
  byte *pbVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  
  if ((*(char *)(param_2 + 4) == '\x13') &&
     (lVar7 = param_2, func_0x000109eca118(), *(char *)(lVar7 + 4) == '\x13')) {
    lVar7 = param_2;
    func_0x000109eca118(param_2);
    lVar5 = param_2;
    FUN_109eca23c();
    if ((int)lVar5 != 0) {
      uVar11 = 0;
      do {
        FUN_109e6cbf0(param_1,lVar7);
        uVar11 = uVar11 + 1;
        lVar5 = param_2;
        FUN_109eca23c();
      } while (uVar11 < (uint)lVar5);
    }
  }
  else {
    uVar11 = *(uint *)((long)param_1 + 0x1c);
    if ((-1 < (int)uVar11) && (uVar11 < *(uint *)(*(long *)(param_1[1] + 0x5b0) + 0x18))) {
      lVar7 = 0;
      lVar5 = *(long *)(*(long *)(param_1[1] + 0x5b0) + 0x20);
      *(uint *)((long)param_1 + 0x1c) = uVar11 + 1;
      lVar5 = lVar5 + (ulong)uVar11 * 0x78;
      uVar11 = *(uint *)(lVar5 + 0x20);
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      uVar6 = (ulong)uVar11;
      do {
        lVar8 = param_1[3];
        *(int *)(param_1 + 3) = (int)lVar8 + 1;
        *(int *)(*(long *)(lVar5 + 0x40) + lVar7) = (int)lVar8;
        lVar7 = lVar7 + 4;
      } while (uVar6 << 2 != lVar7);
      lVar7 = 0;
      do {
        lVar8 = *(long *)(*param_1 + lVar7 * 8 + 0xa8);
        if ((lVar8 != 0) && (pbVar1 = (byte *)(lVar5 + 0x24 + lVar7 * 2), pbVar1[1] == 1)) {
          cVar3 = *(char *)(*(long *)(lVar5 + 0x18) + 4);
          if (cVar3 == '\r') {
            uVar9 = 0;
            do {
              uVar2 = uVar9 + *pbVar1;
              if (*(char *)(lVar5 + 0x70) == '\x01') {
                lVar10 = *(long *)(lVar8 + 0x28);
                if (*(uint *)(lVar10 + 0x6cc) <= (uint)uVar2) break;
                lVar4 = (uVar2 & 0xffffffff) * 0x10;
                *(char *)(*(long *)(lVar10 + 0x6d8) + lVar4) =
                     (char)*(undefined4 *)(*(long *)(lVar5 + 0x40) + uVar9 * 4);
                *(undefined1 *)(*(long *)(lVar10 + 0x6d8) + lVar4 + 1) = 1;
                *(undefined1 *)(lVar10 + 0x6d0) = 1;
              }
              else {
                if (0x1f < (uint)uVar2) break;
                *(char *)(*(long *)(lVar8 + 0x28) + (uVar2 & 0xffffffff) + 0x338) =
                     (char)*(undefined4 *)(*(long *)(lVar5 + 0x40) + uVar9 * 4);
              }
              uVar9 = uVar9 + 1;
            } while (uVar6 != uVar9);
          }
          else if (cVar3 == '\x0f') {
            uVar9 = 0;
            do {
              uVar2 = uVar9 + *pbVar1;
              if (*(char *)(lVar5 + 0x70) == '\x01') {
                lVar10 = *(long *)(lVar8 + 0x28);
                if (*(uint *)(lVar10 + 0x6e0) <= (uint)uVar2) break;
                lVar4 = (uVar2 & 0xffffffff) * 0x10;
                *(char *)(*(long *)(lVar10 + 0x6e8) + lVar4) =
                     (char)*(undefined4 *)(*(long *)(lVar5 + 0x40) + uVar9 * 4);
                *(undefined1 *)(*(long *)(lVar10 + 0x6e8) + lVar4 + 1) = 1;
                *(undefined1 *)(lVar10 + 0x6e4) = 1;
              }
              else {
                if (0x1f < (uint)uVar2) break;
                *(char *)(*(long *)(lVar8 + 0x28) + (uVar2 & 0xffffffff) + 0x5f0) =
                     (char)*(undefined4 *)(*(long *)(lVar5 + 0x40) + uVar9 * 4);
              }
              uVar9 = uVar9 + 1;
            } while (uVar6 != uVar9);
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 6);
    }
  }
  return;
}



/* Entry: 109e6ce20; end: 109e6cf87;  */

void FUN_109e6ce20(int *param_1,int *param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  
  bVar1 = *(byte *)(param_3 + 0xe);
  uVar6 = *(uint *)(param_3 + 4) - 4;
  if ((uVar6 & 0xff) < 0xc) {
    uVar3 = (ulong)uVar6 & 0xff;
    uVar6 = *(uint *)(&UNK_10e061a18 + uVar3 * 4);
    lVar4 = *(long *)(&UNK_10e061a48 + uVar3 * 8);
  }
  else {
    uVar6 = 0;
    lVar4 = 1;
  }
  bVar2 = *(byte *)(param_3 + 0xd);
  uVar3 = (ulong)bVar2;
  if (bVar1 < 2) {
    if (bVar2 != 0) {
      uVar6 = *(uint *)(param_3 + 4) & 0xff;
      do {
        if (uVar6 < 9) {
          if (uVar6 < 2) {
            if ((uVar6 == 0) || (uVar6 == 1)) {
LAB_109e6cf20:
              iVar5 = *param_2;
LAB_109e6cf5c:
              *param_1 = iVar5;
            }
          }
          else if (uVar6 == 2) {
            *param_1 = *param_2;
          }
          else if (uVar6 == 4) goto LAB_109e6cf38;
        }
        else if (uVar6 - 9 < 2) {
LAB_109e6cf38:
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
        }
        else {
          if (uVar6 == 0xb) {
            iVar5 = 0;
            if (*param_2 != 0) {
              iVar5 = (int)param_4;
            }
            goto LAB_109e6cf5c;
          }
          if (uVar6 == 0xd) goto LAB_109e6cf20;
        }
        param_1 = param_1 + lVar4;
        param_2 = param_2 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  else {
    func_0x000109ec8580(param_3);
    lVar4 = 0;
    do {
      FUN_109e6ce20(param_1,*(undefined8 *)(*(long *)(param_2 + 0x22) + lVar4),param_3,param_4);
      param_1 = param_1 + ((uint)bVar2 << (ulong)(uVar6 & 0x1f));
      lVar4 = lVar4 + 8;
    } while ((ulong)bVar1 * 8 - lVar4 != 0);
  }
  return;
}



/* Entry: 109e6cf88; end: 109e6e64b;  */

undefined8 FUN_109e6cf88(ulong param_1,ulong param_2,int param_3)

{
  ulong *puVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  short sVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined *puVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined *puVar23;
  uint *puVar24;
  long lVar25;
  int *piVar26;
  ulong uVar27;
  long lVar28;
  int *piVar29;
  long lVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  long *plVar34;
  long lVar35;
  long lVar36;
  long *plVar37;
  byte *pbVar38;
  undefined *puVar39;
  ulong uVar40;
  uint uVar41;
  uint uVar42;
  undefined *puVar43;
  ulong uVar44;
  undefined4 uStack_13c;
  long lStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long alStack_b8 [8];
  undefined1 auStack_71 [17];
  
  lVar15 = *(long *)(param_2 + 0x68);
  if (*(long *)(lVar15 + 0x20) != 0) {
    lVar15 = *(long *)(lVar15 + 0x20) + -0x30;
    FUN_109f65aa4(lVar15);
    FUN_109f65ae0(lVar15);
    lVar15 = *(long *)(param_2 + 0x68);
  }
  *(undefined8 *)(lVar15 + 0x20) = 0;
  *(undefined4 *)(lVar15 + 0x18) = 0;
  alStack_b8[4] = 0;
  alStack_b8[3] = 0;
  alStack_b8[6] = 0;
  alStack_b8[5] = 0;
  alStack_b8[0] = 0;
  puStack_c0 = (undefined *)0x0;
  alStack_b8[2] = 0;
  alStack_b8[1] = 0;
  puStack_d8 = (undefined *)0x0;
  plStack_e0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if ((*(byte *)(lVar15 + 0x124) & 1) == 0) {
    lVar32 = 0;
    lVar15 = param_2 + 0xa8;
    do {
      lVar33 = *(long *)(lVar15 + lVar32 * 8);
      if (lVar33 != 0) {
        lVar11 = 0;
        FUN_109f64c74(0,FUN_109f65518,FUN_109f65668);
        alStack_b8[lVar32] = lVar11;
        alStack_b8[7] = 0;
        uStack_128 = uStack_128 & 0xffffffff00000000;
        plVar34 = *(long **)(*(long *)(*(long *)(lVar33 + 0x28) + 0x160) + 0x178);
        for (plVar37 = (long *)*plVar34; plVar37 != (long *)0x0; plVar37 = (long *)*plVar37) {
          lVar33 = plVar34[6];
          if (lVar33 != 0) {
            do {
              lVar33 = *(long *)(lVar33 + 0x30);
              if (lVar33 != 0) {
                do {
                  for (plVar37 = *(long **)(lVar33 + 0x20); *plVar37 != 0;
                      plVar37 = (long *)*plVar37) {
                    if ((int)plVar37[3] == 3) {
                      uVar42 = *(uint *)(plVar37 + 0xc);
                      if (uVar42 != 0) {
                        uVar44 = 0;
                        piVar26 = (int *)(plVar37[0xb] + 0x20);
                        piVar29 = piVar26;
                        do {
                          if (*piVar29 == 0xc) {
                            uVar44 = uVar44 & 0xffffffff;
                            goto LAB_109e6d168;
                          }
                          uVar44 = uVar44 + 1;
                          piVar29 = piVar29 + 10;
                        } while (uVar42 != uVar44);
                        uVar44 = 0xffffffff;
LAB_109e6d168:
                        uVar27 = 0;
                        do {
                          if (*piVar26 == 0xb) {
                            uVar42 = (uint)uVar27;
                            goto joined_r0x000109e6d194;
                          }
                          uVar27 = uVar27 + 1;
                          piVar26 = piVar26 + 10;
                        } while (uVar42 != uVar27);
                        uVar42 = 0xffffffff;
joined_r0x000109e6d194:
                        if (-1 < (int)uVar44) {
                          lVar35 = **(long **)(plVar37[0xb] + uVar44 * 0x28 + 0x18);
                          if (*(int *)(lVar35 + 0x18) != 1) {
                            lVar35 = 0;
                          }
                          func_0x000109e6f298(lVar35,lVar11,alStack_b8 + 7,&uStack_128);
                        }
                        if (-1 < (int)uVar42) {
                          plVar16 = (long *)(plVar37[0xb] + (ulong)uVar42 * 0x28 + 0x18);
LAB_109e6d1d0:
                          lVar35 = *(long *)*plVar16;
                          if (*(int *)(lVar35 + 0x18) != 1) {
                            lVar35 = 0;
                          }
                          func_0x000109e6f298(lVar35,lVar11,alStack_b8 + 7,&uStack_128);
                        }
                      }
                    }
                    else if ((int)plVar37[3] == 4) {
                      uVar42 = *(uint *)(plVar37 + 5);
                      if ((int)uVar42 < 0x97) {
                        if (uVar42 < 0x22 && (1L << ((ulong)uVar42 & 0x3f) & 0x2aaaaa800U) != 0) {
LAB_109e6d15c:
                          plVar16 = plVar37 + 0x13;
                          goto LAB_109e6d1d0;
                        }
                      }
                      else if (((uVar42 - 0x97 < 0xf &&
                                 (1 << (ulong)(uVar42 - 0x97 & 0x1f) & 0x5443U) != 0) ||
                               (uVar42 == 0x26f)) || (uVar42 == 0x112)) goto LAB_109e6d15c;
                    }
                  }
                  FUN_109ecc434();
                } while (lVar33 != 0);
                plVar37 = (long *)*plVar34;
              }
              plVar16 = (long *)*plVar37;
              plVar34 = plVar37;
              while( true ) {
                plVar37 = plVar16;
                if (plVar37 == (long *)0x0) {
                  if (alStack_b8[7] != 0) {
                    lVar33 = alStack_b8[7] + -0x30;
                    FUN_109f65aa4(lVar33);
                    FUN_109f65ae0(lVar33);
                  }
                  goto LAB_109e6d250;
                }
                lVar33 = plVar34[6];
                if (lVar33 != 0) break;
                plVar16 = (long *)*plVar37;
                plVar34 = plVar37;
              }
            } while( true );
          }
          plVar34 = plVar37;
        }
      }
LAB_109e6d250:
      lVar32 = lVar32 + 1;
    } while (lVar32 != 6);
    if ((*(byte *)(param_1 + 0x4b2) & 1) == 0) {
      lVar32 = 0;
      do {
        lVar33 = *(long *)(lVar15 + lVar32 * 8);
        if (lVar33 != 0) {
          for (plVar34 = *(long **)(*(long *)(*(long *)(lVar33 + 0x28) + 0x160) + 8); *plVar34 != 0;
              plVar34 = (long *)*plVar34) {
            if (((((*(ushort *)(plVar34 + 4) & 0x292) != 0) &&
                 (lVar33 = plVar34[2], *(char *)(lVar33 + 4) == '\x13')) &&
                (func_0x000109eca118(), *(char *)(lVar33 + 4) != '\x13')) &&
               ((((plVar34[4] & 0x1fffffU) != 0x200 && ((plVar34[4] & 0x1fffffU) != 0x80)) ||
                (plVar34[0x11] == 0)))) {
              iVar10 = 1;
              lVar11 = plVar34[2];
              for (lVar33 = lVar11; *(char *)(lVar33 + 4) == '\x13';
                  lVar33 = *(long *)(lVar33 + 0x30)) {
                iVar10 = *(int *)(lVar33 + 0x10) * iVar10;
              }
              iVar20 = 4;
              if (*(char *)(lVar33 + 4) != '\x10') {
                iVar20 = 0;
              }
              if (iVar20 * iVar10 == 0) {
                lVar33 = lVar11;
                cVar2 = *(char *)(lVar11 + 4);
                while (cVar2 == '\x13') {
                  lVar33 = *(long *)(lVar33 + 0x30);
                  cVar2 = *(char *)(lVar33 + 4);
                }
                if ((cVar2 != '\x15') && (plVar34[0xf] == 0)) {
                  if (*(char *)(lVar11 + 4) == '\x13') {
                    uVar44 = (long)*(int *)(lVar11 + 0x10) + 0x1fU >> 5 & 0xffffffff;
                  }
                  else {
                    uVar44 = 0;
                  }
                  lVar33 = 0;
                  iVar20 = 0;
                  iVar10 = (int)uVar44 * 0x20 + 0x20;
                  do {
                    if (*(long *)(lVar15 + lVar33 * 8) != 0) {
                      lVar35 = alStack_b8[lVar33];
                      lVar36 = plVar34[3];
                      lVar11 = lVar36;
                      (**(code **)(lVar35 + 8))(lVar36);
                      FUN_109f64fdc(lVar35,lVar11,lVar36);
                      if (lVar35 != 0) {
                        lVar11 = *(long *)(*(long *)(lVar35 + 0x10) + 8) + -4;
                        uVar27 = uVar44;
                        iVar21 = iVar10;
                        do {
                          if ((int)uVar27 < 1) {
                            iVar21 = 0;
                            goto LAB_109e6d3e8;
                          }
                          iVar22 = *(int *)(lVar11 + uVar27 * 4);
                          uVar27 = uVar27 - 1;
                          iVar21 = iVar21 + -0x20;
                        } while (iVar22 == 0);
                        iVar21 = iVar21 - (int)LZCOUNT(iVar22);
LAB_109e6d3e8:
                        uVar27 = uVar44;
                        iVar22 = iVar10;
                        if (iVar20 < iVar21) {
                          do {
                            if ((int)uVar27 < 1) {
                              iVar20 = 0;
                              goto LAB_109e6d420;
                            }
                            iVar20 = *(int *)(lVar11 + uVar27 * 4);
                            iVar22 = iVar22 + -0x20;
                            uVar27 = uVar27 - 1;
                          } while (iVar20 == 0);
                          iVar20 = iVar22 - (int)LZCOUNT(iVar20);
                        }
                      }
LAB_109e6d420:
                      lVar11 = plVar34[2];
                      if (*(char *)(lVar11 + 4) == '\x13') {
                        iVar21 = *(int *)(lVar11 + 0x10);
                      }
                      else {
                        iVar21 = -1;
                      }
                      if (iVar20 == iVar21) goto LAB_109e6d344;
                    }
                    lVar33 = lVar33 + 1;
                  } while (lVar33 != 6);
                  if (*(char *)(lVar11 + 4) == '\x13') {
                    iVar10 = *(int *)(lVar11 + 0x10);
                  }
                  else {
                    iVar10 = -1;
                  }
                  if (iVar20 != iVar10) {
                    if (*(ushort *)(plVar34 + 0xd) != 0) {
                      if (*(char *)(lVar11 + 4) == '\x13') {
                        uVar42 = *(uint *)(lVar11 + 0x10);
                      }
                      else {
                        uVar42 = 0xffffffff;
                      }
                      sVar5 = 0;
                      if (uVar42 != 0) {
                        sVar5 = (short)(*(ushort *)(plVar34 + 0xd) / uVar42);
                      }
                      *(short *)(plVar34 + 0xd) = sVar5 * (short)iVar20;
                    }
                    func_0x000109eca118();
                    FUN_109ec69f4();
                    plVar34[2] = lVar11;
                    lVar11 = alStack_b8[lVar32];
                    lVar35 = plVar34[3];
                    lVar33 = lVar35;
                    (**(code **)(lVar11 + 8))(lVar35);
                    FUN_109f64fdc(lVar11,lVar33,lVar35);
                    if (lVar11 != 0) {
                      uVar42 = *(uint *)(**(long **)(lVar11 + 0x10) + 0x10);
                      if (uVar42 != 0) {
                        plVar16 = *(long **)(**(long **)(lVar11 + 0x10) + 8);
                        lVar33 = plVar34[2];
                        plVar37 = plVar16;
                        do {
                          plVar17 = plVar37 + 1;
                          *(long *)(*plVar37 + 0x30) = lVar33;
                          plVar37 = plVar17;
                        } while (plVar17 < (long *)((long)plVar16 + (ulong)uVar42));
                      }
                    }
                  }
                }
              }
            }
LAB_109e6d344:
          }
        }
        lVar32 = lVar32 + 1;
      } while (lVar32 != 6);
    }
  }
  if ((*(byte *)(*(long *)(param_2 + 0x68) + 0x124) & 1) == 0) {
    lVar32 = 0;
    FUN_109f6695c(0,FUN_109f65518,FUN_109f65668);
    lVar15 = 0;
    uVar42 = 0;
    do {
      lVar33 = *(long *)(param_2 + 0xa8 + lVar15 * 8);
      if (lVar33 != 0) {
        for (plVar34 = *(long **)(*(long *)(*(long *)(lVar33 + 0x28) + 0x160) + 8); *plVar34 != 0;
            plVar34 = (long *)*plVar34) {
          if ((plVar34[4] & 0x292U) != 0) {
            puVar39 = (undefined *)plVar34[2];
            puVar43 = (undefined *)plVar34[3];
            uVar44 = plVar34[4] & 0x1fffff;
            if (((uVar44 == 0x200) || (uVar44 == 0x80)) &&
               (puVar18 = (undefined *)plVar34[0x11], puVar18 != (undefined *)0x0)) {
              puVar23 = puVar39;
              if (puVar39[4] == '\x13') {
                do {
                  puVar23 = *(undefined **)(puVar23 + 0x30);
                } while (puVar23[4] == '\x13');
                if (puVar23 == puVar18) {
                  do {
                    puVar39 = *(undefined **)(puVar39 + 0x30);
                  } while (puVar39[4] == '\x13');
LAB_109e6d5dc:
                  if (((byte)puVar39[0xc] >> 1 & 1) == 0) {
                    puVar43 = puVar39;
                    func_0x000109eca058();
                  }
                  else {
                    puVar43 = &UNK_10e05bf38 + *(long *)(puVar39 + 0x18);
                  }
                }
              }
              else if (puVar39 == puVar18) goto LAB_109e6d5dc;
            }
            iVar10 = (int)puVar39;
            puVar39 = puVar43;
            (**(code **)(lVar32 + 0x10))(puVar43);
            lVar33 = lVar32;
            FUN_109f66ba8(lVar32,puVar39,puVar43);
            if (lVar33 == 0) {
              FUN_109e6e64c();
              uVar42 = iVar10 + uVar42;
              puVar39 = puVar43;
              (**(code **)(lVar32 + 0x10))(puVar43);
              lVar33 = lVar32;
              FUN_109f66e48(lVar32,puVar39,puVar43,0);
              if (lVar33 != 0) {
                *(undefined **)(lVar33 + 8) = puVar43;
              }
            }
          }
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 6);
    func_0x000109f66a2c(lVar32,0);
    lVar15 = *(long *)(param_2 + 0x68);
    func_0x000109f6590c(lVar15,(ulong)uVar42 * 0x78);
    *(long *)(*(long *)(param_2 + 0x68) + 0x20) = lVar15;
    if (lVar15 == 0) {
      func_0x000109eb844c(param_2,&UNK_10f60ddb3);
      return 0;
    }
  }
  uVar12 = 0;
  FUN_109f64c74(0,FUN_109f65518,FUN_109f65668);
  lVar32 = 0;
  lVar15 = param_2 + 0xa8;
  alStack_b8[6] = uVar12;
  do {
    lVar33 = *(long *)(lVar15 + lVar32 * 8);
    if (lVar33 != 0) {
      uStack_e8 = 0;
      lVar35 = *(long *)(lVar33 + 0x28);
      lVar11 = *(long *)(lVar35 + 0x160);
      *(undefined8 *)((ulong)&uStack_120 | 0xc) = 0;
      ((undefined8 *)((ulong)&uStack_120 | 0xc))[1] = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_100 = 0;
      if (param_3 != 0) {
        uStack_e8 = *(undefined8 *)(lVar35 + 0x330);
      }
      plVar37 = *(long **)(lVar11 + 8);
      plVar34 = (long *)*plVar37;
      if (plVar34 != (long *)0x0) {
        uVar42 = 1 << (ulong)((uint)lVar32 & 0x1f);
        do {
          plVar16 = plVar34;
          if ((plVar37[4] & 0x292U) != 0) {
            puStack_d8 = (undefined *)0x0;
            uVar44 = plVar37[4] & 0x1fffff;
            plStack_e0 = plVar37;
            if ((uVar44 == 0x80) || (uVar44 == 0x200)) {
              puVar39 = (undefined *)plVar37[0x11];
              uStack_d0._0_6_ = (uint6)(puVar39 != (undefined *)0x0) << 0x20;
              uStack_c8 = 0;
              puVar43 = (undefined *)plVar37[2];
              if (puVar39 == (undefined *)0x0) {
                bVar8 = false;
                goto LAB_109e6d7f0;
              }
              if ((*(byte *)(*(long *)(param_2 + 0x68) + 0x124) & 1) == 0) {
                cVar3 = puVar43[4];
                puVar18 = puVar43;
                cVar2 = cVar3;
                while (cVar2 == '\x13') {
                  puVar18 = *(undefined **)(puVar18 + 0x30);
                  cVar2 = puVar18[4];
                }
                if (puVar18 != puVar39) goto LAB_109e6d7ec;
              }
              else {
                if (puVar43 != puVar39) {
LAB_109e6d7ec:
                  bVar8 = true;
                  goto LAB_109e6d7f0;
                }
                cVar3 = puVar43[4];
              }
              while (cVar3 == '\x13') {
                puVar43 = *(undefined **)(puVar43 + 0x30);
                cVar3 = puVar43[4];
              }
              puStack_d8 = puVar43;
              if (((byte)puVar43[0xc] >> 1 & 1) == 0) {
                puVar39 = puVar43;
                func_0x000109eca058(puVar43);
              }
              else {
                puVar39 = &UNK_10e05bf38 + *(long *)(puVar43 + 0x18);
              }
              bVar8 = true;
            }
            else {
              bVar8 = false;
              uStack_d0 = uStack_d0 & 0xffffff0000000000;
              puVar43 = (undefined *)plVar37[2];
LAB_109e6d7f0:
              uStack_c8 = 0;
              uStack_d0._0_6_ = CONCAT15(1,(undefined5)uStack_d0);
              puVar39 = (undefined *)plVar37[3];
            }
            plVar34 = plVar37 + 2;
            uVar44 = 0;
            FUN_109f65c2c(0,puVar39);
            puVar39 = puVar43;
            uStack_128 = uVar44;
            FUN_109e6e738();
            uVar41 = *(uint *)((long)plVar37 + 0x3c);
            uVar44 = (ulong)uVar41;
            bVar7 = (byte)uVar42;
            puStack_c0 = puVar39;
            if (bVar8) {
              if ((plVar37[4] & 0x1fffffU) == 0x200) {
                lVar11 = *(long *)(param_2 + 0x68);
                if (plVar37[0x11] == 0) goto LAB_109e6d860;
                plVar16 = (long *)(lVar11 + 0x38);
                puVar24 = (uint *)(lVar11 + 0x2c);
              }
              else {
                lVar11 = *(long *)(param_2 + 0x68);
LAB_109e6d860:
                plVar16 = (long *)(lVar11 + 0x30);
                puVar24 = (uint *)(lVar11 + 0x28);
              }
              puVar18 = (undefined *)*plVar34;
              cVar2 = puVar18[4];
              cVar3 = cVar2;
              while (cVar3 == '\x13') {
                puVar18 = *(undefined **)(puVar18 + 0x30);
                cVar3 = puVar18[4];
              }
              lStack_138 = *plVar16;
              uVar31 = *puVar24;
              uStack_130 = (ulong)uVar31;
              puVar23 = (undefined *)plVar37[0x11];
              if (puVar18 == puVar23) {
                if (((byte)puVar23[0xc] >> 1 & 1) == 0) {
                  func_0x000109eca058();
                }
                else {
                  puVar23 = &UNK_10e05bf38 + *(long *)(puVar23 + 0x18);
                }
                if (cVar2 != '\x13') goto LAB_109e6d938;
                if ((*(byte *)(lVar11 + 0x124) & 1) != 0) {
                  bVar6 = true;
                  goto LAB_109e6d93c;
                }
                if (uVar31 != 0) {
                  puVar18 = puVar23;
                  _strlen();
                  uVar19 = 0;
                  pbVar38 = (byte *)(lStack_138 + 0x2c);
                  uVar27 = 0xffffffff;
                  do {
                    lVar11 = *(long *)(pbVar38 + -0x2c);
                    puVar13 = puVar23;
                    _strncmp(puVar23,lVar11,(ulong)puVar18 & 0xffffffff);
                    if (((int)puVar13 == 0) &&
                       (*(char *)(lVar11 + ((ulong)puVar18 & 0xffffffff)) == '[')) {
                      uVar31 = (uint)uVar19;
                      if ((uint)uVar27 != 0xffffffff) {
                        uVar31 = (uint)uVar27;
                      }
                      uVar27 = (ulong)uVar31;
                      lVar35 = alStack_b8[lVar32];
                      lVar36 = plVar37[3];
                      lVar11 = lVar36;
                      (**(code **)(lVar35 + 8))(lVar36);
                      FUN_109f64fdc(lVar35,lVar11,lVar36);
                      if ((lVar35 != 0) &&
                         ((*(uint *)(*(long *)(*(long *)(lVar35 + 0x10) + 8) +
                                    (ulong)(pbVar38[1] >> 5) * 4) >> (ulong)(pbVar38[1] & 0x1f) & 1)
                          != 0)) {
                        *pbVar38 = *pbVar38 | bVar7;
                      }
                    }
                    uVar19 = uVar19 + 1;
                    pbVar38 = pbVar38 + 0x38;
                  } while (uStack_130 != uVar19);
                  bVar6 = true;
                  goto LAB_109e6d9a8;
                }
                bVar6 = true;
              }
              else {
                if (((byte)puVar23[0xc] >> 1 & 1) == 0) {
                  func_0x000109eca058();
LAB_109e6d938:
                  bVar6 = false;
                }
                else {
                  bVar6 = false;
                  puVar23 = &UNK_10e05bf38 + *(long *)(puVar23 + 0x18);
                }
LAB_109e6d93c:
                if (uVar31 != 0) {
                  uVar27 = 0;
                  cVar2 = *(char *)(lVar11 + 0x124);
                  pbVar38 = (byte *)(lStack_138 + 0x2c);
                  do {
                    if (cVar2 == '\0') {
                      puVar18 = puVar23;
                      _strcmp(puVar23,*(undefined8 *)(pbVar38 + -0x2c));
                      if ((int)puVar18 == 0) {
                        lVar35 = alStack_b8[lVar32];
                        lVar36 = plVar37[3];
                        lVar11 = lVar36;
                        (**(code **)(lVar35 + 8))(lVar36);
                        FUN_109f64fdc(lVar35,lVar11,lVar36);
                        if (lVar35 != 0) {
                          *pbVar38 = *pbVar38 | bVar7;
                        }
                        goto LAB_109e6d9a8;
                      }
                    }
                    else if ((int)plVar37[7] == *(int *)(pbVar38 + -8)) goto LAB_109e6d9a8;
                    uVar27 = uVar27 + 1;
                    pbVar38 = pbVar38 + 0x38;
                  } while (uStack_130 != uVar27);
                  uVar27 = 0xffffffff;
                  goto LAB_109e6d9a8;
                }
              }
              uStack_130 = 0;
              uVar27 = 0xffffffff;
            }
            else {
              bVar6 = false;
              lStack_138 = 0;
              uStack_130 = 0;
              uVar27 = 0xffffffff;
            }
LAB_109e6d9a8:
            uVar31 = (uint)uVar27;
            if ((((plVar37[4] & 0x1fffffU) == 0x200) && (plVar37[0x11] != 0)) &&
               ((*(byte *)(plVar37 + 6) >> 4 & 1) == 0)) {
              if (bVar6) {
                uVar9 = (uint)*plVar34;
                FUN_109eca23c();
              }
              else {
                uVar9 = 1;
              }
              uVar4 = uVar31 + (int)((ulong)(**(long **)(*(long *)(lVar33 + 0x28) + 0x6a0) -
                                            *(long *)(*(long *)(param_2 + 0x68) + 0x38)) >> 3) *
                               0x49249249;
              if (uVar4 + uVar9 < 0x21) {
                uVar4 = ~(-1 << (ulong)(uVar9 & 0x1f)) << (ulong)(uVar4 & 0x1f);
                if (uVar9 == 0x20) {
                  uVar4 = 0xffffffff;
                }
                uStack_f0 = CONCAT44(uStack_f0._4_4_ | uVar4,(undefined4)uStack_f0);
              }
            }
            lVar11 = *(long *)(param_2 + 0x68);
            if (((lStack_138 != 0) && (bVar8)) && ((*(byte *)(lVar11 + 0x124) & 1) == 0)) {
              lVar35 = *plVar34;
              cVar2 = *(char *)(lVar35 + 4);
              lVar11 = lVar35;
              cVar3 = cVar2;
              while (cVar3 == '\x13') {
                lVar11 = *(long *)(lVar11 + 0x30);
                cVar3 = *(char *)(lVar11 + 4);
              }
              if (lVar11 == plVar37[0x11]) {
                uVar44 = 0;
                uVar41 = uVar31;
              }
              else {
                if (cVar2 == '\x11') {
                  uStack_13c = 0x2e;
LAB_109e6dc28:
                  bVar8 = false;
                }
                else {
                  if (cVar2 == '\x13') {
                    func_0x000109eca118();
                    if (*(char *)(lVar35 + 4) != '\x13') {
                      for (lVar11 = *plVar34; *(char *)(lVar11 + 4) == '\x13';
                          lVar11 = *(long *)(lVar11 + 0x30)) {
                      }
                      if (*(char *)(lVar11 + 4) != '\x11') goto LAB_109e6dc30;
                    }
                    uStack_13c = 0x5b;
                    goto LAB_109e6dc28;
                  }
LAB_109e6dc30:
                  uStack_13c = 0;
                  bVar8 = true;
                }
                if (uStack_130 != 0) {
                  uVar40 = plVar37[3];
                  uVar19 = uVar40;
                  _strlen();
                  uVar27 = 0;
                  do {
                    lVar11 = lStack_138 + uVar27 * 0x38;
                    uVar9 = *(uint *)(lVar11 + 0x20);
                    if (uVar9 != 0) {
                      uVar44 = 0;
                      plVar34 = *(long **)(lVar11 + 0x18);
                      do {
                        lVar35 = *plVar34;
                        if (bVar8) {
                          uVar14 = uVar40;
                          _strcmp(uVar40,lVar35);
                          iVar10 = (int)uVar14;
joined_r0x000109e6dcc4:
                          if (iVar10 == 0) {
                            lVar35 = alStack_b8[lVar32];
                            uVar27 = uVar40;
                            (**(code **)(lVar35 + 8))(uVar40);
                            FUN_109f64fdc(lVar35,uVar27,uVar40);
                            if (lVar35 != 0) {
                              *(byte *)(lVar11 + 0x2c) = *(byte *)(lVar11 + 0x2c) | bVar7;
                            }
                            goto LAB_109e6dd34;
                          }
                        }
                        else {
                          lVar36 = lVar35;
                          _strchr(lVar35,uStack_13c);
                          if (lVar36 != 0 && (uVar19 & 0xffffffff) == lVar36 - lVar35) {
                            uVar14 = uVar40;
                            _strncmp(uVar40,lVar35,uVar19 & 0xffffffff);
                            iVar10 = (int)uVar14;
                            goto joined_r0x000109e6dcc4;
                          }
                        }
                        uVar44 = uVar44 + 1;
                        plVar34 = plVar34 + 4;
                      } while (uVar9 != uVar44);
                    }
                    uVar27 = uVar27 + 1;
                  } while (uVar27 != uStack_130);
                  uVar44 = (ulong)uVar41;
LAB_109e6dd34:
                  uVar41 = (uint)uVar44;
                }
              }
              *(uint *)((long)plVar37 + 0x3c) = uVar41;
              uStack_d0 = CONCAT44(uStack_d0._4_4_,
                                   *(undefined4 *)
                                    (*(long *)(lStack_138 + (long)(int)uVar31 * 0x38 + 0x18) +
                                     (long)(int)uVar44 * 0x20 + 0x18));
              lVar11 = *(long *)(param_2 + 0x68);
            }
            if (*(char *)(lVar11 + 0x124) == '\x01') {
              uVar27 = plVar37[4] & 0x1fffff;
              if (((uVar27 == 0x200) || (uVar27 == 0x80)) && (plVar37[0x11] != 0)) {
                lVar35 = 0x30;
                if (uVar27 != 0x80) {
                  lVar35 = 0x38;
                }
                uVar41 = *(uint *)(lVar11 + 0x18);
                if (uVar41 != 0) {
                  uVar27 = 0;
                  bVar8 = false;
                  lVar28 = *(long *)(lVar11 + lVar35);
                  lVar36 = *(long *)(lVar11 + 0x20);
                  lVar35 = 0;
                  do {
                    lVar30 = lVar36 + uVar27 * 0x78;
                    uVar27 = uVar27 + 1;
                    while ((((bool)*(char *)(lVar30 + 0x5b) != ((plVar37[4] & 0x1fffffU) == 0x200)
                            || (*(int *)(lVar30 + 0x48) == -1)) ||
                           ((int)plVar37[7] !=
                            *(int *)(lVar28 + (long)*(int *)(lVar30 + 0x48) * 0x38 + 0x24)))) {
                      uVar27 = uVar27 + 1;
                      lVar30 = lVar30 + 0x78;
                      if (uVar27 - uVar41 == 1) {
                        lVar25 = lVar35;
                        if (bVar8) goto LAB_109e6df20;
                        goto LAB_109e6df3c;
                      }
                    }
                    lVar25 = lVar30;
                    if (lVar35 != 0) {
                      lVar25 = lVar35;
                    }
                    *(uint *)(lVar30 + 0x30) = *(uint *)(lVar30 + 0x30) | uVar42;
                    bVar8 = true;
                    lVar35 = lVar25;
                  } while (uVar27 != uVar41);
LAB_109e6df20:
                  *(int *)((long)plVar37 + 0x3c) =
                       (int)((ulong)(lVar25 - lVar36) >> 3) * -0x11111111;
                  goto LAB_109e6e00c;
                }
              }
              else if ((*(int *)((long)plVar37 + 0x3c) != -1) && (*(uint *)(lVar11 + 0x18) != 0)) {
                uVar27 = 0;
                lVar35 = *(long *)(lVar11 + 0x20);
                do {
                  if (*(int *)(lVar35 + 0x60) == *(int *)((long)plVar37 + 0x3c)) {
                    *(uint *)(lVar35 + 0x30) = *(uint *)(lVar35 + 0x30) | uVar42;
                    *(int *)((long)plVar37 + 0x3c) = (int)uVar27;
                    func_0x000109e6f918(lVar35,param_1,param_2,plVar37[2],&uStack_120);
                    goto LAB_109e6e00c;
                  }
                  uVar27 = uVar27 + 1;
                  lVar35 = lVar35 + 0x78;
                } while (*(uint *)(lVar11 + 0x18) != uVar27);
              }
LAB_109e6df3c:
              if ((uStack_d0 & 0x100000000) == 0) {
                *(undefined4 *)((long)plVar37 + 0x3c) = *(undefined4 *)(lVar11 + 0x18);
              }
              else {
                uVar44 = 0xffffffff;
              }
              uVar27 = 0;
              uVar19 = *(ulong *)((long)plVar37 + 0x2c);
              puVar1 = (ulong *)0x0;
              if (*(byte *)(lVar11 + 0x124) == 0) {
                puVar1 = &uStack_128;
              }
              if ((*(byte *)(lVar11 + 0x124) & 1) == 0) {
                uVar27 = uStack_128;
                _strlen(uStack_128);
              }
              uVar40 = param_1;
              FUN_109e6e860(param_1,param_2,lVar32,puVar43,uVar44,&uStack_120,puVar1,uVar27,
                            (uVar19 & 0x180) == 0x100);
              FUN_109e6e828(puVar39);
              if (uStack_128 != 0) {
                lVar11 = uStack_128 - 0x30;
                FUN_109f65aa4(lVar11);
                FUN_109f65ae0(lVar11);
              }
              if ((int)uVar40 == -1) {
                return 0;
              }
            }
            else {
              auStack_71[0] = 1;
              lVar11 = 0;
              FUN_109f65c2c(0,uStack_128);
              alStack_b8[7] = lVar11;
              _strlen();
              uVar27 = param_1;
              func_0x000109e6f61c(param_1,param_2,&uStack_120,plVar37,alStack_b8 + 7,lVar11,puVar43,
                                  lVar32,auStack_71);
              if (alStack_b8[7] != 0) {
                lVar11 = alStack_b8[7] + -0x30;
                FUN_109f65aa4(lVar11);
                FUN_109f65ae0(lVar11);
              }
              if ((uVar27 & 1) == 0) {
                lVar11 = *(long *)(param_2 + 0x68);
                goto LAB_109e6df3c;
              }
LAB_109e6e00c:
              if (uStack_128 != 0) {
                lVar11 = uStack_128 - 0x30;
                FUN_109f65aa4(lVar11);
                FUN_109f65ae0(lVar11);
              }
              FUN_109e6e828(puVar39);
            }
            plVar16 = (long *)*plVar37;
          }
          plVar34 = (long *)*plVar16;
          plVar37 = plVar16;
        } while ((long *)*plVar16 != (long *)0x0);
      }
      if (((*(byte *)(*(long *)(param_2 + 0x68) + 0x124) & 1) == 0) && (alStack_b8[lVar32] != 0)) {
        lVar11 = alStack_b8[lVar32] + -0x30;
        FUN_109f65aa4(lVar11);
        FUN_109f65ae0(lVar11);
      }
      lVar11 = param_1 + 0x98 + lVar32 * 0x80;
      if (*(uint *)(lVar11 + 0x68) < (uint)uStack_100) {
        func_0x000109f47670();
        puVar43 = &UNK_10f60ddda;
      }
      else {
        if (uStack_100._4_4_ <= *(uint *)(lVar11 + 0x74)) {
          lVar11 = *(long *)(lVar33 + 0x28);
          *(undefined4 *)(lVar11 + 800) = uStack_f8._4_4_;
          *(uint *)(lVar11 + 0x6a8) = uStack_f0._4_4_;
          *(undefined4 *)(lVar33 + 0x30) = (undefined4)uStack_f0;
          lVar11 = *(long *)(lVar33 + 0x28);
          *(char *)(lVar11 + 0x33) = (char)uStack_100;
          *(char *)(lVar11 + 0x37) = (char)((ulong)uStack_100 >> 0x20);
          *(undefined4 *)(lVar33 + 0x34) = (undefined4)uStack_f8;
          *(undefined4 *)(lVar33 + 0x38) = (undefined4)uStack_f8;
          goto LAB_109e6e110;
        }
        func_0x000109f47670();
        puVar43 = &UNK_10f60ddff;
      }
      func_0x000109eb844c(param_2,puVar43);
    }
LAB_109e6e110:
    lVar32 = lVar32 + 1;
    if (lVar32 == 6) {
      lVar32 = *(long *)(param_2 + 0x68);
      *(undefined4 *)(lVar32 + 0x1c) = (undefined4)uStack_120;
      *(uint *)(lVar32 + 0x4c) = uStack_120._4_4_;
      if (*(char *)(lVar32 + 0x124) == '\x01') {
        *(undefined4 *)(param_2 + 0x70) = (undefined4)uStack_118;
      }
      uVar42 = *(uint *)(param_2 + 0xa0);
      uVar41 = uStack_120._4_4_;
      if (*(long *)(param_2 + 0x78) == 0) {
        uVar44 = param_2;
        func_0x000109f6590c(param_2,(ulong)*(uint *)(param_2 + 0x70) << 3);
        *(ulong *)(param_2 + 0x78) = uVar44;
        lVar32 = *(long *)(param_2 + 0x68);
        uVar41 = *(uint *)(lVar32 + 0x4c);
      }
      func_0x000109f6590c(lVar32,(ulong)uVar41 << 2);
      if ((*(long *)(param_2 + 0x78) == 0) || (lVar32 == 0)) {
        func_0x000109eb844c(param_2,&UNK_10f60de2c);
      }
      else {
        lVar11 = *(long *)(param_2 + 0x68);
        *(long *)(lVar11 + 0x50) = lVar32;
        lVar33 = lVar32;
        func_0x000109f6590c(lVar32,(ulong)*(uint *)(lVar11 + 0x4c) << 2);
        lVar11 = *(long *)(param_2 + 0x68);
        *(long *)(lVar11 + 0x58) = lVar33;
        if (*(int *)(lVar11 + 0x18) == 0) {
          uVar44 = 0;
        }
        else {
          uVar27 = 0;
          uVar44 = 0;
          do {
            lVar33 = *(long *)(lVar11 + 0x20) + uVar27 * 0x78;
            if (((((*(byte *)(lVar33 + 0x59) & 1) == 0) && ((*(byte *)(lVar33 + 0x5b) & 1) == 0)) &&
                (lVar35 = *(long *)(lVar33 + 0x18), *(char *)(lVar35 + 4) != '\x15')) &&
               (uVar41 = *(uint *)(*(long *)(lVar11 + 0x20) + uVar27 * 0x78 + 0x60),
               uVar41 != 0xffffffff)) {
              uVar31 = *(uint *)(lVar33 + 0x20);
              func_0x000109ec8650();
              *(ulong *)(lVar33 + 0x40) = lVar32 + uVar44 * 4;
              if (uVar31 < 2) {
                uVar31 = 1;
              }
              uVar19 = (ulong)uVar31;
              do {
                *(long *)(*(long *)(param_2 + 0x78) + (ulong)uVar41 * 8) = lVar33;
                uVar41 = uVar41 + 1;
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
              uVar44 = (ulong)((int)uVar44 + (int)lVar35 * uVar31);
              lVar11 = *(long *)(param_2 + 0x68);
            }
            uVar27 = uVar27 + 1;
          } while (uVar27 < *(uint *)(lVar11 + 0x18));
        }
        if ((*(byte *)(lVar11 + 0x124) & 1) != 0) {
          FUN_109eb8750(param_2);
          lVar11 = *(long *)(param_2 + 0x68);
        }
        if (*(int *)(lVar11 + 0x18) != 0) {
          uVar27 = 0;
          do {
            lVar33 = *(long *)(lVar11 + 0x20) + uVar27 * 0x78;
            if ((((*(byte *)(lVar33 + 0x59) & 1) == 0) && ((*(byte *)(lVar33 + 0x5b) & 1) == 0)) &&
               ((*(char *)(*(long *)(lVar33 + 0x18) + 4) != '\x15' &&
                (((*(byte *)(lVar33 + 0x5a) & 1) == 0 && (*(int *)(lVar33 + 0x60) == -1)))))) {
              uVar41 = *(uint *)(lVar33 + 0x20);
              if (uVar41 < 2) {
                uVar41 = 1;
              }
              uVar19 = (ulong)uVar41;
              uVar31 = uVar41;
              if (*(int *)(*(long *)(lVar11 + 0x20) + uVar27 * 0x78 + 0x48) != -1) {
                uVar31 = 0;
              }
              uVar40 = param_2;
              FUN_109eb86bc(param_2,lVar33);
              if ((int)uVar40 == -1) {
                uVar40 = (ulong)*(uint *)(param_2 + 0x70);
                uVar14 = param_2;
                FUN_109f65a40(param_2,*(undefined8 *)(param_2 + 0x78),8,
                              *(uint *)(param_2 + 0x70) + uVar41);
                *(ulong *)(param_2 + 0x78) = uVar14;
                *(uint *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + uVar41;
              }
              *(int *)(lVar33 + 0x60) = (int)uVar40;
              iVar10 = (int)*(undefined8 *)(lVar33 + 0x18);
              func_0x000109ec8650();
              if (*(int *)(lVar33 + 0x48) == -1) {
                *(ulong *)(lVar33 + 0x40) = lVar32 + uVar44 * 4;
              }
              else {
                iVar10 = 0;
              }
              uVar42 = uVar31 + uVar42;
              do {
                *(long *)(*(long *)(param_2 + 0x78) + (uVar40 & 0xffffffff) * 8) = lVar33;
                uVar40 = (ulong)((int)uVar40 + 1);
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
              uVar44 = (ulong)((int)uVar44 + iVar10 * uVar41);
              lVar11 = *(long *)(param_2 + 0x68);
            }
            uVar27 = uVar27 + 1;
          } while (uVar27 < *(uint *)(lVar11 + 0x18));
        }
        if (*(uint *)(param_1 + 0x424) < uVar42) {
          func_0x000109eb844c(param_2,&UNK_10f60de4b);
          lVar11 = *(long *)(param_2 + 0x68);
        }
        if (*(int *)(lVar11 + 0x18) != 0) {
          uVar27 = 0;
          do {
            lVar35 = *(long *)(lVar11 + 0x20) + uVar27 * 0x78;
            lVar33 = *(long *)(lVar35 + 0x18);
            if ((*(char *)(lVar33 + 4) == '\x15') && (*(int *)(lVar35 + 0x60) != -1)) {
              uVar42 = *(uint *)(lVar35 + 0x20);
              *(ulong *)(lVar35 + 0x40) = lVar32 + uVar44 * 4;
              func_0x000109ec8650();
              uVar41 = *(uint *)(lVar11 + 0x120);
              if (uVar41 != 0) {
                if (uVar42 < 2) {
                  uVar42 = 1;
                }
                do {
                  uVar31 = (uVar41 & 0xaaaaaaaa) >> 1 | (uVar41 & 0x55555555) << 1;
                  uVar31 = (uVar31 & 0xcccccccc) >> 2 | (uVar31 & 0x33333333) << 2;
                  uVar31 = (uVar31 & 0xf0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f) << 4;
                  uVar31 = (uVar31 & 0xff00ff00) >> 8 | (uVar31 & 0xff00ff) << 8;
                  lVar11 = LZCOUNT(uVar31 >> 0x10 | uVar31 << 0x10);
                  if (*(char *)(*(long *)(*(long *)(param_2 + 0x68) + 0x20) + uVar27 * 0x78 +
                                lVar11 * 2 + 0x25) == '\x01') {
                    uVar31 = 0;
                    lVar35 = *(long *)(*(long *)(lVar15 + lVar11 * 8) + 0x28);
                    do {
                      lVar36 = *(long *)(*(long *)(param_2 + 0x68) + 0x20) + uVar27 * 0x78;
                      *(long *)(*(long *)(lVar35 + 0x5d8) +
                               (ulong)(uVar31 + *(int *)(lVar36 + 0x60)) * 8) = lVar36;
                      uVar31 = uVar31 + 1;
                    } while (uVar42 != uVar31);
                    uVar44 = (ulong)((int)uVar44 + (int)lVar33 * uVar42);
                  }
                  uVar31 = 1 << (ulong)((uint)lVar11 & 0x1f);
                  bVar8 = uVar31 != uVar41;
                  uVar41 = uVar31 ^ uVar41;
                } while (bVar8);
                lVar11 = *(long *)(param_2 + 0x68);
              }
            }
            uVar27 = uVar27 + 1;
          } while (uVar27 < *(uint *)(lVar11 + 0x18));
          if (*(uint *)(lVar11 + 0x18) != 0) {
            uVar27 = 0;
            do {
              lVar35 = *(long *)(lVar11 + 0x20) + uVar27 * 0x78;
              lVar33 = *(long *)(lVar35 + 0x18);
              if ((*(char *)(lVar33 + 4) == '\x15') && (*(int *)(lVar35 + 0x60) == -1)) {
                uVar42 = *(uint *)(lVar35 + 0x20);
                if (uVar42 < 2) {
                  uVar42 = 1;
                }
                *(ulong *)(lVar35 + 0x40) = lVar32 + uVar44 * 4;
                func_0x000109ec8650();
                uVar41 = *(uint *)(lVar11 + 0x120);
                if (uVar41 != 0) {
                  do {
                    uVar31 = (uVar41 & 0xaaaaaaaa) >> 1 | (uVar41 & 0x55555555) << 1;
                    uVar31 = (uVar31 & 0xcccccccc) >> 2 | (uVar31 & 0x33333333) << 2;
                    uVar31 = (uVar31 & 0xf0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f) << 4;
                    uVar31 = (uVar31 & 0xff00ff00) >> 8 | (uVar31 & 0xff00ff) << 8;
                    lVar11 = LZCOUNT(uVar31 >> 0x10 | uVar31 << 0x10);
                    if (*(char *)(*(long *)(*(long *)(param_2 + 0x68) + 0x20) + uVar27 * 0x78 +
                                  lVar11 * 2 + 0x25) == '\x01') {
                      lVar36 = *(long *)(*(long *)(lVar15 + lVar11 * 8) + 0x28);
                      lVar35 = lVar36;
                      FUN_109f65a40(lVar36,*(undefined8 *)(lVar36 + 0x5d8),8,
                                    *(int *)(lVar36 + 0x5d0) + uVar42);
                      uVar31 = 0;
                      *(long *)(lVar36 + 0x5d8) = lVar35;
                      do {
                        *(ulong *)(*(long *)(lVar36 + 0x5d8) +
                                  (ulong)(uVar31 + *(int *)(lVar36 + 0x5d0)) * 8) =
                             *(long *)(*(long *)(param_2 + 0x68) + 0x20) + uVar27 * 0x78;
                        uVar31 = uVar31 + 1;
                      } while (uVar42 != uVar31);
                      uVar44 = (ulong)((int)uVar44 + (int)lVar33 * uVar42);
                      iVar10 = *(int *)(lVar36 + 0x5d0);
                      *(int *)(*(long *)(*(long *)(param_2 + 0x68) + 0x20) + uVar27 * 0x78 + 0x60) =
                           iVar10;
                      *(uint *)(lVar36 + 0x5d0) = iVar10 + uVar42;
                    }
                    uVar31 = 1 << (ulong)((uint)lVar11 & 0x1f);
                    bVar8 = uVar31 != uVar41;
                    uVar41 = uVar31 ^ uVar41;
                  } while (bVar8);
                  lVar11 = *(long *)(param_2 + 0x68);
                }
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 < *(uint *)(lVar11 + 0x18));
            if (*(uint *)(lVar11 + 0x18) != 0) {
              lVar15 = 0;
              uVar27 = 0;
              do {
                lVar33 = *(long *)(lVar11 + 0x20) + lVar15;
                if ((*(char *)(lVar33 + 0x59) == '\x01') &&
                   (lVar33 = *(long *)(lVar33 + 0x18), *(char *)(lVar33 + 4) != '\x15')) {
                  lVar35 = *(long *)(lVar11 + 0x20) + lVar15;
                  uVar42 = *(uint *)(lVar35 + 0x20);
                  *(ulong *)(lVar35 + 0x40) = lVar32 + uVar44 * 4;
                  func_0x000109ec8650();
                  if (uVar42 < 2) {
                    uVar42 = 1;
                  }
                  uVar44 = (ulong)((int)uVar44 + (int)lVar33 * uVar42);
                }
                uVar27 = uVar27 + 1;
                lVar15 = lVar15 + 0x78;
              } while (uVar27 < *(uint *)(lVar11 + 0x18));
            }
          }
        }
      }
      FUN_109e6c868(param_1,param_2);
      FUN_109f64e54(alStack_b8[6],FUN_109e6f290);
      return 1;
    }
  } while( true );
}



/* Entry: 109e6e64c; end: 109e6e737;  */

int FUN_109e6e64c(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar5 = *(uint *)(param_1 + 4);
  iVar4 = 1;
  while ((uVar5 & 0xff) == 0x13) {
    uVar7 = param_1;
    func_0x000109eca118();
    uVar5 = (uint)*(byte *)(uVar7 + 4);
    if (2 < uVar5 - 0x11) goto LAB_109e6e714;
    if ((*(char *)(param_1 + 4) == '\x13') && (*(int *)(param_1 + 0x10) == 0)) {
      iVar1 = 1;
    }
    else {
      FUN_109eca23c(param_1);
      iVar1 = (int)param_1;
    }
    iVar4 = iVar1 * iVar4;
    param_1 = uVar7;
  }
  if ((uVar5 & 0xff) - 0x11 < 2) {
    uVar7 = param_1;
    FUN_109eca23c();
    if ((int)uVar7 == 0) {
      iVar1 = 0;
    }
    else {
      lVar6 = 0;
      uVar7 = 0;
      iVar1 = 0;
      do {
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar6);
        FUN_109e6e64c(uVar2);
        iVar1 = (int)uVar2 + iVar1;
        uVar7 = uVar7 + 1;
        uVar3 = param_1;
        FUN_109eca23c();
        lVar6 = lVar6 + 0x30;
      } while (uVar7 < (uVar3 & 0xffffffff));
    }
  }
  else {
LAB_109e6e714:
    iVar1 = 1;
  }
  return iVar1 * iVar4;
}



/* Entry: 109e6e738; end: 109e6e827;  */

undefined8 * FUN_109e6e738(ulong param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  puVar2 = (undefined8 *)0x20;
  _malloc();
  *puVar2 = 0x1ffffffff;
  puVar2[3] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (*(byte *)(param_1 + 4) == 0x13) {
    uVar6 = param_1;
    FUN_109eca23c();
    *(int *)((long)puVar2 + 4) = (int)uVar6;
    func_0x000109eca118();
    FUN_109e6e738();
    puVar2[3] = param_1;
    *(undefined8 **)(param_1 + 8) = puVar2;
  }
  else if ((*(byte *)(param_1 + 4) - 0x11 < 2) &&
          (uVar6 = param_1, FUN_109eca23c(), (int)uVar6 != 0)) {
    lVar5 = 0;
    uVar6 = 0;
    lVar7 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x30) + lVar5);
      FUN_109e6e738();
      plVar1 = puVar2 + 3;
      if (lVar7 != 0) {
        plVar1 = (long *)(lVar7 + 0x10);
      }
      *plVar1 = lVar3;
      *(undefined8 **)(lVar3 + 8) = puVar2;
      uVar6 = uVar6 + 1;
      uVar4 = param_1;
      FUN_109eca23c();
      lVar5 = lVar5 + 0x30;
      lVar7 = lVar3;
    } while (uVar6 < (uVar4 & 0xffffffff));
  }
  return puVar2;
}



/* Entry: 109e6e828; end: 109e6e85f;  */

void FUN_109e6e828(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x10);
    FUN_109e6e828();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 109e6e860; end: 109e6f28f;  */

uint FUN_109e6e860(long param_1,long param_2,uint param_3,ulong param_4,ulong param_5,int *param_6,
                  undefined8 *param_7,undefined8 param_8,undefined1 param_9)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  undefined1 uVar11;
  int iVar12;
  long lVar13;
  char *pcVar14;
  int *piVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  undefined8 *puVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 uStack_68;
  
  if (((*(char *)((long)param_6 + 0x55) == '\x01') &&
      ((*(ulong *)(*(long *)(param_6 + 0x10) + 0x20) & 0x1fffff) == 0x200)) &&
     (*(long *)(*(long *)(param_6 + 0x10) + 0x88) != 0)) {
    if ((*(char *)(param_4 + 4) == '\x13') &&
       ((uVar20 = param_4, func_0x000109eca118(), *(char *)(uVar20 + 4) == '\x13' ||
        (uVar20 = param_4, func_0x000109eca118(), *(byte *)(uVar20 + 4) - 0x11 < 2)))) {
      uVar20 = param_4;
      FUN_109eca23c();
      param_6[0x16] = (int)uVar20;
      iVar12 = *(int *)(param_4 + 0x28);
    }
    else {
      iVar12 = 0;
      param_6[0x16] = 1;
    }
    param_6[0x17] = iVar12;
    *(undefined1 *)((long)param_6 + 0x55) = 0;
  }
  if ((*(byte *)(param_4 + 4) - 0x11 < 2) ||
     ((*(byte *)(param_4 + 4) == 0x13 &&
      ((uVar20 = param_4, func_0x000109eca118(), *(char *)(uVar20 + 4) == '\x13' ||
       (uVar20 = param_4, func_0x000109eca118(), *(byte *)(uVar20 + 4) - 0x11 < 2)))))) {
    lVar22 = *(long *)(param_6 + 0x18);
    iVar12 = param_6[0x14];
    *(undefined8 *)(param_6 + 0x18) = *(undefined8 *)(lVar22 + 0x18);
    uVar20 = param_4;
    FUN_109eca23c();
    if (*(char *)(param_4 + 4) == '\x11') {
      if (((*(byte *)(*(long *)(param_2 + 0x68) + 0x124) & 1) == 0) &&
         ((char)param_6[0x15] == '\x01')) {
        uVar26 = *(uint *)(*(long *)(*(long *)(param_6 + 0x10) + 0x88) + 4) >> 0x16 & 3;
        if ((uVar26 == 0) || (uVar26 != 3 && (*(byte *)(param_1 + 0x4c2) & 1) == 0)) {
          uVar19 = param_4;
          FUN_109ec8a54(param_4,param_9);
          iVar6 = (int)uVar19;
        }
        else {
          uVar19 = param_4;
          FUN_109ec920c(param_4,param_9);
          iVar6 = (int)uVar19;
        }
        param_6[0x14] = iVar12 + -1 + iVar6 & -iVar6;
      }
LAB_109e6edb8:
      if ((int)uVar20 == 0) {
        uVar26 = 0;
        goto LAB_109e6ef6c;
      }
    }
    else {
      if ((*(char *)(param_4 + 4) != '\x13') || (*(int *)(param_4 + 0x10) != 0)) goto LAB_109e6edb8;
      uVar20 = 1;
    }
    lVar24 = 0;
    uVar19 = 0;
    uVar26 = 0;
    do {
      bVar10 = *(byte *)(param_4 + 4);
      uStack_68 = param_8;
      uVar11 = param_9;
      if (bVar10 - 0x11 < 2) {
        uVar21 = *(ulong *)(*(long *)(param_4 + 0x30) + (uVar19 & 0xffffffff) * 0x30);
        if ((char)param_6[0x15] == '\x01') {
          iVar6 = *(int *)(*(long *)(param_4 + 0x30) + lVar24 + 0x18);
          if (*(char *)(*(long *)(param_2 + 0x68) + 0x124) == '\x01') {
            iVar6 = iVar6 + iVar12;
LAB_109e6ee28:
            param_6[0x14] = iVar6;
            bVar10 = *(byte *)(param_4 + 4);
          }
          else if ((iVar6 != -1) && (*(ulong *)(param_6 + 0x12) == param_4)) goto LAB_109e6ee28;
          if (bVar10 == 0x12) {
            *(undefined1 *)((long)param_6 + 0x55) = 1;
          }
        }
        lVar13 = *(long *)(param_4 + 0x30);
        if (param_7 != (undefined8 *)0x0) {
          FUN_109f65f70(param_7,&uStack_68,&UNK_10f60dd73);
          lVar13 = *(long *)(param_4 + 0x30);
        }
        uVar3 = *(uint *)(lVar13 + (uVar19 & 0xffffffff) * 0x30 + 0x28) >> 5 & 3;
        if (uVar3 == 2) {
          uVar11 = 1;
        }
        else if (uVar3 == 1) {
          uVar11 = 0;
        }
      }
      else {
        uVar21 = param_4;
        func_0x000109eca118(param_4);
        if (param_7 != (undefined8 *)0x0) {
          FUN_109f65f70(param_7,&uStack_68,&UNK_10f60dd19);
        }
      }
      lVar13 = param_1;
      FUN_109e6e860(param_1,param_2,param_3,uVar21,param_5,param_6,param_7,uStack_68,uVar11);
      iVar6 = (int)lVar13;
      if (iVar6 == -1) {
        return 0xffffffff;
      }
      uVar3 = iVar6 + (int)param_5;
      if ((int)param_5 == -1) {
        uVar3 = 0xffffffff;
      }
      param_5 = (ulong)uVar3;
      if (*(byte *)(param_4 + 4) - 0x11 < 2) {
        *(undefined8 *)(param_6 + 0x18) = *(undefined8 *)(*(long *)(param_6 + 0x18) + 0x10);
      }
      uVar26 = iVar6 + uVar26;
      uVar19 = uVar19 + 1;
      lVar24 = lVar24 + 0x30;
    } while ((uVar20 & 0xffffffff) != uVar19);
LAB_109e6ef6c:
    if (((*(char *)(param_4 + 4) == '\x11') &&
        ((*(byte *)(*(long *)(param_2 + 0x68) + 0x124) & 1) == 0)) &&
       ((char)param_6[0x15] == '\x01')) {
      uVar3 = *(uint *)(*(long *)(*(long *)(param_6 + 0x10) + 0x88) + 4) >> 0x16 & 3;
      iVar12 = param_6[0x14];
      if ((uVar3 == 0) || (uVar3 != 3 && (*(byte *)(param_1 + 0x4c2) & 1) == 0)) {
        FUN_109ec8a54(param_4,param_9);
        iVar6 = (int)param_4;
      }
      else {
        FUN_109ec920c(param_4,param_9);
        iVar6 = (int)param_4;
      }
      param_6[0x14] = iVar12 + -1 + iVar6 & -iVar6;
    }
    *(long *)(param_6 + 0x18) = lVar22;
    return uVar26;
  }
  lVar13 = *(long *)(param_2 + 0x68);
  lVar22 = lVar13;
  lVar24 = *(long *)(lVar13 + 0x20);
  if (*(char *)(lVar13 + 0x124) == '\x01') {
    FUN_109f65a40(lVar13,*(long *)(lVar13 + 0x20),0x78,*(int *)(lVar13 + 0x18) + 1);
    lVar22 = *(long *)(param_2 + 0x68);
    *(long *)(lVar22 + 0x20) = lVar13;
    lVar24 = lVar13;
    if (lVar13 == 0) {
      func_0x000109eb844c(param_2,&UNK_10f60de2c);
      return 0xffffffff;
    }
  }
  uVar26 = *(uint *)(lVar22 + 0x18);
  *(uint *)(lVar22 + 0x18) = uVar26 + 1;
  puVar25 = (undefined8 *)(lVar24 + (ulong)uVar26 * 0x78);
  puVar25[0xe] = 0;
  puVar25[0xb] = 0;
  puVar25[10] = 0;
  puVar25[0xd] = 0;
  puVar25[0xc] = 0;
  puVar25[7] = 0;
  puVar25[6] = 0;
  puVar25[9] = 0;
  puVar25[8] = 0;
  puVar25[3] = 0;
  puVar25[2] = 0;
  puVar25[5] = 0;
  puVar25[4] = 0;
  puVar25[1] = 0;
  *puVar25 = 0;
  if (param_7 == (undefined8 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x68) + 0x20);
    FUN_109f65c2c(uVar7,*param_7);
  }
  *puVar25 = uVar7;
  FUN_109eb8d70(puVar25);
  uVar20 = param_4;
  if (*(char *)(param_4 + 4) == '\x13') {
    do {
      uVar20 = *(ulong *)(uVar20 + 0x30);
    } while (*(char *)(uVar20 + 4) == '\x13');
    puVar25[3] = uVar20;
    uVar19 = param_4;
    FUN_109eca23c();
    uVar5 = (undefined4)uVar19;
  }
  else {
    uVar5 = 0;
    puVar25[3] = param_4;
  }
  *(undefined4 *)(puVar25 + 4) = uVar5;
  puVar25[0xd] = *(undefined8 *)(param_6 + 0x16);
  if ((*(byte *)(*(long *)(param_2 + 0x68) + 0x124) & 1) == 0) {
    lVar22 = *(long *)(param_6 + (ulong)param_3 * 2 + 0x1a);
    uVar27 = *(undefined8 *)(*(long *)(param_6 + 0x10) + 0x18);
    uVar7 = uVar27;
    (**(code **)(lVar22 + 8))(uVar27);
    FUN_109f64fdc(lVar22,uVar7,uVar27);
    if (lVar22 == 0) goto LAB_109e6eb2c;
LAB_109e6eb48:
    *(uint *)(puVar25 + 6) = *(uint *)(puVar25 + 6) | 1 << (ulong)(param_3 & 0x1f);
  }
  else {
LAB_109e6eb2c:
    if ((*(char *)(uVar20 + 4) == '\x15') ||
       (*(char *)(*(long *)(param_2 + 0x68) + 0x124) == '\x01')) goto LAB_109e6eb48;
  }
  uVar26 = (uint)param_5;
  if (0x7fffffff < uVar26) {
    uVar26 = 0xffffffff;
  }
  *(uint *)(puVar25 + 0xc) = uVar26;
  lVar22 = *(long *)(param_6 + 0x10);
  bVar4 = (*(ulong *)(lVar22 + 0x2c) & 0x6000) == 0x4000;
  *(bool *)((long)puVar25 + 0x59) = bVar4;
  if (bVar4) {
    *param_6 = *param_6 + 1;
  }
  if ((*(ulong *)(lVar22 + 0x20) & 0x1fffff) == 0x200) {
    bVar4 = *(long *)(lVar22 + 0x88) != 0;
  }
  else {
    bVar4 = false;
  }
  *(bool *)((long)puVar25 + 0x5b) = bVar4;
  *(byte *)(puVar25 + 0xe) = *(byte *)(lVar22 + 0x25) & 1;
  puVar25[10] = 0xffffffffffffffff;
  *(undefined1 *)(puVar25 + 0xb) = 0;
  if ((char)param_6[0x15] != '\x01') {
LAB_109e6ece4:
    uVar5 = 0xffffffff;
    *(undefined4 *)((long)puVar25 + 0x4c) = 0xffffffff;
    goto LAB_109e6f120;
  }
  if (*(char *)(param_4 + 4) == '\x13') {
    uVar5 = *(undefined4 *)(param_4 + 0x28);
  }
  else {
    uVar5 = 0;
  }
  *(undefined4 *)((long)puVar25 + 0x54) = uVar5;
  lVar24 = puVar25[3];
  if ((*(byte *)(lVar24 + 0xe) < 2) || (2 < *(byte *)(lVar24 + 4) - 2)) {
    uVar26 = 0;
    *(undefined4 *)(puVar25 + 10) = 0;
  }
  else {
    *(undefined4 *)(puVar25 + 10) = *(undefined4 *)(lVar24 + 0x28);
    uVar26 = *(uint *)(lVar24 + 4) >> 0x18;
    *(byte *)(puVar25 + 0xb) = (byte)(*(uint *)(lVar24 + 4) >> 0x18) & 1;
  }
  if ((*(byte *)(*(long *)(param_2 + 0x68) + 0x124) & 1) == 0) {
    bVar10 = *(byte *)(param_1 + 0x4c2);
    uVar3 = *(uint *)(*(long *)(lVar22 + 0x88) + 4) >> 0x16 & 3;
    uVar20 = param_4;
    FUN_109ec8a54(param_4,uVar26 & 1);
    iVar12 = (int)uVar20;
    if ((uVar3 != 0) && (uVar3 == 3 || (bVar10 & 1) != 0)) {
      uVar20 = param_4;
      FUN_109ec920c(param_4,*(undefined1 *)(puVar25 + 0xb));
      iVar12 = (int)uVar20;
    }
    param_6[0x14] = (iVar12 + param_6[0x14]) - 1U & -iVar12;
    if ((*(byte *)(param_6 + 0x15) & 1) == 0) goto LAB_109e6ece4;
  }
  *(int *)((long)puVar25 + 0x4c) = param_6[0x14];
  lVar22 = *(long *)(param_6 + 0x10);
  if ((*(ulong *)(lVar22 + 0x20) & 0x1fffff) == 0x200) {
    lVar24 = *(long *)(param_2 + 0x68);
    if (*(long *)(lVar22 + 0x88) == 0) goto LAB_109e6ed0c;
    puVar17 = (undefined8 *)(lVar24 + 0x38);
    puVar18 = (uint *)(lVar24 + 0x2c);
  }
  else {
    lVar24 = *(long *)(param_2 + 0x68);
LAB_109e6ed0c:
    puVar17 = (undefined8 *)(lVar24 + 0x30);
    puVar18 = (uint *)(lVar24 + 0x28);
  }
  plVar23 = (long *)*puVar17;
  uVar26 = *puVar18;
  uVar20 = (ulong)uVar26;
  if (*(char *)(lVar24 + 0x124) == '\x01') {
    if (uVar26 != 0) {
      uVar19 = 0;
      piVar15 = (int *)((long)plVar23 + 0x24);
      do {
        if (*(int *)(lVar22 + 0x38) == *piVar15) goto LAB_109e6f014;
        uVar19 = uVar19 + 1;
        piVar15 = piVar15 + 0xe;
      } while (uVar20 != uVar19);
    }
    uVar19 = 0xffffffff;
LAB_109e6f014:
    uVar5 = (undefined4)uVar19;
    uVar20 = param_4;
    FUN_109ec96e8(param_4,1);
    iVar12 = (int)uVar20;
  }
  else {
    puVar16 = *(undefined **)(lVar22 + 0x10);
    cVar1 = puVar16[4];
    cVar2 = cVar1;
    while (cVar2 == '\x13') {
      puVar16 = *(undefined **)(puVar16 + 0x30);
      cVar2 = puVar16[4];
    }
    puVar28 = *(undefined **)(lVar22 + 0x88);
    puVar8 = puVar28;
    if (puVar16 == puVar28) {
      if (((byte)puVar28[0xc] >> 1 & 1) == 0) {
        func_0x000109eca058();
      }
      else {
        puVar8 = &UNK_10e05bf38 + *(long *)(puVar28 + 0x18);
      }
      if (cVar1 != '\x13') goto LAB_109e6f0a8;
      if (uVar26 == 0) goto LAB_109e6f0d0;
      puVar16 = puVar8;
      _strlen();
      uVar19 = 0;
      do {
        lVar22 = *plVar23;
        puVar9 = puVar8;
        _strncmp(puVar8,lVar22,(ulong)puVar16 & 0xffffffff);
        if (((int)puVar9 == 0) && (*(char *)(lVar22 + ((ulong)puVar16 & 0xffffffff)) == '['))
        goto LAB_109e6f0d8;
        uVar19 = uVar19 + 1;
        plVar23 = plVar23 + 7;
      } while (uVar20 != uVar19);
      uVar19 = 0xffffffff;
    }
    else {
      if (((byte)puVar28[0xc] >> 1 & 1) == 0) {
        func_0x000109eca058();
      }
      else {
        puVar8 = &UNK_10e05bf38 + *(long *)(puVar28 + 0x18);
      }
LAB_109e6f0a8:
      if (uVar26 != 0) {
        uVar19 = 0;
        do {
          puVar16 = puVar8;
          _strcmp(puVar8,*plVar23);
          if ((int)puVar16 == 0) goto LAB_109e6f0d8;
          uVar19 = uVar19 + 1;
          plVar23 = plVar23 + 7;
        } while (uVar20 != uVar19);
      }
LAB_109e6f0d0:
      uVar19 = 0xffffffff;
    }
LAB_109e6f0d8:
    uVar5 = (undefined4)uVar19;
    uVar26 = *(uint *)(puVar28 + 4) >> 0x16 & 3;
    if ((uVar26 == 0) || (uVar26 != 3 && (*(byte *)(param_1 + 0x4c2) & 1) == 0)) {
      uVar20 = param_4;
      FUN_109ec8c8c(param_4,*(undefined1 *)(puVar25 + 0xb));
      iVar12 = (int)uVar20;
    }
    else {
      uVar20 = param_4;
      FUN_109ec9468();
      iVar12 = (int)uVar20;
    }
  }
  param_6[0x14] = param_6[0x14] + iVar12;
LAB_109e6f120:
  *(undefined4 *)(puVar25 + 9) = uVar5;
  pcVar14 = (char *)*puVar25;
  bVar4 = false;
  if (pcVar14 != (char *)0x0) {
    if ((*pcVar14 == 'g') && (pcVar14[1] == 'l')) {
      bVar4 = pcVar14[2] == '_';
    }
    else {
      bVar4 = false;
    }
  }
  *(bool *)((long)puVar25 + 0x5a) = bVar4;
  *(undefined4 *)((long)puVar25 + 0x5c) = 0xffffffff;
  *(undefined4 *)((long)puVar25 + 100) = 0;
  uVar26 = *(uint *)(puVar25 + 4);
  uVar20 = param_4;
  func_0x000109ec8650();
  func_0x000109e6fb90(param_2,param_6,puVar25,param_4,param_3);
  if (*(int *)(puVar25 + 0xc) != -1) {
    if (uVar26 < 2) {
      uVar26 = 1;
    }
    uVar26 = *(int *)(puVar25 + 0xc) + uVar26;
    if ((uint)param_6[2] < uVar26) {
      param_6[2] = uVar26;
    }
  }
  if ((*(byte *)(param_6 + 0x15) & 1) == 0) {
    func_0x000109e6f918(puVar25,param_1,param_2,param_4,param_6);
  }
  if (param_7 != (undefined8 *)0x0) {
    lVar22 = *(long *)(param_6 + 0x26);
    uVar27 = *param_7;
    _strdup(uVar27);
    iVar12 = *(int *)(*(long *)(param_2 + 0x68) + 0x18);
    uVar7 = uVar27;
    (**(code **)(lVar22 + 8))();
    func_0x000109f650c0(lVar22,uVar7,uVar27,iVar12 + -1);
  }
  pcVar14 = (char *)*puVar25;
  if (((((pcVar14 == (char *)0x0) || (*pcVar14 != 'g')) || (pcVar14[1] != 'l')) ||
      (pcVar14[2] != '_')) &&
     (((*(byte *)((long)puVar25 + 0x5b) & 1) == 0 && ((*(byte *)(param_6 + 0x15) & 1) == 0)))) {
    param_6[1] = param_6[1] + (int)uVar20;
  }
  uVar26 = *(uint *)(puVar25 + 4);
  if (uVar26 < 2) {
    uVar26 = 1;
  }
  return uVar26;
}



/* Entry: 109e6f290; end: 109e6f297;  */

void FUN_109e6f290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 109e6f298; end: 109e6ff43;  */

void FUN_109e6f298(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_a0 [56];
  long *plStack_68;
  
  FUN_109ef9548(auStack_a0,param_1,0);
  lVar17 = *plStack_68;
  if ((*(int *)(lVar17 + 0x28) == 0) && ((*(ushort *)(lVar17 + 0x2c) & 0x292) != 0)) {
    lVar15 = plStack_68[1];
    if (lVar15 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      lVar14 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
      plVar18 = plStack_68 + 2;
      do {
        if (*(int *)(lVar15 + 0x28) == 1) {
          if (*(char *)(lVar14 + 4) != '\x13') break;
          uVar10 = (ulong)((int)uVar11 + 1);
          puVar13 = (undefined8 *)*param_3;
          if ((ulong)*param_4 < uVar10 << 3) {
            uVar3 = *param_4 + 0x1000;
            if (puVar13 == (undefined8 *)0x0) {
              puVar4 = (undefined8 *)((ulong)uVar3 + 0x3f & 0x1fffffff0);
              _malloc();
              if (puVar4 == (undefined8 *)0x0) goto LAB_109e6f2e4;
              puVar4[4] = 0;
              puVar13 = puVar4 + 6;
              puVar4[1] = 0;
              *puVar4 = 0;
              puVar4[3] = 0;
              puVar4[2] = 0;
            }
            else {
              FUN_109f6595c(puVar13,(ulong)uVar3);
              if (puVar13 == (undefined8 *)0x0) goto LAB_109e6f2e4;
              uVar3 = *param_4 + 0x1000;
            }
            *param_4 = uVar3;
            *param_3 = puVar13;
            lVar15 = plVar18[-1];
          }
          lVar5 = lVar14;
          FUN_109eca23c();
          uVar3 = (uint)lVar5;
          *(uint *)((long)(puVar13 + uVar11) + 4) = uVar3;
          lVar15 = **(long **)(lVar15 + 0x70);
          if (*(int *)(lVar15 + 0x18) == 5) {
            uVar3 = (uint)*(undefined8 *)(lVar15 + 0x48);
            uVar2 = (*(byte *)(lVar15 + 0x45) & 0xaaaaaaaa) >> 1 |
                    (*(byte *)(lVar15 + 0x45) & 0x55555555) << 1;
            uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
            uVar9 = (uint)LZCOUNT((uVar2 >> 4 | (uVar2 & 0xf0f0f0f) << 4) << 0x18);
            uVar2 = uVar3 & 0xff;
            if (uVar9 != 3) {
              uVar2 = uVar3 & 0xffff;
            }
            uVar1 = uVar3 & 1;
            if (uVar9 != 0) {
              uVar1 = uVar2;
            }
            if (uVar9 < 5) {
              uVar3 = uVar1;
            }
          }
          else if (uVar3 == 0) goto LAB_109e6f2e4;
          *(uint *)(puVar13 + uVar11) = uVar3;
          func_0x000109eca118();
          uVar11 = uVar10;
        }
        else if (*(int *)(lVar15 + 0x28) == 4) break;
        lVar15 = *plVar18;
        plVar18 = plVar18 + 1;
      } while (lVar15 != 0);
    }
    FUN_109ef9640(auStack_a0);
    uVar12 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + 0x18);
    uVar6 = uVar12;
    (*(code *)param_2[1])(uVar12);
    puVar13 = param_2;
    FUN_109f64fdc(param_2,uVar6,uVar12);
    if (puVar13 == (undefined8 *)0x0) {
      if (*(char *)(*(long *)(*(long *)(lVar17 + 0x38) + 0x10) + 4) == '\x13') {
        puVar13 = param_2;
        FUN_109f658b0(param_2,0x10);
        uVar7 = *(ulong *)(*(long *)(lVar17 + 0x38) + 0x10);
        FUN_109ec88a0();
        uVar10 = 4;
        if ((int)uVar7 != 0) {
          uVar10 = (uVar7 & 0xffffffff) + 0x1f >> 3 & 0x3ffffffc;
        }
        puVar4 = param_2;
        func_0x000109f6590c(param_2,uVar10);
        puVar13[1] = puVar4;
        puVar4 = param_2;
        FUN_109f658b0(param_2,0x18);
        *puVar13 = puVar4;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        *puVar4 = param_2;
      }
      else {
        puVar13 = (undefined8 *)0x0;
      }
    }
    else {
      puVar13 = (undefined8 *)puVar13[2];
    }
    lVar14 = *(long *)(lVar17 + 0x38);
    lVar15 = *(long *)(lVar14 + 0x10);
    uVar10 = uVar11;
    if (*(char *)(lVar15 + 4) == '\x13') {
      do {
        func_0x000109eca118();
        uVar3 = (int)uVar10 - 1;
        uVar10 = (ulong)uVar3;
      } while (*(char *)(lVar15 + 4) == '\x13');
      if (uVar3 == 0) {
        FUN_109eb8c10(*param_3,uVar11,1,0,puVar13[1]);
      }
      puVar16 = (ulong *)*puVar13;
      uVar11 = (ulong)(uint)puVar16[2];
      uVar3 = (uint)puVar16[2] + 8;
      if (*(uint *)((long)puVar16 + 0x14) < uVar3) {
        uVar2 = *(uint *)((long)puVar16 + 0x14) << 1;
        if (uVar2 <= uVar3) {
          uVar2 = uVar3;
        }
        if (uVar2 < 0x41) {
          uVar2 = 0x40;
        }
        uVar10 = (ulong)uVar2;
        uVar7 = *puVar16;
        if (uVar7 == 0x11386a228) {
          _malloc();
          _memcpy();
          *puVar16 = 0;
          puVar16[1] = uVar10;
        }
        else {
          uVar8 = puVar16[1];
          if (uVar7 == 0) {
            _realloc(uVar8,uVar10);
          }
          else if (uVar8 == 0) {
            FUN_109f658b0(uVar7,uVar10);
            uVar8 = uVar7;
          }
          else {
            FUN_109f6595c(uVar8,uVar10);
          }
          puVar16[1] = uVar8;
          uVar11 = (ulong)(uint)puVar16[2];
          uVar10 = uVar8;
        }
        *(uint *)((long)puVar16 + 0x14) = uVar2;
      }
      else {
        uVar10 = puVar16[1];
      }
      *(uint *)(puVar16 + 2) = uVar3;
      *(long *)(uVar10 + uVar11) = lVar17;
      lVar14 = *(long *)(lVar17 + 0x38);
    }
    uVar12 = *(undefined8 *)(lVar14 + 0x18);
    uVar6 = uVar12;
    (*(code *)param_2[1])(uVar12);
    func_0x000109f650c0(param_2,uVar6,uVar12,puVar13);
  }
  else {
LAB_109e6f2e4:
    FUN_109ef9640(auStack_a0);
  }
  return;
}



/* Entry: 109e6ff44; end: 109e7000b;  */

uint FUN_109e6ff44(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 0x10 & 0xf;
  if (uVar2 < 3) {
    if (uVar2 == 0) {
      uVar1 = 5;
      uVar2 = 0xb;
    }
    else {
      if (uVar2 != 1) {
        if (uVar2 != 2) {
          return 3;
        }
        return 8;
      }
      uVar1 = 4;
      uVar2 = 10;
    }
LAB_109e6ffe4:
    if ((param_1 & 0x200000) != 0) {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  if (uVar2 < 6) {
    if (uVar2 == 3) {
      uVar1 = 2;
      uVar2 = 7;
      goto LAB_109e6ffe4;
    }
    if (uVar2 == 4) {
      return 9;
    }
  }
  else {
    if (uVar2 == 6) {
      return 6;
    }
    if (uVar2 == 7) {
      return (param_1 & 0x200000) >> 0x15;
    }
  }
  return 3;
}



/* Entry: 109e7000c; end: 109e70137;  */

/* WARNING: Removing unreachable block (ram,0x000109e70194) */
/* WARNING: Removing unreachable block (ram,0x000109e70198) */
/* WARNING: Removing unreachable block (ram,0x000109e701a0) */
/* WARNING: Removing unreachable block (ram,0x000109e701a4) */
/* WARNING: Removing unreachable block (ram,0x000109e701a8) */
/* WARNING: Removing unreachable block (ram,0x000109e70218) */
/* WARNING: Removing unreachable block (ram,0x000109e70200) */
/* WARNING: Removing unreachable block (ram,0x000109e70234) */

void FUN_109e7000c(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar10 = *(long *)(param_2 + 0xb8);
  if (lVar10 != 0) {
    if (*(long *)(param_2 + 0xb0) == 0) {
      iVar1 = *(int *)(param_1 + 0x828);
      lVar10 = *(long *)(*(long *)(lVar10 + 0x28) + 0x160);
      plVar11 = (long *)**(long **)(lVar10 + 8);
      if (plVar11 != (long *)0x0) {
        plVar12 = *(long **)(lVar10 + 8);
        do {
          plVar9 = plVar11;
          if (((((uint)plVar12[4] >> 2 & 1) != 0) && (((uint)plVar12[4] >> 0x18 & 1) == 0)) &&
             (*(char *)(plVar12[2] + 4) == '\x13')) {
            lVar8 = *(long *)(plVar12[2] + 0x30);
            FUN_109ec69f4(lVar8,iVar1,0);
            plVar12[2] = lVar8;
            *(int *)(plVar12 + 5) = iVar1 + -1;
            plVar9 = (long *)*plVar12;
          }
          plVar11 = (long *)*plVar9;
          plVar12 = plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
      pcVar7 = FUN_109efa234;
FUN_109efa06c:
      plVar11 = *(long **)(lVar10 + 0x178);
      plVar12 = (long *)**(long **)(lVar10 + 0x178);
      while( true ) {
        if (plVar12 == (long *)0x0) {
          return;
        }
        lVar10 = plVar11[6];
        if (lVar10 != 0) break;
        plVar11 = plVar12;
        plVar12 = (long *)*plVar12;
      }
      do {
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_60 = *(undefined8 *)(*(long *)(lVar10 + 0x20) + 0x18);
        uStack_68 = 0;
        lVar8 = *(long *)(lVar10 + 0x30);
        if (lVar8 == 0) {
LAB_109efa1a4:
          uVar14 = 0xfffffff7;
        }
        else {
          lVar13 = lVar8;
          lStack_58 = lVar10;
          FUN_109ecc434();
          uVar14 = 0;
          do {
            lVar5 = lVar13;
            plVar12 = (long *)**(undefined8 **)(lVar8 + 0x20);
            if (plVar12 != (long *)0x0) {
              lVar13 = *plVar12;
              puVar6 = &uStack_78;
              (*pcVar7)(puVar6,*(undefined8 **)(lVar8 + 0x20),0);
              uVar14 = uVar14 | (uint)puVar6;
              if (lVar13 != 0) {
                for (plVar9 = (long *)*plVar12; (plVar9 != (long *)0x0 && (*plVar9 != 0));
                    plVar9 = (long *)*plVar9) {
                  puVar6 = &uStack_78;
                  (*pcVar7)(puVar6,plVar12,0);
                  uVar14 = uVar14 | (uint)puVar6;
                  plVar12 = plVar9;
                }
                puVar6 = &uStack_78;
                (*pcVar7)(puVar6,plVar12,0);
                uVar14 = uVar14 | (uint)puVar6;
              }
            }
            lVar13 = lVar5;
            FUN_109ecc434();
            lVar8 = lVar5;
          } while (lVar5 != 0);
          if ((uVar14 & 1) == 0) goto LAB_109efa1a4;
          uVar14 = 0x27;
        }
        *(uint *)(lVar10 + 0x84) = *(uint *)(lVar10 + 0x84) & uVar14;
        plVar11 = (long *)*plVar11;
        plVar12 = (long *)*plVar11;
        while( true ) {
          if (plVar12 == (long *)0x0) {
            return;
          }
          lVar10 = plVar11[6];
          if (lVar10 != 0) break;
          plVar11 = plVar12;
          plVar12 = (long *)*plVar12;
        }
      } while( true );
    }
    bVar2 = *(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0xb0) + 0x28) + 0x160) + 0x15c);
    FUN_109e70138(*(undefined8 *)(*(long *)(lVar10 + 0x28) + 0x160),param_2,2,bVar2);
    plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x28) + 0x160) + 8);
    for (plVar12 = (long *)*plVar11; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if (((plVar11[4] & 1U) != 0) && (*(int *)((long)plVar11 + 0x3c) == 0x21)) {
        *(undefined4 *)((long)plVar11 + 0x3c) = 0;
        plVar11[4] = plVar11[4] & 0xfffffbffffe00000U | 0x400;
        puVar3 = (uint *)0xc0;
        _malloc();
        puVar4 = puVar3;
        if (puVar3 != (uint *)0x0) {
          puVar3[8] = 0;
          puVar3[9] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3[0] = 0;
          puVar3[1] = 0;
          puVar3[6] = 0;
          puVar3[7] = 0;
          puVar3[4] = 0;
          puVar3[5] = 0;
          *(long **)puVar3 = plVar11 + -6;
          lVar8 = plVar11[-5];
          *(long *)(puVar3 + 6) = lVar8;
          plVar11[-5] = (long)puVar3;
          if (lVar8 != 0) {
            *(uint **)(lVar8 + 0x10) = puVar3;
          }
          puVar4 = puVar3 + 0xc;
          puVar3[0xe] = 0;
          puVar3[0xf] = 0;
          puVar4[0] = 0;
          puVar4[1] = 0;
          puVar3[0x2a] = 0;
          puVar3[0x2b] = 0;
          puVar3[0x28] = 0;
          puVar3[0x29] = 0;
          puVar3[0x2e] = 0;
          puVar3[0x2f] = 0;
          puVar3[0x2c] = 0;
          puVar3[0x2d] = 0;
          puVar3[0x22] = 0;
          puVar3[0x23] = 0;
          puVar3[0x20] = 0;
          puVar3[0x21] = 0;
          puVar3[0x26] = 0;
          puVar3[0x27] = 0;
          puVar3[0x24] = 0;
          puVar3[0x25] = 0;
          puVar3[0x1a] = 0;
          puVar3[0x1b] = 0;
          puVar3[0x18] = 0;
          puVar3[0x19] = 0;
          puVar3[0x1e] = 0;
          puVar3[0x1f] = 0;
          puVar3[0x1c] = 0;
          puVar3[0x1d] = 0;
          puVar3[0x12] = 0;
          puVar3[0x13] = 0;
          puVar3[0x10] = 0;
          puVar3[0x11] = 0;
          puVar3[0x16] = 0;
          puVar3[0x17] = 0;
          puVar3[0x14] = 0;
          puVar3[0x15] = 0;
        }
        *puVar4 = (uint)bVar2;
        plVar11[0xf] = (long)puVar4;
        lVar10 = *(long *)(*(long *)(lVar10 + 0x28) + 0x160);
        pcVar7 = FUN_109efa1c4;
        goto FUN_109efa06c;
      }
      plVar11 = plVar12;
    }
  }
  return;
}



/* Entry: 109e70138; end: 109e7023f;  */

void FUN_109e70138(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  
  uVar11 = (uint)param_4;
  plVar4 = (long *)**(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar9 = *(long **)(param_1 + 8);
    do {
      plVar5 = plVar4;
      uVar7 = (uint)plVar9[4];
      if ((((uVar7 >> 2 & 1) != 0) && ((uVar7 >> 0x18 & 1) == 0)) &&
         (lVar6 = plVar9[2], *(char *)(lVar6 + 4) == '\x13')) {
        if (param_3 == 3) {
          if ((((ulong)plVar9[4] >> 0x2b & 1) == 0) &&
             (uVar7 = *(uint *)(lVar6 + 0x10), uVar7 != 0xffffffff && uVar7 != uVar11)) {
            puStack_60 = (undefined *)plVar9[3];
            puVar3 = &UNK_10f60df30;
          }
          else {
            uVar7 = *(uint *)(plVar9 + 5);
            if ((int)uVar7 < (int)uVar11) goto LAB_109e701b4;
            puStack_60 = &DAT_10f61bcde;
            puVar3 = &UNK_10f60df75;
          }
          uStack_58 = (ulong)uVar7;
          func_0x000109eb844c(param_2,puVar3);
          break;
        }
LAB_109e701b4:
        lVar6 = *(long *)(lVar6 + 0x30);
        FUN_109ec69f4(lVar6,param_4,0);
        plVar9[2] = lVar6;
        *(uint *)(plVar9 + 5) = uVar11 - 1;
        plVar5 = (long *)*plVar9;
      }
      plVar4 = (long *)*plVar5;
      plVar9 = plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
  plVar4 = *(long **)(param_1 + 0x178);
  plVar9 = (long *)**(long **)(param_1 + 0x178);
  while( true ) {
    if (plVar9 == (long *)0x0) {
      return;
    }
    lVar6 = plVar4[6];
    if (lVar6 != 0) break;
    plVar4 = plVar9;
    plVar9 = (long *)*plVar9;
  }
  do {
    uStack_78 = 0;
    uStack_70 = 0;
    puStack_60 = *(undefined **)(*(long *)(lVar6 + 0x20) + 0x18);
    uStack_68 = 0;
    lVar8 = *(long *)(lVar6 + 0x30);
    if (lVar8 == 0) {
LAB_109efa1a4:
      uVar11 = 0xfffffff7;
    }
    else {
      lVar10 = lVar8;
      uStack_58 = lVar6;
      FUN_109ecc434();
      uVar11 = 0;
      do {
        lVar1 = lVar10;
        plVar9 = (long *)**(undefined8 **)(lVar8 + 0x20);
        if (plVar9 != (long *)0x0) {
          lVar10 = *plVar9;
          puVar2 = &uStack_78;
          FUN_109efa234(puVar2,*(undefined8 **)(lVar8 + 0x20),0);
          uVar11 = uVar11 | (uint)puVar2;
          if (lVar10 != 0) {
            for (plVar5 = (long *)*plVar9; (plVar5 != (long *)0x0 && (*plVar5 != 0));
                plVar5 = (long *)*plVar5) {
              puVar2 = &uStack_78;
              FUN_109efa234(puVar2,plVar9,0);
              uVar11 = uVar11 | (uint)puVar2;
              plVar9 = plVar5;
            }
            puVar2 = &uStack_78;
            FUN_109efa234(puVar2,plVar9,0);
            uVar11 = uVar11 | (uint)puVar2;
          }
        }
        lVar10 = lVar1;
        FUN_109ecc434();
        lVar8 = lVar1;
      } while (lVar1 != 0);
      if ((uVar11 & 1) == 0) goto LAB_109efa1a4;
      uVar11 = 0x27;
    }
    *(uint *)(lVar6 + 0x84) = *(uint *)(lVar6 + 0x84) & uVar11;
    plVar4 = (long *)*plVar4;
    plVar9 = (long *)*plVar4;
    while( true ) {
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar6 = plVar4[6];
      if (lVar6 != 0) break;
      plVar4 = plVar9;
      plVar9 = (long *)*plVar9;
    }
  } while( true );
}



/* Entry: 109e70240; end: 109e7027f;  */

void FUN_109e70240(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  
  if (*(long *)(param_1 + 0xc0) == 0) {
    return;
  }
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x28) + 0x160);
  if (*(uint *)(lVar1 + 0x15c) < 0xe) {
    uVar11 = *(uint *)(&UNK_10e061b20 + (ulong)*(uint *)(lVar1 + 0x15c) * 4);
  }
  else {
    uVar11 = 3;
  }
  plVar5 = (long *)**(long **)(lVar1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar9 = *(long **)(lVar1 + 8);
    do {
      plVar6 = plVar5;
      uVar8 = (uint)plVar9[4];
      if ((((uVar8 >> 2 & 1) != 0) && ((uVar8 >> 0x18 & 1) == 0)) &&
         (lVar7 = plVar9[2], *(char *)(lVar7 + 4) == '\x13')) {
        if ((((ulong)plVar9[4] >> 0x2b & 1) == 0) &&
           (uVar8 = *(uint *)(lVar7 + 0x10), uVar8 != 0xffffffff && uVar8 != uVar11)) {
          puStack_60 = (undefined *)plVar9[3];
          puVar4 = &UNK_10f60df30;
        }
        else {
          uVar8 = *(uint *)(plVar9 + 5);
          if ((int)uVar8 < (int)uVar11) {
            lVar7 = *(long *)(lVar7 + 0x30);
            FUN_109ec69f4(lVar7,uVar11,0);
            plVar9[2] = lVar7;
            *(uint *)(plVar9 + 5) = uVar11 - 1;
            plVar6 = (long *)*plVar9;
            goto LAB_109e701d0;
          }
          puStack_60 = &DAT_10f61bcde;
          puVar4 = &UNK_10f60df75;
        }
        uStack_58 = (ulong)uVar8;
        func_0x000109eb844c(param_1,puVar4);
        break;
      }
LAB_109e701d0:
      plVar5 = (long *)*plVar6;
      plVar9 = plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
  plVar5 = *(long **)(lVar1 + 0x178);
  plVar9 = (long *)**(long **)(lVar1 + 0x178);
  while( true ) {
    if (plVar9 == (long *)0x0) {
      return;
    }
    lVar1 = plVar5[6];
    if (lVar1 != 0) break;
    plVar5 = plVar9;
    plVar9 = (long *)*plVar9;
  }
  do {
    uStack_78 = 0;
    uStack_70 = 0;
    puStack_60 = *(undefined **)(*(long *)(lVar1 + 0x20) + 0x18);
    uStack_68 = 0;
    lVar7 = *(long *)(lVar1 + 0x30);
    if (lVar7 == 0) {
LAB_109efa1a4:
      uVar11 = 0xfffffff7;
    }
    else {
      lVar10 = lVar7;
      uStack_58 = lVar1;
      FUN_109ecc434();
      uVar11 = 0;
      do {
        lVar2 = lVar10;
        plVar9 = (long *)**(undefined8 **)(lVar7 + 0x20);
        if (plVar9 != (long *)0x0) {
          lVar10 = *plVar9;
          puVar3 = &uStack_78;
          FUN_109efa234(puVar3,*(undefined8 **)(lVar7 + 0x20),0);
          uVar11 = uVar11 | (uint)puVar3;
          if (lVar10 != 0) {
            for (plVar6 = (long *)*plVar9; (plVar6 != (long *)0x0 && (*plVar6 != 0));
                plVar6 = (long *)*plVar6) {
              puVar3 = &uStack_78;
              FUN_109efa234(puVar3,plVar9,0);
              uVar11 = uVar11 | (uint)puVar3;
              plVar9 = plVar6;
            }
            puVar3 = &uStack_78;
            FUN_109efa234(puVar3,plVar9,0);
            uVar11 = uVar11 | (uint)puVar3;
          }
        }
        lVar10 = lVar2;
        FUN_109ecc434();
        lVar7 = lVar2;
      } while (lVar2 != 0);
      if ((uVar11 & 1) == 0) goto LAB_109efa1a4;
      uVar11 = 0x27;
    }
    *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) & uVar11;
    plVar5 = (long *)*plVar5;
    plVar9 = (long *)*plVar5;
    while( true ) {
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar1 = plVar5[6];
      if (lVar1 != 0) break;
      plVar5 = plVar9;
      plVar9 = (long *)*plVar9;
    }
  } while( true );
}



/* Entry: 109e70280; end: 109e709bf;  */

/* WARNING: Possible PIC construction at 0x000109e70354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109e70358) */
/* WARNING: Removing unreachable block (ram,0x000109e7035c) */

void FUN_109e70280(undefined1 *param_1,undefined1 *param_2,ulong *param_3,undefined1 *param_4,
                  int *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined1 *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  ulong *puVar13;
  ulong uVar14;
  int *piVar15;
  int *piVar16;
  ulong *puVar17;
  ulong *puVar18;
  undefined8 uVar19;
  long lVar20;
  ulong in_stack_fffffffffffff310;
  int iStack_c70;
  int iStack_c6c;
  undefined1 auStack_c68 [3072];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar10 = (int)param_3;
  iVar11 = (int)param_4;
  puVar6 = param_1;
  puVar9 = param_2;
  if ((iVar10 != 0) || (puVar17 = param_3, piVar16 = param_5, iVar11 != 4)) {
    lVar20 = 0;
    iStack_c70 = iVar11;
    iStack_c6c = iVar10;
    piVar15 = &iStack_c6c;
    bVar12 = iVar10 != 0;
    bVar5 = true;
    do {
      bVar4 = bVar5;
      if (bVar12) {
        piVar16 = *(int **)(param_2 + (long)*piVar15 * 8 + 0xa8);
        puVar6 = auStack_c68;
        puVar9 = (undefined1 *)0xc00;
        _bzero();
        puVar17 = *(ulong **)(*(long *)(*(long *)(piVar16 + 10) + 0x160) + 8);
        puVar13 = (ulong *)*puVar17;
        if (puVar13 != (ulong *)0x0) {
          do {
            puVar18 = puVar13;
            if ((((puVar17[4] >> 0x2a & 1) != 0) &&
                ((*(uint *)(&UNK_10e061b18 + lVar20 * 4) & 0x1fffff & (uint)puVar17[4]) != 0)) &&
               (0x1f < *(int *)((long)puVar17 + 0x3c))) {
              puVar9 = auStack_c68;
              goto SUB_109e703bc;
            }
            puVar13 = (ulong *)*puVar18;
            puVar17 = puVar18;
          } while (puVar13 != (ulong *)0x0);
        }
      }
      lVar20 = 1;
      puVar17 = param_3;
      piVar16 = param_5;
      piVar15 = &iStack_c70;
      bVar12 = iVar11 != 4;
      bVar5 = false;
    } while (bVar4);
  }
  param_2 = param_4;
  param_1 = puVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
SUB_109e703bc:
  puVar13 = puVar17;
  FUN_109e70a5c(puVar17,*piVar16);
  puVar18 = puVar13;
  FUN_109ec9e40();
  iVar10 = *piVar16;
  puVar7 = puVar17;
  FUN_109e70aa0(puVar17,(long)iVar10);
  uVar1 = (int)puVar7 + (int)puVar18;
  uVar14 = puVar17[4];
  lVar20 = 0x34;
  if ((uVar14 & 0x1fffff) != 8) {
    lVar20 = 0x30;
  }
  if (*(uint *)(param_1 + lVar20 + (long)iVar10 * 0x80 + 0x98) >> 2 < uVar1) {
    func_0x000109f47670();
    func_0x000109eb844c(param_2,&UNK_10f60de87);
  }
  else {
    cVar3 = *(char *)((long)puVar13 + 4);
    puVar18 = puVar13;
    while (cVar3 == '\x13') {
      puVar18 = (ulong *)puVar18[6];
      cVar3 = *(char *)((long)puVar18 + 4);
    }
    if (cVar3 == '\x12') {
      uVar14 = 0xffffffffffffffff;
      lVar20 = 0;
      do {
        puVar13 = puVar18;
        FUN_109eca23c();
        uVar14 = uVar14 + 1;
        if (((ulong)puVar13 & 0xffffffff) <= uVar14) {
          return;
        }
        puVar2 = (undefined8 *)(puVar18[6] + lVar20);
        iVar11 = *(int *)(puVar2 + 2);
        uVar1 = *(uint *)(puVar2 + 5);
        iVar10 = -0x20;
        if ((uVar1 & 0x80) != 0) {
          iVar10 = -0x40;
        }
        uVar19 = *puVar2;
        uVar8 = uVar19;
        FUN_109ec9e40(uVar19,0,1);
        in_stack_fffffffffffff310 =
             CONCAT71(CONCAT61((int6)(in_stack_fffffffffffff310 >> 0x10),(char)((uVar1 & 0x80) >> 7)
                              ),(char)(uVar1 >> 4)) & 0xffffffffffffff01;
        puVar6 = puVar9;
        FUN_109e72d98(puVar9,puVar17,iVar10 + iVar11,0,iVar10 + iVar11 + (int)uVar8,uVar19,uVar1 & 7
                      ,uVar1 >> 3 & 1,in_stack_fffffffffffff310,param_2,*piVar16);
        lVar20 = lVar20 + 0x30;
      } while (((ulong)puVar6 & 1) != 0);
    }
    else {
      FUN_109e72d98(puVar9,puVar17,puVar7,uVar14 >> 0x24 & 3,uVar1,puVar13,uVar14 >> 0x21 & 7,
                    uVar14 >> 0x16 & 1,
                    CONCAT71(CONCAT61((int6)(in_stack_fffffffffffff310 >> 0x10),
                                      (char)(uVar14 >> 0x18)),(char)((uint)uVar14 >> 0x17)) &
                    0xffffffffffff0101,param_2,iVar10);
    }
  }
  return;
}



/* Entry: 109e709c0; end: 109e70a5b;  */

void FUN_109e709c0(long param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  char *pcVar10;
  
  if ((param_4 != 0) && ((*(byte *)(param_4 + 0x23) >> 6 & 1) != 0)) {
    FUN_109e70b0c(param_1,param_2,param_3,param_4,param_6,param_7);
  }
  if ((param_5 == 0) || ((*(byte *)(param_5 + 0x23) >> 6 & 1) == 0)) {
    return;
  }
  uVar4 = *(ulong *)(param_3 + 0x10);
  if (((int)param_6 == 3) || ((int)param_6 != 4 && (int)param_7 == 0)) {
    func_0x000109eca118();
  }
  uVar9 = *(ulong *)(param_5 + 0x10);
  if (uVar4 != uVar9) {
    if (*(char *)(uVar9 + 4) == '\x11') {
      FUN_109ec7a90(uVar9,uVar4,0,1,0);
      if ((uVar9 & 1) == 0) {
        func_0x000109f47670();
        if ((*(byte *)(*(long *)(param_5 + 0x10) + 0xc) >> 1 & 1) == 0) {
          func_0x000109eca058();
        }
        func_0x000109f47670();
        if ((*(byte *)(*(long *)(param_3 + 0x10) + 0xc) >> 1 & 1) == 0) {
          func_0x000109eca058();
        }
        func_0x000109eb844c(param_2,&UNK_10f60e2c0);
      }
    }
    else if ((((*(char *)(uVar9 + 4) != '\x13') ||
              (pcVar10 = *(char **)(param_5 + 0x18), pcVar10 == (char *)0x0)) || (*pcVar10 != 'g'))
            || ((pcVar10[1] != 'l' || (pcVar10[2] != '_')))) {
      func_0x000109f47670();
      if ((*(byte *)(uVar9 + 0xc) >> 1 & 1) == 0) {
        func_0x000109eca058();
      }
      func_0x000109f47670();
      if ((*(byte *)(*(long *)(param_3 + 0x10) + 0xc) >> 1 & 1) == 0) {
        func_0x000109eca058();
      }
      puVar5 = &UNK_10f60e333;
      goto LAB_109e70d90;
    }
  }
  uVar4 = *(ulong *)(param_3 + 0x20);
  uVar9 = *(ulong *)(param_5 + 0x20);
  uVar6 = (uint)uVar9 ^ (uint)uVar4;
  if ((uVar6 >> 0x17 & 1) == 0) {
    if ((uVar6 >> 0x18 & 1) == 0) {
      if ((uVar6 >> 0x1a & 1) == 0) {
        bVar2 = *(byte *)(param_2 + 0xa5);
      }
      else {
        bVar2 = *(byte *)(param_2 + 0xa5);
        uVar6 = 300;
        if (bVar2 == 0) {
          uVar6 = 0x1a4;
        }
        if (*(uint *)(param_2 + 0xd8) < uVar6) {
          func_0x000109f47670();
          func_0x000109f47670();
          puVar5 = &UNK_10f60e437;
          goto LAB_109e70d90;
        }
      }
      uVar7 = (uint)(uVar4 >> 0x21) & 7;
      uVar8 = (uint)(uVar9 >> 0x21) & 7;
      uVar6 = uVar7;
      if ((uVar4 >> 0x21 & 6) == 0) {
        uVar6 = 1;
      }
      uVar1 = uVar8;
      if ((uVar9 >> 0x21 & 6) == 0) {
        uVar1 = 1;
      }
      if ((bVar2 & 1) == 0) {
        uVar1 = uVar8;
        uVar6 = uVar7;
      }
      if (uVar6 == uVar1) {
        return;
      }
      if (0x1b7 < *(uint *)(param_2 + 0xd8)) {
        return;
      }
      cVar3 = *(char *)(param_1 + 0x449);
      func_0x000109f47670();
      func_0x000109f47670();
      if (cVar3 != '\0') {
        func_0x000109eb84b0(param_2,&UNK_10f60e491);
        return;
      }
      puVar5 = &UNK_10f60e491;
    }
    else {
      func_0x000109f47670();
      func_0x000109f47670();
      puVar5 = &UNK_10f60e3e5;
    }
  }
  else {
    func_0x000109f47670();
    func_0x000109f47670();
    puVar5 = &UNK_10f60e38b;
  }
LAB_109e70d90:
  func_0x000109eb844c(param_2,puVar5);
  return;
}



/* Entry: 109e70a5c; end: 109e70a9f;  */

/* WARNING: Possible PIC construction at 0x000109ec6d10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109ec6d14) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d60) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d84) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d9c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6dcc) */
/* WARNING: Removing unreachable block (ram,0x000109ec6de0) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e88) */
/* WARNING: Removing unreachable block (ram,0x000109ec6dec) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e98) */
/* WARNING: Removing unreachable block (ram,0x000109ec6eac) */
/* WARNING: Removing unreachable block (ram,0x000109ec6eec) */
/* WARNING: Removing unreachable block (ram,0x000109ec6efc) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f10) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f5c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f64) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f84) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f94) */
/* WARNING: Removing unreachable block (ram,0x000109ec6fc8) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e3c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e50) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e58) */
/* WARNING: Removing unreachable block (ram,0x000109ec7010) */
/* WARNING: Removing unreachable block (ram,0x000109ec7018) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e6c) */
/* WARNING: Removing unreachable block (ram,0x000109ec7024) */
/* WARNING: Removing unreachable block (ram,0x000109ec702c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e74) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e7c) */
/* WARNING: Removing unreachable block (ram,0x000109ec7034) */

undefined * FUN_109e70a5c(ulong param_1)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 unaff_x19;
  undefined *puVar13;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong uVar14;
  uint uVar15;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar13 = *(undefined **)(param_1 + 0x10);
  uVar12 = param_1;
  func_0x000109f0f5ac();
  if (((uVar12 & 1) == 0) && (-1 < *(char *)(param_1 + 0x2d))) {
    return puVar13;
  }
  if ((byte)puVar13[0xe] < 2) {
    if ((puVar13[0xe] == 1 && 1 < (byte)puVar13[0xd]) && ((*(uint *)(puVar13 + 4) & 0xfc) < 0xc)) {
      cVar1 = puVar13[4];
      while (cVar1 == '\x13') {
        puVar13 = *(undefined **)(puVar13 + 0x30);
        cVar1 = puVar13[4];
      }
      puVar5 = puVar13;
      FUN_109ec6810();
      if (puVar5 != &UNK_10e05d730) {
        puVar13 = puVar5;
      }
      return puVar13;
    }
  }
  else if ((byte)puVar13[4] - 2 < 3) {
    if (1 < (byte)puVar13[0xe]) {
      uVar15 = *(uint *)(puVar13 + 4) & 0xff;
      uVar12 = (ulong)uVar15;
      if (uVar15 - 2 < 3) {
        bVar2 = puVar13[0xd];
        uVar9 = (ulong)bVar2;
        if ((*(uint *)(puVar13 + 4) >> 0x18 & 1) == 0) {
          uVar3 = 0;
          uVar4 = (ulong)*(uint *)(puVar13 + 0x2c);
        }
        else {
          uVar3 = (ulong)*(uint *)(puVar13 + 0x28);
          uVar4 = 0;
        }
        do {
          uVar10 = uVar4;
          uVar14 = uVar3;
          *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
          *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
          *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
          *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
          *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
          *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
          *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
          *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined8 *)((long)register0x00000008 + -0x70) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          if (uVar15 == 0x14) {
            puVar13 = &DAT_10e05d768;
            uVar12 = unaff_x20;
            uVar14 = unaff_x23;
            uVar9 = unaff_x24;
LAB_109ec6fd4:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x70)) {
              return puVar13;
            }
            ___stack_chk_fail();
            *(ulong *)((long)register0x00000008 + -0x180) = uVar9;
            *(ulong *)((long)register0x00000008 + -0x178) = uVar14;
            *(undefined **)((long)register0x00000008 + -0x170) = puVar13;
            *(undefined8 *)((long)register0x00000008 + -0x168) = unaff_x21;
            *(ulong *)((long)register0x00000008 + -0x160) = uVar12;
            *(undefined8 *)((long)register0x00000008 + -0x158) = unaff_x19;
            *(undefined1 **)((long)register0x00000008 + -0x150) = unaff_x29;
            *(code **)((long)register0x00000008 + -0x148) = FUN_109ec72ac;
            ppuVar11 = &PTR___tlv_bootstrap_11340ddb0;
            if ((bRam00000001132ff008 & 1) == 0) {
              ppuVar6 = ppuVar11;
              (*(code *)PTR___tlv_bootstrap_11340ddb0)();
              *ppuVar6 = (undefined *)0x1132ff008;
              ppuVar6[1] = FUN_109f67048;
              _pthread_once(0x1132ff010,0x109f686dc);
              bRam00000001132ff008 = 1;
            }
            _pthread_mutex_lock(0x1132ff020);
            if (iRam0000000113834740 == 0) {
              puVar7 = (undefined8 *)0x30;
              _malloc();
              puVar8 = puVar7;
              if (puVar7 != (undefined8 *)0x0) {
                puVar7[4] = 0;
                puVar8 = puVar7 + 6;
                puVar7[1] = 0;
                *puVar7 = 0;
                puVar7[3] = 0;
                puVar7[2] = 0;
              }
              *(undefined4 *)((long)register0x00000008 + -0x184) = 0;
              puRam0000000113834730 = puVar8;
              FUN_109f6658c();
              puRam0000000113834738 = puVar8;
            }
            iRam0000000113834740 = iRam0000000113834740 + 1;
            if ((bRam00000001132ff008 & 1) == 0) {
              (*(code *)PTR___tlv_bootstrap_11340ddb0)();
              *ppuVar11 = (undefined *)0x1132ff008;
              ppuVar11[1] = FUN_109f67048;
              _pthread_once(0x1132ff010,0x109f686dc);
              bRam00000001132ff008 = 1;
            }
            puVar13 = (undefined *)0x1132ff020;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x1132ff020);
            return puVar13;
          }
          unaff_x21 = 1;
          if ((int)uVar10 == 0 && (int)uVar14 == 0) {
            uVar15 = (uint)bVar2;
            switch(uVar12) {
            case 0:
              if (uVar15 == 8) {
                uVar9 = 6;
              }
              else if (uVar15 == 0x10) {
                uVar9 = 7;
              }
              else if (uVar15 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar11 = &PTR_DAT_110b66da8;
              break;
            case 1:
              if (uVar15 == 8) {
                uVar9 = 6;
              }
              else if (uVar15 == 0x10) {
                uVar9 = 7;
              }
              else if (uVar15 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar11 = &PTR_DAT_110b66d70;
              break;
            case 2:
              if (uVar15 == 8) {
                uVar9 = 6;
              }
              else if (uVar15 == 0x10) {
                uVar9 = 7;
              }
              else if (uVar15 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar11 = &PTR_DAT_110b66cc8;
              break;
            case 3:
              if (uVar15 == 8) {
                uVar9 = 6;
              }
              else if (uVar15 == 0x10) {
                uVar9 = 7;
              }
              else if (uVar15 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar11 = &PTR_DAT_110b66d00;
              break;
            case 4:
              if (uVar15 == 8) {
                uVar9 = 6;
              }
              else if (uVar15 == 0x10) {
                uVar9 = 7;
              }
              else if (uVar15 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar11 = &PTR_DAT_110b66d38;
              break;
            case 5:
              if (uVar15 == 8) {
                uVar9 = 6;
              }
              else if (uVar15 == 0x10) {
                uVar9 = 7;
              }
              else if (uVar15 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar11 = &PTR_DAT_110b66f30;
              break;
            case 6:
              if (uVar15 == 8) {
                uVar9 = 6;
              }
              else if (uVar15 == 0x10) {
                uVar9 = 7;
              }
              else if (uVar15 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar11 = &PTR_DAT_110b66ef8;
              break;
            case 7:
              if (uVar15 == 8) {
                uVar9 = 6;
              }
              else if (uVar15 == 0x10) {
                uVar9 = 7;
              }
              else if (uVar15 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar11 = &PTR_DAT_110b66ec0;
              break;
            case 8:
              if (uVar15 == 8) {
                uVar9 = 6;
              }
              else if (uVar15 == 0x10) {
                uVar9 = 7;
              }
              else if (uVar15 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar11 = &PTR_DAT_110b66e88;
              break;
            case 9:
              if (uVar15 == 8) {
                uVar9 = 6;
              }
              else if (uVar15 == 0x10) {
                uVar9 = 7;
              }
              else if (uVar15 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar11 = &PTR_DAT_110b66e50;
              break;
            case 10:
              if (uVar15 == 8) {
                uVar9 = 6;
              }
              else if (uVar15 == 0x10) {
                uVar9 = 7;
              }
              else if (uVar15 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar11 = &PTR_DAT_110b66e18;
              break;
            case 0xb:
              if (uVar15 == 8) {
                uVar9 = 6;
              }
              else if (uVar15 == 0x10) {
                uVar9 = 7;
              }
              else if (uVar15 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar11 = &PTR_DAT_110b66de0;
              break;
            default:
LAB_109ec7288:
              puVar13 = &UNK_10e05d730;
              unaff_x21 = 1;
              goto LAB_109ec6fd4;
            }
            puVar13 = ppuVar11[uVar9 - 1];
            goto LAB_109ec6fd4;
          }
          unaff_x30 = 0x109ec6d14;
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x140);
          uVar3 = 0;
          uVar4 = 0;
          unaff_x20 = uVar12;
          unaff_x21 = 1;
          unaff_x22 = uVar10;
          unaff_x23 = uVar14;
          unaff_x24 = uVar9;
          unaff_x25 = 0;
        } while( true );
      }
    }
    return &UNK_10e05d730;
  }
  return *(undefined **)(puVar13 + 0x30);
}



/* Entry: 109e70aa0; end: 109e70b0b;  */

int FUN_109e70aa0(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = -0x20;
  if (param_2 - 1U < 2) {
    iVar2 = -0x20;
    if ((*(byte *)(param_1 + 0x23) & 1) != 0) {
      iVar2 = -0x40;
    }
  }
  else {
    if (param_2 == 4) {
      bVar1 = (*(ulong *)(param_1 + 0x20) & 0x1fffff) == 8;
      iVar2 = -4;
    }
    else {
      if (param_2 != 0) goto LAB_109e70b00;
      bVar1 = (*(ulong *)(param_1 + 0x20) & 0x1fffff) == 4;
      iVar2 = -0xf;
    }
    if (!bVar1) {
      iVar2 = -0x20;
    }
  }
LAB_109e70b00:
  return *(int *)(param_1 + 0x3c) + iVar2;
}



/* Entry: 109e70b0c; end: 109e70ef7;  */

void FUN_109e70b0c(long param_1,long param_2,long param_3,long param_4,int param_5,int param_6)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  char *pcVar10;
  
  uVar4 = *(ulong *)(param_3 + 0x10);
  if ((param_5 == 3) || (param_5 != 4 && param_6 == 0)) {
    func_0x000109eca118();
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if (uVar4 != uVar9) {
    if (*(char *)(uVar9 + 4) == '\x11') {
      FUN_109ec7a90(uVar9,uVar4,0,1,0);
      if ((uVar9 & 1) == 0) {
        func_0x000109f47670();
        if ((*(byte *)(*(long *)(param_4 + 0x10) + 0xc) >> 1 & 1) == 0) {
          func_0x000109eca058();
        }
        func_0x000109f47670();
        if ((*(byte *)(*(long *)(param_3 + 0x10) + 0xc) >> 1 & 1) == 0) {
          func_0x000109eca058();
        }
        func_0x000109eb844c(param_2,&UNK_10f60e2c0);
      }
    }
    else if ((((*(char *)(uVar9 + 4) != '\x13') ||
              (pcVar10 = *(char **)(param_4 + 0x18), pcVar10 == (char *)0x0)) || (*pcVar10 != 'g'))
            || ((pcVar10[1] != 'l' || (pcVar10[2] != '_')))) {
      func_0x000109f47670();
      if ((*(byte *)(uVar9 + 0xc) >> 1 & 1) == 0) {
        func_0x000109eca058();
      }
      func_0x000109f47670();
      if ((*(byte *)(*(long *)(param_3 + 0x10) + 0xc) >> 1 & 1) == 0) {
        func_0x000109eca058();
      }
      puVar5 = &UNK_10f60e333;
      goto LAB_109e70d90;
    }
  }
  uVar4 = *(ulong *)(param_3 + 0x20);
  uVar9 = *(ulong *)(param_4 + 0x20);
  uVar6 = (uint)uVar9 ^ (uint)uVar4;
  if ((uVar6 >> 0x17 & 1) == 0) {
    if ((uVar6 >> 0x18 & 1) == 0) {
      if ((uVar6 >> 0x1a & 1) == 0) {
        bVar2 = *(byte *)(param_2 + 0xa5);
      }
      else {
        bVar2 = *(byte *)(param_2 + 0xa5);
        uVar6 = 300;
        if (bVar2 == 0) {
          uVar6 = 0x1a4;
        }
        if (*(uint *)(param_2 + 0xd8) < uVar6) {
          func_0x000109f47670();
          func_0x000109f47670();
          puVar5 = &UNK_10f60e437;
          goto LAB_109e70d90;
        }
      }
      uVar7 = (uint)(uVar4 >> 0x21) & 7;
      uVar8 = (uint)(uVar9 >> 0x21) & 7;
      uVar6 = uVar7;
      if ((uVar4 >> 0x21 & 6) == 0) {
        uVar6 = 1;
      }
      uVar1 = uVar8;
      if ((uVar9 >> 0x21 & 6) == 0) {
        uVar1 = 1;
      }
      if ((bVar2 & 1) == 0) {
        uVar1 = uVar8;
        uVar6 = uVar7;
      }
      if (uVar6 == uVar1) {
        return;
      }
      if (0x1b7 < *(uint *)(param_2 + 0xd8)) {
        return;
      }
      cVar3 = *(char *)(param_1 + 0x449);
      func_0x000109f47670();
      func_0x000109f47670();
      if (cVar3 != '\0') {
        func_0x000109eb84b0(param_2,&UNK_10f60e491);
        return;
      }
      puVar5 = &UNK_10f60e491;
    }
    else {
      func_0x000109f47670();
      func_0x000109f47670();
      puVar5 = &UNK_10f60e3e5;
    }
  }
  else {
    func_0x000109f47670();
    func_0x000109f47670();
    puVar5 = &UNK_10f60e38b;
  }
LAB_109e70d90:
  func_0x000109eb844c(param_2,puVar5);
  return;
}



/* Entry: 109e70ef8; end: 109e70fc7;  */

/* WARNING: Removing unreachable block (ram,0x000109e714c4) */
/* WARNING: Removing unreachable block (ram,0x000109e714d8) */
/* WARNING: Removing unreachable block (ram,0x000109e714e0) */
/* WARNING: Removing unreachable block (ram,0x000109e71518) */
/* WARNING: Removing unreachable block (ram,0x000109e7151c) */
/* WARNING: Removing unreachable block (ram,0x000109e71554) */
/* WARNING: Removing unreachable block (ram,0x000109e7155c) */
/* WARNING: Removing unreachable block (ram,0x000109e7156c) */
/* WARNING: Removing unreachable block (ram,0x000109e71570) */
/* WARNING: Removing unreachable block (ram,0x000109e71578) */
/* WARNING: Removing unreachable block (ram,0x000109e7158c) */
/* WARNING: Removing unreachable block (ram,0x000109e71594) */
/* WARNING: Removing unreachable block (ram,0x000109e715a8) */
/* WARNING: Removing unreachable block (ram,0x000109e715ac) */
/* WARNING: Removing unreachable block (ram,0x000109e715bc) */
/* WARNING: Removing unreachable block (ram,0x000109e715c4) */
/* WARNING: Removing unreachable block (ram,0x000109e71510) */
/* WARNING: Removing unreachable block (ram,0x000109e713c0) */
/* WARNING: Removing unreachable block (ram,0x000109e713c4) */
/* WARNING: Removing unreachable block (ram,0x000109e713d0) */
/* WARNING: Removing unreachable block (ram,0x000109e71144) */
/* WARNING: Removing unreachable block (ram,0x000109e71170) */
/* WARNING: Removing unreachable block (ram,0x000109e7101c) */
/* WARNING: Removing unreachable block (ram,0x000109e713fc) */
/* WARNING: Removing unreachable block (ram,0x000109e71404) */
/* WARNING: Removing unreachable block (ram,0x000109e71738) */
/* WARNING: Removing unreachable block (ram,0x000109e7173c) */
/* WARNING: Removing unreachable block (ram,0x000109e7176c) */
/* WARNING: Removing unreachable block (ram,0x000109e71770) */
/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_109e70ef8(uint *******param_1,uint *******param_2,undefined8 param_3,undefined8 param_4,
             uint *******param_5,uint *******param_6,uint *******param_7,uint *******param_8)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  undefined8 *puVar11;
  uint *******pppppppuVar12;
  uint *******pppppppuVar13;
  undefined8 *puVar14;
  uint *******pppppppuVar15;
  uint *******pppppppuVar16;
  code *pcVar17;
  uint uVar18;
  undefined4 uVar19;
  long lVar20;
  uint ******ppppppuVar21;
  uint ****ppppuVar22;
  uint *puVar23;
  uint ******ppppppuVar24;
  code *pcVar25;
  ulong uVar26;
  code cVar27;
  uint uVar28;
  uint ****ppppuVar29;
  undefined1 *puVar30;
  uint uVar31;
  long lVar32;
  int iVar33;
  undefined *puVar34;
  ulong uVar35;
  ulong extraout_x15;
  ulong uVar36;
  code *extraout_x16;
  uint extraout_w17;
  uint uVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  uint *******pppppppuVar41;
  uint uVar42;
  uint ****ppppuVar43;
  uint *******pppppppuVar44;
  uint *******pppppppuVar45;
  uint *******unaff_x21;
  uint uVar46;
  uint *******pppppppuVar47;
  uint *****pppppuVar48;
  uint ***pppuVar49;
  uint *******pppppppuVar50;
  undefined8 uVar51;
  uint *******unaff_x24;
  uint *******pppppppuVar52;
  uint *******pppppppuVar53;
  uint uVar54;
  uint *******unaff_x25;
  uint *****pppppuVar55;
  uint *******unaff_x26;
  uint *******pppppppuVar56;
  uint *******unaff_x27;
  uint ******ppppppuVar57;
  ulong uVar58;
  uint *******unaff_x28;
  uint *******pppppppuVar59;
  uint ***pppuVar60;
  uint *******pppppppuStack_620;
  uint *******pppppppuStack_618;
  uint ******ppppppuStack_600;
  uint *******pppppppuStack_5d0;
  uint *******pppppppuStack_590;
  byte bStack_580;
  byte bStack_57f;
  uint *******pppppppuStack_560;
  undefined1 auStack_554 [4];
  uint *******apppppppuStack_550 [6];
  uint ******appppppuStack_520 [4];
  uint ******appppppuStack_500 [4];
  long lStack_4e0;
  uint *******pppppppuStack_4d0;
  uint *******pppppppuStack_4c8;
  uint *******pppppppuStack_4c0;
  uint *******pppppppuStack_4b8;
  uint *******pppppppuStack_4b0;
  uint *******pppppppuStack_4a8;
  undefined8 *puStack_4a0;
  uint *******pppppppuStack_498;
  undefined8 uStack_490;
  uint *******pppppppuStack_488;
  undefined1 *puStack_480;
  undefined8 uStack_478;
  uint *******pppppppuStack_470;
  uint *******pppppppuStack_468;
  uint *******pppppppuStack_460;
  ulong uStack_458;
  ulong uStack_450;
  uint *******pppppppuStack_440;
  uint *******pppppppuStack_438;
  uint *******pppppppuStack_430;
  uint ****ppppuStack_428;
  uint *******pppppppuStack_420;
  uint *******pppppppuStack_418;
  uint uStack_410;
  uint uStack_40c;
  uint *******pppppppuStack_408;
  undefined8 uStack_400;
  int iStack_3f8;
  int iStack_3f4;
  undefined8 auStack_3f0 [48];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 auStack_260 [124];
  long lStack_70;
  
  puVar11 = (undefined8 *)0x30;
  _malloc();
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[4] = 0;
    puVar14 = puVar11 + 6;
    puVar11[1] = 0;
    *puVar11 = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    FUN_109e70fc8(puVar14,param_2,param_1,0);
    if (((ulong)puVar14 & 1) == 0) {
      FUN_109f65aa4(puVar11);
      FUN_109f65ae0(puVar11);
      return (undefined8 *)0x0;
    }
    puVar14 = puVar11 + 6;
    FUN_109e70fc8(puVar14,param_2,param_1,4);
    FUN_109f65aa4(puVar11);
    FUN_109f65ae0(puVar11);
    return puVar14;
  }
  FUN_109e70fc8();
  if ((int)puVar11 == 0) {
    return (undefined8 *)0x0;
  }
  pppppppuVar12 = (uint *******)0x0;
  pcVar17 = (code *)0x4;
  pppppppuVar47 = (uint *******)0x0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar28 = *(uint *)(param_1 + 0x7c);
  if (*(uint *)(param_1 + 0x7c) <= *(uint *)(param_1 + 0x94)) {
    uVar28 = *(uint *)(param_1 + 0x94);
  }
  pppppppuVar50 = (uint *******)(ulong)uVar28;
  uVar18 = 0xffffffff;
  if (uVar28 < 0x20) {
    uVar18 = ~(-1 << (ulong)(uVar28 & 0x1f));
  }
  pppppppuVar59 = param_2;
  if (param_2[0x19] == (uint ******)0x0) {
LAB_109e7178c:
    puVar11 = (undefined8 *)0x1;
    pppppppuStack_4d0 = unaff_x28;
  }
  else {
    unaff_x25 = (uint *******)(ulong)~uVar18;
    unaff_x24 = (uint *******)0x8;
    ppppuVar29 = param_2[0x19][5][0x2c];
    unaff_x21 = (uint *******)ppppuVar29[1];
    iStack_3f4 = 4;
    uStack_40c = uVar18;
    if (*unaff_x21 == (uint ******)0x0) goto LAB_109e7178c;
    uStack_400 = 0;
    uStack_410 = 0;
    iStack_3f8 = uVar28 + 4;
    pppppppuStack_430 = (uint *******)&UNK_10f60e59e;
    ppppuStack_428 = ppppuVar29;
    pppppppuStack_408 = param_1;
    do {
      if (((ulong)unaff_x21[4] & 8) == 0) goto LAB_109e71480;
      pppppppuVar41 = pppppppuVar59;
      if (((ulong)unaff_x21[4] >> 0x2a & 1) != 0) {
        iVar39 = *(int *)((long)unaff_x21 + 0x3c);
        if ((iVar39 < iStack_3f8) && (-1 < iVar39)) goto LAB_109e71180;
        iVar38 = 0;
        if (-1 < iVar39) {
          iVar38 = iStack_3f4;
        }
        pppppppuStack_470 = (uint *******)(ulong)(uint)(iVar39 - iVar38);
        pppppppuStack_468 = (uint *******)unaff_x21[3];
        param_2 = (uint *******)&UNK_10f60e507;
        goto LAB_109e71780;
      }
      ppppppuVar57 = unaff_x21[2];
      if (ppppppuVar57 != (uint ******)0x0) {
        pppppppuVar12 = (uint *******)unaff_x21[3];
        do {
          unaff_x28 = (uint *******)*pppppppuVar59[6];
          pppppppuVar56 = pppppppuVar12;
          (*(code *)unaff_x28[1])(pppppppuVar12);
          pppppppuVar13 = unaff_x28;
          param_1 = pppppppuVar12;
          FUN_109f64fdc(unaff_x28,pppppppuVar56);
          unaff_x26 = pppppppuVar12;
          if (pppppppuVar13 != (uint *******)0x0) {
            *(int *)((long)unaff_x21 + 0x3c) = *(int *)(pppppppuVar13 + 2) + -1;
            pppppuVar55 = *pppppppuVar59[7];
            pppppppuVar56 = pppppppuVar12;
            (*(code *)pppppuVar55[1])(pppppppuVar12);
            param_1 = pppppppuVar12;
            FUN_109f64fdc(pppppuVar55,pppppppuVar56);
            if (pppppuVar55 != (uint *****)0x0) {
              *(int *)((long)unaff_x21 + 0x34) = *(int *)(pppppuVar55 + 2) + -1;
            }
            break;
          }
          if (*(char *)((long)ppppppuVar57 + 4) != '\x13') break;
          unaff_x26 = pppppppuVar47;
          pppppppuStack_470 = pppppppuVar12;
          FUN_109f65d74(pppppppuVar47,&UNK_10f60e538);
          func_0x000109eca118();
          pppppppuVar12 = unaff_x26;
        } while (ppppppuVar57 != (uint ******)0x0);
      }
LAB_109e71180:
      unaff_x27 = (uint *******)unaff_x21[3];
      param_2 = (uint *******)&UNK_10f60711b;
      pppppppuVar12 = unaff_x27;
      _strcmp();
      if ((int)pppppppuVar12 != 0) {
        param_2 = (uint *******)&UNK_10f60712b;
        pppppppuVar12 = unaff_x27;
        _strcmp();
        if ((int)pppppppuVar12 != 0) {
          if ((*(uint *)((long)unaff_x21 + 0x34) != 0) &&
             (uVar28 = *(int *)((long)unaff_x21 + 0x3c) - 4,
             *(int *)(pppppppuStack_408 + 0x94) <= (int)uVar28)) {
            param_2 = (uint *******)&UNK_10f60e53e;
            pppppppuStack_470 = (uint *******)(ulong)uVar28;
            pppppppuStack_468 = (uint *******)(ulong)*(uint *)((long)unaff_x21 + 0x34);
            pppppppuStack_460 = unaff_x27;
LAB_109e71780:
            func_0x000109eb844c();
            puVar11 = (undefined8 *)0x0;
            pppppppuVar12 = pppppppuVar59;
            pppppppuVar59 = pppppppuVar41;
            pppppppuStack_4d0 = unaff_x28;
            goto LAB_109e71790;
          }
          param_2 = (uint *******)0x0;
          unaff_x28 = (uint *******)unaff_x21[2];
          param_1 = (uint *******)0x1;
          pppppppuVar12 = unaff_x28;
          FUN_109ec9e40();
          iVar39 = *(int *)((long)unaff_x21 + 0x3c);
          uVar28 = (uint)pppppppuVar12;
          if (iVar39 == -1) {
            if ((uint)pppppppuVar50 <= (uint)uStack_400) {
              pppppppuStack_470 = (uint *******)&UNK_10f60e6c8;
              param_2 = (uint *******)&UNK_10f60e69e;
              pppppppuStack_468 = pppppppuVar50;
              goto LAB_109e71780;
            }
            uVar58 = uStack_400 & 0xffffffff;
            (&uStack_268)[uVar58 * 2] = unaff_x21;
            *(uint *)(&uStack_270 + uVar58 * 2) = uVar28;
            *(uint *)((long)&uStack_270 + uVar58 * 0x10 + 4) = (uint)uStack_400;
            uStack_400 = CONCAT44(uStack_400._4_4_,(uint)uStack_400 + 1);
          }
          else {
            uVar18 = iVar39 - iStack_3f4;
            if ((iStack_3f4 <= iVar39) && (*(int *)((long)unaff_x21 + 0x34) == 0)) {
              uVar54 = ~(-1 << (ulong)(uVar28 & 0x1f));
              if ((uint)pppppppuVar50 < uVar18 + uVar28) {
                pppppppuStack_470 = pppppppuStack_430;
                param_2 = (uint *******)&UNK_10f60e5b5;
                pppppppuStack_468 = unaff_x27;
                pppppppuStack_460 = unaff_x25;
                uStack_458 = (ulong)uVar54;
                uStack_450 = (ulong)uVar18;
                goto LAB_109e71780;
              }
              pppppppuStack_440 = pppppppuVar47;
              pppppppuStack_438 = pppppppuVar59;
              pppppppuStack_418 = pppppppuVar50;
              uVar28 = uVar54 << (ulong)(uVar18 & 0x1f);
              if ((uVar28 & (uint)unaff_x25) == 0) {
LAB_109e7133c:
                if (((byte)*(code *)((long)pppppppuStack_438 + 0xa5) & 1) == 0) goto LAB_109e7140c;
              }
              else {
                if (((byte)*(code *)((long)pppppppuVar59 + 0xa5) & 1) != 0) {
                  param_2 = (uint *******)&UNK_10f60e668;
                  pppppppuStack_470 = pppppppuStack_430;
                  pppppppuStack_468 = unaff_x27;
                  pppppppuStack_460 = unaff_x25;
                  uStack_458 = (ulong)uVar54;
                  uStack_450 = (ulong)uVar18;
                  goto LAB_109e71780;
                }
                if (uStack_410 != 0) {
                  pppppppuVar50 = (uint *******)0x0;
                  pppppppuStack_420 = (uint *******)(ulong)uStack_410;
                  do {
                    pppppppuVar41 = (uint *******)auStack_3f0[(long)pppppppuVar50];
                    unaff_x26 = (uint *******)pppppppuVar41[2];
                    param_2 = (uint *******)0x0;
                    param_1 = (uint *******)0x1;
                    pppppppuVar47 = unaff_x26;
                    FUN_109ec9e40();
                    if ((~(-1 << (ulong)((uint)pppppppuVar47 & 0x1f)) <<
                         (ulong)(*(int *)((long)pppppppuVar41 + 0x3c) - iStack_3f4 & 0x1f) & uVar28)
                        != 0) {
                      for (; (*(uint *)((long)unaff_x26 + 4) & 0xff) == 0x13;
                          unaff_x26 = (uint *******)unaff_x26[6]) {
                      }
                      uVar18 = *(uint *)((long)unaff_x28 + 4);
                      pppppppuVar47 = unaff_x28;
                      while ((uVar18 & 0xff) == 0x13) {
                        pppppppuVar47 = (uint *******)pppppppuVar47[6];
                        uVar18 = *(uint *)((long)pppppppuVar47 + 4);
                      }
                      if (((uVar18 ^ *(uint *)((long)unaff_x26 + 4)) & 0xff) == 0) {
                        uVar58 = (ulong)unaff_x21[4] >> 0x24 & 3;
                        if ((~(-1 << (ulong)((byte)*(code *)((long)pppppppuVar47 + 0xd) & 0x1f)) <<
                             uVar58 & ~(-1 << (ulong)((byte)*(code *)((long)unaff_x26 + 0xd) & 0x1f)
                                       ) << ((ulong)pppppppuVar41[4] >> 0x24 & 3)) == 0)
                        goto LAB_109e7132c;
                        pppppppuStack_468 = (uint *******)pppppppuVar41[3];
                        param_2 = (uint *******)&UNK_10f60e625;
                        uStack_458 = uVar58;
                      }
                      else {
                        pppppppuStack_468 = (uint *******)pppppppuVar41[3];
                        param_2 = (uint *******)&UNK_10f60e5f7;
                      }
                      pppppppuStack_470 = pppppppuStack_430;
                      pppppppuVar59 = pppppppuStack_438;
                      pppppppuStack_460 = unaff_x27;
                      goto LAB_109e71780;
                    }
LAB_109e7132c:
                    pppppppuVar50 = (uint *******)((long)pppppppuVar50 + 1);
                  } while (pppppppuVar50 != pppppppuStack_420);
                  goto LAB_109e7133c;
                }
LAB_109e7140c:
                auStack_3f0[uStack_410] = unaff_x21;
                uStack_410 = uStack_410 + 1;
              }
              pppppppuVar50 = pppppppuStack_418;
              pppppppuVar59 = pppppppuStack_438;
              pppppppuVar47 = pppppppuStack_440;
              cVar27 = *(code *)((long)unaff_x28 + 4);
              while (cVar27 == (code)0x13) {
                unaff_x28 = (uint *******)unaff_x28[6];
                cVar27 = *(code *)((long)unaff_x28 + 4);
              }
              pppppppuVar12 = (uint *******)(ulong)(byte)cVar27;
              FUN_109ec9858();
              if ((int)pppppppuVar12 == 0x40) {
                uVar18 = uVar28;
                if ((byte)*(code *)((long)unaff_x28 + 0xd) < 3) {
                  uVar18 = 0;
                }
              }
              else {
                uVar18 = 0;
              }
              unaff_x25 = (uint *******)(ulong)(uVar28 | (uint)unaff_x25);
              uStack_400 = CONCAT44(uVar18 | uStack_400._4_4_,(uint)uStack_400);
              unaff_x26 = (uint *******)(ulong)uVar28;
            }
          }
        }
      }
LAB_109e71480:
      unaff_x21 = (uint *******)*unaff_x21;
    } while (*unaff_x21 != (uint ******)0x0);
    if ((uint)uStack_400 == 0) goto LAB_109e7178c;
    unaff_x21 = (uint *******)(uStack_400 & 0xffffffff);
    pcVar17 = FUN_109e73160;
    param_1 = (uint *******)0x10;
    param_2 = unaff_x21;
    pppppppuStack_418 = pppppppuVar50;
    _qsort(&uStack_270);
    pppppppuVar50 = (uint *******)&uStack_270;
    pppppppuStack_4d0 = pppppppuVar59;
    if ((uint)uStack_270 - 0x21 < 0xffffffe0) {
      puVar11 = (undefined8 *)0x0;
      pppppppuVar47 = (uint *******)&uStack_270;
    }
    else {
      puVar11 = (undefined8 *)0x0;
      unaff_x24 = (uint *******)0x0;
      unaff_x26 = (uint *******)0x20;
      unaff_x27 = (uint *******)0xffffffff;
      pppppppuVar47 = (uint *******)&uStack_270;
      do {
        uVar28 = -1 << (ulong)((uint)uStack_270 & 0x1f);
        uVar18 = ~uVar28;
        uVar54 = (uint)unaff_x25;
        if ((uVar54 & (uVar28 ^ 0xffffffff)) == 0) {
          uVar28 = 0;
          bVar10 = false;
        }
        else {
          uVar28 = 0;
          uVar42 = uVar18;
          do {
            bVar10 = 0x20 - (uint)uStack_270 <= uVar28;
            uVar28 = uVar28 + 1;
            if (bVar10) break;
            uVar40 = uVar42 << 1;
            uVar42 = uVar42 << 1;
          } while ((uVar54 & uVar40) != 0);
        }
        if (bVar10) break;
        ppppppuVar57 = pppppppuVar47[1];
        *(uint *)((long)ppppppuVar57 + 0x3c) = uVar28 + iStack_3f4;
        for (pppppuVar55 = ppppppuVar57[2];
            pppppppuVar12 = (uint *******)(ulong)*(byte *)((long)pppppuVar55 + 4),
            *(byte *)((long)pppppuVar55 + 4) == 0x13; pppppuVar55 = (uint *****)pppppuVar55[6]) {
        }
        uVar18 = uVar18 << (ulong)(uVar28 & 0x1f);
        FUN_109ec9858();
        if ((int)pppppppuVar12 == 0x40) {
          uVar28 = uVar18;
          if (*(byte *)((long)pppppuVar55 + 0xd) < 3) {
            uVar28 = 0;
          }
        }
        else {
          uVar28 = 0;
        }
        unaff_x25 = (uint *******)(ulong)(uVar18 | uVar54);
        uStack_400 = CONCAT44(uVar28 | uStack_400._4_4_,(uint)uStack_400);
        unaff_x24 = (uint *******)((long)unaff_x24 + 1);
        if (unaff_x24 == unaff_x21) {
          puVar11 = (undefined8 *)0x1;
          goto LAB_109e71790;
        }
        puVar11 = (undefined8 *)(ulong)(unaff_x21 <= unaff_x24);
        pppppppuVar47 = pppppppuVar50 + (long)unaff_x24 * 2;
        uStack_270._0_4_ = *(uint *)pppppppuVar47;
      } while (0xffffffdf < (uint)uStack_270 - 0x21);
    }
    pppppppuStack_468 = (uint *******)pppppppuVar47[1][3];
    pppppppuStack_470 = (uint *******)&UNK_10f60e59e;
    param_2 = (uint *******)&UNK_10f60e71c;
    pppppppuVar12 = pppppppuVar59;
    func_0x000109eb844c();
  }
LAB_109e71790:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar11;
  }
  ___stack_chk_fail();
  uStack_490 = 4;
  uStack_478 = 0x109e7188c;
  lStack_4e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = (undefined8 *)0x30;
  pppppppuVar47 = param_1;
  pppppppuVar41 = (uint *******)pcVar17;
  pppppppuStack_4c8 = unaff_x27;
  pppppppuStack_4c0 = unaff_x26;
  pppppppuStack_4b8 = unaff_x25;
  pppppppuStack_4b0 = unaff_x24;
  pppppppuStack_4a8 = pppppppuVar50;
  puStack_4a0 = puVar11;
  pppppppuStack_498 = unaff_x21;
  pppppppuStack_488 = pppppppuVar59;
  puStack_480 = &stack0xfffffffffffffff0;
  _malloc();
  if (puVar14 == (undefined8 *)0x0) {
    pppppppuVar59 = (uint *******)0x0;
  }
  else {
    puVar14[4] = 0;
    puVar14[1] = 0;
    *puVar14 = 0;
    puVar14[3] = 0;
    puVar14[2] = 0;
    pppppppuVar59 = (uint *******)(puVar14 + 6);
  }
  FUN_109e76964(pcVar17);
  uVar18 = (uint)param_8;
  iVar39 = (int)param_7;
  uVar28 = (uint)param_5;
  lVar20 = 0;
  pppppppuVar56 = (uint *******)0x0;
  uVar58 = 6;
  do {
    uVar42 = (uint)uVar58;
    uVar54 = (uint)lVar20;
    if (uVar42 != 6) {
      uVar54 = uVar42;
    }
    uVar40 = (uint)pppppppuVar56;
    if (*(uint *******)((long)pcVar17 + (lVar20 + 0x15) * 8) != (uint ******)0x0) {
      uVar40 = (uint)lVar20;
    }
    pppppppuVar56 = (uint *******)(ulong)uVar40;
    if (*(uint *******)((long)pcVar17 + (lVar20 + 0x15) * 8) != (uint ******)0x0) {
      uVar42 = uVar54;
    }
    uVar58 = (ulong)uVar42;
    lVar20 = lVar20 + 1;
  } while (lVar20 != 6);
  pppppppuStack_560 = (uint *******)0x0;
  if (uVar40 < 5) {
    iVar38 = (int)param_1;
    uVar36 = 3;
    do {
      ppppppuVar57 = *(uint *******)((long)pcVar17 + (uVar36 + 0x15) * 8);
      if (ppppppuVar57 != (uint ******)0x0) {
        if (*(int *)((long)pcVar17 + 0x44) != 0) {
          bVar10 = true;
          goto LAB_109e71a74;
        }
        uVar36 = 0;
        goto LAB_109e71a54;
      }
      uVar28 = (int)uVar36 - 1;
      uVar36 = (ulong)uVar28;
    } while (uVar28 != 0xffffffff);
    bVar5 = 0;
LAB_109e71c38:
    bVar10 = false;
    pppppppuStack_5d0 = (uint *******)(ulong)*(uint *)((long)pcVar17 + 0x54);
    pppppppuStack_560 = *(uint ********)((long)pcVar17 + 0x58);
    goto LAB_109e71c48;
  }
LAB_109e7193c:
  lVar20 = 0xa8;
  do {
    if (*(long *)((long)pcVar17 + lVar20) != 0) {
      lVar32 = *(long *)(*(long *)(*(long *)((long)pcVar17 + lVar20) + 0x28) + 0x160);
      uVar2 = 0;
      if (*(int *)((long)pcVar17 + 0x54) != 0) {
        uVar2 = 4;
      }
      *(ushort *)(lVar32 + 0x152) = *(ushort *)(lVar32 + 0x152) & 0xfffb | uVar2;
      if (*(uint *******)((long)pcVar17 + 0x60) != (uint ******)0x0) {
        lVar32 = *(long *)(*(long *)(*(long *)((long)pcVar17 + lVar20) + 0x28) + 0x160);
        uVar6 = *(ushort *)(lVar32 + 0x152);
        uVar2 = 4;
        if (*(int *)((*(uint *******)((long)pcVar17 + 0x60))[0xb8] + 3) < 1) {
          uVar2 = uVar6 & 4;
        }
        *(ushort *)(lVar32 + 0x152) = uVar2 | uVar6 & 0xfffb;
      }
    }
    lVar20 = lVar20 + 8;
  } while (lVar20 != 0xd8);
  iVar38 = 4;
  do {
    if ((iVar38 != 2) &&
       (ppppppuVar57 = *(uint *******)((long)pcVar17 + ((ulong)(iVar38 - 1) + 0x15) * 8),
       ppppppuVar57 != (uint ******)0x0)) {
      ppppuVar29 = ppppppuVar57[5][0xb8];
      FUN_109e75fac(ppppuVar29,ppppppuVar57[5][0x2c]);
      ppppppuVar57[5][0x2c][0x38] = (uint ***)ppppuVar29;
      break;
    }
    iVar38 = iVar38 + -1;
  } while (iVar38 != 0);
  pppppppuVar47 = (uint *******)0x0;
  FUN_109e769ac();
  puVar11 = (undefined8 *)0x1;
  pppppppuVar15 = pppppppuVar12;
  pppppppuVar52 = (uint *******)pcVar17;
  goto LAB_109e72d24;
  while (uVar36 = uVar26 + 1, *(int *)((long)pcVar17 + (uVar26 + 0x12) * 4) == 0) {
LAB_109e71a54:
    uVar26 = uVar36;
    if (uVar26 == 3) break;
  }
  bVar10 = uVar26 < 3;
LAB_109e71a74:
  bVar5 = *(byte *)((long)ppppppuVar57[5][0x2c][5] + 0xc1);
  unaff_x21 = (uint *******)ppppppuVar57[5][0x2c][1];
  pppppppuVar13 = pppppppuVar50;
  if ((uint *******)*unaff_x21 == (uint *******)0x0) {
    if (!bVar10) goto LAB_109e71c38;
    pppppppuStack_5d0 = (uint *******)0x0;
    pppppppuStack_590 = (uint *******)0x0;
    bVar10 = true;
    bVar9 = true;
LAB_109e71ec0:
    uVar36 = 0;
    lVar20 = 0xa8;
    do {
      if (*(uint *******)((long)pcVar17 + lVar20) != (uint ******)0x0) {
        apppppppuStack_550[uVar36] = (uint *******)*(uint *******)((long)pcVar17 + lVar20);
        uVar36 = (ulong)((int)uVar36 + 1);
      }
      lVar20 = lVar20 + 8;
    } while (lVar20 != 0xd8);
    iVar33 = (int)uVar36;
    pppppppuVar50 = pppppppuVar13;
    if ((uVar40 != 4) && ((!bVar9 || (*(code *)((long)pcVar17 + 0x17) != (code)0x0)))) {
      param_5 = *(uint ********)((long)pcVar17 + ((ulong)uVar40 + 0x15) * 8);
      pppppppuStack_620 = (uint *******)&bStack_580;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuVar12;
      pppppppuVar52 = param_2;
      pppppppuVar47 = pppppppuVar59;
      pppppppuVar41 = (uint *******)pcVar17;
      param_7 = pppppppuStack_5d0;
      param_8 = pppppppuStack_590;
      FUN_109e73184();
      uVar18 = (uint)param_8;
      iVar39 = (int)param_7;
      uVar28 = (uint)param_5;
      if ((int)pppppppuVar15 != 0) goto LAB_109e71f34;
LAB_109e72d1c:
      puVar11 = (undefined8 *)0x0;
      goto LAB_109e72d24;
    }
LAB_109e71f34:
    if (*(code *)((long)pcVar17 + 0x17) == (code)0x0) {
      FUN_109e739f0(pcVar17,uVar58,4);
      pppppppuVar47 = (uint *******)0x8;
      pppppppuVar15 = (uint *******)pcVar17;
      pppppppuVar52 = pppppppuVar56;
      FUN_109e739f0();
      if (*(code *)((long)pcVar17 + 0x17) != (code)0x0) goto LAB_109e71f64;
    }
    else {
LAB_109e71f64:
      pppppppuStack_620 = (uint *******)&bStack_580;
      param_5 = (uint *******)0x0;
      param_7 = (uint *******)0x0;
      param_8 = (uint *******)0x0;
      pppppppuVar15 = pppppppuVar12;
      pppppppuVar52 = param_2;
      pppppppuVar47 = pppppppuVar59;
      pppppppuVar41 = (uint *******)pcVar17;
      param_6 = apppppppuStack_550[0];
      FUN_109e73184();
      uVar18 = (uint)param_8;
      iVar39 = (int)param_7;
      uVar28 = (uint)param_5;
      if ((int)pppppppuVar15 == 0) goto LAB_109e72d1c;
    }
    if (iVar33 == 1) {
      pppppppuVar15 = (uint *******)apppppppuStack_550[0][5][0x2c];
      FUN_109e760cc();
    }
    else {
      uVar36 = (ulong)(iVar33 - 2U);
      if (-1 < (int)(iVar33 - 2U)) {
        do {
          unaff_x21 = apppppppuStack_550[uVar36];
          pppppppuVar13 = apppppppuStack_550[uVar36 + 1];
          uVar28 = (uint)pppppppuStack_5d0;
          if (*(int *)pppppppuVar13 != 4) {
            uVar28 = 0;
          }
          param_7 = (uint *******)(ulong)uVar28;
          pppppppuStack_620 = (uint *******)&bStack_580;
          pppppppuVar15 = pppppppuVar12;
          pppppppuVar52 = param_2;
          pppppppuVar47 = pppppppuVar59;
          pppppppuVar41 = (uint *******)pcVar17;
          pppppppuVar45 = unaff_x21;
          param_6 = pppppppuVar13;
          param_8 = pppppppuStack_590;
          FUN_109e73184();
          uVar18 = (uint)param_8;
          iVar39 = (int)param_7;
          uVar28 = (uint)pppppppuVar45;
          if ((int)pppppppuVar15 == 0) goto LAB_109e72d1c;
          pppppppuVar50 = (uint *******)unaff_x21[5][0x2c];
          pppppuVar55 = pppppppuVar13[5][0x2c];
          if (((*(char *)(pppppppuVar50[5] + 0xb) == '\x01') && ((bStack_580 & 1) == 0)) &&
             ((bStack_57f & 1) == 0)) {
            FUN_109f17a84(pppppppuVar50,8);
            FUN_109f17a84(pppppuVar55,4);
          }
          FUN_109e760cc(pppppppuVar50);
          FUN_109e760cc(pppppuVar55);
          pppppppuVar47 = pppppppuVar50;
          FUN_109f045b4(pppppppuVar50,pppppuVar55);
          if ((int)pppppppuVar47 != 0) {
            FUN_109e760cc(pppppuVar55);
          }
          FUN_109f43ecc(pppppppuVar50,8,0);
          FUN_109f43ecc(pppppuVar55,4,0);
          ppppppuVar57 = (uint ******)*pppppppuVar50[1];
          if (ppppppuVar57 == (uint ******)0x0) {
            uVar28 = 0;
          }
          else {
            uVar28 = 0;
            ppppppuVar24 = pppppppuVar50[1];
            do {
              ppppppuVar21 = ppppppuVar57;
              if (((*(byte *)(ppppppuVar24 + 4) >> 3 & 1) != 0) &&
                 (0x1f < *(int *)((long)ppppppuVar24 + 0x3c))) {
                pppppuVar48 = ppppppuVar24[2];
                ppppppuVar57 = ppppppuVar24;
                func_0x000109f0f5ac(ppppppuVar24,(long)(char)*(code *)((long)pppppppuVar50 + 0x61));
                if ((((ulong)ppppppuVar57 & 1) != 0) ||
                   (*(char *)((long)ppppppuVar24 + 0x2d) < '\0')) {
                  func_0x000109eca118();
                }
                FUN_109ec9e40(pppppuVar48,0,1);
                uVar18 = ((int)pppppuVar48 + *(int *)((long)ppppppuVar24 + 0x3c)) - 0x20;
                if (uVar28 <= uVar18) {
                  uVar28 = uVar18;
                }
                ppppppuVar21 = (uint ******)*ppppppuVar24;
              }
              ppppppuVar57 = (uint ******)*ppppppuVar21;
              ppppppuVar24 = ppppppuVar21;
            } while ((uint ******)*ppppppuVar21 != (uint ******)0x0);
          }
          ppppuVar29 = (uint ****)*pppppuVar55[1];
          if (ppppuVar29 == (uint ****)0x0) {
            uVar18 = 0;
          }
          else {
            uVar18 = 0;
            ppppuVar43 = pppppuVar55[1];
            do {
              ppppuVar22 = ppppuVar29;
              if (((*(byte *)(ppppuVar43 + 4) >> 2 & 1) != 0) &&
                 (0x1f < *(int *)((long)ppppuVar43 + 0x3c))) {
                pppuVar49 = ppppuVar43[2];
                ppppuVar29 = ppppuVar43;
                func_0x000109f0f5ac(ppppuVar43,(long)*(char *)((long)pppppuVar55 + 0x61));
                if ((((ulong)ppppuVar29 & 1) != 0) || (*(char *)((long)ppppuVar43 + 0x2d) < '\0')) {
                  func_0x000109eca118();
                }
                FUN_109ec9e40(pppuVar49,0,1);
                uVar54 = ((int)pppuVar49 + *(int *)((long)ppppuVar43 + 0x3c)) - 0x20;
                if (uVar18 <= uVar54) {
                  uVar18 = uVar54;
                }
                ppppuVar22 = (uint ****)*ppppuVar43;
              }
              ppppuVar29 = (uint ****)*ppppuVar22;
              ppppuVar43 = ppppuVar22;
            } while ((uint ****)*ppppuVar22 != (uint ****)0x0);
          }
          lVar20 = 0;
          if ((int)uVar18 <= (int)uVar28) {
            uVar18 = uVar28;
          }
          uVar26 = (long)(int)uVar18 + 0x1fU >> 3;
          do {
            pppppppuVar47 = pppppppuVar59;
            func_0x000109f6590c(pppppppuVar59,uVar26 & 0x3fffffffc);
            *(uint ********)((long)appppppuStack_500 + lVar20) = pppppppuVar47;
            pppppppuVar47 = pppppppuVar59;
            func_0x000109f6590c(pppppppuVar59,uVar26 & 0x3fffffffc);
            *(uint ********)((long)appppppuStack_520 + lVar20) = pppppppuVar47;
            lVar20 = lVar20 + 8;
          } while (lVar20 != 0x20);
          ppppppuVar57 = pppppppuVar50[1];
          for (ppppppuVar24 = (uint ******)*pppppppuVar50[1]; ppppppuVar24 != (uint ******)0x0;
              ppppppuVar24 = (uint ******)*ppppppuVar24) {
            if (((*(byte *)(ppppppuVar57 + 4) >> 3 & 1) != 0) &&
               (0x1f < *(int *)((long)ppppppuVar57 + 0x3c))) {
              iVar39 = (int)ppppppuVar57[2];
              FUN_109e75530();
              if (iVar39 != 0) {
                lVar20 = 0;
                do {
                  FUN_109e7558c(appppppuStack_520[lVar20 + ((ulong)ppppppuVar57[4] >> 0x24 & 3)],
                                ppppppuVar57,(long)(char)*(code *)((long)pppppppuVar50 + 0x61));
                  uVar28 = (uint)ppppppuVar57[2];
                  FUN_109e75530();
                  lVar20 = lVar20 + 1;
                } while ((uint)lVar20 < uVar28);
                ppppppuVar24 = (uint ******)*ppppppuVar57;
              }
            }
            ppppppuVar57 = ppppppuVar24;
          }
          ppppuVar29 = pppppuVar55[1];
          for (ppppuVar43 = (uint ****)*pppppuVar55[1]; ppppuVar43 != (uint ****)0x0;
              ppppuVar43 = (uint ****)*ppppuVar43) {
            if (((*(byte *)(ppppuVar29 + 4) >> 2 & 1) != 0) &&
               (0x1f < *(int *)((long)ppppuVar29 + 0x3c))) {
              iVar39 = (int)ppppuVar29[2];
              FUN_109e75530();
              if (iVar39 != 0) {
                lVar20 = 0;
                do {
                  FUN_109e7558c(appppppuStack_500[lVar20 + ((ulong)ppppuVar29[4] >> 0x24 & 3)],
                                ppppuVar29,(long)*(char *)((long)pppppuVar55 + 0x61));
                  uVar28 = (uint)ppppuVar29[2];
                  FUN_109e75530();
                  lVar20 = lVar20 + 1;
                } while ((uint)lVar20 < uVar28);
                ppppuVar43 = (uint ****)*ppppuVar29;
              }
            }
            ppppuVar29 = ppppuVar43;
          }
          if (*(code *)((long)pppppppuVar50 + 0x61) == (code)0x1) {
            ppppppuStack_600 = pppppppuVar50[0x2f];
            for (ppppppuVar57 = (uint ******)*pppppppuVar50[0x2f]; ppppppuVar57 != (uint ******)0x0;
                ppppppuVar57 = (uint ******)*ppppppuVar57) {
              pppppuVar48 = ppppppuStack_600[6];
              if (pppppuVar48 != (uint *****)0x0) {
                do {
                  ppppuVar29 = pppppuVar48[6];
                  if (ppppuVar29 != (uint ****)0x0) {
                    do {
                      pppuVar49 = ppppuVar29[4];
                      for (pppuVar60 = (uint ***)*ppppuVar29[4]; pppuVar60 != (uint ***)0x0;
                          pppuVar60 = (uint ***)*pppuVar60) {
                        if (((*(uint *)(pppuVar49 + 3) == 4) && (*(uint *)(pppuVar49 + 5) == 0x112))
                           && (puVar23 = *pppuVar49[0x13], puVar23[0xb] == 8)) {
                          for (; puVar23[10] != 0;
                              puVar23 = (uint *)**(undefined8 **)(puVar23 + 0x14)) {
                          }
                          lVar20 = *(long *)(puVar23 + 0xe);
                          uVar51 = *(undefined8 *)(lVar20 + 0x10);
                          iVar39 = (int)uVar51;
                          FUN_109e75530();
                          if (iVar39 != 0) {
                            lVar32 = 0;
                            do {
                              if (0x1f < *(int *)(lVar20 + 0x3c)) {
                                FUN_109e7558c(appppppuStack_500
                                              [lVar32 + (*(ulong *)(lVar20 + 0x20) >> 0x24 & 3)],
                                              lVar20,(long)(char)*(code *)((long)pppppppuVar50 +
                                                                          0x61));
                                uVar51 = *(undefined8 *)(lVar20 + 0x10);
                              }
                              uVar28 = (uint)uVar51;
                              FUN_109e75530();
                              lVar32 = lVar32 + 1;
                            } while ((uint)lVar32 < uVar28);
                            pppuVar60 = (uint ***)*pppuVar49;
                          }
                        }
                        pppuVar49 = pppuVar60;
                      }
                      FUN_109ecc434();
                    } while (ppppuVar29 != (uint ****)0x0);
                    ppppppuVar57 = (uint ******)*ppppppuStack_600;
                  }
                  ppppppuVar24 = (uint ******)*ppppppuVar57;
                  ppppppuStack_600 = ppppppuVar57;
                  while( true ) {
                    ppppppuVar57 = ppppppuVar24;
                    if (ppppppuVar57 == (uint ******)0x0) goto LAB_109e72318;
                    pppppuVar48 = ppppppuStack_600[6];
                    if (pppppuVar48 != (uint *****)0x0) break;
                    ppppppuVar24 = (uint ******)*ppppppuVar57;
                    ppppppuStack_600 = ppppppuVar57;
                  }
                } while( true );
              }
              ppppppuStack_600 = ppppppuVar57;
            }
          }
LAB_109e72318:
          pppppppuVar47 = pppppppuVar50;
          FUN_109e7561c(pppppppuVar50,pppppuVar55,pcVar17,8,appppppuStack_500);
          param_5 = appppppuStack_520;
          pppppppuVar41 = (uint *******)0x4;
          pppppppuVar52 = pppppppuVar50;
          FUN_109e7561c(pppppppuVar50,pppppuVar55,pcVar17);
          if ((((ulong)pppppppuVar47 & 1) != 0) || ((int)pppppppuVar52 != 0)) {
            FUN_109f0f144(pppppppuVar50);
            FUN_109f0f144(pppppuVar55);
            FUN_109e760cc(pppppppuVar50);
            FUN_109e760cc(pppppuVar55);
            FUN_109f43ecc(pppppppuVar50,8,0);
            FUN_109f43ecc(pppppuVar55,4,0);
          }
          FUN_109f044f8(pppppppuVar50,pppppuVar55);
          FUN_109e739f0(pcVar17,*(undefined4 *)unaff_x21,8);
          pppppppuVar52 = (uint *******)(ulong)*(uint *)pppppppuVar13;
          pppppppuVar47 = (uint *******)0x4;
          pppppppuVar15 = (uint *******)pcVar17;
          FUN_109e739f0();
          bVar1 = 0 < (long)uVar36;
          uVar36 = uVar36 - 1;
          unaff_x21 = pppppppuVar50;
          pppppppuVar50 = pppppppuVar13;
        } while (bVar1);
      }
    }
    pppppppuVar50 = pppppppuVar13;
    if (*(code *)((long)pcVar17 + 0x17) == (code)0x0) {
      FUN_109f43ecc((*(uint *******)((long)pcVar17 + (uVar58 + 0x15) * 8))[5][0x2c],4,0);
      pppppppuVar15 =
           (uint *******)(*(uint *******)((long)pcVar17 + ((ulong)uVar40 + 0x15) * 8))[5][0x2c];
      pppppppuVar52 = (uint *******)0x8;
      pppppppuVar47 = (uint *******)0x0;
      FUN_109f43ecc();
      if (uVar40 != 4) goto LAB_109e72574;
LAB_109e725c0:
      if (*(code *)((long)pcVar17 + 0x17) != (code)0x0) {
        unaff_x21 = *(uint ********)((long)pcVar17 + (uVar58 + 0x15) * 8);
        pppppppuStack_620 = unaff_x21;
        FUN_109e73b74(unaff_x21,4);
        pppppppuStack_618 = (uint *******)&bStack_580;
        param_5 = (uint *******)0x0;
        param_7 = (uint *******)0x0;
        param_8 = (uint *******)0x0;
        pppppppuVar15 = pppppppuVar12;
        pppppppuVar52 = param_2;
        pppppppuVar47 = pppppppuVar59;
        pppppppuVar41 = (uint *******)pcVar17;
        param_6 = unaff_x21;
        FUN_109e73ccc();
        uVar18 = (uint)param_8;
        iVar39 = (int)param_7;
        uVar28 = (uint)param_5;
        if ((int)pppppppuVar15 == 0) goto LAB_109e72d1c;
      }
    }
    else {
      if (uVar42 != 0) {
        pppppppuVar15 =
             (uint *******)(*(uint *******)((long)pcVar17 + (uVar58 + 0x15) * 8))[5][0x2c];
        pppppppuVar52 = (uint *******)0x4;
        FUN_109e73a88();
      }
      if (uVar40 == 4) goto LAB_109e725c0;
      pppppppuVar15 =
           (uint *******)(*(uint *******)((long)pcVar17 + ((ulong)uVar40 + 0x15) * 8))[5][0x2c];
      pppppppuVar52 = (uint *******)0x8;
      FUN_109e73a88();
LAB_109e72574:
      if ((!bVar9) || (*(code *)((long)pcVar17 + 0x17) != (code)0x0)) {
        pppppppuStack_620 = *(uint ********)((long)pcVar17 + ((ulong)uVar40 + 0x15) * 8);
        FUN_109e73b74(pppppppuStack_620,8);
        param_5 = *(uint ********)((long)pcVar17 + ((ulong)uVar40 + 0x15) * 8);
        pppppppuStack_618 = (uint *******)&bStack_580;
        param_6 = (uint *******)0x0;
        pppppppuVar15 = pppppppuVar12;
        pppppppuVar52 = param_2;
        pppppppuVar47 = pppppppuVar59;
        pppppppuVar41 = (uint *******)pcVar17;
        param_7 = pppppppuStack_5d0;
        param_8 = pppppppuStack_590;
        FUN_109e73ccc();
        uVar18 = (uint)param_8;
        iVar39 = (int)param_7;
        uVar28 = (uint)param_5;
        if ((int)pppppppuVar15 == 0) goto LAB_109e72d1c;
        goto LAB_109e725c0;
      }
    }
    pppppppuVar13 = apppppppuStack_550[0];
    if (iVar33 == 1) {
      pppppppuVar52 = (uint *******)((ulong)param_1 & 0xffffffff);
      FUN_109e8432c(pppppppuVar12,pppppppuVar52,pcVar17,0,apppppppuStack_550[0],0,0);
      param_5 = (uint *******)0x0;
      pppppppuVar15 = pppppppuVar12;
      pppppppuVar47 = (uint *******)pcVar17;
      param_6 = pppppppuStack_5d0;
      param_7 = pppppppuStack_590;
      FUN_109e8432c();
      pppppppuVar41 = pppppppuVar13;
    }
    else {
      pppppppuVar13 = pppppppuVar56;
      if (uVar40 != 0) {
        do {
          pppppppuVar45 = (uint *******)((long)pppppppuVar56 + -1);
          pppppppuVar50 =
               *(uint ********)((long)pcVar17 + (((ulong)pppppppuVar45 & 0xffffffff) + 0x15) * 8);
          if (pppppppuVar50 != (uint *******)0x0 || (int)pppppppuVar45 == 0) {
            unaff_x21 = *(uint ********)
                         ((long)pcVar17 + (((ulong)pppppppuVar13 & 0xffffffff) + 0x15) * 8);
            uVar28 = (uint)pppppppuStack_5d0;
            if ((int)pppppppuVar13 != 4) {
              uVar28 = 0;
            }
            param_7 = (uint *******)(ulong)uVar28;
            FUN_109e8432c(pppppppuVar12,iVar38,pcVar17,pppppppuVar50,unaff_x21,param_7,
                          pppppppuStack_590);
            pppppppuVar53 = pppppppuVar50;
            FUN_109e73b74(pppppppuVar50,8);
            pppppppuVar16 = unaff_x21;
            FUN_109e73b74(unaff_x21,4);
            pppppppuStack_618 = (uint *******)&bStack_580;
            pppppppuVar15 = pppppppuVar12;
            pppppppuVar52 = param_2;
            pppppppuVar47 = pppppppuVar59;
            pppppppuVar41 = (uint *******)pcVar17;
            param_5 = pppppppuVar50;
            param_6 = unaff_x21;
            param_8 = pppppppuStack_590;
            FUN_109e73ccc();
            uVar18 = (uint)param_8;
            iVar39 = (int)param_7;
            uVar28 = (uint)param_5;
            pppppppuStack_620 = (uint *******)((ulong)pppppppuVar16 | (ulong)pppppppuVar53);
            if ((int)pppppppuVar15 == 0) goto LAB_109e72d1c;
            if (pppppppuVar50 != (uint *******)0x0) {
              uVar58 = (ulong)pppppppuVar53 & 0xffffffff;
              uVar54 = (uint)(byte)(POPCOUNT((char)((ulong)pppppppuVar53 >> 0x20)) +
                                    POPCOUNT((char)((ulong)pppppppuVar53 >> 0x28)) +
                                    POPCOUNT((char)((ulong)pppppppuVar53 >> 0x30)) +
                                   POPCOUNT((char)((ulong)pppppppuVar53 >> 0x38))) +
                       (uint)(byte)(POPCOUNT((char)uVar58) + POPCOUNT((char)(uVar58 >> 8)) +
                                    POPCOUNT((char)(uVar58 >> 0x10)) +
                                   POPCOUNT((char)(uVar58 >> 0x18)));
              pppppppuStack_620 = (uint *******)(long)*(int *)pppppppuVar50;
              uVar42 = uVar54 * 4;
              pppppppuVar50 = (uint *******)(ulong)uVar42;
              if (*(uint *)((long)pppppppuVar12 + ((long)pppppppuStack_620 * 0x20 + 0x33) * 4) <
                  uVar42) {
                if ((iVar38 == 2) || (*(code *)((long)pcVar17 + 0xa5) == (code)0x1)) {
                  func_0x000109f47670();
                  pppppppuVar52 = (uint *******)&UNK_10f60eac0;
                  pppppppuStack_618 = (uint *******)(ulong)uVar54;
                }
                else {
                  func_0x000109f47670();
                  pppppppuVar52 = (uint *******)&UNK_10f60eaf2;
                  pppppppuStack_618 = pppppppuVar50;
                }
                goto LAB_109e72d18;
              }
            }
            uVar58 = (ulong)pppppppuVar16 & 0xffffffff;
            pppppppuVar44 =
                 (uint *******)
                 (ulong)((uint)(byte)(POPCOUNT((char)((ulong)pppppppuVar16 >> 0x20)) +
                                      POPCOUNT((char)((ulong)pppppppuVar16 >> 0x28)) +
                                      POPCOUNT((char)((ulong)pppppppuVar16 >> 0x30)) +
                                     POPCOUNT((char)((ulong)pppppppuVar16 >> 0x38))) +
                        (uint)(byte)(POPCOUNT((char)uVar58) + POPCOUNT((char)(uVar58 >> 8)) +
                                     POPCOUNT((char)(uVar58 >> 0x10)) +
                                    POPCOUNT((char)(uVar58 >> 0x18))));
            ppppuVar29 = (uint ****)*unaff_x21[5][0x2c][1];
            if (ppppuVar29 != (uint ****)0x0) {
              pppppppuVar50 = (uint *******)0x1;
              ppppuVar43 = unaff_x21[5][0x2c][1];
              do {
                ppppuVar22 = ppppuVar29;
                if (((((ulong)ppppuVar43[4] & 0x40000000004) == 4) &&
                    (((ulong)ppppuVar43[4] & 0x1fffff) == 4 && *(int *)unaff_x21 == 4)) &&
                   (0x19 < *(uint *)((long)ppppuVar43 + 0x3c) ||
                    (1 << (ulong)(*(uint *)((long)ppppuVar43 + 0x3c) & 0x1f) & 0x3000001U) == 0)) {
                  iVar39 = (int)ppppuVar43[2];
                  pppppppuVar52 = (uint *******)0x0;
                  pppppppuVar47 = (uint *******)0x1;
                  FUN_109ec9e40();
                  pppppppuVar44 = (uint *******)(ulong)(uint)(iVar39 + (int)pppppppuVar44);
                }
                ppppuVar29 = (uint ****)*ppppuVar22;
                ppppuVar43 = ppppuVar22;
              } while (ppppuVar29 != (uint ****)0x0);
            }
            uVar18 = (uint)param_8;
            iVar39 = (int)param_7;
            uVar28 = (uint)param_5;
            pppppppuVar15 = (uint *******)(long)*(int *)unaff_x21;
            unaff_x21 = (uint *******)
                        (ulong)*(uint *)(pppppppuVar12 + (long)pppppppuVar15 * 0x10 + 0x19);
            uVar54 = (int)pppppppuVar44 << 2;
            pppppppuVar13 = pppppppuVar45;
            pppppppuStack_620 = (uint *******)((ulong)pppppppuVar16 | (ulong)pppppppuVar53);
            if (*(uint *)(pppppppuVar12 + (long)pppppppuVar15 * 0x10 + 0x19) < uVar54) {
              if ((iVar38 == 2) || (*(code *)((long)pcVar17 + 0xa5) == (code)0x1)) {
                func_0x000109f47670();
                pppppppuVar52 = (uint *******)&UNK_10f60eb27;
                pppppppuStack_620 = pppppppuVar15;
                pppppppuStack_618 = pppppppuVar44;
              }
              else {
                func_0x000109f47670();
                pppppppuVar52 = (uint *******)&UNK_10f60eb58;
                pppppppuStack_620 = pppppppuVar15;
                pppppppuStack_618 = (uint *******)(ulong)uVar54;
              }
              goto LAB_109e72d18;
            }
          }
          iVar39 = (int)pppppppuVar56;
          pppppppuVar56 = pppppppuVar45;
        } while (1 < iVar39);
      }
    }
    uVar18 = (uint)param_8;
    iVar39 = (int)param_7;
    uVar28 = (uint)param_5;
    unaff_x21 = *(uint ********)((long)pcVar17 + 0x60);
    if (unaff_x21 != (uint *******)0x0) {
      sVar7 = *(short *)((long)pcVar17 + 0x40);
      ppppppuVar57 = (uint ******)0x90;
      _malloc();
      if (ppppppuVar57 == (uint ******)0x0) {
        ppppppuVar24 = (uint ******)0x0;
      }
      else {
        ppppppuVar57[4] = (uint *****)0x0;
        ppppppuVar57[1] = (uint *****)0x0;
        *ppppppuVar57 = (uint *****)0x0;
        ppppppuVar57[3] = (uint *****)0x0;
        ppppppuVar57[2] = (uint *****)0x0;
        *ppppppuVar57 = (uint *****)(unaff_x21 + -6);
        ppppppuVar24 = unaff_x21[-5];
        ppppppuVar57[3] = (uint *****)ppppppuVar24;
        unaff_x21[-5] = ppppppuVar57;
        if (ppppppuVar24 != (uint ******)0x0) {
          ppppppuVar24[2] = (uint *****)ppppppuVar57;
        }
        ppppppuVar24 = ppppppuVar57 + 6;
        ppppppuVar57[7] = (uint *****)0x0;
        *ppppppuVar24 = (uint *****)0x0;
        ppppppuVar57[0xf] = (uint *****)0x0;
        ppppppuVar57[0xe] = (uint *****)0x0;
        ppppppuVar57[0x11] = (uint *****)0x0;
        ppppppuVar57[0x10] = (uint *****)0x0;
        ppppppuVar57[0xb] = (uint *****)0x0;
        ppppppuVar57[10] = (uint *****)0x0;
        ppppppuVar57[0xd] = (uint *****)0x0;
        ppppppuVar57[0xc] = (uint *****)0x0;
        ppppppuVar57[9] = (uint *****)0x0;
        ppppppuVar57[8] = (uint *****)0x0;
      }
      unaff_x21[0xb8] = ppppppuVar24;
      if (bVar10) {
        pppppppuVar41 = (uint *******)0x109e75a78;
        pppppppuVar47 = (uint *******)0x58;
        _qsort(pppppppuStack_590,pppppppuStack_5d0);
      }
      pppppppuVar56 = unaff_x21;
      func_0x000109f6590c(unaff_x21,(long)pppppppuStack_5d0 * 0x28);
      unaff_x21[0xb8][2] = (uint *****)pppppppuVar56;
      if (bVar9) {
        pppppppuVar52 = (uint *******)0x0;
      }
      else {
        uVar28 = 0;
        pppppppuVar56 = pppppppuStack_5d0;
        pppppppuVar50 = pppppppuStack_590;
        do {
          if ((((ulong)pppppppuVar50[8] & 1) == 0) && (*(int *)((long)pppppppuVar50 + 0x3c) == 0)) {
            ppppuVar29 = (*pppppppuVar50[9])[4];
            if (((uint)ppppuVar29 >> 0x1e & 1) != 0) {
              if ((((ulong)ppppuVar29 >> 0x2a & 1) == 0) ||
                 (*(int *)((long)*pppppppuVar50[9] + 0x3c) < 0x20)) {
                pppppppuVar13 = pppppppuVar50;
                func_0x000109e75980();
                uVar18 = (int)pppppppuVar13 + *(int *)(pppppppuVar50 + 5) + 3U >> 2;
              }
              else {
                iVar39 = *(int *)((long)pppppppuVar50 + 0x34);
                lVar20 = 1;
                if (((8 < iVar39 - 0x8f46U) &&
                    ((0x15 < iVar39 - 0x8fe9U ||
                     ((1 << (ulong)(iVar39 - 0x8fe9U & 0x1f) & 0x387007U) == 0)))) &&
                   ((5 < iVar39 - 0x140aU || ((1 << (ulong)(iVar39 - 0x140aU & 0x1f) & 0x31U) == 0))
                   )) {
                  lVar20 = 0;
                }
                uVar18 = *(int *)(pppppppuVar50 + 6) * *(int *)(pppppppuVar50 + 7) *
                         ((*(int *)((long)pppppppuVar50 + 0x2c) << lVar20) + 3U >> 2);
              }
              uVar28 = uVar18 + uVar28;
            }
          }
          pppppppuVar50 = pppppppuVar50 + 0xb;
          pppppppuVar56 = (uint *******)((long)pppppppuVar56 + -1);
        } while (pppppppuVar56 != (uint *******)0x0);
        pppppppuVar52 = (uint *******)((ulong)uVar28 * 0x18);
        pppppppuVar50 = (uint *******)0x0;
      }
      pppppppuVar15 = unaff_x21;
      func_0x000109f6590c();
      uVar18 = (uint)param_8;
      iVar39 = (int)param_7;
      uVar28 = (uint)param_5;
      unaff_x21[0xb8][1] = (uint *****)pppppppuVar15;
      appppppuStack_500[1] = (uint ******)0x0;
      appppppuStack_500[0] = (uint ******)0x0;
      appppppuStack_500[3] = (uint ******)0x0;
      appppppuStack_500[2] = (uint ******)0x0;
      bVar1 = bVar10;
      if (sVar7 != -0x7373) {
        bVar1 = true;
      }
      if (bVar1) {
        if (bVar9) {
          pppppppuVar56 = (uint *******)0x0;
        }
        else {
          pppppppuVar56 = (uint *******)(ulong)*(uint *)(pppppppuStack_590 + 4);
        }
        auStack_554 = (undefined1  [4])0x0;
        appppppuStack_520[1] = (uint ******)0x100000001;
        appppppuStack_520[0] = (uint ******)0x100000001;
        if (bVar10) {
          puVar30 = auStack_554;
          lVar20 = 0x24;
          pcVar25 = (code *)((long)pcVar17 + 0x44);
          do {
            uVar54 = *(uint *)pcVar25;
            if (uVar54 != 0) {
              *puVar30 = 1;
              *(uint *)((long)unaff_x21[0xb8] + lVar20) = uVar54 >> 2;
            }
            lVar20 = lVar20 + 0x10;
            puVar30 = puVar30 + 1;
            pcVar25 = pcVar25 + 4;
          } while (lVar20 != 100);
        }
        if (bVar9) {
          uVar54 = 0;
        }
        else {
          lVar20 = 0;
          uVar54 = 0;
          pppppppuVar53 = (uint *******)0x0;
          pppppppuVar45 = (uint *******)0xffffffff;
          pppppppuVar50 = appppppuStack_520;
          pppppppuVar13 = pppppppuStack_590;
          do {
            uVar18 = (uint)param_8;
            iVar39 = (int)param_7;
            uVar28 = (uint)param_5;
            pppppppuStack_620 = pppppppuVar50;
            if (!bVar10) {
              pppppppuVar15 = pppppppuVar13;
              pppppppuVar47 = pppppppuVar53;
              if (*(code *)(pppppppuVar13 + 8) == (code)0x1) goto LAB_109e72ba8;
LAB_109e72b84:
              pppppppuVar56 = pppppppuVar47;
              if (*(int *)((long)pppppppuVar13 + 0x3c) == 0) {
                uVar42 = *(uint *)(pppppppuVar13 + 10);
                if ((uint)pppppppuVar45 == 0xffffffff) {
                  uVar54 = 1 << (ulong)((uint)pppppppuVar56 & 0x1f) | uVar54;
                  pppppppuVar45 = (uint *******)(ulong)uVar42;
                  goto LAB_109e72c18;
                }
                if ((uint)pppppppuVar45 == uVar42) goto LAB_109e72c18;
                pppppppuVar52 = (uint *******)&UNK_10f60eb8c;
                pppppppuVar47 = (uint *******)pcVar17;
                pppppppuStack_620 = (uint *******)*pppppppuVar15;
                pppppppuStack_618 = (uint *******)(ulong)uVar42;
LAB_109e72d18:
                func_0x000109eb844c();
                pppppppuVar15 = (uint *******)pcVar17;
              }
              else {
LAB_109e72c18:
                pppppppuVar41 = (uint *******)unaff_x21[0xb8];
                pppppppuStack_618 = (uint *******)(ulong)bVar10;
                param_7 = appppppuStack_500;
                param_8 = (uint *******)auStack_554;
                pppppppuVar52 = pppppppuVar12;
                pppppppuVar47 = (uint *******)pcVar17;
                param_5 = pppppppuVar56;
                param_6 = pppppppuVar53;
                FUN_109e75a9c();
                uVar18 = (uint)param_8;
                iVar39 = (int)param_7;
                uVar28 = (uint)param_5;
                if ((int)pppppppuVar15 != 0) goto LAB_109e72c48;
              }
              goto LAB_109e72d1c;
            }
            uVar40 = *(uint *)(pppppppuVar13 + 4);
            bVar9 = (uint)pppppppuVar56 != uVar40;
            uVar42 = (uint)pppppppuVar53;
            if (bVar9) {
              uVar42 = uVar42 + 1;
            }
            pppppppuVar53 = (uint *******)(ulong)uVar42;
            uVar42 = (uint)pppppppuVar45;
            if (bVar9) {
              uVar42 = 0xffffffff;
            }
            pppppppuVar45 = (uint *******)(ulong)uVar42;
            pppppppuVar15 = pppppppuStack_590 + lVar20 * 0xb;
            pppppppuVar47 = (uint *******)(ulong)uVar40;
            if (((ulong)pppppppuVar13[8] & 1) == 0) goto LAB_109e72b84;
LAB_109e72ba8:
            pppppppuVar41 = (uint *******)unaff_x21[0xb8];
            pppppppuStack_618 = (uint *******)(ulong)bVar10;
            param_7 = appppppuStack_500;
            param_8 = (uint *******)auStack_554;
            pppppppuVar52 = pppppppuVar12;
            pppppppuVar47 = (uint *******)pcVar17;
            param_5 = pppppppuVar56;
            param_6 = pppppppuVar53;
            FUN_109e75a9c();
            uVar18 = (uint)param_8;
            iVar39 = (int)param_7;
            uVar28 = (uint)param_5;
            if ((int)pppppppuVar15 == 0) goto LAB_109e72d1c;
            pppppppuVar53 = (uint *******)(ulong)((int)pppppppuVar53 + 1);
            pppppppuVar45 = (uint *******)0xffffffff;
LAB_109e72c48:
            pppppppuStack_618 = (uint *******)(ulong)bVar10;
            uVar18 = (uint)param_8;
            iVar39 = (int)param_7;
            uVar28 = (uint)param_5;
            lVar20 = lVar20 + 1;
            pppppppuVar13 = pppppppuVar13 + 0xb;
            pppppppuStack_5d0 = (uint *******)((long)pppppppuStack_5d0 + -1);
          } while (pppppppuStack_5d0 != (uint *******)0x0);
        }
      }
      else if (bVar9) {
        uVar54 = 0;
      }
      else {
        pppppppuVar56 = (uint *******)0x0;
        uVar54 = 0;
        do {
          pppppppuVar41 = (uint *******)unaff_x21[0xb8];
          pppppppuStack_618 = (uint *******)0x0;
          iVar39 = (int)appppppuStack_500;
          pppppppuStack_620 = (uint *******)0x0;
          uVar18 = 0;
          pppppppuVar15 = pppppppuStack_590;
          pppppppuVar52 = pppppppuVar12;
          pppppppuVar47 = (uint *******)pcVar17;
          pppppppuVar13 = pppppppuVar56;
          param_6 = pppppppuVar56;
          FUN_109e75a9c();
          uVar28 = (uint)pppppppuVar13;
          if ((int)pppppppuVar15 == 0) goto LAB_109e72d1c;
          uVar54 = 1 << (ulong)((uint)pppppppuVar56 & 0x1f) | uVar54;
          pppppppuVar56 = (uint *******)((long)pppppppuVar56 + 1);
          pppppppuStack_590 = pppppppuStack_590 + 0xb;
        } while (pppppppuStack_5d0 != pppppppuVar56);
      }
      *(uint *)((long)unaff_x21[0xb8] + 4) = uVar54;
    }
    if (*(int *)((long)*(uint *******)((long)pcVar17 + 0x68) + 0x114) != 0) goto LAB_109e7193c;
  }
  else {
    pppppppuStack_5d0 = (uint *******)0x0;
    pppppppuVar52 = (uint *******)*unaff_x21;
    pppppppuVar15 = unaff_x21;
    do {
      unaff_x21 = pppppppuVar52;
      if (((byte)*(code *)(pppppppuVar15 + 4) >> 3 & 1) != 0) {
        if (((uint)*(ulong *)((long)pppppppuVar15 + 0x2c) >> 6 & 1) == 0) {
          bVar10 = (bool)((*(ulong *)((long)pppppppuVar15 + 0x2c) & 0x30) != 0 | bVar10);
        }
        else {
          iVar39 = (int)pppppppuVar15[2];
          func_0x000109ec8978();
          pppppppuStack_5d0 = (uint *******)(ulong)(uint)(iVar39 + (int)pppppppuStack_5d0);
          bVar10 = true;
        }
      }
      pppppppuVar52 = (uint *******)*unaff_x21;
      pppppppuVar15 = unaff_x21;
    } while ((uint *******)*unaff_x21 != (uint *******)0x0);
    if ((int)pppppppuStack_5d0 == 0) {
      if (bVar10) {
        pppppppuStack_5d0 = (uint *******)0x0;
        pppppppuStack_590 = (uint *******)0x0;
        bVar10 = true;
        bVar9 = true;
        goto LAB_109e71ec0;
      }
      goto LAB_109e71c38;
    }
    appppppuStack_500[0] = (uint ******)((ulong)appppppuStack_500[0] & 0xffffffff00000000);
    pppppppuVar13 = pppppppuVar59;
    func_0x000109f658b0(pppppppuVar59,(long)pppppppuStack_5d0 << 3);
    pppuVar49 = ppppppuVar57[5][0x2c][1];
    pppppppuStack_560 = pppppppuVar13;
    for (pppuVar60 = (uint ***)*ppppppuVar57[5][0x2c][1]; pppuVar60 != (uint ***)0x0;
        pppuVar60 = (uint ***)*pppuVar60) {
      if (((*(byte *)(pppuVar49 + 4) >> 3 & 1) != 0) &&
         (uVar28 = (uint)*(undefined8 *)((long)pppuVar49 + 0x2c), (uVar28 >> 6 & 1) != 0)) {
        if ((uVar28 >> 9 & 1) == 0) {
          param_7 = (uint *******)0x0;
          unaff_x21 = (uint *******)pppuVar49[2];
          pppppppuVar47 = (uint *******)pppuVar49[3];
        }
        else {
          unaff_x21 = (uint *******)pppuVar49[0x11];
          cVar27 = *(code *)((long)unaff_x21 + 4);
          pppppppuVar50 = unaff_x21;
          while (cVar27 == (code)0x13) {
            pppppppuVar50 = (uint *******)pppppppuVar50[6];
            cVar27 = *(code *)((long)pppppppuVar50 + 4);
          }
          pppppppuVar47 = pppppppuVar50;
          FUN_109ec85e4(pppppppuVar50,pppuVar49[3]);
          param_7 = (uint *******)pppppppuVar50[6][((ulong)pppppppuVar47 & 0xffffffff) * 6];
          if (((byte)*(code *)((long)pppppppuVar50 + 0xc) >> 1 & 1) == 0) {
            pppppppuVar47 = pppppppuVar50;
            func_0x000109eca058(pppppppuVar50);
          }
          else {
            pppppppuVar47 = (uint *******)(&UNK_10e05bf38 + (long)pppppppuVar50[3]);
          }
        }
        pppppppuVar41 = (uint *******)0x0;
        func_0x000109f65c2c(0,pppppppuVar47);
        apppppppuStack_550[0] = pppppppuVar41;
        _strlen();
        param_6 = (uint *******)pppuVar49[3];
        pppppppuVar47 = (uint *******)apppppppuStack_550;
        param_5 = appppppuStack_500;
        param_8 = (uint *******)&pppppppuStack_560;
        func_0x000109e749f0(pppppppuVar59,unaff_x21);
        if (apppppppuStack_550[0] != (uint *******)0x0) {
          unaff_x21 = apppppppuStack_550[0] + -6;
          FUN_109f65aa4(unaff_x21);
          FUN_109f65ae0(unaff_x21);
        }
        pppuVar60 = (uint ***)*pppuVar49;
      }
      pppuVar49 = pppuVar60;
    }
    if (!bVar10) goto LAB_109e71c38;
    bVar10 = true;
LAB_109e71c48:
    uVar18 = (uint)param_8;
    iVar39 = (int)param_7;
    uVar28 = (uint)param_5;
    if ((int)pppppppuStack_5d0 == 0) {
      pppppppuStack_5d0 = (uint *******)0x0;
      pppppppuStack_590 = (uint *******)0x0;
      bVar9 = true;
      pppppppuVar13 = pppppppuVar50;
      goto LAB_109e71ec0;
    }
    if (uVar42 < 4) {
      pppppppuStack_590 = pppppppuVar59;
      func_0x000109f6590c(pppppppuVar59,(long)pppppppuStack_5d0 * 0x58);
      pppppppuVar13 = pppppppuStack_560;
      pppppppuVar50 = (uint *******)0x0;
      bVar9 = false;
      do {
        pppppppuVar15 = pppppppuStack_590 + (long)pppppppuVar50 * 0xb;
        pppppppuVar52 = (uint *******)pppppppuVar13[(long)pppppppuVar50];
        *pppppppuVar15 = (uint ******)pppppppuVar52;
        *(undefined4 *)((long)pppppppuVar15 + 0x3c) = 0;
        *(code *)(pppppppuVar15 + 8) = (code)0x0;
        pppppppuVar15[9] = (uint ******)0x0;
        *(undefined4 *)(pppppppuVar15 + 10) = 0;
        pppppppuVar15[4] = (uint ******)0x0;
        pppppppuVar15[3] = (uint ******)0xffffffff00000000;
        if (*(code *)((long)param_2 + 0x6b) == (code)0x0) {
LAB_109e71d60:
          pppppppuVar47 = pppppppuVar52;
          _strlen(pppppppuVar52);
          unaff_x21 = pppppppuVar52;
          FUN_109eb850c(pppppppuVar52,pppppppuVar47,apppppppuStack_550);
          pppppppuVar47 = (uint *******)((long)apppppppuStack_550[0] - (long)pppppppuVar52);
          pppppppuVar45 = pppppppuVar59;
          func_0x000109f65c90(pppppppuVar59,pppppppuVar52);
          pppppppuVar15[1] = (uint ******)pppppppuVar45;
          if (pppppppuVar45 == (uint *******)0x0) {
            FUN_109f6116c(&UNK_10f60e84b);
          }
          else {
            if (-1 < (long)unaff_x21) {
              *(int *)((long)pppppppuVar15 + 0x14) = (int)unaff_x21;
            }
            *(bool *)(pppppppuVar15 + 2) = -1 < (long)unaff_x21;
            if ((bVar5 & 1) == 0) {
              pppppppuVar52 = pppppppuVar45;
              _strcmp(pppppppuVar45,&UNK_10f60d67f);
              if ((int)pppppppuVar52 == 0) {
                *(undefined4 *)(pppppppuVar15 + 3) = 1;
              }
              _strcmp(pppppppuVar45,&UNK_10f60d68f);
              if ((int)pppppppuVar45 == 0) {
                *(undefined4 *)(pppppppuVar15 + 3) = 2;
              }
            }
          }
          if (((((ulong)pppppppuVar15[8] & 1) == 0) && (pppppppuVar50 != (uint *******)0x0)) &&
             (pppppppuVar52 = pppppppuVar50, pppppppuVar45 = pppppppuStack_590 + 8,
             *(int *)((long)pppppppuVar15 + 0x3c) == 0)) {
            do {
              unaff_x21 = pppppppuVar45 + 0xb;
              if ((((ulong)*pppppppuVar45 & 1) == 0) && (*(int *)((long)pppppppuVar45 + -4) == 0)) {
                ppppppuVar57 = pppppppuVar15[1];
                _strcmp(ppppppuVar57,pppppppuVar45[-7]);
                if ((((int)ppppppuVar57 == 0) &&
                    (*(code *)(pppppppuVar15 + 2) == *(code *)(pppppppuVar45 + -6))) &&
                   ((*(code *)(pppppppuVar15 + 2) == (code)0x0 ||
                    (*(int *)((long)pppppppuVar15 + 0x14) == *(int *)((long)pppppppuVar45 + -0x2c)))
                   )) {
                  pppppppuStack_620 = (uint *******)pppppppuVar13[(long)pppppppuVar50];
                  pppppppuVar52 = (uint *******)&UNK_10f60e7b9;
                  pppppppuVar15 = (uint *******)pcVar17;
                  func_0x000109eb844c();
                  uVar18 = (uint)param_8;
                  iVar39 = (int)param_7;
                  uVar28 = (uint)param_5;
                  if (!bVar9) goto LAB_109e71c68;
                  bVar9 = false;
                  pppppppuVar13 = pppppppuVar50;
                  goto LAB_109e71ec0;
                }
              }
              pppppppuVar52 = (uint *******)((long)pppppppuVar52 + -1);
              pppppppuVar45 = unaff_x21;
            } while (pppppppuVar52 != (uint *******)0x0);
          }
        }
        else {
          pppppppuVar47 = pppppppuVar52;
          _strcmp(pppppppuVar52,&UNK_10f60e7f1);
          if ((int)pppppppuVar47 == 0) {
            *(code *)(pppppppuVar15 + 8) = (code)0x1;
          }
          else {
            pppppppuVar47 = pppppppuVar52;
            _strcmp(pppppppuVar52,&UNK_10f60e7ff);
            if ((int)pppppppuVar47 == 0) {
              uVar19 = 1;
            }
            else {
              pppppppuVar47 = pppppppuVar52;
              _strcmp(pppppppuVar52,&UNK_10f60e812);
              if ((int)pppppppuVar47 == 0) {
                uVar19 = 2;
              }
              else {
                pppppppuVar47 = pppppppuVar52;
                _strcmp(pppppppuVar52,&UNK_10f60e825);
                if ((int)pppppppuVar47 == 0) {
                  uVar19 = 3;
                }
                else {
                  pppppppuVar47 = pppppppuVar52;
                  _strcmp(pppppppuVar52,&UNK_10f60e838);
                  if ((int)pppppppuVar47 != 0) goto LAB_109e71d60;
                  uVar19 = 4;
                }
              }
            }
            *(undefined4 *)((long)pppppppuVar15 + 0x3c) = uVar19;
          }
        }
        pppppppuVar50 = (uint *******)((long)pppppppuVar50 + 1);
        bVar9 = pppppppuStack_5d0 <= pppppppuVar50;
      } while (pppppppuVar50 != pppppppuStack_5d0);
      bVar9 = false;
      pppppppuVar13 = pppppppuVar50;
      goto LAB_109e71ec0;
    }
    pppppppuVar52 = (uint *******)&UNK_10f60e755;
    func_0x000109eb844c();
    pppppppuVar15 = (uint *******)pcVar17;
  }
LAB_109e71c68:
  puVar11 = (undefined8 *)0x0;
LAB_109e72d24:
  uVar54 = (uint)pppppppuVar50;
  if (pppppppuVar59 != (uint *******)0x0) {
    pppppppuVar15 = pppppppuVar59 + -6;
    FUN_109f65aa4(pppppppuVar15);
    FUN_109f65ae0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e0) {
    return puVar11;
  }
  ___stack_chk_fail();
  uVar40 = (uint)pppppppuVar47;
  uVar42 = (uint)pppppppuVar41;
  while( true ) {
    uVar46 = *(uint *)((long)param_6 + 4);
    if ((uVar46 & 0xff) != 0x13) break;
    param_6 = (uint *******)param_6[6];
  }
  if ((0xf < (uVar46 & 0xff)) || ((0xefe3U >> ((ulong)uVar46 & 0xf) & 1) == 0)) {
    if ((uVar46 & 0xff) != 0x11) {
      cVar27 = (code)0x0;
      goto LAB_109e72e14;
    }
    cVar27 = (code)0x0;
    iVar38 = 0;
    uVar31 = 4;
    uVar46 = 1;
    goto LAB_109e72e98;
  }
  cVar27 = (code)0x1;
LAB_109e72e14:
  if ((uVar46 - 4 & 0xff) < 0xc) {
    uVar31 = *(uint *)(&UNK_10e061b58 + ((ulong)(uVar46 - 4) & 0xff) * 4);
  }
  else {
    uVar31 = 0;
  }
  uVar31 = ((uint)(byte)*(code *)((long)param_6 + 0xd) << (ulong)(uVar31 & 0x1f)) + uVar42;
  iVar38 = 1;
  uVar26 = (ulong)uVar46 & 0xff;
  uVar46 = 0;
  puVar34 = &UNK_10e061b00;
  uVar35 = (ulong)(byte)(&UNK_10e061b00)[uVar26];
  uVar58 = uVar35 * 4 + 0x109e72e6c;
  uVar36 = extraout_x15;
  pcVar17 = extraout_x16;
  uVar37 = extraout_w17;
  switch(uVar26) {
  case 0:
  case 1:
  case 2:
  case 0xc:
  case 0x15:
  case 0x30:
  case 0x34:
  case 0x38:
  case 0x44:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x91:
  case 0x18:
  case 0x3c:
  case 0x40:
  case 0x48:
  case 0x4c:
  case 0x8f:
  case 0x90:
  case 0x92:
  case 0x93:
  case 0xf0:
  case 0xf4:
  case 0xf8:
    uVar46 = 0;
    iVar38 = 0x20;
    break;
  case 3:
  case 7:
  case 8:
  case 0x50:
  case 0x54:
  case 0x94:
  case 0x95:
    iVar38 = 0x10;
  case 0x1c:
  case 0xac:
  case 0xb0:
    uVar46 = 0;
    break;
  default:
  case 0x20:
  case 0x58:
  case 0x6c:
  case 0x70:
  case 0x7c:
  case 0x80:
  case 0x84:
  case 0x88:
  case 0xc4:
    iVar38 = 0x40;
  case 0x24:
  case 0x28:
  case 0x2c:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0xfc:
    uVar46 = 0;
    break;
  case 5:
  case 6:
    uVar46 = 0;
    iVar38 = 8;
    break;
  case 0xb:
    break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x109e73160);
    (*pcVar17)();
  case 0x98:
  case 0x9c:
  case 0xa0:
  case 200:
  case 0xec:
    goto code_r0x000109e72eec;
  case 0xa4:
  case 0xb4:
  case 0xb8:
    goto code_r0x000109e72eac;
  case 0xa8:
  case 0xbc:
  case 0xc0:
  case 0xcc:
  case 0xd0:
  case 0xd4:
    goto code_r0x000109e72f6c;
  }
LAB_109e72e98:
  if (uVar40 < uVar28) {
    pppppppuVar50 = (uint *******)0x0;
    unaff_x21 = pppppppuStack_618;
code_r0x000109e72eac:
    puVar34 = (undefined *)((ulong)pppppppuStack_620 & 0xff);
    uVar58 = 0x60;
    uVar35 = 0x18;
    uVar36 = (ulong)pppppppuStack_620 >> 8 & 0xff;
    do {
      do {
        uVar40 = (uint)pppppppuVar47;
        uVar54 = (uint)pppppppuVar50;
        uVar42 = (uint)pppppppuVar41;
        pcVar17 = (code *)((long)pppppppuVar15 +
                          ((ulong)pppppppuVar50 & 0xffffffff) * uVar35 +
                          ((ulong)pppppppuVar47 & 0xffffffff) * (uVar58 & 0xffffffff));
        if (*(long *)pcVar17 == 0) {
          if ((uVar42 <= uVar54) && (uVar54 < uVar31)) {
            *(uint ********)pcVar17 = pppppppuVar52;
            pcVar17[8] = cVar27;
            *(int *)(pcVar17 + 0xc) = iVar38;
            *(int *)(pcVar17 + 0x10) = iVar39;
code_r0x000109e72f6c:
            pcVar17[0x14] = SUB41(uVar18,0);
            pcVar17[0x15] = SUB81(puVar34,0);
            pcVar17[0x16] = SUB81(uVar36,0);
          }
        }
        else {
          for (lVar20 = *(long *)(*(long *)pcVar17 + 0x10); *(char *)(lVar20 + 4) == '\x13';
              lVar20 = *(long *)(lVar20 + 0x30)) {
          }
          uVar37 = (uint)(*(char *)(lVar20 + 4) != '\x11');
code_r0x000109e72eec:
          if ((uVar37 & (uVar46 ^ 0xffffffff) & 1) == 0) {
            func_0x000109f47670();
            puVar34 = &UNK_10f60dfb6;
LAB_109e73138:
            func_0x000109eb844c(unaff_x21,puVar34);
            return (undefined8 *)0x0;
          }
          if ((uVar42 <= uVar54) && (uVar54 < uVar31)) {
            func_0x000109f47670();
            puVar34 = &UNK_10f60e045;
            goto LAB_109e73138;
          }
          if (pcVar17[8] != cVar27) {
            func_0x000109f47670();
            puVar34 = &UNK_10f60e098;
            goto LAB_109e73138;
          }
          if (*(int *)(pcVar17 + 0xc) != iVar38) {
            func_0x000109f47670();
            puVar34 = &UNK_10f60e11f;
            goto LAB_109e73138;
          }
          if (*(int *)(pcVar17 + 0x10) != iVar39) {
            func_0x000109f47670();
            puVar34 = &UNK_10f60e1aa;
            goto LAB_109e73138;
          }
          if ((((byte)pcVar17[0x14] != uVar18) || ((uint)(byte)pcVar17[0x15] != (uint)puVar34)) ||
             ((uint)(byte)pcVar17[0x16] != (uint)uVar36)) {
            func_0x000109f47670();
            puVar34 = &UNK_10f60e233;
            goto LAB_109e73138;
          }
        }
        uVar37 = uVar40;
        uVar3 = uVar42;
        uVar8 = uVar31;
        if (4 < uVar31) {
          uVar3 = 0;
          uVar37 = uVar40 + 1;
          uVar8 = uVar31 - 4;
        }
        uVar4 = 0;
        if (4 >= uVar31) {
          uVar4 = uVar54 + 1;
        }
        bVar10 = uVar54 == 3;
        if (bVar10) {
          uVar42 = uVar3;
          uVar31 = uVar8;
        }
        pppppppuVar41 = (uint *******)(ulong)uVar42;
        if (bVar10) {
          uVar40 = uVar37;
        }
        pppppppuVar47 = (uint *******)(ulong)uVar40;
        if (!bVar10) {
          uVar4 = uVar54 + 1;
        }
        pppppppuVar50 = (uint *******)(ulong)uVar4;
      } while (uVar4 < 4);
      pppppppuVar50 = (uint *******)0x0;
      pppppppuVar47 = (uint *******)(ulong)(uVar40 + 1);
    } while (uVar40 + 1 < uVar28);
  }
  return (undefined8 *)0x1;
}



/* Entry: 109e70fc8; end: 109e72d97;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_109e70fc8(uint *******param_1,uint *******param_2,uint *******param_3,uint *******param_4,
                   uint *******param_5,uint *******param_6,uint *******param_7,uint *******param_8)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  uint *******pppppppuVar11;
  undefined8 *puVar12;
  uint *******pppppppuVar13;
  uint *******pppppppuVar14;
  uint *******pppppppuVar15;
  int iVar16;
  uint *******pppppppuVar17;
  uint uVar18;
  ulong uVar19;
  uint ***pppuVar20;
  long lVar21;
  uint ******ppppppuVar22;
  uint ****ppppuVar23;
  uint *puVar24;
  uint ******ppppppuVar25;
  code *pcVar26;
  ulong uVar27;
  code cVar28;
  uint uVar29;
  uint ****ppppuVar30;
  ulong uVar31;
  undefined1 *puVar32;
  uint uVar33;
  undefined4 uVar34;
  uint uVar35;
  long lVar36;
  int iVar37;
  undefined *puVar38;
  ulong uVar39;
  ulong extraout_x15;
  code *extraout_x16;
  code *pcVar40;
  uint extraout_w17;
  uint uVar41;
  int iVar42;
  uint uVar43;
  uint *******pppppppuVar44;
  uint uVar45;
  uint ****ppppuVar46;
  uint *******pppppppuVar47;
  uint *******pppppppuVar48;
  uint *******unaff_x21;
  uint uVar49;
  uint *****pppppuVar50;
  uint ***pppuVar51;
  uint *******pppppppuVar52;
  undefined8 uVar53;
  uint *******unaff_x24;
  uint *******pppppppuVar54;
  uint *******pppppppuVar55;
  uint *******unaff_x25;
  uint *****pppppuVar56;
  uint *******unaff_x26;
  uint *******pppppppuVar57;
  uint *******unaff_x27;
  uint ******ppppppuVar58;
  uint *******unaff_x28;
  uint ***pppuVar59;
  uint *******pppppppuStack_620;
  uint *******pppppppuStack_618;
  uint ******ppppppuStack_600;
  uint *******pppppppuStack_5d0;
  uint *******pppppppuStack_590;
  byte bStack_580;
  byte bStack_57f;
  uint *******pppppppuStack_560;
  undefined1 auStack_554 [4];
  uint *******apppppppuStack_550 [6];
  uint ******appppppuStack_520 [4];
  uint ******appppppuStack_500 [4];
  long lStack_4e0;
  uint *******pppppppuStack_4d0;
  uint *******pppppppuStack_4c8;
  uint *******pppppppuStack_4c0;
  uint *******pppppppuStack_4b8;
  uint *******pppppppuStack_4b0;
  uint *******pppppppuStack_4a8;
  ulong uStack_4a0;
  uint *******pppppppuStack_498;
  uint *******pppppppuStack_490;
  uint *******pppppppuStack_488;
  undefined1 *puStack_480;
  undefined8 uStack_478;
  uint *******pppppppuStack_470;
  uint *******pppppppuStack_468;
  uint *******pppppppuStack_460;
  ulong uStack_458;
  ulong uStack_450;
  uint *******pppppppuStack_440;
  uint *******pppppppuStack_438;
  uint *******pppppppuStack_430;
  uint ****ppppuStack_428;
  uint *******pppppppuStack_420;
  uint *******pppppppuStack_418;
  uint uStack_410;
  uint uStack_40c;
  uint *******pppppppuStack_408;
  undefined8 uStack_400;
  int iStack_3f8;
  uint uStack_3f4;
  undefined8 auStack_3f0 [48];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 auStack_260 [124];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar16 = (int)param_4;
  if (iVar16 == 0) {
    uVar29 = *(uint *)(param_3 + 0x15);
  }
  else {
    uVar29 = *(uint *)(param_3 + 0x7c);
    if (*(uint *)(param_3 + 0x7c) <= *(uint *)(param_3 + 0x94)) {
      uVar29 = *(uint *)(param_3 + 0x94);
    }
  }
  pppppppuVar52 = (uint *******)(ulong)uVar29;
  uVar18 = 0xffffffff;
  if (uVar29 < 0x20) {
    uVar18 = ~(-1 << (ulong)(uVar29 & 0x1f));
  }
  pcVar40 = (code *)param_4;
  pppppppuVar44 = param_2;
  if (param_2[((ulong)param_4 & 0xffffffff) + 0x15] == (uint ******)0x0) {
LAB_109e7178c:
    uVar31 = 1;
  }
  else {
    unaff_x25 = (uint *******)(ulong)~uVar18;
    uVar33 = 4;
    uStack_3f4 = 0xf;
    if (iVar16 != 0) {
      uVar33 = 8;
      uStack_3f4 = 4;
    }
    unaff_x24 = (uint *******)(ulong)uVar33;
    ppppuVar30 = param_2[((ulong)param_4 & 0xffffffff) + 0x15][5][0x2c];
    unaff_x21 = (uint *******)ppppuVar30[1];
    uStack_40c = uVar18;
    if (*unaff_x21 == (uint ******)0x0) {
      if (iVar16 == 0) {
        uVar34 = 0;
        uVar29 = 0;
        ppppuStack_428 = ppppuVar30;
        goto LAB_109e714e0;
      }
      goto LAB_109e7178c;
    }
    uStack_400 = 0;
    uStack_410 = 0;
    iStack_3f8 = uVar29 + uStack_3f4;
    pppppppuVar17 = param_2;
    pppppppuVar15 = param_1;
    pppppppuStack_430 = (uint *******)&UNK_10f60e58a;
    ppppuStack_428 = ppppuVar30;
    pppppppuStack_408 = param_3;
    if (iVar16 != 0) {
      pppppppuStack_430 = (uint *******)&UNK_10f60e59e;
    }
    do {
      if ((uVar33 & (uint)unaff_x21[4]) != 0) {
        pppppppuVar44 = pppppppuVar17;
        if (((ulong)unaff_x21[4] >> 0x2a & 1) == 0) {
          if (iVar16 == 0) {
            unaff_x26 = (uint *******)unaff_x21[3];
            pppppuVar56 = *pppppppuVar17[5];
            pppppppuVar57 = unaff_x26;
            (*(code *)pppppuVar56[1])(unaff_x26);
            param_3 = unaff_x26;
            FUN_109f64fdc(pppppuVar56,pppppppuVar57);
            if (pppppuVar56 != (uint *****)0x0) {
              lVar21 = 0x3c;
LAB_109e71174:
              *(int *)((long)unaff_x21 + lVar21) = *(int *)(pppppuVar56 + 2) + -1;
            }
          }
          else if ((iVar16 == 4) && (ppppppuVar58 = unaff_x21[2], ppppppuVar58 != (uint ******)0x0))
          {
            pppppppuVar57 = (uint *******)unaff_x21[3];
            do {
              unaff_x28 = (uint *******)*pppppppuVar17[6];
              pppppppuVar11 = pppppppuVar57;
              (*(code *)unaff_x28[1])(pppppppuVar57);
              pppppppuVar54 = unaff_x28;
              param_3 = pppppppuVar57;
              FUN_109f64fdc(unaff_x28,pppppppuVar11);
              unaff_x26 = pppppppuVar57;
              if (pppppppuVar54 != (uint *******)0x0) {
                *(int *)((long)unaff_x21 + 0x3c) = *(int *)(pppppppuVar54 + 2) + -1;
                pppppuVar56 = *pppppppuVar17[7];
                pppppppuVar11 = pppppppuVar57;
                (*(code *)pppppuVar56[1])(pppppppuVar57);
                param_3 = pppppppuVar57;
                FUN_109f64fdc(pppppuVar56,pppppppuVar11);
                if (pppppuVar56 != (uint *****)0x0) {
                  lVar21 = 0x34;
                  goto LAB_109e71174;
                }
                break;
              }
              if (*(char *)((long)ppppppuVar58 + 4) != '\x13') break;
              unaff_x26 = pppppppuVar15;
              pppppppuStack_470 = pppppppuVar57;
              FUN_109f65d74(pppppppuVar15,&UNK_10f60e538);
              func_0x000109eca118();
              pppppppuVar57 = unaff_x26;
            } while (ppppppuVar58 != (uint ******)0x0);
          }
        }
        else {
          iVar42 = *(int *)((long)unaff_x21 + 0x3c);
          if ((iStack_3f8 <= iVar42) || (iVar42 < 0)) {
            uVar29 = 0;
            if (-1 < iVar42) {
              uVar29 = uStack_3f4;
            }
            pppppppuStack_470 = (uint *******)(ulong)(iVar42 - uVar29);
            pppppppuStack_468 = (uint *******)unaff_x21[3];
            param_2 = (uint *******)&UNK_10f60e507;
            goto LAB_109e71780;
          }
        }
        unaff_x27 = (uint *******)unaff_x21[3];
        param_2 = (uint *******)&UNK_10f60711b;
        param_1 = unaff_x27;
        _strcmp();
        if ((int)param_1 != 0) {
          param_2 = (uint *******)&UNK_10f60712b;
          param_1 = unaff_x27;
          _strcmp();
          if ((int)param_1 != 0) {
            if (((iVar16 == 4) && (*(uint *)((long)unaff_x21 + 0x34) != 0)) &&
               (uVar29 = *(int *)((long)unaff_x21 + 0x3c) - 4,
               *(int *)(pppppppuStack_408 + 0x94) <= (int)uVar29)) {
              param_2 = (uint *******)&UNK_10f60e53e;
              pppppppuStack_470 = (uint *******)(ulong)uVar29;
              pppppppuStack_468 = (uint *******)(ulong)*(uint *)((long)unaff_x21 + 0x34);
              pppppppuStack_460 = unaff_x27;
              goto LAB_109e71780;
            }
            param_2 = (uint *******)(ulong)(iVar16 == 0);
            unaff_x28 = (uint *******)unaff_x21[2];
            param_3 = (uint *******)0x1;
            param_1 = unaff_x28;
            FUN_109ec9e40();
            iVar42 = *(int *)((long)unaff_x21 + 0x3c);
            uVar29 = (uint)param_1;
            if (iVar42 == -1) {
              if ((uint)pppppppuVar52 <= (uint)uStack_400) {
                pppppppuStack_470 = (uint *******)&UNK_10f60e6b3;
                if (iVar16 != 0) {
                  pppppppuStack_470 = (uint *******)&UNK_10f60e6c8;
                }
                param_2 = (uint *******)&UNK_10f60e69e;
                pppppppuStack_468 = pppppppuVar52;
                goto LAB_109e71780;
              }
              uVar31 = uStack_400 & 0xffffffff;
              (&uStack_268)[uVar31 * 2] = unaff_x21;
              *(uint *)(&uStack_270 + uVar31 * 2) = uVar29;
              *(uint *)((long)&uStack_270 + uVar31 * 0x10 + 4) = (uint)uStack_400;
              uStack_400 = CONCAT44(uStack_400._4_4_,(uint)uStack_400 + 1);
            }
            else {
              uVar18 = iVar42 - uStack_3f4;
              uVar31 = (ulong)uVar18;
              if (((int)uStack_3f4 <= iVar42) && (*(int *)((long)unaff_x21 + 0x34) == 0)) {
                uVar45 = ~(-1 << (ulong)(uVar29 & 0x1f));
                uVar19 = (ulong)uVar45;
                if ((uint)pppppppuVar52 < uVar18 + uVar29) {
                  pppppppuStack_470 = pppppppuStack_430;
                  param_2 = (uint *******)&UNK_10f60e5b5;
                  pppppppuStack_468 = unaff_x27;
                  pppppppuStack_460 = unaff_x25;
                  uStack_458 = uVar19;
                  uStack_450 = uVar31;
                  goto LAB_109e71780;
                }
                pppppppuStack_440 = pppppppuVar15;
                pppppppuStack_438 = pppppppuVar17;
                pppppppuStack_418 = pppppppuVar52;
                uVar45 = uVar45 << (ulong)(uVar18 & 0x1f);
                if ((uVar45 & (uint)unaff_x25) != 0) {
                  if (iVar16 == 4) {
                    if (((byte)*(code *)((long)pppppppuVar17 + 0xa5) & 1) == 0) {
                      if (uStack_410 != 0) {
                        pppppppuVar52 = (uint *******)0x0;
                        pppppppuStack_420 = (uint *******)(ulong)uStack_410;
                        do {
                          pppppppuVar44 = (uint *******)auStack_3f0[(long)pppppppuVar52];
                          unaff_x26 = (uint *******)pppppppuVar44[2];
                          param_2 = (uint *******)0x0;
                          param_3 = (uint *******)0x1;
                          pppppppuVar15 = unaff_x26;
                          FUN_109ec9e40();
                          if ((~(-1 << (ulong)((uint)pppppppuVar15 & 0x1f)) <<
                               (ulong)(*(int *)((long)pppppppuVar44 + 0x3c) - uStack_3f4 & 0x1f) &
                              uVar45) != 0) {
                            for (; (*(uint *)((long)unaff_x26 + 4) & 0xff) == 0x13;
                                unaff_x26 = (uint *******)unaff_x26[6]) {
                            }
                            uVar29 = *(uint *)((long)unaff_x28 + 4);
                            pppppppuVar15 = unaff_x28;
                            while ((uVar29 & 0xff) == 0x13) {
                              pppppppuVar15 = (uint *******)pppppppuVar15[6];
                              uVar29 = *(uint *)((long)pppppppuVar15 + 4);
                            }
                            if (((uVar29 ^ *(uint *)((long)unaff_x26 + 4)) & 0xff) == 0) {
                              uVar31 = (ulong)unaff_x21[4] >> 0x24 & 3;
                              if ((~(-1 << (ulong)((byte)*(code *)((long)pppppppuVar15 + 0xd) & 0x1f
                                                  )) << uVar31 &
                                  ~(-1 << (ulong)((byte)*(code *)((long)unaff_x26 + 0xd) & 0x1f)) <<
                                  ((ulong)pppppppuVar44[4] >> 0x24 & 3)) == 0) goto LAB_109e7132c;
                              pppppppuStack_468 = (uint *******)pppppppuVar44[3];
                              param_2 = (uint *******)&UNK_10f60e625;
                              uStack_458 = uVar31;
                            }
                            else {
                              pppppppuStack_468 = (uint *******)pppppppuVar44[3];
                              param_2 = (uint *******)&UNK_10f60e5f7;
                            }
                            pppppppuStack_470 = pppppppuStack_430;
                            pppppppuVar17 = pppppppuStack_438;
                            pppppppuStack_460 = unaff_x27;
                            goto LAB_109e71780;
                          }
LAB_109e7132c:
                          pppppppuVar52 = (uint *******)((long)pppppppuVar52 + 1);
                        } while (pppppppuVar52 != pppppppuStack_420);
                        goto LAB_109e7133c;
                      }
                      goto LAB_109e7140c;
                    }
                  }
                  else if ((*(code *)((long)pppppppuVar17 + 0xa5) == (code)0x0) ||
                          (*(uint *)(pppppppuVar17 + 0x1b) < 300)) {
                    pppppppuStack_470 = pppppppuStack_430;
                    param_2 = (uint *******)&UNK_10f60e668;
                    pppppppuStack_468 = unaff_x27;
                    pppppppuStack_460 = unaff_x25;
                    uStack_458 = uVar19;
                    uStack_450 = uVar31;
                    func_0x000109eb84b0(pppppppuVar17);
                    unaff_x28 = (uint *******)unaff_x21[2];
                    goto LAB_109e7141c;
                  }
                  pppppppuStack_470 = pppppppuStack_430;
                  param_2 = (uint *******)&UNK_10f60e668;
                  pppppppuStack_468 = unaff_x27;
                  pppppppuStack_460 = unaff_x25;
                  uStack_458 = uVar19;
                  uStack_450 = uVar31;
                  goto LAB_109e71780;
                }
LAB_109e7133c:
                pppppppuVar17 = pppppppuStack_438;
                if ((iVar16 == 4) && (((byte)*(code *)((long)pppppppuStack_438 + 0xa5) & 1) == 0)) {
LAB_109e7140c:
                  auStack_3f0[uStack_410] = unaff_x21;
                  uStack_410 = uStack_410 + 1;
                  pppppppuVar17 = pppppppuStack_438;
                }
LAB_109e7141c:
                pppppppuVar52 = pppppppuStack_418;
                pppppppuVar15 = pppppppuStack_440;
                cVar28 = *(code *)((long)unaff_x28 + 4);
                while (cVar28 == (code)0x13) {
                  unaff_x28 = (uint *******)unaff_x28[6];
                  cVar28 = *(code *)((long)unaff_x28 + 4);
                }
                param_1 = (uint *******)(ulong)(byte)cVar28;
                FUN_109ec9858();
                if ((int)param_1 == 0x40) {
                  uVar29 = uVar45;
                  if ((byte)*(code *)((long)unaff_x28 + 0xd) < 3) {
                    uVar29 = 0;
                  }
                }
                else {
                  uVar29 = 0;
                }
                unaff_x25 = (uint *******)(ulong)(uVar45 | (uint)unaff_x25);
                uStack_400 = CONCAT44(uVar29 | uStack_400._4_4_,(uint)uStack_400);
                unaff_x26 = (uint *******)(ulong)uVar45;
              }
            }
          }
        }
      }
      unaff_x21 = (uint *******)*unaff_x21;
    } while (*unaff_x21 != (uint ******)0x0);
    pppppppuVar44 = pppppppuVar17;
    if (iVar16 == 0) {
      uVar29 = (uint)uStack_400;
      uVar34 = uStack_400._4_4_;
LAB_109e714e0:
      uVar18 = (uint)unaff_x25 & uStack_40c;
      uVar18 = (uint)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                            POPCOUNT((char)(uVar18 >> 0x10)) + POPCOUNT((char)(uVar18 >> 0x18))) +
               (uint)(byte)(POPCOUNT((char)uVar34) + POPCOUNT((char)((uint)uVar34 >> 8)) +
                            POPCOUNT((char)((uint)uVar34 >> 0x10)) +
                           POPCOUNT((char)((uint)uVar34 >> 0x18)));
      pppppppuVar15 = pppppppuVar52;
      pppppppuVar17 = pppppppuVar44;
      if (uVar18 <= (uint)pppppppuVar52) {
        if (uVar29 == 0) goto LAB_109e7178c;
        uStack_400 = CONCAT44(uVar34,(uint)uStack_400);
        unaff_x21 = (uint *******)(ulong)uVar29;
        pcVar40 = FUN_109e73160;
        param_3 = (uint *******)0x10;
        param_2 = unaff_x21;
        pppppppuStack_418 = pppppppuVar52;
        _qsort(&uStack_270);
        pppuVar51 = (uint ***)*ppppuStack_428[0x2f];
        if (pppuVar51 != (uint ***)0x0) {
          pppuVar59 = ppppuStack_428[0x2f];
          do {
            pppuVar20 = pppuVar51;
            puVar24 = pppuVar59[6][6];
            while (puVar24 != (uint *)0x0) {
              unaff_x24 = *(uint ********)(puVar24 + 8);
              while (pppppppuVar52 = unaff_x24, unaff_x24 = (uint *******)*pppppppuVar52,
                    unaff_x24 != (uint *******)0x0) {
                if ((*(int *)(pppppppuVar52 + 3) == 1) && (*(int *)(pppppppuVar52 + 5) == 0)) {
                  iVar42 = (int)pppppppuVar52[7][3];
                  param_2 = (uint *******)&UNK_10f603c8c;
                  _strcmp();
                  if (iVar42 == 0) {
                    unaff_x25 = (uint *******)(ulong)((uint)unaff_x25 | 1);
                    goto LAB_109e715f0;
                  }
                }
              }
              FUN_109ecc434();
              unaff_x24 = pppppppuVar52;
            }
            pppuVar51 = (uint ***)*pppuVar20;
            pppuVar59 = pppuVar20;
          } while (pppuVar51 != (uint ***)0x0);
        }
        goto LAB_109e715f0;
      }
LAB_109e71770:
      param_2 = (uint *******)&UNK_10f60e6e0;
      pppppppuVar44 = pppppppuVar17;
      pppppppuStack_470 = (uint *******)(ulong)uVar18;
      pppppppuStack_468 = pppppppuVar15;
LAB_109e71780:
      func_0x000109eb844c();
      uVar31 = 0;
      param_1 = pppppppuVar17;
    }
    else {
      if ((uint)uStack_400 == 0) goto LAB_109e7178c;
      unaff_x21 = (uint *******)(uStack_400 & 0xffffffff);
      pcVar40 = FUN_109e73160;
      param_3 = (uint *******)0x10;
      param_2 = unaff_x21;
      pppppppuStack_418 = pppppppuVar52;
      _qsort(&uStack_270);
LAB_109e715f0:
      pppppppuVar52 = (uint *******)&uStack_270;
      if ((uint)uStack_270 - 0x21 < 0xffffffe0) {
        uVar31 = 0;
        pppppppuVar15 = (uint *******)&uStack_270;
      }
      else {
        uVar31 = 0;
        unaff_x24 = (uint *******)0x0;
        unaff_x26 = (uint *******)0x20;
        unaff_x27 = (uint *******)0xffffffff;
        pppppppuVar15 = (uint *******)&uStack_270;
        do {
          uVar29 = -1 << (ulong)((uint)uStack_270 & 0x1f);
          uVar18 = ~uVar29;
          uVar33 = (uint)unaff_x25;
          if ((uVar33 & (uVar29 ^ 0xffffffff)) == 0) {
            uVar29 = 0;
            bVar10 = false;
          }
          else {
            uVar29 = 0;
            uVar45 = uVar18;
            do {
              bVar10 = 0x20 - (uint)uStack_270 <= uVar29;
              uVar29 = uVar29 + 1;
              if (bVar10) break;
              uVar43 = uVar45 << 1;
              uVar45 = uVar45 << 1;
            } while ((uVar33 & uVar43) != 0);
          }
          if (bVar10) break;
          ppppppuVar58 = pppppppuVar15[1];
          *(uint *)((long)ppppppuVar58 + 0x3c) = uVar29 + uStack_3f4;
          for (pppppuVar56 = ppppppuVar58[2];
              param_1 = (uint *******)(ulong)*(byte *)((long)pppppuVar56 + 4),
              *(byte *)((long)pppppuVar56 + 4) == 0x13; pppppuVar56 = (uint *****)pppppuVar56[6]) {
          }
          uVar18 = uVar18 << (ulong)(uVar29 & 0x1f);
          FUN_109ec9858();
          if ((int)param_1 == 0x40) {
            uVar29 = uVar18;
            if (*(byte *)((long)pppppuVar56 + 0xd) < 3) {
              uVar29 = 0;
            }
          }
          else {
            uVar29 = 0;
          }
          unaff_x25 = (uint *******)(ulong)(uVar18 | uVar33);
          uStack_400 = CONCAT44(uVar29 | uStack_400._4_4_,(uint)uStack_400);
          unaff_x24 = (uint *******)((long)unaff_x24 + 1);
          if (unaff_x24 == unaff_x21) {
            uVar31 = 1;
            goto LAB_109e71728;
          }
          uVar31 = (ulong)(unaff_x21 <= unaff_x24);
          pppppppuVar15 = pppppppuVar52 + (long)unaff_x24 * 2;
          uStack_270._0_4_ = *(uint *)pppppppuVar15;
        } while (0xffffffdf < (uint)uStack_270 - 0x21);
      }
      pppppppuStack_470 = (uint *******)&UNK_10f60e58a;
      if (iVar16 != 0) {
        pppppppuStack_470 = (uint *******)&UNK_10f60e59e;
      }
      pppppppuStack_468 = (uint *******)pppppppuVar15[1][3];
      param_2 = (uint *******)&UNK_10f60e71c;
      param_1 = pppppppuVar44;
      func_0x000109eb844c();
LAB_109e71728:
      unaff_x28 = pppppppuVar44;
      if ((iVar16 == 0) && ((int)uVar31 != 0)) {
        uVar29 = (uint)unaff_x25 & uStack_40c;
        uVar18 = (uint)(byte)(POPCOUNT((char)uVar29) + POPCOUNT((char)(uVar29 >> 8)) +
                              POPCOUNT((char)(uVar29 >> 0x10)) + POPCOUNT((char)(uVar29 >> 0x18))) +
                 (uint)(byte)(POPCOUNT((char)(uStack_400 >> 0x20)) +
                              POPCOUNT((char)(uStack_400 >> 0x28)) +
                              POPCOUNT((char)(uStack_400 >> 0x30)) +
                             POPCOUNT((char)(uStack_400 >> 0x38)));
        pppppppuVar15 = pppppppuStack_418;
        pppppppuVar17 = pppppppuVar44;
        if (uVar18 <= (uint)pppppppuStack_418) goto LAB_109e7178c;
        goto LAB_109e71770;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar31;
  }
  ___stack_chk_fail();
  uStack_478 = 0x109e7188c;
  lStack_4e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = (undefined8 *)0x30;
  pppppppuVar15 = param_3;
  pppppppuVar17 = (uint *******)pcVar40;
  pppppppuStack_4d0 = unaff_x28;
  pppppppuStack_4c8 = unaff_x27;
  pppppppuStack_4c0 = unaff_x26;
  pppppppuStack_4b8 = unaff_x25;
  pppppppuStack_4b0 = unaff_x24;
  pppppppuStack_4a8 = pppppppuVar52;
  uStack_4a0 = uVar31;
  pppppppuStack_498 = unaff_x21;
  pppppppuStack_490 = param_4;
  pppppppuStack_488 = pppppppuVar44;
  puStack_480 = &stack0xfffffffffffffff0;
  _malloc();
  if (puVar12 == (undefined8 *)0x0) {
    pppppppuVar44 = (uint *******)0x0;
  }
  else {
    puVar12[4] = 0;
    puVar12[1] = 0;
    *puVar12 = 0;
    puVar12[3] = 0;
    puVar12[2] = 0;
    pppppppuVar44 = (uint *******)(puVar12 + 6);
  }
  FUN_109e76964(pcVar40);
  uVar18 = (uint)param_8;
  iVar16 = (int)param_7;
  uVar29 = (uint)param_5;
  lVar21 = 0;
  pppppppuVar57 = (uint *******)0x0;
  uVar31 = 6;
  do {
    uVar45 = (uint)uVar31;
    uVar33 = (uint)lVar21;
    if (uVar45 != 6) {
      uVar33 = uVar45;
    }
    uVar43 = (uint)pppppppuVar57;
    if (*(uint *******)((long)pcVar40 + (lVar21 + 0x15) * 8) != (uint ******)0x0) {
      uVar43 = (uint)lVar21;
    }
    pppppppuVar57 = (uint *******)(ulong)uVar43;
    if (*(uint *******)((long)pcVar40 + (lVar21 + 0x15) * 8) != (uint ******)0x0) {
      uVar45 = uVar33;
    }
    uVar31 = (ulong)uVar45;
    lVar21 = lVar21 + 1;
  } while (lVar21 != 6);
  pppppppuStack_560 = (uint *******)0x0;
  if (uVar43 < 5) {
    iVar42 = (int)param_3;
    uVar19 = 3;
    do {
      ppppppuVar58 = *(uint *******)((long)pcVar40 + (uVar19 + 0x15) * 8);
      if (ppppppuVar58 != (uint ******)0x0) {
        if (*(int *)((long)pcVar40 + 0x44) == 0) {
          uVar19 = 0;
          goto LAB_109e71a54;
        }
        bVar10 = true;
        goto LAB_109e71a74;
      }
      uVar29 = (int)uVar19 - 1;
      uVar19 = (ulong)uVar29;
    } while (uVar29 != 0xffffffff);
    bVar5 = 0;
LAB_109e71c38:
    bVar10 = false;
    pppppppuStack_5d0 = (uint *******)(ulong)*(uint *)((long)pcVar40 + 0x54);
    pppppppuStack_560 = *(uint ********)((long)pcVar40 + 0x58);
    goto LAB_109e71c48;
  }
LAB_109e7193c:
  lVar21 = 0xa8;
  do {
    if (*(long *)((long)pcVar40 + lVar21) != 0) {
      lVar36 = *(long *)(*(long *)(*(long *)((long)pcVar40 + lVar21) + 0x28) + 0x160);
      uVar2 = 0;
      if (*(int *)((long)pcVar40 + 0x54) != 0) {
        uVar2 = 4;
      }
      *(ushort *)(lVar36 + 0x152) = *(ushort *)(lVar36 + 0x152) & 0xfffb | uVar2;
      if (*(uint *******)((long)pcVar40 + 0x60) != (uint ******)0x0) {
        lVar36 = *(long *)(*(long *)(*(long *)((long)pcVar40 + lVar21) + 0x28) + 0x160);
        uVar6 = *(ushort *)(lVar36 + 0x152);
        uVar2 = 4;
        if (*(int *)((*(uint *******)((long)pcVar40 + 0x60))[0xb8] + 3) < 1) {
          uVar2 = uVar6 & 4;
        }
        *(ushort *)(lVar36 + 0x152) = uVar2 | uVar6 & 0xfffb;
      }
    }
    lVar21 = lVar21 + 8;
  } while (lVar21 != 0xd8);
  iVar42 = 4;
  do {
    if ((iVar42 != 2) &&
       (ppppppuVar58 = *(uint *******)((long)pcVar40 + ((ulong)(iVar42 - 1) + 0x15) * 8),
       ppppppuVar58 != (uint ******)0x0)) {
      ppppuVar30 = ppppppuVar58[5][0xb8];
      FUN_109e75fac(ppppuVar30,ppppppuVar58[5][0x2c]);
      ppppppuVar58[5][0x2c][0x38] = (uint ***)ppppuVar30;
      break;
    }
    iVar42 = iVar42 + -1;
  } while (iVar42 != 0);
  pppppppuVar15 = (uint *******)0x0;
  FUN_109e769ac();
  uVar31 = 1;
  pppppppuVar13 = param_1;
  pppppppuVar54 = (uint *******)pcVar40;
  goto LAB_109e72d24;
  while (uVar19 = uVar27 + 1, *(int *)((long)pcVar40 + (uVar27 + 0x12) * 4) == 0) {
LAB_109e71a54:
    uVar27 = uVar19;
    if (uVar27 == 3) break;
  }
  bVar10 = uVar27 < 3;
LAB_109e71a74:
  bVar5 = *(byte *)((long)ppppppuVar58[5][0x2c][5] + 0xc1);
  unaff_x21 = (uint *******)ppppppuVar58[5][0x2c][1];
  pppppppuVar11 = pppppppuVar52;
  if ((uint *******)*unaff_x21 == (uint *******)0x0) {
    if (!bVar10) goto LAB_109e71c38;
    pppppppuStack_5d0 = (uint *******)0x0;
    pppppppuStack_590 = (uint *******)0x0;
    bVar10 = true;
    bVar9 = true;
LAB_109e71ec0:
    uVar19 = 0;
    lVar21 = 0xa8;
    do {
      if (*(uint *******)((long)pcVar40 + lVar21) != (uint ******)0x0) {
        apppppppuStack_550[uVar19] = (uint *******)*(uint *******)((long)pcVar40 + lVar21);
        uVar19 = (ulong)((int)uVar19 + 1);
      }
      lVar21 = lVar21 + 8;
    } while (lVar21 != 0xd8);
    iVar37 = (int)uVar19;
    pppppppuVar52 = pppppppuVar11;
    if ((uVar43 != 4) && ((!bVar9 || (*(code *)((long)pcVar40 + 0x17) != (code)0x0)))) {
      param_5 = *(uint ********)((long)pcVar40 + ((ulong)uVar43 + 0x15) * 8);
      pppppppuStack_620 = (uint *******)&bStack_580;
      param_6 = (uint *******)0x0;
      pppppppuVar13 = param_1;
      pppppppuVar54 = param_2;
      pppppppuVar15 = pppppppuVar44;
      pppppppuVar17 = (uint *******)pcVar40;
      param_7 = pppppppuStack_5d0;
      param_8 = pppppppuStack_590;
      FUN_109e73184();
      uVar18 = (uint)param_8;
      iVar16 = (int)param_7;
      uVar29 = (uint)param_5;
      if ((int)pppppppuVar13 != 0) goto LAB_109e71f34;
LAB_109e72d1c:
      uVar31 = 0;
      goto LAB_109e72d24;
    }
LAB_109e71f34:
    if (*(code *)((long)pcVar40 + 0x17) == (code)0x0) {
      FUN_109e739f0(pcVar40,uVar31,4);
      pppppppuVar15 = (uint *******)0x8;
      pppppppuVar13 = (uint *******)pcVar40;
      pppppppuVar54 = pppppppuVar57;
      FUN_109e739f0();
      if (*(code *)((long)pcVar40 + 0x17) != (code)0x0) goto LAB_109e71f64;
    }
    else {
LAB_109e71f64:
      pppppppuStack_620 = (uint *******)&bStack_580;
      param_5 = (uint *******)0x0;
      param_7 = (uint *******)0x0;
      param_8 = (uint *******)0x0;
      pppppppuVar13 = param_1;
      pppppppuVar54 = param_2;
      pppppppuVar15 = pppppppuVar44;
      pppppppuVar17 = (uint *******)pcVar40;
      param_6 = apppppppuStack_550[0];
      FUN_109e73184();
      uVar18 = (uint)param_8;
      iVar16 = (int)param_7;
      uVar29 = (uint)param_5;
      if ((int)pppppppuVar13 == 0) goto LAB_109e72d1c;
    }
    if (iVar37 == 1) {
      pppppppuVar13 = (uint *******)apppppppuStack_550[0][5][0x2c];
      FUN_109e760cc();
    }
    else {
      uVar19 = (ulong)(iVar37 - 2U);
      if (-1 < (int)(iVar37 - 2U)) {
        do {
          unaff_x21 = apppppppuStack_550[uVar19];
          pppppppuVar11 = apppppppuStack_550[uVar19 + 1];
          uVar29 = (uint)pppppppuStack_5d0;
          if (*(int *)pppppppuVar11 != 4) {
            uVar29 = 0;
          }
          param_7 = (uint *******)(ulong)uVar29;
          pppppppuStack_620 = (uint *******)&bStack_580;
          pppppppuVar13 = param_1;
          pppppppuVar54 = param_2;
          pppppppuVar15 = pppppppuVar44;
          pppppppuVar17 = (uint *******)pcVar40;
          pppppppuVar48 = unaff_x21;
          param_6 = pppppppuVar11;
          param_8 = pppppppuStack_590;
          FUN_109e73184();
          uVar18 = (uint)param_8;
          iVar16 = (int)param_7;
          uVar29 = (uint)pppppppuVar48;
          if ((int)pppppppuVar13 == 0) goto LAB_109e72d1c;
          pppppppuVar52 = (uint *******)unaff_x21[5][0x2c];
          pppppuVar56 = pppppppuVar11[5][0x2c];
          if (((*(char *)(pppppppuVar52[5] + 0xb) == '\x01') && ((bStack_580 & 1) == 0)) &&
             ((bStack_57f & 1) == 0)) {
            FUN_109f17a84(pppppppuVar52,8);
            FUN_109f17a84(pppppuVar56,4);
          }
          FUN_109e760cc(pppppppuVar52);
          FUN_109e760cc(pppppuVar56);
          pppppppuVar15 = pppppppuVar52;
          FUN_109f045b4(pppppppuVar52,pppppuVar56);
          if ((int)pppppppuVar15 != 0) {
            FUN_109e760cc(pppppuVar56);
          }
          FUN_109f43ecc(pppppppuVar52,8,0);
          FUN_109f43ecc(pppppuVar56,4,0);
          ppppppuVar58 = (uint ******)*pppppppuVar52[1];
          if (ppppppuVar58 == (uint ******)0x0) {
            uVar29 = 0;
          }
          else {
            uVar29 = 0;
            ppppppuVar25 = pppppppuVar52[1];
            do {
              ppppppuVar22 = ppppppuVar58;
              if (((*(byte *)(ppppppuVar25 + 4) >> 3 & 1) != 0) &&
                 (0x1f < *(int *)((long)ppppppuVar25 + 0x3c))) {
                pppppuVar50 = ppppppuVar25[2];
                ppppppuVar58 = ppppppuVar25;
                func_0x000109f0f5ac(ppppppuVar25,(long)(char)*(code *)((long)pppppppuVar52 + 0x61));
                if ((((ulong)ppppppuVar58 & 1) != 0) ||
                   (*(char *)((long)ppppppuVar25 + 0x2d) < '\0')) {
                  func_0x000109eca118();
                }
                FUN_109ec9e40(pppppuVar50,0,1);
                uVar18 = ((int)pppppuVar50 + *(int *)((long)ppppppuVar25 + 0x3c)) - 0x20;
                if (uVar29 <= uVar18) {
                  uVar29 = uVar18;
                }
                ppppppuVar22 = (uint ******)*ppppppuVar25;
              }
              ppppppuVar58 = (uint ******)*ppppppuVar22;
              ppppppuVar25 = ppppppuVar22;
            } while ((uint ******)*ppppppuVar22 != (uint ******)0x0);
          }
          ppppuVar30 = (uint ****)*pppppuVar56[1];
          if (ppppuVar30 == (uint ****)0x0) {
            uVar18 = 0;
          }
          else {
            uVar18 = 0;
            ppppuVar46 = pppppuVar56[1];
            do {
              ppppuVar23 = ppppuVar30;
              if (((*(byte *)(ppppuVar46 + 4) >> 2 & 1) != 0) &&
                 (0x1f < *(int *)((long)ppppuVar46 + 0x3c))) {
                pppuVar51 = ppppuVar46[2];
                ppppuVar30 = ppppuVar46;
                func_0x000109f0f5ac(ppppuVar46,(long)*(char *)((long)pppppuVar56 + 0x61));
                if ((((ulong)ppppuVar30 & 1) != 0) || (*(char *)((long)ppppuVar46 + 0x2d) < '\0')) {
                  func_0x000109eca118();
                }
                FUN_109ec9e40(pppuVar51,0,1);
                uVar33 = ((int)pppuVar51 + *(int *)((long)ppppuVar46 + 0x3c)) - 0x20;
                if (uVar18 <= uVar33) {
                  uVar18 = uVar33;
                }
                ppppuVar23 = (uint ****)*ppppuVar46;
              }
              ppppuVar30 = (uint ****)*ppppuVar23;
              ppppuVar46 = ppppuVar23;
            } while ((uint ****)*ppppuVar23 != (uint ****)0x0);
          }
          lVar21 = 0;
          if ((int)uVar18 <= (int)uVar29) {
            uVar18 = uVar29;
          }
          uVar27 = (long)(int)uVar18 + 0x1fU >> 3;
          do {
            pppppppuVar15 = pppppppuVar44;
            func_0x000109f6590c(pppppppuVar44,uVar27 & 0x3fffffffc);
            *(uint ********)((long)appppppuStack_500 + lVar21) = pppppppuVar15;
            pppppppuVar15 = pppppppuVar44;
            func_0x000109f6590c(pppppppuVar44,uVar27 & 0x3fffffffc);
            *(uint ********)((long)appppppuStack_520 + lVar21) = pppppppuVar15;
            lVar21 = lVar21 + 8;
          } while (lVar21 != 0x20);
          ppppppuVar58 = pppppppuVar52[1];
          for (ppppppuVar25 = (uint ******)*pppppppuVar52[1]; ppppppuVar25 != (uint ******)0x0;
              ppppppuVar25 = (uint ******)*ppppppuVar25) {
            if (((*(byte *)(ppppppuVar58 + 4) >> 3 & 1) != 0) &&
               (0x1f < *(int *)((long)ppppppuVar58 + 0x3c))) {
              iVar16 = (int)ppppppuVar58[2];
              FUN_109e75530();
              if (iVar16 != 0) {
                lVar21 = 0;
                do {
                  FUN_109e7558c(appppppuStack_520[lVar21 + ((ulong)ppppppuVar58[4] >> 0x24 & 3)],
                                ppppppuVar58,(long)(char)*(code *)((long)pppppppuVar52 + 0x61));
                  uVar29 = (uint)ppppppuVar58[2];
                  FUN_109e75530();
                  lVar21 = lVar21 + 1;
                } while ((uint)lVar21 < uVar29);
                ppppppuVar25 = (uint ******)*ppppppuVar58;
              }
            }
            ppppppuVar58 = ppppppuVar25;
          }
          ppppuVar30 = pppppuVar56[1];
          for (ppppuVar46 = (uint ****)*pppppuVar56[1]; ppppuVar46 != (uint ****)0x0;
              ppppuVar46 = (uint ****)*ppppuVar46) {
            if (((*(byte *)(ppppuVar30 + 4) >> 2 & 1) != 0) &&
               (0x1f < *(int *)((long)ppppuVar30 + 0x3c))) {
              iVar16 = (int)ppppuVar30[2];
              FUN_109e75530();
              if (iVar16 != 0) {
                lVar21 = 0;
                do {
                  FUN_109e7558c(appppppuStack_500[lVar21 + ((ulong)ppppuVar30[4] >> 0x24 & 3)],
                                ppppuVar30,(long)*(char *)((long)pppppuVar56 + 0x61));
                  uVar29 = (uint)ppppuVar30[2];
                  FUN_109e75530();
                  lVar21 = lVar21 + 1;
                } while ((uint)lVar21 < uVar29);
                ppppuVar46 = (uint ****)*ppppuVar30;
              }
            }
            ppppuVar30 = ppppuVar46;
          }
          if (*(code *)((long)pppppppuVar52 + 0x61) == (code)0x1) {
            ppppppuStack_600 = pppppppuVar52[0x2f];
            for (ppppppuVar58 = (uint ******)*pppppppuVar52[0x2f]; ppppppuVar58 != (uint ******)0x0;
                ppppppuVar58 = (uint ******)*ppppppuVar58) {
              pppppuVar50 = ppppppuStack_600[6];
              if (pppppuVar50 != (uint *****)0x0) {
                do {
                  ppppuVar30 = pppppuVar50[6];
                  if (ppppuVar30 != (uint ****)0x0) {
                    do {
                      pppuVar51 = ppppuVar30[4];
                      for (pppuVar59 = (uint ***)*ppppuVar30[4]; pppuVar59 != (uint ***)0x0;
                          pppuVar59 = (uint ***)*pppuVar59) {
                        if (((*(uint *)(pppuVar51 + 3) == 4) && (*(uint *)(pppuVar51 + 5) == 0x112))
                           && (puVar24 = *pppuVar51[0x13], puVar24[0xb] == 8)) {
                          for (; puVar24[10] != 0;
                              puVar24 = (uint *)**(undefined8 **)(puVar24 + 0x14)) {
                          }
                          lVar21 = *(long *)(puVar24 + 0xe);
                          uVar53 = *(undefined8 *)(lVar21 + 0x10);
                          iVar16 = (int)uVar53;
                          FUN_109e75530();
                          if (iVar16 != 0) {
                            lVar36 = 0;
                            do {
                              if (0x1f < *(int *)(lVar21 + 0x3c)) {
                                FUN_109e7558c(appppppuStack_500
                                              [lVar36 + (*(ulong *)(lVar21 + 0x20) >> 0x24 & 3)],
                                              lVar21,(long)(char)*(code *)((long)pppppppuVar52 +
                                                                          0x61));
                                uVar53 = *(undefined8 *)(lVar21 + 0x10);
                              }
                              uVar29 = (uint)uVar53;
                              FUN_109e75530();
                              lVar36 = lVar36 + 1;
                            } while ((uint)lVar36 < uVar29);
                            pppuVar59 = (uint ***)*pppuVar51;
                          }
                        }
                        pppuVar51 = pppuVar59;
                      }
                      FUN_109ecc434();
                    } while (ppppuVar30 != (uint ****)0x0);
                    ppppppuVar58 = (uint ******)*ppppppuStack_600;
                  }
                  ppppppuVar25 = (uint ******)*ppppppuVar58;
                  ppppppuStack_600 = ppppppuVar58;
                  while( true ) {
                    ppppppuVar58 = ppppppuVar25;
                    if (ppppppuVar58 == (uint ******)0x0) goto LAB_109e72318;
                    pppppuVar50 = ppppppuStack_600[6];
                    if (pppppuVar50 != (uint *****)0x0) break;
                    ppppppuVar25 = (uint ******)*ppppppuVar58;
                    ppppppuStack_600 = ppppppuVar58;
                  }
                } while( true );
              }
              ppppppuStack_600 = ppppppuVar58;
            }
          }
LAB_109e72318:
          pppppppuVar15 = pppppppuVar52;
          FUN_109e7561c(pppppppuVar52,pppppuVar56,pcVar40,8,appppppuStack_500);
          param_5 = appppppuStack_520;
          pppppppuVar17 = (uint *******)0x4;
          pppppppuVar54 = pppppppuVar52;
          FUN_109e7561c(pppppppuVar52,pppppuVar56,pcVar40);
          if ((((ulong)pppppppuVar15 & 1) != 0) || ((int)pppppppuVar54 != 0)) {
            FUN_109f0f144(pppppppuVar52);
            FUN_109f0f144(pppppuVar56);
            FUN_109e760cc(pppppppuVar52);
            FUN_109e760cc(pppppuVar56);
            FUN_109f43ecc(pppppppuVar52,8,0);
            FUN_109f43ecc(pppppuVar56,4,0);
          }
          FUN_109f044f8(pppppppuVar52,pppppuVar56);
          FUN_109e739f0(pcVar40,*(undefined4 *)unaff_x21,8);
          pppppppuVar54 = (uint *******)(ulong)*(uint *)pppppppuVar11;
          pppppppuVar15 = (uint *******)0x4;
          pppppppuVar13 = (uint *******)pcVar40;
          FUN_109e739f0();
          bVar1 = 0 < (long)uVar19;
          uVar19 = uVar19 - 1;
          unaff_x21 = pppppppuVar52;
          pppppppuVar52 = pppppppuVar11;
        } while (bVar1);
      }
    }
    pppppppuVar52 = pppppppuVar11;
    if (*(code *)((long)pcVar40 + 0x17) == (code)0x0) {
      FUN_109f43ecc((*(uint *******)((long)pcVar40 + (uVar31 + 0x15) * 8))[5][0x2c],4,0);
      pppppppuVar13 =
           (uint *******)(*(uint *******)((long)pcVar40 + ((ulong)uVar43 + 0x15) * 8))[5][0x2c];
      pppppppuVar54 = (uint *******)0x8;
      pppppppuVar15 = (uint *******)0x0;
      FUN_109f43ecc();
      if (uVar43 != 4) goto LAB_109e72574;
LAB_109e725c0:
      if (*(code *)((long)pcVar40 + 0x17) != (code)0x0) {
        unaff_x21 = *(uint ********)((long)pcVar40 + (uVar31 + 0x15) * 8);
        pppppppuStack_620 = unaff_x21;
        FUN_109e73b74(unaff_x21,4);
        pppppppuStack_618 = (uint *******)&bStack_580;
        param_5 = (uint *******)0x0;
        param_7 = (uint *******)0x0;
        param_8 = (uint *******)0x0;
        pppppppuVar13 = param_1;
        pppppppuVar54 = param_2;
        pppppppuVar15 = pppppppuVar44;
        pppppppuVar17 = (uint *******)pcVar40;
        param_6 = unaff_x21;
        FUN_109e73ccc();
        uVar18 = (uint)param_8;
        iVar16 = (int)param_7;
        uVar29 = (uint)param_5;
        if ((int)pppppppuVar13 == 0) goto LAB_109e72d1c;
      }
    }
    else {
      if (uVar45 != 0) {
        pppppppuVar13 =
             (uint *******)(*(uint *******)((long)pcVar40 + (uVar31 + 0x15) * 8))[5][0x2c];
        pppppppuVar54 = (uint *******)0x4;
        FUN_109e73a88();
      }
      if (uVar43 == 4) goto LAB_109e725c0;
      pppppppuVar13 =
           (uint *******)(*(uint *******)((long)pcVar40 + ((ulong)uVar43 + 0x15) * 8))[5][0x2c];
      pppppppuVar54 = (uint *******)0x8;
      FUN_109e73a88();
LAB_109e72574:
      if ((!bVar9) || (*(code *)((long)pcVar40 + 0x17) != (code)0x0)) {
        pppppppuStack_620 = *(uint ********)((long)pcVar40 + ((ulong)uVar43 + 0x15) * 8);
        FUN_109e73b74(pppppppuStack_620,8);
        param_5 = *(uint ********)((long)pcVar40 + ((ulong)uVar43 + 0x15) * 8);
        pppppppuStack_618 = (uint *******)&bStack_580;
        param_6 = (uint *******)0x0;
        pppppppuVar13 = param_1;
        pppppppuVar54 = param_2;
        pppppppuVar15 = pppppppuVar44;
        pppppppuVar17 = (uint *******)pcVar40;
        param_7 = pppppppuStack_5d0;
        param_8 = pppppppuStack_590;
        FUN_109e73ccc();
        uVar18 = (uint)param_8;
        iVar16 = (int)param_7;
        uVar29 = (uint)param_5;
        if ((int)pppppppuVar13 == 0) goto LAB_109e72d1c;
        goto LAB_109e725c0;
      }
    }
    pppppppuVar11 = apppppppuStack_550[0];
    if (iVar37 == 1) {
      pppppppuVar54 = (uint *******)((ulong)param_3 & 0xffffffff);
      FUN_109e8432c(param_1,pppppppuVar54,pcVar40,0,apppppppuStack_550[0],0,0);
      param_5 = (uint *******)0x0;
      pppppppuVar13 = param_1;
      pppppppuVar15 = (uint *******)pcVar40;
      param_6 = pppppppuStack_5d0;
      param_7 = pppppppuStack_590;
      FUN_109e8432c();
      pppppppuVar17 = pppppppuVar11;
    }
    else {
      pppppppuVar11 = pppppppuVar57;
      if (uVar43 != 0) {
        do {
          pppppppuVar48 = (uint *******)((long)pppppppuVar57 + -1);
          pppppppuVar52 =
               *(uint ********)((long)pcVar40 + (((ulong)pppppppuVar48 & 0xffffffff) + 0x15) * 8);
          if (pppppppuVar52 != (uint *******)0x0 || (int)pppppppuVar48 == 0) {
            unaff_x21 = *(uint ********)
                         ((long)pcVar40 + (((ulong)pppppppuVar11 & 0xffffffff) + 0x15) * 8);
            uVar29 = (uint)pppppppuStack_5d0;
            if ((int)pppppppuVar11 != 4) {
              uVar29 = 0;
            }
            param_7 = (uint *******)(ulong)uVar29;
            FUN_109e8432c(param_1,iVar42,pcVar40,pppppppuVar52,unaff_x21,param_7,pppppppuStack_590);
            pppppppuVar55 = pppppppuVar52;
            FUN_109e73b74(pppppppuVar52,8);
            pppppppuVar14 = unaff_x21;
            FUN_109e73b74(unaff_x21,4);
            pppppppuStack_618 = (uint *******)&bStack_580;
            pppppppuVar13 = param_1;
            pppppppuVar54 = param_2;
            pppppppuVar15 = pppppppuVar44;
            pppppppuVar17 = (uint *******)pcVar40;
            param_5 = pppppppuVar52;
            param_6 = unaff_x21;
            param_8 = pppppppuStack_590;
            FUN_109e73ccc();
            uVar18 = (uint)param_8;
            iVar16 = (int)param_7;
            uVar29 = (uint)param_5;
            pppppppuStack_620 = (uint *******)((ulong)pppppppuVar14 | (ulong)pppppppuVar55);
            if ((int)pppppppuVar13 == 0) goto LAB_109e72d1c;
            if (pppppppuVar52 != (uint *******)0x0) {
              uVar31 = (ulong)pppppppuVar55 & 0xffffffff;
              uVar33 = (uint)(byte)(POPCOUNT((char)((ulong)pppppppuVar55 >> 0x20)) +
                                    POPCOUNT((char)((ulong)pppppppuVar55 >> 0x28)) +
                                    POPCOUNT((char)((ulong)pppppppuVar55 >> 0x30)) +
                                   POPCOUNT((char)((ulong)pppppppuVar55 >> 0x38))) +
                       (uint)(byte)(POPCOUNT((char)uVar31) + POPCOUNT((char)(uVar31 >> 8)) +
                                    POPCOUNT((char)(uVar31 >> 0x10)) +
                                   POPCOUNT((char)(uVar31 >> 0x18)));
              pppppppuStack_620 = (uint *******)(long)*(int *)pppppppuVar52;
              uVar45 = uVar33 * 4;
              pppppppuVar52 = (uint *******)(ulong)uVar45;
              if (*(uint *)((long)param_1 + ((long)pppppppuStack_620 * 0x20 + 0x33) * 4) < uVar45) {
                if ((iVar42 == 2) || (*(code *)((long)pcVar40 + 0xa5) == (code)0x1)) {
                  func_0x000109f47670();
                  pppppppuVar54 = (uint *******)&UNK_10f60eac0;
                  pppppppuStack_618 = (uint *******)(ulong)uVar33;
                }
                else {
                  func_0x000109f47670();
                  pppppppuVar54 = (uint *******)&UNK_10f60eaf2;
                  pppppppuStack_618 = pppppppuVar52;
                }
                goto LAB_109e72d18;
              }
            }
            uVar31 = (ulong)pppppppuVar14 & 0xffffffff;
            pppppppuVar47 =
                 (uint *******)
                 (ulong)((uint)(byte)(POPCOUNT((char)((ulong)pppppppuVar14 >> 0x20)) +
                                      POPCOUNT((char)((ulong)pppppppuVar14 >> 0x28)) +
                                      POPCOUNT((char)((ulong)pppppppuVar14 >> 0x30)) +
                                     POPCOUNT((char)((ulong)pppppppuVar14 >> 0x38))) +
                        (uint)(byte)(POPCOUNT((char)uVar31) + POPCOUNT((char)(uVar31 >> 8)) +
                                     POPCOUNT((char)(uVar31 >> 0x10)) +
                                    POPCOUNT((char)(uVar31 >> 0x18))));
            ppppuVar30 = (uint ****)*unaff_x21[5][0x2c][1];
            if (ppppuVar30 != (uint ****)0x0) {
              pppppppuVar52 = (uint *******)0x1;
              ppppuVar46 = unaff_x21[5][0x2c][1];
              do {
                ppppuVar23 = ppppuVar30;
                if (((((ulong)ppppuVar46[4] & 0x40000000004) == 4) &&
                    (((ulong)ppppuVar46[4] & 0x1fffff) == 4 && *(int *)unaff_x21 == 4)) &&
                   (0x19 < *(uint *)((long)ppppuVar46 + 0x3c) ||
                    (1 << (ulong)(*(uint *)((long)ppppuVar46 + 0x3c) & 0x1f) & 0x3000001U) == 0)) {
                  iVar16 = (int)ppppuVar46[2];
                  pppppppuVar54 = (uint *******)0x0;
                  pppppppuVar15 = (uint *******)0x1;
                  FUN_109ec9e40();
                  pppppppuVar47 = (uint *******)(ulong)(uint)(iVar16 + (int)pppppppuVar47);
                }
                ppppuVar30 = (uint ****)*ppppuVar23;
                ppppuVar46 = ppppuVar23;
              } while (ppppuVar30 != (uint ****)0x0);
            }
            uVar18 = (uint)param_8;
            iVar16 = (int)param_7;
            uVar29 = (uint)param_5;
            pppppppuVar13 = (uint *******)(long)*(int *)unaff_x21;
            unaff_x21 = (uint *******)(ulong)*(uint *)(param_1 + (long)pppppppuVar13 * 0x10 + 0x19);
            uVar33 = (int)pppppppuVar47 << 2;
            pppppppuVar11 = pppppppuVar48;
            pppppppuStack_620 = (uint *******)((ulong)pppppppuVar14 | (ulong)pppppppuVar55);
            if (*(uint *)(param_1 + (long)pppppppuVar13 * 0x10 + 0x19) < uVar33) {
              if ((iVar42 == 2) || (*(code *)((long)pcVar40 + 0xa5) == (code)0x1)) {
                func_0x000109f47670();
                pppppppuVar54 = (uint *******)&UNK_10f60eb27;
                pppppppuStack_620 = pppppppuVar13;
                pppppppuStack_618 = pppppppuVar47;
              }
              else {
                func_0x000109f47670();
                pppppppuVar54 = (uint *******)&UNK_10f60eb58;
                pppppppuStack_620 = pppppppuVar13;
                pppppppuStack_618 = (uint *******)(ulong)uVar33;
              }
              goto LAB_109e72d18;
            }
          }
          iVar16 = (int)pppppppuVar57;
          pppppppuVar57 = pppppppuVar48;
        } while (1 < iVar16);
      }
    }
    uVar18 = (uint)param_8;
    iVar16 = (int)param_7;
    uVar29 = (uint)param_5;
    unaff_x21 = *(uint ********)((long)pcVar40 + 0x60);
    if (unaff_x21 != (uint *******)0x0) {
      sVar7 = *(short *)((long)pcVar40 + 0x40);
      ppppppuVar58 = (uint ******)0x90;
      _malloc();
      if (ppppppuVar58 == (uint ******)0x0) {
        ppppppuVar25 = (uint ******)0x0;
      }
      else {
        ppppppuVar58[4] = (uint *****)0x0;
        ppppppuVar58[1] = (uint *****)0x0;
        *ppppppuVar58 = (uint *****)0x0;
        ppppppuVar58[3] = (uint *****)0x0;
        ppppppuVar58[2] = (uint *****)0x0;
        *ppppppuVar58 = (uint *****)(unaff_x21 + -6);
        ppppppuVar25 = unaff_x21[-5];
        ppppppuVar58[3] = (uint *****)ppppppuVar25;
        unaff_x21[-5] = ppppppuVar58;
        if (ppppppuVar25 != (uint ******)0x0) {
          ppppppuVar25[2] = (uint *****)ppppppuVar58;
        }
        ppppppuVar25 = ppppppuVar58 + 6;
        ppppppuVar58[7] = (uint *****)0x0;
        *ppppppuVar25 = (uint *****)0x0;
        ppppppuVar58[0xf] = (uint *****)0x0;
        ppppppuVar58[0xe] = (uint *****)0x0;
        ppppppuVar58[0x11] = (uint *****)0x0;
        ppppppuVar58[0x10] = (uint *****)0x0;
        ppppppuVar58[0xb] = (uint *****)0x0;
        ppppppuVar58[10] = (uint *****)0x0;
        ppppppuVar58[0xd] = (uint *****)0x0;
        ppppppuVar58[0xc] = (uint *****)0x0;
        ppppppuVar58[9] = (uint *****)0x0;
        ppppppuVar58[8] = (uint *****)0x0;
      }
      unaff_x21[0xb8] = ppppppuVar25;
      if (bVar10) {
        pppppppuVar17 = (uint *******)0x109e75a78;
        pppppppuVar15 = (uint *******)0x58;
        _qsort(pppppppuStack_590,pppppppuStack_5d0);
      }
      pppppppuVar57 = unaff_x21;
      func_0x000109f6590c(unaff_x21,(long)pppppppuStack_5d0 * 0x28);
      unaff_x21[0xb8][2] = (uint *****)pppppppuVar57;
      if (bVar9) {
        pppppppuVar54 = (uint *******)0x0;
      }
      else {
        uVar29 = 0;
        pppppppuVar57 = pppppppuStack_5d0;
        pppppppuVar52 = pppppppuStack_590;
        do {
          if ((((ulong)pppppppuVar52[8] & 1) == 0) && (*(int *)((long)pppppppuVar52 + 0x3c) == 0)) {
            ppppuVar30 = (*pppppppuVar52[9])[4];
            if (((uint)ppppuVar30 >> 0x1e & 1) != 0) {
              if ((((ulong)ppppuVar30 >> 0x2a & 1) == 0) ||
                 (*(int *)((long)*pppppppuVar52[9] + 0x3c) < 0x20)) {
                pppppppuVar11 = pppppppuVar52;
                func_0x000109e75980();
                uVar18 = (int)pppppppuVar11 + *(int *)(pppppppuVar52 + 5) + 3U >> 2;
              }
              else {
                iVar16 = *(int *)((long)pppppppuVar52 + 0x34);
                lVar21 = 1;
                if (((8 < iVar16 - 0x8f46U) &&
                    ((0x15 < iVar16 - 0x8fe9U ||
                     ((1 << (ulong)(iVar16 - 0x8fe9U & 0x1f) & 0x387007U) == 0)))) &&
                   ((5 < iVar16 - 0x140aU || ((1 << (ulong)(iVar16 - 0x140aU & 0x1f) & 0x31U) == 0))
                   )) {
                  lVar21 = 0;
                }
                uVar18 = *(int *)(pppppppuVar52 + 6) * *(int *)(pppppppuVar52 + 7) *
                         ((*(int *)((long)pppppppuVar52 + 0x2c) << lVar21) + 3U >> 2);
              }
              uVar29 = uVar18 + uVar29;
            }
          }
          pppppppuVar52 = pppppppuVar52 + 0xb;
          pppppppuVar57 = (uint *******)((long)pppppppuVar57 + -1);
        } while (pppppppuVar57 != (uint *******)0x0);
        pppppppuVar54 = (uint *******)((ulong)uVar29 * 0x18);
        pppppppuVar52 = (uint *******)0x0;
      }
      pppppppuVar13 = unaff_x21;
      func_0x000109f6590c();
      uVar18 = (uint)param_8;
      iVar16 = (int)param_7;
      uVar29 = (uint)param_5;
      unaff_x21[0xb8][1] = (uint *****)pppppppuVar13;
      appppppuStack_500[1] = (uint ******)0x0;
      appppppuStack_500[0] = (uint ******)0x0;
      appppppuStack_500[3] = (uint ******)0x0;
      appppppuStack_500[2] = (uint ******)0x0;
      bVar1 = bVar10;
      if (sVar7 != -0x7373) {
        bVar1 = true;
      }
      if (bVar1) {
        if (bVar9) {
          pppppppuVar57 = (uint *******)0x0;
        }
        else {
          pppppppuVar57 = (uint *******)(ulong)*(uint *)(pppppppuStack_590 + 4);
        }
        auStack_554 = (undefined1  [4])0x0;
        appppppuStack_520[1] = (uint ******)0x100000001;
        appppppuStack_520[0] = (uint ******)0x100000001;
        if (bVar10) {
          puVar32 = auStack_554;
          lVar21 = 0x24;
          pcVar26 = (code *)((long)pcVar40 + 0x44);
          do {
            uVar33 = *(uint *)pcVar26;
            if (uVar33 != 0) {
              *puVar32 = 1;
              *(uint *)((long)unaff_x21[0xb8] + lVar21) = uVar33 >> 2;
            }
            lVar21 = lVar21 + 0x10;
            puVar32 = puVar32 + 1;
            pcVar26 = pcVar26 + 4;
          } while (lVar21 != 100);
        }
        if (bVar9) {
          uVar33 = 0;
        }
        else {
          lVar21 = 0;
          uVar33 = 0;
          pppppppuVar55 = (uint *******)0x0;
          pppppppuVar48 = (uint *******)0xffffffff;
          pppppppuVar52 = appppppuStack_520;
          pppppppuVar11 = pppppppuStack_590;
          do {
            uVar18 = (uint)param_8;
            iVar16 = (int)param_7;
            uVar29 = (uint)param_5;
            pppppppuStack_620 = pppppppuVar52;
            if (bVar10) {
              uVar43 = *(uint *)(pppppppuVar11 + 4);
              bVar9 = (uint)pppppppuVar57 != uVar43;
              uVar45 = (uint)pppppppuVar55;
              if (bVar9) {
                uVar45 = uVar45 + 1;
              }
              pppppppuVar55 = (uint *******)(ulong)uVar45;
              uVar45 = (uint)pppppppuVar48;
              if (bVar9) {
                uVar45 = 0xffffffff;
              }
              pppppppuVar48 = (uint *******)(ulong)uVar45;
              pppppppuVar13 = pppppppuStack_590 + lVar21 * 0xb;
              pppppppuVar15 = (uint *******)(ulong)uVar43;
              if (((ulong)pppppppuVar11[8] & 1) != 0) goto LAB_109e72ba8;
LAB_109e72b84:
              pppppppuVar57 = pppppppuVar15;
              if (*(int *)((long)pppppppuVar11 + 0x3c) == 0) {
                uVar45 = *(uint *)(pppppppuVar11 + 10);
                if ((uint)pppppppuVar48 == 0xffffffff) {
                  uVar33 = 1 << (ulong)((uint)pppppppuVar57 & 0x1f) | uVar33;
                  pppppppuVar48 = (uint *******)(ulong)uVar45;
                  goto LAB_109e72c18;
                }
                if ((uint)pppppppuVar48 == uVar45) goto LAB_109e72c18;
                pppppppuVar54 = (uint *******)&UNK_10f60eb8c;
                pppppppuVar15 = (uint *******)pcVar40;
                pppppppuStack_620 = (uint *******)*pppppppuVar13;
                pppppppuStack_618 = (uint *******)(ulong)uVar45;
LAB_109e72d18:
                func_0x000109eb844c();
                pppppppuVar13 = (uint *******)pcVar40;
              }
              else {
LAB_109e72c18:
                pppppppuVar17 = (uint *******)unaff_x21[0xb8];
                pppppppuStack_618 = (uint *******)(ulong)bVar10;
                param_7 = appppppuStack_500;
                param_8 = (uint *******)auStack_554;
                pppppppuVar54 = param_1;
                pppppppuVar15 = (uint *******)pcVar40;
                param_5 = pppppppuVar57;
                param_6 = pppppppuVar55;
                FUN_109e75a9c();
                uVar18 = (uint)param_8;
                iVar16 = (int)param_7;
                uVar29 = (uint)param_5;
                if ((int)pppppppuVar13 != 0) goto LAB_109e72c48;
              }
              goto LAB_109e72d1c;
            }
            pppppppuVar13 = pppppppuVar11;
            pppppppuVar15 = pppppppuVar55;
            if (*(code *)(pppppppuVar11 + 8) != (code)0x1) goto LAB_109e72b84;
LAB_109e72ba8:
            pppppppuVar17 = (uint *******)unaff_x21[0xb8];
            pppppppuStack_618 = (uint *******)(ulong)bVar10;
            param_7 = appppppuStack_500;
            param_8 = (uint *******)auStack_554;
            pppppppuVar54 = param_1;
            pppppppuVar15 = (uint *******)pcVar40;
            param_5 = pppppppuVar57;
            param_6 = pppppppuVar55;
            FUN_109e75a9c();
            uVar18 = (uint)param_8;
            iVar16 = (int)param_7;
            uVar29 = (uint)param_5;
            if ((int)pppppppuVar13 == 0) goto LAB_109e72d1c;
            pppppppuVar55 = (uint *******)(ulong)((int)pppppppuVar55 + 1);
            pppppppuVar48 = (uint *******)0xffffffff;
LAB_109e72c48:
            pppppppuStack_618 = (uint *******)(ulong)bVar10;
            uVar18 = (uint)param_8;
            iVar16 = (int)param_7;
            uVar29 = (uint)param_5;
            lVar21 = lVar21 + 1;
            pppppppuVar11 = pppppppuVar11 + 0xb;
            pppppppuStack_5d0 = (uint *******)((long)pppppppuStack_5d0 + -1);
          } while (pppppppuStack_5d0 != (uint *******)0x0);
        }
      }
      else if (bVar9) {
        uVar33 = 0;
      }
      else {
        pppppppuVar57 = (uint *******)0x0;
        uVar33 = 0;
        do {
          pppppppuVar17 = (uint *******)unaff_x21[0xb8];
          pppppppuStack_618 = (uint *******)0x0;
          iVar16 = (int)appppppuStack_500;
          pppppppuStack_620 = (uint *******)0x0;
          uVar18 = 0;
          pppppppuVar13 = pppppppuStack_590;
          pppppppuVar54 = param_1;
          pppppppuVar15 = (uint *******)pcVar40;
          pppppppuVar11 = pppppppuVar57;
          param_6 = pppppppuVar57;
          FUN_109e75a9c();
          uVar29 = (uint)pppppppuVar11;
          if ((int)pppppppuVar13 == 0) goto LAB_109e72d1c;
          uVar33 = 1 << (ulong)((uint)pppppppuVar57 & 0x1f) | uVar33;
          pppppppuVar57 = (uint *******)((long)pppppppuVar57 + 1);
          pppppppuStack_590 = pppppppuStack_590 + 0xb;
        } while (pppppppuStack_5d0 != pppppppuVar57);
      }
      *(uint *)((long)unaff_x21[0xb8] + 4) = uVar33;
    }
    if (*(int *)((long)*(uint *******)((long)pcVar40 + 0x68) + 0x114) != 0) goto LAB_109e7193c;
  }
  else {
    pppppppuStack_5d0 = (uint *******)0x0;
    pppppppuVar54 = (uint *******)*unaff_x21;
    pppppppuVar13 = unaff_x21;
    do {
      unaff_x21 = pppppppuVar54;
      if (((byte)*(code *)(pppppppuVar13 + 4) >> 3 & 1) != 0) {
        if (((uint)*(ulong *)((long)pppppppuVar13 + 0x2c) >> 6 & 1) == 0) {
          bVar10 = (bool)((*(ulong *)((long)pppppppuVar13 + 0x2c) & 0x30) != 0 | bVar10);
        }
        else {
          iVar16 = (int)pppppppuVar13[2];
          func_0x000109ec8978();
          pppppppuStack_5d0 = (uint *******)(ulong)(uint)(iVar16 + (int)pppppppuStack_5d0);
          bVar10 = true;
        }
      }
      pppppppuVar54 = (uint *******)*unaff_x21;
      pppppppuVar13 = unaff_x21;
    } while ((uint *******)*unaff_x21 != (uint *******)0x0);
    if ((int)pppppppuStack_5d0 == 0) {
      if (bVar10) {
        pppppppuStack_5d0 = (uint *******)0x0;
        pppppppuStack_590 = (uint *******)0x0;
        bVar10 = true;
        bVar9 = true;
        goto LAB_109e71ec0;
      }
      goto LAB_109e71c38;
    }
    appppppuStack_500[0] = (uint ******)((ulong)appppppuStack_500[0] & 0xffffffff00000000);
    pppppppuVar11 = pppppppuVar44;
    func_0x000109f658b0(pppppppuVar44,(long)pppppppuStack_5d0 << 3);
    pppuVar51 = ppppppuVar58[5][0x2c][1];
    pppppppuStack_560 = pppppppuVar11;
    for (pppuVar59 = (uint ***)*ppppppuVar58[5][0x2c][1]; pppuVar59 != (uint ***)0x0;
        pppuVar59 = (uint ***)*pppuVar59) {
      if (((*(byte *)(pppuVar51 + 4) >> 3 & 1) != 0) &&
         (uVar29 = (uint)*(undefined8 *)((long)pppuVar51 + 0x2c), (uVar29 >> 6 & 1) != 0)) {
        if ((uVar29 >> 9 & 1) == 0) {
          param_7 = (uint *******)0x0;
          unaff_x21 = (uint *******)pppuVar51[2];
          pppppppuVar15 = (uint *******)pppuVar51[3];
        }
        else {
          unaff_x21 = (uint *******)pppuVar51[0x11];
          cVar28 = *(code *)((long)unaff_x21 + 4);
          pppppppuVar52 = unaff_x21;
          while (cVar28 == (code)0x13) {
            pppppppuVar52 = (uint *******)pppppppuVar52[6];
            cVar28 = *(code *)((long)pppppppuVar52 + 4);
          }
          pppppppuVar15 = pppppppuVar52;
          FUN_109ec85e4(pppppppuVar52,pppuVar51[3]);
          param_7 = (uint *******)pppppppuVar52[6][((ulong)pppppppuVar15 & 0xffffffff) * 6];
          if (((byte)*(code *)((long)pppppppuVar52 + 0xc) >> 1 & 1) == 0) {
            pppppppuVar15 = pppppppuVar52;
            func_0x000109eca058(pppppppuVar52);
          }
          else {
            pppppppuVar15 = (uint *******)(&UNK_10e05bf38 + (long)pppppppuVar52[3]);
          }
        }
        pppppppuVar17 = (uint *******)0x0;
        func_0x000109f65c2c(0,pppppppuVar15);
        apppppppuStack_550[0] = pppppppuVar17;
        _strlen();
        param_6 = (uint *******)pppuVar51[3];
        pppppppuVar15 = (uint *******)apppppppuStack_550;
        param_5 = appppppuStack_500;
        param_8 = (uint *******)&pppppppuStack_560;
        func_0x000109e749f0(pppppppuVar44,unaff_x21);
        if (apppppppuStack_550[0] != (uint *******)0x0) {
          unaff_x21 = apppppppuStack_550[0] + -6;
          FUN_109f65aa4(unaff_x21);
          FUN_109f65ae0(unaff_x21);
        }
        pppuVar59 = (uint ***)*pppuVar51;
      }
      pppuVar51 = pppuVar59;
    }
    if (!bVar10) goto LAB_109e71c38;
    bVar10 = true;
LAB_109e71c48:
    uVar18 = (uint)param_8;
    iVar16 = (int)param_7;
    uVar29 = (uint)param_5;
    if ((int)pppppppuStack_5d0 == 0) {
      pppppppuStack_5d0 = (uint *******)0x0;
      pppppppuStack_590 = (uint *******)0x0;
      bVar9 = true;
      pppppppuVar11 = pppppppuVar52;
      goto LAB_109e71ec0;
    }
    if (uVar45 < 4) {
      pppppppuStack_590 = pppppppuVar44;
      func_0x000109f6590c(pppppppuVar44,(long)pppppppuStack_5d0 * 0x58);
      pppppppuVar11 = pppppppuStack_560;
      pppppppuVar52 = (uint *******)0x0;
      bVar9 = false;
      do {
        pppppppuVar13 = pppppppuStack_590 + (long)pppppppuVar52 * 0xb;
        pppppppuVar54 = (uint *******)pppppppuVar11[(long)pppppppuVar52];
        *pppppppuVar13 = (uint ******)pppppppuVar54;
        *(undefined4 *)((long)pppppppuVar13 + 0x3c) = 0;
        *(code *)(pppppppuVar13 + 8) = (code)0x0;
        pppppppuVar13[9] = (uint ******)0x0;
        *(undefined4 *)(pppppppuVar13 + 10) = 0;
        pppppppuVar13[4] = (uint ******)0x0;
        pppppppuVar13[3] = (uint ******)0xffffffff00000000;
        if (*(code *)((long)param_2 + 0x6b) == (code)0x0) {
LAB_109e71d60:
          pppppppuVar15 = pppppppuVar54;
          _strlen(pppppppuVar54);
          unaff_x21 = pppppppuVar54;
          FUN_109eb850c(pppppppuVar54,pppppppuVar15,apppppppuStack_550);
          pppppppuVar15 = (uint *******)((long)apppppppuStack_550[0] - (long)pppppppuVar54);
          pppppppuVar48 = pppppppuVar44;
          func_0x000109f65c90(pppppppuVar44,pppppppuVar54);
          pppppppuVar13[1] = (uint ******)pppppppuVar48;
          if (pppppppuVar48 == (uint *******)0x0) {
            FUN_109f6116c(&UNK_10f60e84b);
          }
          else {
            if (-1 < (long)unaff_x21) {
              *(int *)((long)pppppppuVar13 + 0x14) = (int)unaff_x21;
            }
            *(bool *)(pppppppuVar13 + 2) = -1 < (long)unaff_x21;
            if ((bVar5 & 1) == 0) {
              pppppppuVar54 = pppppppuVar48;
              _strcmp(pppppppuVar48,&UNK_10f60d67f);
              if ((int)pppppppuVar54 == 0) {
                *(undefined4 *)(pppppppuVar13 + 3) = 1;
              }
              _strcmp(pppppppuVar48,&UNK_10f60d68f);
              if ((int)pppppppuVar48 == 0) {
                *(undefined4 *)(pppppppuVar13 + 3) = 2;
              }
            }
          }
          if (((((ulong)pppppppuVar13[8] & 1) == 0) && (pppppppuVar52 != (uint *******)0x0)) &&
             (pppppppuVar54 = pppppppuVar52, pppppppuVar48 = pppppppuStack_590 + 8,
             *(int *)((long)pppppppuVar13 + 0x3c) == 0)) {
            do {
              unaff_x21 = pppppppuVar48 + 0xb;
              if ((((ulong)*pppppppuVar48 & 1) == 0) && (*(int *)((long)pppppppuVar48 + -4) == 0)) {
                ppppppuVar58 = pppppppuVar13[1];
                _strcmp(ppppppuVar58,pppppppuVar48[-7]);
                if ((((int)ppppppuVar58 == 0) &&
                    (*(code *)(pppppppuVar13 + 2) == *(code *)(pppppppuVar48 + -6))) &&
                   ((*(code *)(pppppppuVar13 + 2) == (code)0x0 ||
                    (*(int *)((long)pppppppuVar13 + 0x14) == *(int *)((long)pppppppuVar48 + -0x2c)))
                   )) {
                  pppppppuStack_620 = (uint *******)pppppppuVar11[(long)pppppppuVar52];
                  pppppppuVar54 = (uint *******)&UNK_10f60e7b9;
                  pppppppuVar13 = (uint *******)pcVar40;
                  func_0x000109eb844c();
                  uVar18 = (uint)param_8;
                  iVar16 = (int)param_7;
                  uVar29 = (uint)param_5;
                  if (!bVar9) goto LAB_109e71c68;
                  bVar9 = false;
                  pppppppuVar11 = pppppppuVar52;
                  goto LAB_109e71ec0;
                }
              }
              pppppppuVar54 = (uint *******)((long)pppppppuVar54 + -1);
              pppppppuVar48 = unaff_x21;
            } while (pppppppuVar54 != (uint *******)0x0);
          }
        }
        else {
          pppppppuVar15 = pppppppuVar54;
          _strcmp(pppppppuVar54,&UNK_10f60e7f1);
          if ((int)pppppppuVar15 == 0) {
            *(code *)(pppppppuVar13 + 8) = (code)0x1;
          }
          else {
            pppppppuVar15 = pppppppuVar54;
            _strcmp(pppppppuVar54,&UNK_10f60e7ff);
            if ((int)pppppppuVar15 == 0) {
              uVar34 = 1;
            }
            else {
              pppppppuVar15 = pppppppuVar54;
              _strcmp(pppppppuVar54,&UNK_10f60e812);
              if ((int)pppppppuVar15 == 0) {
                uVar34 = 2;
              }
              else {
                pppppppuVar15 = pppppppuVar54;
                _strcmp(pppppppuVar54,&UNK_10f60e825);
                if ((int)pppppppuVar15 == 0) {
                  uVar34 = 3;
                }
                else {
                  pppppppuVar15 = pppppppuVar54;
                  _strcmp(pppppppuVar54,&UNK_10f60e838);
                  if ((int)pppppppuVar15 != 0) goto LAB_109e71d60;
                  uVar34 = 4;
                }
              }
            }
            *(undefined4 *)((long)pppppppuVar13 + 0x3c) = uVar34;
          }
        }
        pppppppuVar52 = (uint *******)((long)pppppppuVar52 + 1);
        bVar9 = pppppppuStack_5d0 <= pppppppuVar52;
      } while (pppppppuVar52 != pppppppuStack_5d0);
      bVar9 = false;
      pppppppuVar11 = pppppppuVar52;
      goto LAB_109e71ec0;
    }
    pppppppuVar54 = (uint *******)&UNK_10f60e755;
    func_0x000109eb844c();
    pppppppuVar13 = (uint *******)pcVar40;
  }
LAB_109e71c68:
  uVar31 = 0;
LAB_109e72d24:
  uVar33 = (uint)pppppppuVar52;
  if (pppppppuVar44 != (uint *******)0x0) {
    pppppppuVar13 = pppppppuVar44 + -6;
    FUN_109f65aa4(pppppppuVar13);
    FUN_109f65ae0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e0) {
    return uVar31;
  }
  ___stack_chk_fail();
  uVar43 = (uint)pppppppuVar15;
  uVar45 = (uint)pppppppuVar17;
  while( true ) {
    uVar49 = *(uint *)((long)param_6 + 4);
    if ((uVar49 & 0xff) != 0x13) break;
    param_6 = (uint *******)param_6[6];
  }
  if ((0xf < (uVar49 & 0xff)) || ((0xefe3U >> ((ulong)uVar49 & 0xf) & 1) == 0)) {
    if ((uVar49 & 0xff) != 0x11) {
      cVar28 = (code)0x0;
      goto LAB_109e72e14;
    }
    cVar28 = (code)0x0;
    iVar42 = 0;
    uVar35 = 4;
    uVar49 = 1;
    goto LAB_109e72e98;
  }
  cVar28 = (code)0x1;
LAB_109e72e14:
  if ((uVar49 - 4 & 0xff) < 0xc) {
    uVar35 = *(uint *)(&UNK_10e061b58 + ((ulong)(uVar49 - 4) & 0xff) * 4);
  }
  else {
    uVar35 = 0;
  }
  uVar35 = ((uint)(byte)*(code *)((long)param_6 + 0xd) << (ulong)(uVar35 & 0x1f)) + uVar45;
  iVar42 = 1;
  uVar27 = (ulong)uVar49 & 0xff;
  uVar49 = 0;
  puVar38 = &UNK_10e061b00;
  uVar39 = (ulong)(byte)(&UNK_10e061b00)[uVar27];
  uVar31 = uVar39 * 4 + 0x109e72e6c;
  uVar19 = extraout_x15;
  pcVar40 = extraout_x16;
  uVar41 = extraout_w17;
  switch(uVar27) {
  case 0:
  case 1:
  case 2:
  case 0xc:
  case 0x15:
  case 0x30:
  case 0x34:
  case 0x38:
  case 0x44:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x91:
  case 0x18:
  case 0x3c:
  case 0x40:
  case 0x48:
  case 0x4c:
  case 0x8f:
  case 0x90:
  case 0x92:
  case 0x93:
  case 0xf0:
  case 0xf4:
  case 0xf8:
    uVar49 = 0;
    iVar42 = 0x20;
    break;
  case 3:
  case 7:
  case 8:
  case 0x50:
  case 0x54:
  case 0x94:
  case 0x95:
    iVar42 = 0x10;
  case 0x1c:
  case 0xac:
  case 0xb0:
    uVar49 = 0;
    break;
  default:
  case 0x20:
  case 0x58:
  case 0x6c:
  case 0x70:
  case 0x7c:
  case 0x80:
  case 0x84:
  case 0x88:
  case 0xc4:
    iVar42 = 0x40;
  case 0x24:
  case 0x28:
  case 0x2c:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0xfc:
    uVar49 = 0;
    break;
  case 5:
  case 6:
    uVar49 = 0;
    iVar42 = 8;
    break;
  case 0xb:
    break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
                    /* WARNING: Does not return */
    pcVar40 = (code *)SoftwareBreakpoint(1,0x109e73160);
    (*pcVar40)();
  case 0x98:
  case 0x9c:
  case 0xa0:
  case 200:
  case 0xec:
    goto code_r0x000109e72eec;
  case 0xa4:
  case 0xb4:
  case 0xb8:
    goto code_r0x000109e72eac;
  case 0xa8:
  case 0xbc:
  case 0xc0:
  case 0xcc:
  case 0xd0:
  case 0xd4:
    goto code_r0x000109e72f6c;
  }
LAB_109e72e98:
  if (uVar43 < uVar29) {
    pppppppuVar52 = (uint *******)0x0;
    unaff_x21 = pppppppuStack_618;
code_r0x000109e72eac:
    puVar38 = (undefined *)((ulong)pppppppuStack_620 & 0xff);
    uVar31 = 0x60;
    uVar39 = 0x18;
    uVar19 = (ulong)pppppppuStack_620 >> 8 & 0xff;
    do {
      do {
        uVar43 = (uint)pppppppuVar15;
        uVar33 = (uint)pppppppuVar52;
        uVar45 = (uint)pppppppuVar17;
        pcVar40 = (code *)((long)pppppppuVar13 +
                          ((ulong)pppppppuVar52 & 0xffffffff) * uVar39 +
                          ((ulong)pppppppuVar15 & 0xffffffff) * (uVar31 & 0xffffffff));
        if (*(long *)pcVar40 == 0) {
          if ((uVar45 <= uVar33) && (uVar33 < uVar35)) {
            *(uint ********)pcVar40 = pppppppuVar54;
            pcVar40[8] = cVar28;
            *(int *)(pcVar40 + 0xc) = iVar42;
            *(int *)(pcVar40 + 0x10) = iVar16;
code_r0x000109e72f6c:
            pcVar40[0x14] = SUB41(uVar18,0);
            pcVar40[0x15] = SUB81(puVar38,0);
            pcVar40[0x16] = SUB81(uVar19,0);
          }
        }
        else {
          for (lVar21 = *(long *)(*(long *)pcVar40 + 0x10); *(char *)(lVar21 + 4) == '\x13';
              lVar21 = *(long *)(lVar21 + 0x30)) {
          }
          uVar41 = (uint)(*(char *)(lVar21 + 4) != '\x11');
code_r0x000109e72eec:
          if ((uVar41 & (uVar49 ^ 0xffffffff) & 1) == 0) {
            func_0x000109f47670();
            puVar38 = &UNK_10f60dfb6;
LAB_109e73138:
            func_0x000109eb844c(unaff_x21,puVar38);
            return 0;
          }
          if ((uVar45 <= uVar33) && (uVar33 < uVar35)) {
            func_0x000109f47670();
            puVar38 = &UNK_10f60e045;
            goto LAB_109e73138;
          }
          if (pcVar40[8] != cVar28) {
            func_0x000109f47670();
            puVar38 = &UNK_10f60e098;
            goto LAB_109e73138;
          }
          if (*(int *)(pcVar40 + 0xc) != iVar42) {
            func_0x000109f47670();
            puVar38 = &UNK_10f60e11f;
            goto LAB_109e73138;
          }
          if (*(int *)(pcVar40 + 0x10) != iVar16) {
            func_0x000109f47670();
            puVar38 = &UNK_10f60e1aa;
            goto LAB_109e73138;
          }
          if ((((byte)pcVar40[0x14] != uVar18) || ((uint)(byte)pcVar40[0x15] != (uint)puVar38)) ||
             ((uint)(byte)pcVar40[0x16] != (uint)uVar19)) {
            func_0x000109f47670();
            puVar38 = &UNK_10f60e233;
            goto LAB_109e73138;
          }
        }
        uVar41 = uVar43;
        uVar3 = uVar45;
        uVar8 = uVar35;
        if (4 < uVar35) {
          uVar3 = 0;
          uVar41 = uVar43 + 1;
          uVar8 = uVar35 - 4;
        }
        uVar4 = 0;
        if (4 >= uVar35) {
          uVar4 = uVar33 + 1;
        }
        bVar10 = uVar33 == 3;
        if (bVar10) {
          uVar45 = uVar3;
          uVar35 = uVar8;
        }
        pppppppuVar17 = (uint *******)(ulong)uVar45;
        if (bVar10) {
          uVar43 = uVar41;
        }
        pppppppuVar15 = (uint *******)(ulong)uVar43;
        if (!bVar10) {
          uVar4 = uVar33 + 1;
        }
        pppppppuVar52 = (uint *******)(ulong)uVar4;
      } while (uVar4 < 4);
      pppppppuVar52 = (uint *******)0x0;
      pppppppuVar15 = (uint *******)(ulong)(uVar43 + 1);
    } while (uVar43 + 1 < uVar29);
  }
  return 1;
}



/* Entry: 109e72d98; end: 109e7315f;  */

undefined8
FUN_109e72d98(long param_1,long param_2,uint param_3,uint param_4,uint param_5,long param_6,
             int param_7,uint param_8,uint param_9,undefined4 param_10,undefined8 param_11)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint in_w15;
  long *in_x16;
  byte in_w17;
  long lVar14;
  undefined8 unaff_x21;
  byte bVar15;
  uint unaff_w23;
  
  while( true ) {
    uVar11 = *(uint *)(param_6 + 4);
    if ((uVar11 & 0xff) != 0x13) break;
    param_6 = *(long *)(param_6 + 0x30);
  }
  if ((0xf < (uVar11 & 0xff)) || ((0xefe3U >> ((ulong)uVar11 & 0xf) & 1) == 0)) {
    if ((uVar11 & 0xff) != 0x11) {
      cVar8 = '\0';
      goto LAB_109e72e14;
    }
    cVar8 = '\0';
    iVar10 = 0;
    uVar9 = 4;
    bVar15 = 1;
    goto LAB_109e72e98;
  }
  cVar8 = '\x01';
LAB_109e72e14:
  if ((uVar11 - 4 & 0xff) < 0xc) {
    uVar9 = *(uint *)(&UNK_10e061b58 + ((ulong)(uVar11 - 4) & 0xff) * 4);
  }
  else {
    uVar9 = 0;
  }
  uVar9 = ((uint)*(byte *)(param_6 + 0xd) << (ulong)(uVar9 & 0x1f)) + param_4;
  iVar10 = 1;
  uVar7 = (ulong)uVar11 & 0xff;
  bVar15 = 0;
  uVar11 = 0xe061b00;
  uVar13 = (ulong)(byte)(&UNK_10e061b00)[uVar7];
  uVar12 = uVar13 * 4 + 0x109e72e6c;
  switch(uVar7) {
  case 0:
  case 1:
  case 2:
  case 0xc:
  case 0x15:
  case 0x30:
  case 0x34:
  case 0x38:
  case 0x44:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x91:
  case 0x18:
  case 0x3c:
  case 0x40:
  case 0x48:
  case 0x4c:
  case 0x8f:
  case 0x90:
  case 0x92:
  case 0x93:
  case 0xf0:
  case 0xf4:
  case 0xf8:
    bVar15 = 0;
    iVar10 = 0x20;
    break;
  case 3:
  case 7:
  case 8:
  case 0x50:
  case 0x54:
  case 0x94:
  case 0x95:
    iVar10 = 0x10;
  case 0x1c:
  case 0xac:
  case 0xb0:
    bVar15 = 0;
    break;
  default:
  case 0x20:
  case 0x58:
  case 0x6c:
  case 0x70:
  case 0x7c:
  case 0x80:
  case 0x84:
  case 0x88:
  case 0xc4:
    iVar10 = 0x40;
  case 0x24:
  case 0x28:
  case 0x2c:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0xfc:
    bVar15 = 0;
    break;
  case 5:
  case 6:
    bVar15 = 0;
    iVar10 = 8;
    break;
  case 0xb:
    break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109e73160);
    (*pcVar5)();
  case 0x98:
  case 0x9c:
  case 0xa0:
  case 200:
  case 0xec:
    goto code_r0x000109e72eec;
  case 0xa4:
  case 0xb4:
  case 0xb8:
    goto code_r0x000109e72eac;
  case 0xa8:
  case 0xbc:
  case 0xc0:
  case 0xcc:
  case 0xd0:
  case 0xd4:
    goto code_r0x000109e72f6c;
  }
LAB_109e72e98:
  if (param_3 < param_5) {
    unaff_w23 = 0;
    unaff_x21 = param_11;
code_r0x000109e72eac:
    uVar11 = param_9 & 0xff;
    uVar12 = 0x60;
    uVar13 = 0x18;
    in_w15 = param_9 >> 8 & 0xff;
    do {
      do {
        in_x16 = (long *)(param_1 + (ulong)param_3 * (uVar12 & 0xffffffff) + unaff_w23 * uVar13);
        if (*in_x16 == 0) {
          if ((param_4 <= unaff_w23) && (unaff_w23 < uVar9)) {
            *in_x16 = param_2;
            *(char *)(in_x16 + 1) = cVar8;
            *(int *)((long)in_x16 + 0xc) = iVar10;
            *(int *)(in_x16 + 2) = param_7;
code_r0x000109e72f6c:
            *(char *)((long)in_x16 + 0x14) = (char)param_8;
            *(char *)((long)in_x16 + 0x15) = (char)uVar11;
            *(char *)((long)in_x16 + 0x16) = (char)in_w15;
          }
        }
        else {
          for (lVar14 = *(long *)(*in_x16 + 0x10); *(char *)(lVar14 + 4) == '\x13';
              lVar14 = *(long *)(lVar14 + 0x30)) {
          }
          in_w17 = *(char *)(lVar14 + 4) != '\x11';
code_r0x000109e72eec:
          if ((in_w17 & (bVar15 ^ 0xff) & 1) == 0) {
            func_0x000109f47670();
            puVar6 = &UNK_10f60dfb6;
LAB_109e73138:
            func_0x000109eb844c(unaff_x21,puVar6);
            return 0;
          }
          if ((param_4 <= unaff_w23) && (unaff_w23 < uVar9)) {
            func_0x000109f47670();
            puVar6 = &UNK_10f60e045;
            goto LAB_109e73138;
          }
          if ((char)in_x16[1] != cVar8) {
            func_0x000109f47670();
            puVar6 = &UNK_10f60e098;
            goto LAB_109e73138;
          }
          if (*(int *)((long)in_x16 + 0xc) != iVar10) {
            func_0x000109f47670();
            puVar6 = &UNK_10f60e11f;
            goto LAB_109e73138;
          }
          if ((int)in_x16[2] != param_7) {
            func_0x000109f47670();
            puVar6 = &UNK_10f60e1aa;
            goto LAB_109e73138;
          }
          if (((*(byte *)((long)in_x16 + 0x14) != param_8) ||
              (*(byte *)((long)in_x16 + 0x15) != uVar11)) ||
             (*(byte *)((long)in_x16 + 0x16) != in_w15)) {
            func_0x000109f47670();
            puVar6 = &UNK_10f60e233;
            goto LAB_109e73138;
          }
        }
        uVar1 = param_3;
        uVar2 = param_4;
        uVar4 = uVar9;
        if (4 < uVar9) {
          uVar2 = 0;
          uVar1 = param_3 + 1;
          uVar4 = uVar9 - 4;
        }
        uVar3 = 0;
        if (4 >= uVar9) {
          uVar3 = unaff_w23 + 1;
        }
        if (unaff_w23 != 3) {
          uVar3 = unaff_w23 + 1;
          uVar1 = param_3;
          uVar2 = param_4;
          uVar4 = uVar9;
        }
        uVar9 = uVar4;
        param_4 = uVar2;
        param_3 = uVar1;
        unaff_w23 = uVar3;
      } while (uVar3 < 4);
      unaff_w23 = 0;
      param_3 = param_3 + 1;
    } while (param_3 < param_5);
  }
  return 1;
}



/* Entry: 109e73160; end: 109e73183;  */

int FUN_109e73160(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 - *param_1;
  if (iVar1 == 0) {
    iVar1 = param_1[1] - param_2[1];
  }
  return iVar1;
}



/* Entry: 109e73184; end: 109e739ef;  */

void FUN_109e73184(long param_1,undefined8 param_2,code *param_3,long param_4,code *param_5,
                  int *param_6,uint param_7,long param_8,code *param_9)

{
  long *plVar1;
  code cVar2;
  uint uVar3;
  byte bVar4;
  long *plVar5;
  code *pcVar6;
  code *pcVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined *puVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  code *pcVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  bool bVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  code *pcVar27;
  long *plVar28;
  code *pcVar29;
  undefined8 *puVar30;
  long lVar31;
  int iVar32;
  code *unaff_x23;
  code *pcVar33;
  code *pcVar34;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  long lStack_458;
  code *pcStack_450;
  code *pcStack_448;
  code *pcStack_440;
  code *pcStack_438;
  code *pcStack_430;
  code *pcStack_428;
  undefined8 *puStack_420;
  code *pcStack_418;
  code *pcStack_410;
  code *pcStack_408;
  undefined1 *puStack_400;
  code *pcStack_3f8;
  undefined *puStack_3f0;
  ulong uStack_3e8;
  code *pcStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  uint uStack_3bc;
  int *piStack_3b8;
  code *pcStack_3b0;
  long lStack_3a8;
  code *pcStack_3a0;
  code *pcStack_398;
  undefined4 uStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 auStack_370 [96];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_5 == (code *)0x0) {
    uVar16 = 0xffffffff;
  }
  else {
    uVar16 = *(undefined4 *)param_5;
  }
  if (param_6 == (int *)0x0) {
    iVar32 = -1;
  }
  else {
    iVar32 = *param_6;
  }
  lStack_3d0 = param_1;
  lStack_3c8 = param_8;
  uStack_3bc = param_7;
  lStack_3a8 = param_4;
  FUN_109e74bf8(param_3,param_9,param_1,param_2,uVar16,iVar32,*(char *)(param_4 + 0x17) != '\0');
  pcVar29 = FUN_109f65668;
  pcVar14 = param_3;
  FUN_109f64c74(param_3,FUN_109f65518,FUN_109f65668);
  pcVar6 = param_3;
  pcStack_3b0 = pcVar14;
  FUN_109f64c74(param_3,FUN_109f65518,FUN_109f65668);
  pcVar7 = param_3;
  pcVar33 = pcVar29;
  FUN_109f64c74(param_3,FUN_109f65518);
  pcVar14 = (code *)0x300;
  _bzero(auStack_370);
  puVar30 = (undefined8 *)0x0;
  piStack_3b8 = param_6;
  if (param_6 != (int *)0x0) {
    lVar25 = *(long *)(*(long *)(param_6 + 10) + 0x160);
    puVar30 = auStack_370;
    pcVar14 = (code *)0x300;
    _bzero(auStack_370);
    plVar26 = *(long **)(lVar25 + 8);
    if (*plVar26 != 0) {
      pcVar29 = (code *)&UNK_10f518dd3;
      do {
        if (((uint)plVar26[4] >> 2 & 1) != 0) {
          if (((ulong)plVar26[4] >> 0x2a & 1) == 0) {
            puVar8 = (undefined *)plVar26[0x11];
            unaff_x23 = param_3;
            if (puVar8 == (undefined *)0x0) {
              FUN_109f65c2c(param_3,plVar26[3]);
              pcVar14 = unaff_x23;
              (**(code **)(pcVar6 + 8))();
              pcVar34 = pcVar6;
            }
            else {
              for (; puVar8[4] == '\x13'; puVar8 = *(undefined **)(puVar8 + 0x30)) {
              }
              if (((byte)puVar8[0xc] >> 1 & 1) == 0) {
                FUN_109eca058();
              }
              else {
                puVar8 = &UNK_10e05bf38 + *(long *)(puVar8 + 0x18);
              }
              uStack_3e8 = plVar26[3];
              puStack_3f0 = puVar8;
              FUN_109f65d74(param_3,&UNK_10f518dd3);
              pcVar14 = unaff_x23;
              (**(code **)(pcVar7 + 8))();
              pcVar34 = pcVar7;
            }
            pcVar33 = unaff_x23;
            func_0x000109f650c0(pcVar34,pcVar14,unaff_x23,plVar26);
          }
          else {
            puVar30[*(int *)((long)plVar26 + 0x3c)] = plVar26;
          }
        }
        plVar26 = (long *)*plVar26;
      } while (*plVar26 != 0);
    }
  }
  uVar17 = uStack_3bc;
  if (param_5 == (code *)0x0) {
    plVar26 = *(long **)(*(long *)(*(long *)(piStack_3b8 + 10) + 0x160) + 8);
    for (plVar24 = (long *)*plVar26; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
      if ((*(byte *)(plVar26 + 4) >> 2 & 1) != 0) {
        pcVar33 = (code *)0x0;
        pcVar14 = param_9;
        FUN_109e750ac(param_3,param_9,0,plVar26);
        plVar24 = (long *)*plVar26;
      }
      plVar26 = plVar24;
    }
  }
  else {
    pcVar27 = *(code **)(*(long *)(*(long *)(param_5 + 0x28) + 0x160) + 8);
    pcVar34 = (code *)(ulong)uStack_3bc;
    lVar25 = *(long *)pcVar27;
    while (lVar25 != 0) {
      if (((uint)*(undefined8 *)(pcVar27 + 0x20) >> 3 & 1) != 0) {
        if ((uVar17 != 0) && ((*(char *)(lStack_3a8 + 0xa5) != '\x01' || (*(int *)param_5 != 1)))) {
          uVar18 = *(ulong *)(pcVar27 + 0x2c) & 0x200;
          lVar25 = 0x10;
          if (uVar18 != 0) {
            lVar25 = 0x88;
          }
          pcVar29 = *(code **)(pcVar27 + lVar25);
          if ((((uint)*(undefined8 *)(pcVar27 + 0x20) >> 0x18 & 1) == 0) && (*(int *)param_5 == 1))
          {
            func_0x000109eca118();
            uVar18 = *(ulong *)(pcVar27 + 0x2c) & 0x200;
          }
          cVar2 = pcVar29[4];
          puVar30 = (undefined8 *)(ulong)(byte)cVar2;
          if (uVar18 == 0) {
            unaff_x23 = (code *)0x0;
          }
          else {
            pcVar14 = pcVar29;
            pcVar33 = pcVar29;
            if (cVar2 == (code)0x13) {
              do {
                pcVar33 = *(code **)(pcVar33 + 0x30);
              } while (pcVar33[4] == (code)0x13);
              do {
                pcVar14 = *(code **)(pcVar14 + 0x30);
              } while (pcVar14[4] == (code)0x13);
            }
            FUN_109ec85e4(pcVar14,*(undefined8 *)(pcVar27 + 0x18));
            unaff_x23 = (code *)(*(long *)(pcVar33 + 0x30) + ((ulong)pcVar14 & 0xffffffff) * 0x30);
          }
          if (cVar2 == (code)0x11) {
LAB_109e7347c:
            pcVar29 = *(code **)(pcVar27 + 0x10);
LAB_109e73480:
            pcVar14 = *(code **)(pcVar27 + 0x18);
          }
          else {
            pcVar14 = pcVar29;
            if (cVar2 == (code)0x13) {
              do {
                cVar2 = (*(code **)(pcVar14 + 0x30))[4];
                pcVar14 = *(code **)(pcVar14 + 0x30);
              } while (cVar2 == (code)0x13);
              if ((cVar2 == (code)0x11) ||
                 (pcVar14 = pcVar29, func_0x000109eca118(), pcVar14[4] == (code)0x13))
              goto LAB_109e7347c;
              puVar30 = (undefined8 *)(ulong)*(uint *)(pcVar29 + 4);
            }
            uVar3 = (uint)puVar30 & 0xff;
            pcVar14 = pcVar29;
            if (uVar3 != 0x12) {
              pcVar33 = pcVar29;
              if (uVar3 == 0x13) {
                do {
                  cVar2 = (*(code **)(pcVar33 + 0x30))[4];
                  pcVar33 = *(code **)(pcVar33 + 0x30);
                } while (cVar2 == (code)0x13);
                if (cVar2 == (code)0x12) {
                  do {
                    pcVar14 = *(code **)(pcVar14 + 0x30);
                  } while (pcVar14[4] == (code)0x13);
                  goto LAB_109e735ac;
                }
              }
              goto LAB_109e73480;
            }
LAB_109e735ac:
            if (((byte)pcVar14[0xc] >> 1 & 1) == 0) {
              FUN_109eca058();
            }
            else {
              pcVar14 = (code *)(&UNK_10e05bf38 + *(long *)(pcVar14 + 0x18));
            }
          }
          lVar25 = 0;
          FUN_109f65c2c(0,pcVar14);
          uStack_380 = 0;
          pcStack_398 = pcStack_3b0;
          uStack_390 = *(undefined4 *)param_5;
          pcStack_3a0 = param_3;
          pcStack_388 = pcVar27;
          lStack_378 = lVar25;
          _strlen();
          func_0x000109e74cd8(&pcStack_3a0,&lStack_378,lVar25,pcVar29,unaff_x23);
          if (lStack_378 != 0) {
            pcVar29 = (code *)(lStack_378 + -0x30);
            FUN_109f65aa4(pcVar29);
            FUN_109f65ae0(pcVar29);
          }
        }
        pcVar9 = param_3;
        pcVar14 = pcVar27;
        pcVar33 = pcVar6;
        FUN_109e74fa8();
        if (pcVar9 == (code *)0x0) {
          if (((piStack_3b8 == (int *)0x0) && (*(char *)(lStack_3a8 + 0x17) != '\0')) ||
             (*(int *)param_5 == 1)) {
            pcVar14 = param_9;
            pcVar33 = pcVar27;
            FUN_109e750ac(param_3,param_9,pcVar27,0);
          }
        }
        else {
          pcVar14 = param_9;
          pcVar33 = pcVar27;
          FUN_109e750ac(param_3,param_9,pcVar27,pcVar9);
          uVar15 = (uint)pcVar33;
          uVar3 = *(uint *)(pcVar27 + 0x2c) >> 0x15 & 0x1ff;
          if (uVar3 != 0) {
            puStack_3f0 = *(undefined **)(pcVar27 + 0x18);
            pcVar14 = (code *)&UNK_10f60e859;
            uStack_3e8 = (ulong)uVar3;
            func_0x000109eb844c(lStack_3a8);
            goto LAB_109e739e4;
          }
        }
      }
      pcVar27 = *(code **)pcVar27;
      lVar25 = *(long *)pcVar27;
    }
  }
  pcVar34 = (code *)(ulong)uVar17;
  uVar15 = (uint)pcVar33;
  if (uVar17 != 0) {
    pcVar27 = (code *)0x0;
    puVar30 = (undefined8 *)(ulong)uStack_3bc;
    lStack_3d0 = lStack_3d0 + 0x73c;
    pcStack_3d8 = param_9;
    pcVar34 = (code *)(lStack_3c8 + 0x48);
    do {
      pcVar29 = pcStack_3b0;
      if ((((byte)pcVar34[-8] & 1) == 0) && (*(int *)(pcVar34 + -0xc) == 0)) {
        puVar8 = &UNK_10f60e8af;
        if (1 < *(int *)(pcVar34 + -0x30) - 1U) {
          puVar8 = *(undefined **)(pcVar34 + -0x40);
        }
        puVar10 = puVar8;
        (**(code **)(pcStack_3b0 + 8))(puVar8);
        func_0x000109f64fdc(pcVar29,puVar10);
        uVar15 = (uint)puVar8;
        if (pcVar29 == (code *)0x0) {
          unaff_x23 = (code *)(lStack_3c8 + (long)pcVar27 * 0x58 + 0x48);
          *(undefined8 *)pcVar34 = 0;
LAB_109e736b8:
          puStack_3f0 = *(undefined **)(pcVar34 + -0x48);
          pcVar14 = (code *)&UNK_10f60e8c3;
          func_0x000109eb844c(lStack_3a8);
          pcVar29 = *(code **)unaff_x23;
          if (pcVar29 == (code *)0x0) goto LAB_109e739e4;
        }
        else {
          pcVar29 = *(code **)(pcVar29 + 0x10);
          *(code **)pcVar34 = pcVar29;
          unaff_x23 = pcVar34;
          if (pcVar29 == (code *)0x0) goto LAB_109e736b8;
        }
        if ((param_9[1] == (code)0x1) && (pcVar34[-0x38] == (code)0x1)) {
          lVar25 = *(long *)pcVar29;
LAB_109e73740:
          uVar15 = (uint)lVar25;
          lVar11 = *(long *)(*(long *)(param_5 + 0x28) + 0x160);
          pcVar14 = *(code **)(pcVar34 + -0x48);
          FUN_109e8381c();
          lVar25 = 0;
          if (lVar11 == 0) goto LAB_109e73994;
          pcVar29 = param_3;
          FUN_109f658b0(param_3,0x20);
          if (pcVar29 != (code *)0x0) {
            *(undefined8 *)(pcVar29 + 8) = 0;
            *(undefined8 *)pcVar29 = 0;
            *(undefined8 *)(pcVar29 + 0x18) = 0;
            *(undefined8 *)(pcVar29 + 0x10) = 0;
          }
          uVar19 = *(undefined8 *)(lVar11 + 0x10);
          *(long *)pcVar29 = lVar11;
          *(undefined8 *)(pcVar29 + 8) = uVar19;
          *(undefined8 *)(pcVar29 + 0x10) = 0;
          pcVar33 = param_3;
          FUN_109f65c2c(param_3,*(undefined8 *)(lVar11 + 0x18));
          pcVar14 = pcStack_3b0;
          pcVar9 = pcVar33;
          (**(code **)(pcStack_3b0 + 8))();
          func_0x000109f650c0(pcVar14,pcVar9,pcVar33,pcVar29);
          *(code **)pcVar34 = pcVar29;
          pcVar34[-0x38] = (code)0x0;
          *(undefined4 *)(pcVar34 + -0x34) = 0;
          unaff_x23 = (code *)0x1;
          lVar25 = *(long *)pcVar29;
          param_9 = pcStack_3d8;
        }
        else {
          lVar25 = *(long *)pcVar29;
          if ((((*(byte *)(lVar25 + 0x25) >> 2 & 1) != 0) && ((int)*(uint *)(lVar25 + 0x3c) < 0x20))
             && (((piStack_3b8 == (int *)0x0 || (*piStack_3b8 == 4)) &&
                 ((*(uint *)(lStack_3d0 + (long)*(int *)param_5 * 0x28) >>
                   (ulong)(*(uint *)(lVar25 + 0x3c) & 0x1f) & 1) != 0)))) goto LAB_109e73740;
          unaff_x23 = (code *)0x0;
        }
        *(ulong *)(lVar25 + 0x2c) = *(ulong *)(lVar25 + 0x2c) | 4;
        *(ulong *)(*(long *)pcVar29 + 0x20) = *(ulong *)(*(long *)pcVar29 + 0x20) | 0x100000000;
        pcVar14 = *(code **)pcVar29;
        pcVar9 = param_3;
        pcVar33 = pcVar6;
        FUN_109e74fa8();
        iVar32 = (int)unaff_x23;
        if (pcVar9 == (code *)0x0) {
          if (((piStack_3b8 == (int *)0x0) && (*(char *)(lStack_3a8 + 0x17) != '\0')) ||
             (*(int *)param_5 == 1)) goto LAB_109e7385c;
          lVar25 = *(long *)pcVar29;
          uVar18 = *(ulong *)(lVar25 + 0x2c);
          if ((uVar18 & 8) == 0) {
            iVar32 = 1;
          }
          if (iVar32 == 0) goto LAB_109e73884;
        }
        else {
          *(ulong *)(pcVar9 + 0x2c) = *(ulong *)(pcVar9 + 0x2c) | 4;
          *(ulong *)(pcVar9 + 0x20) = *(ulong *)(pcVar9 + 0x20) | 0x100000000;
LAB_109e7385c:
          if (iVar32 == 0) goto LAB_109e73884;
          lVar25 = *(long *)pcVar29;
          uVar18 = *(ulong *)(lVar25 + 0x2c);
        }
        *(ulong *)(lVar25 + 0x2c) = uVar18 | 8;
        pcVar33 = *(code **)pcVar29;
        pcVar14 = param_9;
        FUN_109e750ac(param_3,param_9,pcVar33,0);
      }
LAB_109e73884:
      uVar15 = (uint)pcVar33;
      pcVar34 = pcVar34 + 0x58;
      pcVar27 = pcVar27 + 1;
      puVar30 = (undefined8 *)((long)puVar30 + -1);
    } while (puVar30 != (undefined8 *)0x0);
  }
  if (param_5 == (code *)0x0) {
    pcVar27 = (code *)0x0;
  }
  else {
    pcVar14 = (code *)0x8;
    pcVar27 = param_5;
    FUN_109e73b74();
  }
  uVar17 = uStack_3bc;
  pcVar29 = (code *)(ulong)uStack_3bc;
  piVar12 = piStack_3b8;
  if (piStack_3b8 != (int *)0x0) {
    pcVar14 = (code *)0x4;
    FUN_109e73b74();
  }
  uVar3 = *(uint *)(param_9 + 0x10);
  if (uVar3 != 0) {
    uVar23 = 0;
    uVar18 = 0;
    lVar25 = *(long *)(param_9 + 8);
    do {
      if ((uint)uVar18 < 0x40) {
        do {
          if ((((ulong)piVar12 | (ulong)pcVar27) >> (uVar18 & 0x3f) & 1) == 0) break;
          uVar18 = uVar18 + 1;
        } while (uVar18 != 0x40);
      }
      lVar11 = lVar25 + uVar23 * 0x20;
      lVar31 = *(long *)(lVar11 + 8);
      lVar11 = *(long *)(lVar11 + 0x10);
      iVar32 = (int)uVar18;
      if (lVar31 != 0) {
        *(int *)(lVar31 + 0x3c) = iVar32 + 0x20;
      }
      if (lVar11 != 0) {
        *(int *)(lVar11 + 0x3c) = iVar32 + 0x20;
      }
      uVar18 = (ulong)(iVar32 + 1);
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar3);
  }
  if (uVar17 != 0) {
    uVar18 = (ulong)uVar17;
    plVar26 = (long *)(lStack_3c8 + 0x48);
    do {
      if (((*(byte *)(plVar26 + -1) & 1) == 0) && (*(int *)((long)plVar26 + -0xc) == 0)) {
        plVar24 = (long *)*plVar26;
        *(undefined4 *)(plVar24 + 3) = *(undefined4 *)(*plVar24 + 0x3c);
        *(uint *)((long)plVar24 + 0x1c) =
             (uint)((ulong)*(undefined8 *)(*plVar24 + 0x20) >> 0x24) & 3;
      }
      plVar26 = plVar26 + 0xb;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  lVar25 = 1;
LAB_109e73994:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar25 = *(long *)(*(long *)(*(long *)(lVar25 + ((ulong)pcVar14 & 0xffffffff) * 8 + 0xa8) + 0x28)
                    + 0x160);
  plVar26 = *(long **)(lVar25 + 8);
  plVar24 = (long *)*plVar26;
  if (plVar24 == (long *)0x0) {
    return;
  }
  bVar22 = false;
  do {
    plVar28 = plVar26;
    plVar5 = (long *)0x0;
    if (*plVar24 != 0) {
      plVar5 = plVar24;
    }
    do {
      plVar26 = plVar5;
      if ((((uVar15 & (uint)plVar28[4]) == 0) || ((*(byte *)((long)plVar28 + 0x2c) >> 3 & 1) != 0))
         || (*(int *)((long)plVar28 + 0x3c) != -1)) {
        if (plVar26 == (long *)0x0) {
          if (!bVar22) {
            return;
          }
          goto LAB_109e73a7c;
        }
      }
      else {
        *(undefined4 *)((long)plVar28 + 0x3c) = 0;
        plVar28[4] = plVar28[4] & 0xffffffffffe00000U | 0x20000;
        if (plVar26 == (long *)0x0) {
LAB_109e73a7c:
          pcStack_3f8 = FUN_109e739f0;
          pcStack_450 = pcVar7;
          pcStack_448 = pcVar6;
          pcStack_440 = pcVar34;
          pcStack_438 = param_3;
          pcStack_430 = param_5;
          pcStack_428 = unaff_x23;
          puStack_420 = puVar30;
          pcStack_418 = param_9;
          pcStack_410 = pcVar29;
          pcStack_408 = pcVar27;
          puStack_400 = &stack0xfffffffffffffff0;
          if ((uVar15 != 4) || (*(char *)(lVar25 + 0x61) != '\x04')) goto LAB_109e754fc;
          plVar24 = (long *)**(long **)(lVar25 + 0x178);
          plVar26 = *(long **)(lVar25 + 0x178);
          if (plVar24 == (long *)0x0) goto LAB_109e754fc;
          goto LAB_109e7531c;
        }
        bVar22 = true;
      }
      plVar24 = (long *)*plVar26;
      plVar28 = plVar26;
      plVar5 = (long *)0x0;
    } while (plVar24 == (long *)0x0);
  } while( true );
LAB_109e739e4:
  lVar25 = 0;
  goto LAB_109e73994;
  while (plVar24 = (long *)*plVar28, plVar26 = plVar28, plVar24 != (long *)0x0) {
LAB_109e7531c:
    plVar28 = plVar24;
    lVar11 = plVar26[6];
    if (lVar11 != 0) goto LAB_109e7533c;
  }
LAB_109e754fc:
  FUN_109f0f144(lVar25);
  plVar26 = *(long **)(lVar25 + 0x178);
  plVar24 = (long *)**(long **)(lVar25 + 0x178);
  while( true ) {
    if (plVar24 == (long *)0x0) {
      return;
    }
    lVar25 = plVar26[6];
    if (lVar25 != 0) break;
    plVar26 = plVar24;
    plVar24 = (long *)*plVar24;
  }
  do {
    uStack_468 = 0;
    puStack_460 = (undefined8 *)0x0;
    pcStack_450 = *(code **)(*(long *)(lVar25 + 0x20) + 0x18);
    lStack_458 = 0;
    lVar11 = *(long *)(lVar25 + 0x30);
    if (lVar11 == 0) {
LAB_109efa1a4:
      uVar17 = 0xfffffff7;
    }
    else {
      lVar31 = lVar11;
      pcStack_448 = (code *)lVar25;
      FUN_109ecc434();
      uVar17 = 0;
      do {
        lVar20 = lVar31;
        plVar24 = (long *)**(undefined8 **)(lVar11 + 0x20);
        if (plVar24 != (long *)0x0) {
          lVar31 = *plVar24;
          puVar30 = &uStack_468;
          FUN_109efa1c4(puVar30,*(undefined8 **)(lVar11 + 0x20),0);
          uVar17 = uVar17 | (uint)puVar30;
          if (lVar31 != 0) {
            for (plVar28 = (long *)*plVar24; (plVar28 != (long *)0x0 && (*plVar28 != 0));
                plVar28 = (long *)*plVar28) {
              puVar30 = &uStack_468;
              FUN_109efa1c4(puVar30,plVar24,0);
              uVar17 = uVar17 | (uint)puVar30;
              plVar24 = plVar28;
            }
            puVar30 = &uStack_468;
            FUN_109efa1c4(puVar30,plVar24,0);
            uVar17 = uVar17 | (uint)puVar30;
          }
        }
        lVar31 = lVar20;
        FUN_109ecc434();
        lVar11 = lVar20;
      } while (lVar20 != 0);
      if ((uVar17 & 1) == 0) goto LAB_109efa1a4;
      uVar17 = 0x27;
    }
    *(uint *)(lVar25 + 0x84) = *(uint *)(lVar25 + 0x84) & uVar17;
    plVar26 = (long *)*plVar26;
    plVar24 = (long *)*plVar26;
    while( true ) {
      if (plVar24 == (long *)0x0) {
        return;
      }
      lVar25 = plVar26[6];
      if (lVar25 != 0) break;
      plVar26 = plVar24;
      plVar24 = (long *)*plVar24;
    }
  } while( true );
LAB_109e7533c:
  uStack_478 = 0;
  uStack_470 = 0;
  puStack_460 = *(undefined8 **)(*(long *)(lVar11 + 0x20) + 0x18);
  uStack_468 = 0;
  lVar31 = *(long *)(lVar11 + 0x30);
  lStack_458 = lVar11;
  if (lVar31 == 0) {
LAB_109e754c8:
    uVar17 = 0xfffffff7;
  }
  else {
    lVar20 = lVar31;
    FUN_109ecc434();
    bVar22 = false;
    do {
      lVar13 = lVar20;
      plVar28 = *(long **)(lVar31 + 0x20);
      plVar24 = (long *)*plVar28;
      if (plVar24 != (long *)0x0) {
        do {
          plVar5 = (long *)0x0;
          plVar21 = plVar28;
          if (*plVar24 != 0) {
            plVar5 = plVar24;
          }
          do {
            plVar28 = plVar5;
            if (((int)plVar21[3] == 4) && ((int)plVar21[5] - 0xbbU < 3)) {
              plVar24 = plVar21 + 0x13;
              do {
                lVar20 = *(long *)*plVar24;
                lVar31 = lVar20;
                if (*(int *)(lVar20 + 0x18) != 1) {
                  lVar31 = 0;
                }
                plVar24 = (long *)(lVar31 + 0x50);
              } while (*(int *)(lVar20 + 0x28) != 0);
              if ((*(ulong *)(*(long *)(lVar20 + 0x38) + 0x20) & 0x1fffff) != 0x20000)
              goto LAB_109e75488;
              plVar24 = plVar21 + 6;
              puVar30 = (undefined8 *)*puStack_460;
              FUN_109f6600c(puVar30,0x48,8);
              *(undefined4 *)(puVar30 + 3) = 7;
              puVar30[1] = 0;
              puVar30[2] = 0;
              *puVar30 = 0;
              FUN_109ecb048();
              FUN_109ece5ec(&uStack_478,puVar30);
              if ((long *)plVar21[8] + -1 != plVar24) {
                plVar5 = puVar30 + 6;
                plVar21 = (long *)plVar21[8];
                do {
                  lVar31 = *plVar21;
                  plVar1 = (long *)plVar21[1];
                  *(long **)(lVar31 + 8) = plVar1;
                  *plVar1 = lVar31;
                  plVar21[1] = (long)plVar5;
                  plVar21[2] = (long)(puVar30 + 5);
                  *plVar21 = 0;
                  lVar31 = *plVar5;
                  *plVar21 = lVar31;
                  *(long **)(lVar31 + 8) = plVar21;
                  *plVar5 = (long)plVar21;
                  plVar21 = plVar1;
                } while (plVar1 + -1 != plVar24);
              }
              FUN_109ecb9c0(*plVar24);
              bVar4 = 1;
            }
            else {
LAB_109e75488:
              bVar4 = 0;
            }
            bVar22 = (bool)(bVar22 | bVar4);
            if (plVar28 == (long *)0x0) goto LAB_109e754a8;
            plVar24 = (long *)*plVar28;
            plVar5 = (long *)0x0;
            plVar21 = plVar28;
          } while (plVar24 == (long *)0x0);
        } while( true );
      }
LAB_109e754a8:
      lVar20 = lVar13;
      FUN_109ecc434();
      lVar31 = lVar13;
    } while (lVar13 != 0);
    if (!bVar22) goto LAB_109e754c8;
    uVar17 = 3;
  }
  *(uint *)(lVar11 + 0x84) = *(uint *)(lVar11 + 0x84) & uVar17;
  plVar26 = (long *)*plVar26;
  plVar24 = (long *)*plVar26;
  while( true ) {
    if (plVar24 == (long *)0x0) goto LAB_109e754fc;
    lVar11 = plVar26[6];
    if (lVar11 != 0) break;
    plVar26 = plVar24;
    plVar24 = (long *)*plVar24;
  }
  goto LAB_109e7533c;
}



/* Entry: 109e739f0; end: 109e73a87;  */

void FUN_109e739f0(long param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + (param_2 & 0xffffffff) * 8 + 0xa8) + 0x28) + 0x160
                   );
  plVar8 = *(long **)(lVar4 + 8);
  plVar12 = (long *)*plVar8;
  if (plVar12 == (long *)0x0) {
    return;
  }
  bVar11 = false;
  do {
    plVar13 = plVar8;
    plVar3 = (long *)0x0;
    if (*plVar12 != 0) {
      plVar3 = plVar12;
    }
    do {
      plVar8 = plVar3;
      if ((((param_3 & (uint)plVar13[4]) == 0) || ((*(byte *)((long)plVar13 + 0x2c) >> 3 & 1) != 0))
         || (*(int *)((long)plVar13 + 0x3c) != -1)) {
        if (plVar8 == (long *)0x0) {
          if (!bVar11) {
            return;
          }
          goto FUN_109e752d8;
        }
      }
      else {
        *(undefined4 *)((long)plVar13 + 0x3c) = 0;
        plVar13[4] = plVar13[4] & 0xffffffffffe00000U | 0x20000;
        if (plVar8 == (long *)0x0) {
FUN_109e752d8:
          if ((param_3 != 4) || (*(char *)(lVar4 + 0x61) != '\x04')) goto LAB_109e754fc;
          plVar12 = (long *)**(long **)(lVar4 + 0x178);
          plVar8 = *(long **)(lVar4 + 0x178);
          if (plVar12 == (long *)0x0) goto LAB_109e754fc;
          goto LAB_109e7531c;
        }
        bVar11 = true;
      }
      plVar12 = (long *)*plVar8;
      plVar13 = plVar8;
      plVar3 = (long *)0x0;
    } while (plVar12 == (long *)0x0);
  } while( true );
  while (plVar12 = (long *)*plVar13, plVar8 = plVar13, plVar12 != (long *)0x0) {
LAB_109e7531c:
    plVar13 = plVar12;
    lVar15 = plVar8[6];
    if (lVar15 != 0) goto LAB_109e7533c;
  }
LAB_109e754fc:
  FUN_109f0f144(lVar4);
  plVar8 = *(long **)(lVar4 + 0x178);
  plVar12 = (long *)**(long **)(lVar4 + 0x178);
  while( true ) {
    if (plVar12 == (long *)0x0) {
      return;
    }
    lVar4 = plVar8[6];
    if (lVar4 != 0) break;
    plVar8 = plVar12;
    plVar12 = (long *)*plVar12;
  }
  do {
    uStack_78 = 0;
    puStack_70 = (undefined8 *)0x0;
    lStack_68 = 0;
    lVar15 = *(long *)(lVar4 + 0x30);
    if (lVar15 == 0) {
LAB_109efa1a4:
      uVar7 = 0xfffffff7;
    }
    else {
      lVar14 = lVar15;
      FUN_109ecc434();
      uVar7 = 0;
      do {
        lVar9 = lVar14;
        plVar12 = (long *)**(undefined8 **)(lVar15 + 0x20);
        if (plVar12 != (long *)0x0) {
          lVar14 = *plVar12;
          puVar6 = &uStack_78;
          FUN_109efa1c4(puVar6,*(undefined8 **)(lVar15 + 0x20),0);
          uVar7 = uVar7 | (uint)puVar6;
          if (lVar14 != 0) {
            for (plVar13 = (long *)*plVar12; (plVar13 != (long *)0x0 && (*plVar13 != 0));
                plVar13 = (long *)*plVar13) {
              puVar6 = &uStack_78;
              FUN_109efa1c4(puVar6,plVar12,0);
              uVar7 = uVar7 | (uint)puVar6;
              plVar12 = plVar13;
            }
            puVar6 = &uStack_78;
            FUN_109efa1c4(puVar6,plVar12,0);
            uVar7 = uVar7 | (uint)puVar6;
          }
        }
        lVar14 = lVar9;
        FUN_109ecc434();
        lVar15 = lVar9;
      } while (lVar9 != 0);
      if ((uVar7 & 1) == 0) goto LAB_109efa1a4;
      uVar7 = 0x27;
    }
    *(uint *)(lVar4 + 0x84) = *(uint *)(lVar4 + 0x84) & uVar7;
    plVar8 = (long *)*plVar8;
    plVar12 = (long *)*plVar8;
    while( true ) {
      if (plVar12 == (long *)0x0) {
        return;
      }
      lVar4 = plVar8[6];
      if (lVar4 != 0) break;
      plVar8 = plVar12;
      plVar12 = (long *)*plVar12;
    }
  } while( true );
LAB_109e7533c:
  uStack_88 = 0;
  uStack_80 = 0;
  puStack_70 = *(undefined8 **)(*(long *)(lVar15 + 0x20) + 0x18);
  uStack_78 = 0;
  lVar14 = *(long *)(lVar15 + 0x30);
  lStack_68 = lVar15;
  if (lVar14 == 0) {
LAB_109e754c8:
    uVar7 = 0xfffffff7;
  }
  else {
    lVar9 = lVar14;
    FUN_109ecc434();
    bVar11 = false;
    do {
      lVar5 = lVar9;
      plVar13 = *(long **)(lVar14 + 0x20);
      plVar12 = (long *)*plVar13;
      if (plVar12 != (long *)0x0) {
        do {
          plVar3 = (long *)0x0;
          plVar10 = plVar13;
          if (*plVar12 != 0) {
            plVar3 = plVar12;
          }
          do {
            plVar13 = plVar3;
            if (((int)plVar10[3] == 4) && ((int)plVar10[5] - 0xbbU < 3)) {
              plVar12 = plVar10 + 0x13;
              do {
                lVar9 = *(long *)*plVar12;
                lVar14 = lVar9;
                if (*(int *)(lVar9 + 0x18) != 1) {
                  lVar14 = 0;
                }
                plVar12 = (long *)(lVar14 + 0x50);
              } while (*(int *)(lVar9 + 0x28) != 0);
              if ((*(ulong *)(*(long *)(lVar9 + 0x38) + 0x20) & 0x1fffff) != 0x20000)
              goto LAB_109e75488;
              plVar12 = plVar10 + 6;
              puVar6 = (undefined8 *)*puStack_70;
              FUN_109f6600c(puVar6,0x48,8);
              *(undefined4 *)(puVar6 + 3) = 7;
              puVar6[1] = 0;
              puVar6[2] = 0;
              *puVar6 = 0;
              FUN_109ecb048();
              FUN_109ece5ec(&uStack_88,puVar6);
              if ((long *)plVar10[8] + -1 != plVar12) {
                plVar3 = puVar6 + 6;
                plVar10 = (long *)plVar10[8];
                do {
                  lVar14 = *plVar10;
                  plVar1 = (long *)plVar10[1];
                  *(long **)(lVar14 + 8) = plVar1;
                  *plVar1 = lVar14;
                  plVar10[1] = (long)plVar3;
                  plVar10[2] = (long)(puVar6 + 5);
                  *plVar10 = 0;
                  lVar14 = *plVar3;
                  *plVar10 = lVar14;
                  *(long **)(lVar14 + 8) = plVar10;
                  *plVar3 = (long)plVar10;
                  plVar10 = plVar1;
                } while (plVar1 + -1 != plVar12);
              }
              FUN_109ecb9c0(*plVar12);
              bVar2 = 1;
            }
            else {
LAB_109e75488:
              bVar2 = 0;
            }
            bVar11 = (bool)(bVar11 | bVar2);
            if (plVar13 == (long *)0x0) goto LAB_109e754a8;
            plVar12 = (long *)*plVar13;
            plVar3 = (long *)0x0;
            plVar10 = plVar13;
          } while (plVar12 == (long *)0x0);
        } while( true );
      }
LAB_109e754a8:
      lVar9 = lVar5;
      FUN_109ecc434();
      lVar14 = lVar5;
    } while (lVar5 != 0);
    if (!bVar11) goto LAB_109e754c8;
    uVar7 = 3;
  }
  *(uint *)(lVar15 + 0x84) = *(uint *)(lVar15 + 0x84) & uVar7;
  plVar8 = (long *)*plVar8;
  plVar12 = (long *)*plVar8;
  while( true ) {
    if (plVar12 == (long *)0x0) goto LAB_109e754fc;
    lVar15 = plVar8[6];
    if (lVar15 != 0) break;
    plVar8 = plVar12;
    plVar12 = (long *)*plVar12;
  }
  goto LAB_109e7533c;
}



/* Entry: 109e73a88; end: 109e73b73;  */

long * FUN_109e73a88(long *param_1,uint param_2)

{
  int iVar1;
  uint7 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  long lVar25;
  long alStack_838 [256];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = param_1 + 1;
  plVar9 = *(long **)*plVar11;
  if (plVar9 != (long *)0x0) {
    uVar5 = 0;
    plVar6 = (long *)*plVar11;
    do {
      if ((param_2 & *(uint *)(plVar6 + 4)) != 0) {
        if ((int)uVar5 == 0x100) goto LAB_109e73b44;
        alStack_838[uVar5] = (long)plVar6;
        uVar5 = (ulong)((int)uVar5 + 1);
      }
      plVar10 = (long *)*plVar9;
      plVar6 = plVar9;
      plVar9 = plVar10;
    } while (plVar10 != (long *)0x0);
    if ((int)uVar5 != 0) {
      param_1 = alStack_838;
      uVar4 = uVar5;
      _qsort(param_1,uVar5,8,FUN_109e75844);
      param_2 = (uint)uVar4;
      plVar9 = alStack_838;
      do {
        plVar10 = (long *)*plVar9;
        lVar8 = *plVar10;
        plVar6 = (long *)plVar10[1];
        *(long **)(lVar8 + 8) = plVar6;
        *plVar6 = lVar8;
        *plVar10 = 0;
        plVar10[1] = 0;
        plVar6 = (long *)*plVar9;
        lVar8 = *plVar11;
        *plVar6 = lVar8;
        plVar6[1] = (long)plVar11;
        *(long **)(lVar8 + 8) = plVar6;
        *plVar11 = (long)plVar6;
        uVar5 = uVar5 - 1;
        plVar9 = plVar9 + 1;
      } while (uVar5 != 0);
    }
  }
LAB_109e73b44:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((param_1 == (long *)0x0) ||
     (plVar9 = *(long **)(*(long *)(param_1[5] + 0x160) + 8), *plVar9 == 0)) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar11 = (long *)0x0;
    do {
      if ((((ulong)plVar9[4] >> 0x2a & 1) != 0) && ((param_2 & (uint)plVar9[4]) != 0)) {
        iVar7 = *(int *)((long)plVar9 + 0x3c);
        iVar1 = iVar7 + -0x20;
        if (0x1f < iVar7) {
          plVar6 = plVar9;
          FUN_109e70a5c();
          iVar3 = (int)plVar6;
          FUN_109ec9e40();
          if (iVar3 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = plVar11;
            uVar17 = (undefined1)iVar1;
            uVar18 = (undefined1)((uint)iVar1 >> 8);
            uVar19 = (undefined1)((uint)iVar1 >> 0x10);
            uVar20 = (undefined1)((uint)iVar1 >> 0x18);
            iVar7 = iVar7 + -0x1f;
            uVar21 = (undefined1)iVar7;
            uVar22 = (undefined1)((uint)iVar7 >> 8);
            uVar23 = (undefined1)((uint)iVar7 >> 0x10);
            uVar24 = (undefined1)((uint)iVar7 >> 0x18);
            iVar7 = 2;
            do {
              auVar14 = auVar13;
              uVar2 = CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(uVar20,CONCAT12(
                                                  uVar19,CONCAT11(uVar18,uVar17))))));
              auVar15._0_8_ = (ulong)uVar2 & 0xffffffff;
              uVar5 = CONCAT17(uVar24,uVar2) >> 0x20;
              auVar15._8_8_ = uVar5;
              lVar8 = -(ulong)(auVar15._0_8_ < 0x40);
              lVar25 = -(ulong)(uVar5 < 0x40);
              auVar16._8_8_ = 1;
              auVar16._0_8_ = 1;
              auVar16 = NEON_ushl(auVar16,auVar15,8);
              auVar13[0] = (byte)lVar8 & auVar16[0] | auVar14[0];
              auVar13[1] = (byte)((ulong)lVar8 >> 8) & auVar16[1] | auVar14[1];
              auVar13[2] = (byte)((ulong)lVar8 >> 0x10) & auVar16[2] | auVar14[2];
              auVar13[3] = (byte)((ulong)lVar8 >> 0x18) & auVar16[3] | auVar14[3];
              auVar13[4] = (byte)((ulong)lVar8 >> 0x20) & auVar16[4] | auVar14[4];
              auVar13[5] = (byte)((ulong)lVar8 >> 0x28) & auVar16[5] | auVar14[5];
              auVar13[6] = (byte)((ulong)lVar8 >> 0x30) & auVar16[6] | auVar14[6];
              auVar13[7] = (byte)((ulong)lVar8 >> 0x38) & auVar16[7] | auVar14[7];
              auVar13[8] = (byte)lVar25 & auVar16[8] | auVar14[8];
              auVar13[9] = (byte)((ulong)lVar25 >> 8) & auVar16[9] | auVar14[9];
              auVar13[10] = (byte)((ulong)lVar25 >> 0x10) & auVar16[10] | auVar14[10];
              auVar13[0xb] = (byte)((ulong)lVar25 >> 0x18) & auVar16[0xb] | auVar14[0xb];
              auVar13[0xc] = (byte)((ulong)lVar25 >> 0x20) & auVar16[0xc] | auVar14[0xc];
              auVar13[0xd] = (byte)((ulong)lVar25 >> 0x28) & auVar16[0xd] | auVar14[0xd];
              auVar13[0xe] = (byte)((ulong)lVar25 >> 0x30) & auVar16[0xe] | auVar14[0xe];
              auVar13[0xf] = (byte)((ulong)lVar25 >> 0x38) & auVar16[0xf] | auVar14[0xf];
              iVar1 = CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17))) + 2;
              uVar17 = (undefined1)iVar1;
              uVar18 = (undefined1)((uint)iVar1 >> 8);
              uVar19 = (undefined1)((uint)iVar1 >> 0x10);
              uVar20 = (undefined1)((uint)iVar1 >> 0x18);
              iVar1 = CONCAT13(uVar24,CONCAT12(uVar23,CONCAT11(uVar22,uVar21))) + 2;
              uVar21 = (undefined1)iVar1;
              uVar22 = (undefined1)((uint)iVar1 >> 8);
              uVar23 = (undefined1)((uint)iVar1 >> 0x10);
              uVar24 = (undefined1)((uint)iVar1 >> 0x18);
              iVar7 = iVar7 + -2;
            } while ((iVar3 + 1U & 0xfffffffe) + iVar7 != 2);
            auVar12._0_8_ = (long)(int)-(uint)(iVar3 - 1U < (uint)-iVar7);
            auVar12._8_8_ = (long)(int)-(uint)(iVar3 - 1U < (-iVar7 | 1U));
            auVar13 = auVar13 ^ (auVar13 ^ auVar14) & auVar12;
            auVar16 = NEON_ext(auVar13,auVar13,8,1);
            plVar11 = (long *)CONCAT17(auVar13[7] | auVar16[7],
                                       CONCAT16(auVar13[6] | auVar16[6],
                                                CONCAT15(auVar13[5] | auVar16[5],
                                                         CONCAT14(auVar13[4] | auVar16[4],
                                                                  CONCAT13(auVar13[3] | auVar16[3],
                                                                           CONCAT12(auVar13[2] |
                                                                                    auVar16[2],
                                                                                    CONCAT11(auVar13
                                                  [1] | auVar16[1],auVar13[0] | auVar16[0])))))));
          }
        }
      }
      plVar9 = (long *)*plVar9;
    } while (*plVar9 != 0);
  }
  return plVar11;
}



/* Entry: 109e73b74; end: 109e73ccb;  */

ulong FUN_109e73b74(long param_1,uint param_2)

{
  int iVar1;
  uint7 uVar2;
  int iVar3;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  long lVar21;
  long lVar22;
  long *plVar4;
  
  if ((param_1 == 0) ||
     (plVar6 = *(long **)(*(long *)(*(long *)(param_1 + 0x28) + 0x160) + 8), *plVar6 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    do {
      if ((((ulong)plVar6[4] >> 0x2a & 1) != 0) && ((param_2 & (uint)plVar6[4]) != 0)) {
        iVar5 = *(int *)((long)plVar6 + 0x3c);
        iVar1 = iVar5 + -0x20;
        if (0x1f < iVar5) {
          plVar4 = plVar6;
          FUN_109e70a5c();
          iVar3 = (int)plVar4;
          FUN_109ec9e40();
          if (iVar3 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar7;
            uVar13 = (undefined1)iVar1;
            uVar14 = (undefined1)((uint)iVar1 >> 8);
            uVar15 = (undefined1)((uint)iVar1 >> 0x10);
            uVar16 = (undefined1)((uint)iVar1 >> 0x18);
            iVar5 = iVar5 + -0x1f;
            uVar17 = (undefined1)iVar5;
            uVar18 = (undefined1)((uint)iVar5 >> 8);
            uVar19 = (undefined1)((uint)iVar5 >> 0x10);
            uVar20 = (undefined1)((uint)iVar5 >> 0x18);
            iVar5 = 2;
            do {
              auVar10 = auVar9;
              uVar2 = CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13(uVar16,CONCAT12(
                                                  uVar15,CONCAT11(uVar14,uVar13))))));
              auVar11._0_8_ = (ulong)uVar2 & 0xffffffff;
              uVar7 = CONCAT17(uVar20,uVar2) >> 0x20;
              auVar11._8_8_ = uVar7;
              lVar21 = -(ulong)(auVar11._0_8_ < 0x40);
              lVar22 = -(ulong)(uVar7 < 0x40);
              auVar12._8_8_ = 1;
              auVar12._0_8_ = 1;
              auVar12 = NEON_ushl(auVar12,auVar11,8);
              auVar9[0] = (byte)lVar21 & auVar12[0] | auVar10[0];
              auVar9[1] = (byte)((ulong)lVar21 >> 8) & auVar12[1] | auVar10[1];
              auVar9[2] = (byte)((ulong)lVar21 >> 0x10) & auVar12[2] | auVar10[2];
              auVar9[3] = (byte)((ulong)lVar21 >> 0x18) & auVar12[3] | auVar10[3];
              auVar9[4] = (byte)((ulong)lVar21 >> 0x20) & auVar12[4] | auVar10[4];
              auVar9[5] = (byte)((ulong)lVar21 >> 0x28) & auVar12[5] | auVar10[5];
              auVar9[6] = (byte)((ulong)lVar21 >> 0x30) & auVar12[6] | auVar10[6];
              auVar9[7] = (byte)((ulong)lVar21 >> 0x38) & auVar12[7] | auVar10[7];
              auVar9[8] = (byte)lVar22 & auVar12[8] | auVar10[8];
              auVar9[9] = (byte)((ulong)lVar22 >> 8) & auVar12[9] | auVar10[9];
              auVar9[10] = (byte)((ulong)lVar22 >> 0x10) & auVar12[10] | auVar10[10];
              auVar9[0xb] = (byte)((ulong)lVar22 >> 0x18) & auVar12[0xb] | auVar10[0xb];
              auVar9[0xc] = (byte)((ulong)lVar22 >> 0x20) & auVar12[0xc] | auVar10[0xc];
              auVar9[0xd] = (byte)((ulong)lVar22 >> 0x28) & auVar12[0xd] | auVar10[0xd];
              auVar9[0xe] = (byte)((ulong)lVar22 >> 0x30) & auVar12[0xe] | auVar10[0xe];
              auVar9[0xf] = (byte)((ulong)lVar22 >> 0x38) & auVar12[0xf] | auVar10[0xf];
              iVar1 = CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))) + 2;
              uVar13 = (undefined1)iVar1;
              uVar14 = (undefined1)((uint)iVar1 >> 8);
              uVar15 = (undefined1)((uint)iVar1 >> 0x10);
              uVar16 = (undefined1)((uint)iVar1 >> 0x18);
              iVar1 = CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17))) + 2;
              uVar17 = (undefined1)iVar1;
              uVar18 = (undefined1)((uint)iVar1 >> 8);
              uVar19 = (undefined1)((uint)iVar1 >> 0x10);
              uVar20 = (undefined1)((uint)iVar1 >> 0x18);
              iVar5 = iVar5 + -2;
            } while ((iVar3 + 1U & 0xfffffffe) + iVar5 != 2);
            auVar8._0_8_ = (long)(int)-(uint)(iVar3 - 1U < (uint)-iVar5);
            auVar8._8_8_ = (long)(int)-(uint)(iVar3 - 1U < (-iVar5 | 1U));
            auVar9 = auVar9 ^ (auVar9 ^ auVar10) & auVar8;
            auVar12 = NEON_ext(auVar9,auVar9,8,1);
            uVar7 = CONCAT17(auVar9[7] | auVar12[7],
                             CONCAT16(auVar9[6] | auVar12[6],
                                      CONCAT15(auVar9[5] | auVar12[5],
                                               CONCAT14(auVar9[4] | auVar12[4],
                                                        CONCAT13(auVar9[3] | auVar12[3],
                                                                 CONCAT12(auVar9[2] | auVar12[2],
                                                                          CONCAT11(auVar9[1] |
                                                                                   auVar12[1],
                                                                                   auVar9[0] |
                                                                                   auVar12[0])))))))
            ;
          }
        }
      }
      plVar6 = (long *)*plVar6;
    } while (*plVar6 != 0);
  }
  return uVar7;
}



/* Entry: 109e73ccc; end: 109e74bf7;  */

/* WARNING: Possible PIC construction at 0x000109e74b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e74bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109e74b20) */
/* WARNING: Removing unreachable block (ram,0x000109e74b34) */
/* WARNING: Removing unreachable block (ram,0x000109e74bc0) */

ulong * FUN_109e73ccc(long param_1,undefined8 param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                     ulong *param_6,ulong *param_7,ulong *param_8,ulong param_9,byte *param_10)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  ulong *puVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined4 *puVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  uint uVar27;
  ulong *puVar28;
  uint uVar29;
  ulong *puVar30;
  uint uVar31;
  long *plVar32;
  ulong *puVar33;
  ulong *puVar34;
  uint uVar35;
  undefined4 uVar36;
  ulong *puVar37;
  uint uVar38;
  byte *pbVar39;
  long lVar40;
  undefined1 *puVar41;
  undefined8 uVar42;
  ulong uStack_970;
  ulong uStack_968;
  ulong uStack_960;
  uint uStack_94c;
  ulong *puStack_948;
  ulong *puStack_940;
  uint uStack_934;
  ulong *puStack_930;
  long lStack_928;
  ulong *puStack_920;
  ulong *puStack_918;
  ulong uStack_910;
  ulong *puStack_908;
  ulong *puStack_900;
  byte *pbStack_8f8;
  ulong auStack_8f0 [264];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar41 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_5 == (ulong *)0x0) {
    puVar12 = (ulong *)0xffffffff;
    if (param_6 != (ulong *)0x0) goto LAB_109e73d2c;
LAB_109e73d3c:
    puVar13 = (ulong *)0xffffffff;
  }
  else {
    puVar12 = (ulong *)(ulong)(uint)*param_5;
    if (param_6 == (ulong *)0x0) goto LAB_109e73d3c;
LAB_109e73d2c:
    puVar13 = (ulong *)(ulong)(uint)*param_6;
  }
  puVar14 = (ulong *)(ulong)(*(char *)((long)param_4 + 0x17) != '\0');
  puVar15 = param_8;
  lStack_928 = param_1;
  puStack_918 = param_4;
  FUN_109e74bf8(param_3,param_10,param_1,param_2);
  if (param_5 != (ulong *)0x0) {
    plVar32 = *(long **)(*(long *)(param_5[5] + 0x160) + 8);
    for (plVar18 = (long *)*plVar32; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
      if (((((uint)plVar32[4] >> 3 & 1) != 0) && (((ulong)plVar32[4] >> 0x2a & 1) == 0)) &&
         (0x1f < *(int *)((long)plVar32 + 0x3c))) {
        if (*(int *)(param_10 + 0x10) == *(int *)(param_10 + 0x14)) {
          *(int *)(param_10 + 0x14) = *(int *)(param_10 + 0x10) << 1;
          puVar10 = param_3;
          FUN_109f65a40(param_3,*(undefined8 *)(param_10 + 8),0x20);
          *(ulong **)(param_10 + 8) = puVar10;
        }
        plVar18 = plVar32;
        FUN_109e7521c();
        uVar27 = *(uint *)(param_10 + 0x10);
        puVar21 = (undefined4 *)(*(long *)(param_10 + 8) + (ulong)uVar27 * 0x20);
        *puVar21 = (int)plVar18;
        uVar36 = (undefined4)plVar32[2];
        FUN_109e752a0();
        puVar21[1] = uVar36;
        *(long **)(puVar21 + 2) = plVar32;
        *(undefined8 *)(puVar21 + 4) = 0;
        *(uint *)(param_10 + 0x10) = uVar27 + 1;
        plVar18 = (long *)*plVar32;
      }
      plVar32 = plVar18;
    }
    if ((uint)param_7 != 0) {
      uVar19 = 0;
      do {
        if (((param_8[uVar19 * 0xb + 8] & 1) == 0) &&
           (*(uint *)((long)param_8 + (uVar19 * 0x16 + 0xf) * 4) == 0)) {
          plVar32 = (long *)param_8[uVar19 * 0xb + 9];
          if ((int)plVar32[3] != -1) {
            plVar18 = *(long **)(*(long *)(param_5[5] + 0x160) + 8);
            do {
              plVar25 = plVar18;
              plVar18 = (long *)*plVar25;
              if (plVar18 == (long *)0x0) goto LAB_109e73e20;
            } while (((((uint)plVar25[4] >> 3 & 1) == 0) ||
                     (*(int *)((long)plVar25 + 0x3c) != (int)plVar32[3])) ||
                    (((uint)((ulong)plVar25[4] >> 0x24) & 3) != *(uint *)((long)plVar32 + 0x1c)));
            *plVar32 = (long)plVar25;
            *(undefined4 *)(plVar32 + 3) = 0xffffffff;
          }
        }
LAB_109e73e20:
        uVar19 = uVar19 + 1;
      } while (uVar19 != ((ulong)param_7 & 0xffffffff));
    }
  }
  pbStack_8f8 = param_10;
  puStack_948 = param_5;
  if (param_6 != (ulong *)0x0) {
    plVar32 = *(long **)(*(long *)(param_6[5] + 0x160) + 8);
    for (plVar18 = (long *)*plVar32; pbStack_8f8 = param_10, plVar18 != (long *)0x0;
        plVar18 = (long *)*plVar18) {
      uVar19 = plVar32[4];
      if (((((uint)uVar19 >> 2 & 1) != 0) && ((uVar19 >> 0x2a & 1) == 0)) &&
         (0x1f < *(int *)((long)plVar32 + 0x3c))) {
        uVar27 = *(uint *)(param_10 + 0x10);
        uVar22 = (ulong)uVar27;
        if (uVar27 != 0) {
          plVar25 = (long *)(*(long *)(param_10 + 8) + 0x10);
          do {
            lVar26 = plVar25[-1];
            if (((lVar26 != 0) && (*(int *)(lVar26 + 0x3c) == *(int *)((long)plVar32 + 0x3c))) &&
               (((*(ulong *)(lVar26 + 0x20) ^ uVar19) & 0x3000000000) == 0)) {
              *plVar25 = (long)plVar32;
              goto LAB_109e73f70;
            }
            plVar25 = plVar25 + 4;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        if (uVar27 == *(uint *)(param_10 + 0x14)) {
          *(uint *)(param_10 + 0x14) = uVar27 << 1;
          puVar10 = param_3;
          FUN_109f65a40(param_3,*(undefined8 *)(param_10 + 8),0x20);
          *(ulong **)(param_10 + 8) = puVar10;
        }
        plVar18 = plVar32;
        FUN_109e7521c();
        uVar27 = *(uint *)(param_10 + 0x10);
        puVar21 = (undefined4 *)(*(long *)(param_10 + 8) + (ulong)uVar27 * 0x20);
        *puVar21 = (int)plVar18;
        uVar36 = (undefined4)plVar32[2];
        FUN_109e752a0();
        puVar21[1] = uVar36;
        *(undefined8 *)(puVar21 + 2) = 0;
        *(long **)(puVar21 + 4) = plVar32;
        *(uint *)(param_10 + 0x10) = uVar27 + 1;
        plVar18 = (long *)*plVar32;
      }
LAB_109e73f70:
      plVar32 = plVar18;
      param_10 = pbStack_8f8;
    }
  }
  pbVar39 = pbStack_8f8;
  auStack_8f0[5] = 0;
  auStack_8f0[4] = 0;
  auStack_8f0[7] = 0;
  auStack_8f0[6] = 0;
  auStack_8f0[1] = 0;
  auStack_8f0[0] = 0;
  auStack_8f0[3] = 0;
  auStack_8f0[2] = 0;
  puVar10 = (ulong *)(ulong)*(uint *)(pbStack_8f8 + 0x10);
  if (*(uint *)(pbStack_8f8 + 0x10) != 0) {
    puVar20 = (ulong *)0x0;
    puVar21 = (undefined4 *)(*(long *)(pbStack_8f8 + 8) + 0x1c);
    do {
      *puVar21 = (int)puVar20;
      puVar20 = (ulong *)((long)puVar20 + 1);
      puVar21 = puVar21 + 8;
    } while (puVar10 != puVar20);
  }
  if ((*pbStack_8f8 & 1) == 0) {
    puVar20 = *(ulong **)(pbStack_8f8 + 8);
    if (pbStack_8f8[1] == 1) {
      puVar33 = (ulong *)0x109e758f8;
    }
    else {
      puVar33 = (ulong *)0x109e7594c;
    }
  }
  else {
    puVar20 = *(ulong **)(pbStack_8f8 + 8);
    puVar33 = (ulong *)0x109e758a0;
  }
  puVar11 = (ulong *)0x20;
  _qsort();
  if (((short)puStack_918[8] == -0x7373) && (*(uint *)((long)puStack_918 + 0x54) != 0)) {
    uStack_934 = 0;
  }
  else {
    uStack_934 = pbVar39[4] ^ 1;
  }
  uVar19 = (ulong)*(uint *)(pbVar39 + 0x10);
  puStack_940 = param_6;
  puStack_930 = param_3;
  puStack_920 = param_8;
  if (*(uint *)(pbVar39 + 0x10) == 0) {
    puStack_900 = (ulong *)((ulong)puStack_900 & 0xffffffff00000000);
    puVar37 = (ulong *)0x0;
  }
  else {
    uVar22 = 0;
    uVar23 = 0;
    uStack_910 = param_9;
    lVar26 = *(long *)(pbVar39 + 8);
    puVar10 = (ulong *)0x80;
    puStack_908 = (ulong *)CONCAT44(puStack_908._4_4_,0xffffffff);
    param_6 = (ulong *)0x0;
    param_3 = (ulong *)0x0;
    uStack_94c = (uint)param_7;
    do {
      lVar24 = lVar26 + uVar22 * 0x20;
      lVar40 = *(long *)(lVar24 + 0x10);
      if (lVar40 == 0) {
        lVar40 = *(long *)(lVar24 + 8);
        if (lVar40 != 0) {
          lVar26 = lVar40;
          FUN_109e70a5c(lVar40,*(undefined4 *)(pbVar39 + 0x18));
          bVar7 = false;
          goto LAB_109e740bc;
        }
      }
      else {
        lVar26 = lVar40;
        FUN_109e70a5c(lVar40,*(undefined4 *)(pbVar39 + 0x1c));
        bVar7 = *(int *)(pbVar39 + 0x1c) == 0;
LAB_109e740bc:
        param_5 = *(ulong **)(lVar40 + 0x20);
        uVar19 = *(ulong *)(lVar40 + 0x2c);
        puVar20 = (ulong *)(uVar19 >> 2 & 1);
        uVar27 = (uint)uVar19;
        if ((((uVar27 >> 0xb & 1) == 0) &&
            ((pbVar39[1] != 1 || (((ulong)param_3 & 1) == 0 && (int)puVar20 == 0)))) &&
           ((*pbVar39 != 1 || ((uVar19 & 8) != 0 && (((uint)uVar23 ^ 0xffffffff) & 1) == 0)))) {
          piVar1 = (int *)(*(long *)(pbVar39 + 8) + uVar22 * 0x20);
          if (((int)puStack_908 != *piVar1) || (piVar1[1] == 3 && (uStack_934 & 1) == 0))
          goto LAB_109e7412c;
        }
        else {
LAB_109e7412c:
          bVar8 = ((ulong)param_5 & 0x1000000) != 0;
          uVar17 = (uint)param_6;
          if (bVar8) {
            uVar17 = (uint)puVar10;
          }
          uVar17 = uVar17 + 3 & 0xfffffffc;
          uVar31 = uVar17;
          if (bVar8) {
            uVar31 = (uint)param_6;
          }
          param_6 = (ulong *)(ulong)uVar31;
          uVar31 = (uint)puVar10;
          if (bVar8) {
            uVar31 = uVar17;
          }
          puVar10 = (ulong *)(ulong)uVar31;
          puStack_908 = (ulong *)CONCAT44(puStack_908._4_4_,
                                          *(undefined4 *)(*(long *)(pbVar39 + 8) + uVar22 * 0x20));
        }
        uVar17 = (uint)param_6;
        uVar31 = (uint)puVar10;
        if (bVar7) {
LAB_109e741e4:
          puVar11 = (ulong *)0x1;
          FUN_109ec9e40();
          iVar9 = (int)lVar26 << 2;
        }
        else {
          if (*pbVar39 == 1) {
            if (((*(int *)(pbVar39 + 0x18) != 1) && (1 < *(int *)(pbVar39 + 0x1c) - 1U)) &&
               (pbVar39[2] == 1)) {
              bVar3 = *(byte *)(lVar26 + 4);
              if (((bVar3 == 0x13) || (1 < *(byte *)(lVar26 + 0xe) && bVar3 - 2 < 3)) ||
                 (((uVar27 >> 3 & 1) != 0 || (bVar3 == 0x11)))) goto LAB_109e741c0;
            }
            goto LAB_109e741e4;
          }
LAB_109e741c0:
          if ((((uVar27 >> 2 & 1) == 0) || ((pbVar39[1] & 1) == 0)) ||
             ((*(byte *)(lVar26 + 4) | 2) == 0x13)) {
            if ((uVar27 >> 0xb & 1) == 0) goto LAB_109e74354;
            goto LAB_109e741e4;
          }
          if (((*(byte *)(lVar26 + 0xe) < 2) || ((uVar27 >> 0xb & 1) != 0)) ||
             (*(byte *)(lVar26 + 4) - 5 < 0xfffffffd)) goto LAB_109e741e4;
LAB_109e74354:
          func_0x000109ec8758();
          iVar9 = (int)lVar26;
        }
        uVar27 = uVar17;
        if (((ulong)param_5 & 0x1000000) != 0) {
          uVar27 = uVar31;
        }
        uVar38 = iVar9 + uVar27;
        uVar35 = uVar38 - 1;
        if (uVar35 < 0x80) {
          uVar29 = uVar35 >> 2;
          uVar16 = uVar27 >> 2;
          uVar23 = ~(-1L << ((ulong)((uVar29 - (uVar27 >> 2)) + 1) & 0x3f)) <<
                   ((ulong)uVar16 & 0x3f);
          while (puVar37 = (ulong *)(ulong)uVar27, (uVar23 & uStack_910) != 0) {
            uVar27 = (uVar27 & 0xfffffffc) + 4;
            bVar7 = ((ulong)param_5 & 0x1000000) != 0;
            uVar17 = uVar27;
            if (bVar7) {
              uVar17 = (uint)param_6;
            }
            param_6 = (ulong *)(ulong)uVar17;
            uVar31 = (uint)puVar10;
            if (bVar7) {
              uVar31 = uVar27;
            }
            puVar10 = (ulong *)(ulong)uVar31;
            uVar38 = uVar27 + iVar9;
            uVar35 = uVar38 - 1;
            puStack_900 = puVar20;
            if (0x7f < uVar35) goto LAB_109e74288;
            uVar29 = uVar35 >> 2;
            uVar16 = uVar27 >> 2;
            uVar23 = ~(-1L << ((ulong)((uVar29 - (uVar27 >> 2)) + 1) & 0x3f)) <<
                     ((ulong)uVar16 & 0x3f);
          }
LAB_109e742c0:
          uVar36 = SUB84(puVar37,0);
          puStack_900 = puVar20;
          if (uVar16 < uVar29) {
            puVar11 = (ulong *)((ulong)(uVar29 + ~uVar16) + 1);
            _memset((long)auStack_8f0 + ((ulong)puVar37 >> 2),4);
          }
          *(byte *)((long)auStack_8f0 + (ulong)uVar29) = ((byte)uVar35 & 3) + 1;
          puVar20 = puStack_900;
        }
        else {
LAB_109e74288:
          uVar31 = (uint)puVar10;
          uVar17 = (uint)param_6;
          puVar37 = puVar10;
          if (((uint)param_5 >> 0x18 & 1) == 0) {
            uStack_970 = *(ulong *)(lVar40 + 0x18);
            func_0x000109eb844c(puStack_918,&UNK_10f60e91d);
            puVar37 = param_6;
          }
          uVar36 = SUB84(puVar37,0);
          if (uVar35 < 0x100) {
            uVar16 = (uint)((ulong)puVar37 >> 2);
            uVar29 = uVar35 >> 2;
            goto LAB_109e742c0;
          }
        }
        uVar23 = uVar19 >> 3 & 1;
        lVar26 = *(long *)(pbStack_8f8 + 8);
        *(undefined4 *)(lVar26 + uVar22 * 0x20 + 0x18) = uVar36;
        bVar7 = ((ulong)param_5 & 0x1000000) != 0;
        uVar27 = uVar38;
        if (bVar7) {
          uVar27 = uVar17;
        }
        param_6 = (ulong *)(ulong)uVar27;
        if (bVar7) {
          uVar31 = uVar38;
        }
        puVar10 = (ulong *)(ulong)uVar31;
        uVar19 = (ulong)*(uint *)(pbStack_8f8 + 0x10);
        param_3 = puVar20;
        pbVar39 = pbStack_8f8;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar19);
    puStack_900 = (ulong *)CONCAT44(puStack_900._4_4_,(int)param_6 + 3U >> 2);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    puVar20 = auStack_8f0 + 8;
    puVar10 = (ulong *)0x800;
    _bzero();
    if (uVar19 == 0) {
      puVar37 = (ulong *)0x0;
    }
    else {
      lVar26 = 0;
      param_6 = (ulong *)0x0;
      puVar37 = (ulong *)0x1c;
      param_5 = (ulong *)0x18;
      do {
        lVar24 = *(long *)(pbVar39 + 8) + lVar26;
        puVar34 = *(ulong **)(lVar24 + 8);
        puVar30 = *(ulong **)(lVar24 + 0x10);
        uVar27 = *(uint *)(lVar24 + 0x18) >> 2;
        param_3 = (ulong *)(ulong)uVar27;
        uVar19 = (ulong)*(uint *)(lVar24 + 0x18) & 3;
        if (puVar34 != (ulong *)0x0) {
          *(uint *)((long)puVar34 + 0x3c) = uVar27 + 0x20;
          puVar34[4] = puVar34[4] & 0xffffffc000000000 | puVar34[4] & 0xfffffffff | uVar19 << 0x24;
        }
        if (puVar30 != (ulong *)0x0) {
          *(uint *)((long)puVar30 + 0x3c) = uVar27 + 0x20;
          puVar30[4] = puVar30[4] & 0xffffffc000000000 | puVar30[4] & 0xfffffffff | uVar19 << 0x24;
        }
        pbVar39 = pbStack_8f8;
        if (pbStack_8f8[3] == 1) {
          puVar28 = puVar34;
          if (puVar34 == (ulong *)0x0) {
            puVar28 = puVar30;
          }
          lVar24 = 0x18;
          if (puVar34 == (ulong *)0x0) {
            lVar24 = 0x1c;
          }
          puVar10 = (ulong *)(ulong)*(uint *)(pbStack_8f8 + lVar24);
          FUN_109e70a5c();
          puVar20 = puVar28;
          func_0x000109ec8650();
          pbVar39 = pbStack_8f8;
          uVar27 = (int)puVar20 + (int)uVar19;
          uVar17 = uVar27 >> 2;
          if ((uVar27 & 3) != 0) {
            uVar17 = uVar17 + 1;
          }
          puVar11 = (ulong *)(ulong)uVar17;
          if (puVar34 != (ulong *)0x0 && puVar30 != (ulong *)0x0) {
            bVar3 = *(byte *)((long)puVar28 + 4);
            if (bVar3 != 0x13) {
              uVar17 = (uint)bVar3;
              if (((uVar17 != 0x11) && (*(byte *)((long)puVar28 + 0xe) < 2 || 2 < bVar3 - 2)) &&
                 (0xf < uVar17 || (1 << (ulong)(uVar17 & 0x1f) & 0xe610U) == 0)) {
                if ((int)uVar19 + (uint)*(byte *)((long)puVar28 + 0xd) < 5) {
                  auStack_8f0[(long)param_3 * 4 + uVar19 + 8] = (ulong)puVar28;
                }
                else {
                  *(undefined1 *)((long)&uStack_b0 + (long)param_3) = 1;
                  *(undefined1 *)((long)&uStack_b0 + 1 + (long)param_3) = 1;
                }
                goto LAB_109e7449c;
              }
            }
          }
          if (uVar27 != 0) {
            puVar20 = (ulong *)((long)&uStack_b0 + (long)param_3);
            puVar10 = (ulong *)0x1;
            _memset();
          }
        }
LAB_109e7449c:
        param_8 = puStack_920;
        param_6 = (ulong *)((long)param_6 + 1);
        lVar26 = lVar26 + 0x20;
      } while (param_6 < (ulong *)(ulong)*(uint *)(pbVar39 + 0x10));
      if (*(uint *)(pbVar39 + 0x10) != 0) {
        param_7 = (ulong *)(ulong)uStack_94c;
        if ((pbVar39[3] & 1) != 0) {
          uVar19 = 0;
          param_6 = auStack_8f0 + 8;
          do {
            lVar26 = *(long *)(pbVar39 + 8) + uVar19 * 0x20;
            puVar34 = *(ulong **)(lVar26 + 8);
            param_3 = *(ulong **)(lVar26 + 0x10);
            if ((puVar34 != (ulong *)0x0 && param_3 != (ulong *)0x0) &&
               (puVar37 = (ulong *)(ulong)(*(uint *)(lVar26 + 0x18) >> 2),
               (*(byte *)((long)&uStack_b0 + (long)puVar37) & 1) == 0)) {
              puVar10 = (ulong *)(ulong)*(uint *)(pbVar39 + 0x18);
              puVar20 = puVar34;
              FUN_109e70a5c();
              lVar26 = 0;
              bVar7 = true;
              do {
                lVar24 = *(long *)((long)param_6 + lVar26 + (long)puVar37 * 0x20);
                if (lVar24 != 0) {
                  bVar7 = (bool)(*(char *)(lVar24 + 4) == *(char *)((long)puVar20 + 4) & bVar7);
                }
                lVar26 = lVar26 + 8;
              } while (lVar26 != 0x20);
              if (bVar7) {
                puVar34[4] = puVar34[4] | 0x40000000000;
                param_3[4] = param_3[4] | 0x40000000000;
              }
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 < *(uint *)(pbVar39 + 0x10));
        }
        goto LAB_109e745bc;
      }
    }
    param_7 = (ulong *)(ulong)uStack_94c;
    param_8 = puStack_920;
  }
LAB_109e745bc:
  puVar34 = puStack_930;
  if ((int)param_7 != 0) {
    puVar30 = (ulong *)0x0;
    puVar28 = (ulong *)0x0;
    param_6 = (ulong *)((ulong)param_7 & 0xffffffff);
    param_5 = (ulong *)0x58;
    do {
      param_3 = (ulong *)0x8c8d;
      param_7 = param_8 + (long)puVar30 * 0xb;
      if (((param_7[8] & 1) == 0) && (*(uint *)((long)param_7 + 0x3c) == 0)) {
        plVar32 = (long *)param_7[9];
        param_8 = (ulong *)plVar32[1];
        puVar37 = param_8;
        bVar3 = *(byte *)((long)param_8 + 4);
        while (bVar3 == 0x13) {
          puVar37 = (ulong *)puVar37[6];
          bVar3 = *(byte *)((long)puVar37 + 4);
        }
        if (bVar3 - 4 < 0xc) {
          puVar37 = (ulong *)(ulong)*(uint *)(&UNK_10e061b58 + ((ulong)(bVar3 - 4) & 0xff) * 4);
        }
        else {
          puVar37 = (ulong *)0x0;
        }
        uVar27 = (int)plVar32[2] + *(int *)(*plVar32 + 0x3c) * 4 +
                 ((uint)((ulong)*(undefined8 *)(*plVar32 + 0x20) >> 0x24) & 3);
        pbVar39 = (byte *)(ulong)uVar27;
        if (*(byte *)((long)param_8 + 4) == 0x13) {
          puVar33 = (ulong *)(ulong)*pbStack_8f8;
          puVar12 = (ulong *)(ulong)pbStack_8f8[2];
          func_0x000109eca118();
          uVar17 = (uint)param_7[3];
          if (uVar17 == 2) {
            if (puStack_918[0xc] == 0) {
LAB_109e7471c:
              uVar19 = 0;
            }
            else {
              uVar19 = (ulong)(*(byte *)(*(long *)(puStack_918[0xc] + 0x160) + 0x14f) & 0xf);
            }
          }
          else if (uVar17 == 1) {
            if (puStack_918[0xc] == 0) goto LAB_109e7471c;
            uVar19 = (ulong)(*(ushort *)(*(long *)(puStack_918[0xc] + 0x160) + 0x14e) >> 4 & 0xf);
          }
          else if (*(char *)(*(long *)(param_7[9] + 8) + 4) == '\x13') {
            uVar19 = (ulong)*(uint *)(*(long *)(param_7[9] + 8) + 0x10);
          }
          else {
            uVar19 = 0xffffffff;
          }
          bVar3 = *(byte *)((long)param_8 + 0xe);
          param_3 = (ulong *)(ulong)bVar3;
          bVar4 = *(byte *)((long)param_8 + 0xd);
          puVar34 = (ulong *)(ulong)bVar4;
          puVar20 = param_8;
          if ((char)param_7[2] == '\x01') {
            if ((uint)uVar19 <= *(uint *)((long)param_7 + 0x14)) {
              uStack_970 = *param_7;
              puVar10 = (ulong *)&UNK_10f60e9e7;
              uStack_968 = (ulong)*(uint *)((long)param_7 + 0x14);
              uStack_960 = uVar19;
              goto LAB_109e749e0;
            }
            puVar20 = *(ulong **)(puStack_918[0xc] + 0x160);
            puVar10 = *(ulong **)param_7[9];
            puVar11 = (ulong *)0x1;
            FUN_109e816ec();
            if (((ulong)puVar20 & 1) == 0) {
              puVar20 = *(ulong **)(*(long *)param_7[9] + 0x18);
              puVar10 = (ulong *)&UNK_10f60d67f;
              puStack_908 = puVar20;
              _strcmp();
              if ((int)puVar20 != 0) {
                puVar10 = (ulong *)&UNK_10f60d68f;
                puVar20 = puStack_908;
                _strcmp();
                if ((int)puVar20 != 0) {
                  puVar10 = (ulong *)&UNK_10f60d824;
                  puVar20 = puStack_908;
                  _strcmp();
                  if ((int)puVar20 != 0) {
                    puVar10 = (ulong *)&UNK_10f60d812;
                    puVar20 = puStack_908;
                    _strcmp();
                    uVar17 = (uint)bVar4;
                    if ((int)puVar20 != 0) {
                      uVar17 = 4;
                    }
                    puVar34 = (ulong *)(ulong)uVar17;
                  }
                }
              }
            }
            iVar9 = (int)puVar34 * (uint)bVar3 << (ulong)((uint)puVar37 & 0x1f);
            uVar17 = (uint)param_7[3];
            if (uVar17 != 0) {
              iVar9 = 1;
            }
            pbVar39 = (byte *)(ulong)(uVar27 + iVar9 * *(uint *)((long)param_7 + 0x14));
            uVar19 = 1;
          }
          *(uint *)(param_7 + 7) = (uint)uVar19;
          *(uint *)((long)param_7 + 0x2c) = (uint)bVar4;
          *(uint *)(param_7 + 6) = (uint)bVar3;
          puVar34 = puStack_930;
          if (uVar17 == 0) {
LAB_109e74820:
            uVar27 = (uint)*param_8;
          }
          else {
            uVar27 = 0x1406;
          }
          param_8 = puStack_920;
          param_3 = (ulong *)0x8c8d;
          *(uint *)((long)param_7 + 0x34) = uVar27;
          *(uint *)((long)param_7 + 0x1c) = (uint)((ulong)pbVar39 >> 2);
          *(uint *)(param_7 + 5) = (uint)pbVar39 & 3;
          if (((short)puStack_918[8] != -0x7373) ||
             (puVar20 = param_7, func_0x000109e75980(),
             (uint)puVar20 <= *(uint *)(lStack_928 + 0x47c))) {
            lVar26 = *(long *)param_7[9];
            *(uint *)(param_7 + 10) = *(uint *)(lVar26 + 0x2c) >> 0x15 & 0x1ff;
            iVar9 = *(int *)((long)param_7[9] + 0x14);
            iVar2 = *(int *)(lVar26 + 0x48);
            *(uint *)(param_7 + 4) = *(byte *)(lVar26 + 0x4c) & 3;
            *(uint *)((long)param_7 + 0x24) =
                 ((*(uint *)((long)param_7 + 0x14) << 2) << (ulong)((uint)puVar37 & 0x1f)) +
                 iVar9 * 4 + iVar2;
            pbVar39 = pbStack_8f8;
            goto LAB_109e748a0;
          }
          uStack_970 = *param_7;
          puVar10 = (ulong *)&UNK_10f60ea6e;
        }
        else {
          if ((char)param_7[2] != '\x01') {
            *(uint *)(param_7 + 7) = 1;
            bVar3 = *(byte *)((long)param_8 + 0xe);
            *(uint *)((long)param_7 + 0x2c) = (uint)*(byte *)((long)param_8 + 0xd);
            *(uint *)(param_7 + 6) = (uint)bVar3;
            goto LAB_109e74820;
          }
          uStack_970 = *param_7;
          uStack_968 = param_7[1];
          puVar10 = (ulong *)&UNK_10f60ea2d;
        }
LAB_109e749e0:
        puVar20 = puStack_918;
        func_0x000109eb844c();
        goto LAB_109e74968;
      }
LAB_109e748a0:
      param_3 = (ulong *)0x8c8d;
      puVar30 = (ulong *)((long)puVar30 + 1);
      puVar28 = (ulong *)(ulong)(param_6 <= puVar30);
    } while (puVar30 != param_6);
  }
  puVar28 = puStack_948;
  puVar30 = (ulong *)((ulong)puStack_900 & 0xffffffff);
  if (puStack_948 != (ulong *)0x0) {
    uStack_970 = CONCAT62(CONCAT51(uStack_970._3_5_,pbVar39[2]),*(undefined2 *)pbVar39);
    puVar12 = auStack_8f0;
    puVar13 = (ulong *)0x8;
    puVar14 = (ulong *)0x0;
    puVar10 = puStack_918;
    puVar11 = puVar34;
    puVar33 = puVar30;
    puVar15 = puStack_948;
    FUN_109e81834(lStack_928);
    puVar20 = *(ulong **)(puVar28[5] + 0x160);
    FUN_109f1ae3c();
  }
  puVar28 = puStack_940;
  if (puStack_940 != (ulong *)0x0) {
    if ((uint)*puStack_940 == 3) {
      puVar14 = (ulong *)(ulong)(*(byte *)(*(long *)(puStack_940[5] + 0x160) + 0x163) & 7);
    }
    else {
      puVar14 = (ulong *)0x0;
    }
    uStack_970 = CONCAT62(CONCAT51(uStack_970._3_5_,pbVar39[2]),*(undefined2 *)pbVar39);
    puVar12 = auStack_8f0;
    puVar13 = (ulong *)0x4;
    puVar10 = puStack_918;
    puVar11 = puVar34;
    puVar33 = puVar30;
    puVar15 = puStack_940;
    FUN_109e81834(lStack_928);
    puVar20 = *(ulong **)(puVar28[5] + 0x160);
    FUN_109f1ae3c();
  }
  puVar28 = (ulong *)0x1;
LAB_109e74968:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar28;
  }
  uVar42 = 0x109e749f0;
  ___stack_chk_fail();
  puVar6 = &uStack_970;
  while( true ) {
    while( true ) {
      *(ulong **)((long)puVar6 + -0x60) = param_7;
      *(byte **)((long)puVar6 + -0x58) = pbVar39;
      *(ulong **)((long)puVar6 + -0x50) = param_8;
      *(ulong **)((long)puVar6 + -0x48) = param_5;
      *(ulong **)((long)puVar6 + -0x40) = puVar37;
      *(ulong **)((long)puVar6 + -0x38) = param_3;
      *(ulong **)((long)puVar6 + -0x30) = puVar34;
      *(ulong **)((long)puVar6 + -0x28) = param_6;
      *(ulong **)((long)puVar6 + -0x20) = puVar30;
      *(ulong **)((long)puVar6 + -0x18) = puVar28;
      *(undefined1 **)((long)puVar6 + -0x10) = puVar41;
      *(undefined8 *)((long)puVar6 + -8) = uVar42;
      puVar41 = (undefined1 *)((long)puVar6 + -0x10);
      param_3 = puVar33;
      puVar37 = puVar10;
      while (cVar5 = *(char *)((long)puVar37 + 4), cVar5 == '\x12') {
        *(ulong **)((long)puVar6 + -0x70) = puVar13;
        *(ulong **)((long)puVar6 + -0x68) = param_3;
        FUN_109f65f70(puVar11,(undefined1 *)((long)puVar6 + -0x68),&UNK_10f60dd73);
        puVar13 = (ulong *)0x0;
        param_3 = *(ulong **)((long)puVar6 + -0x68);
        puVar37 = puVar14;
        puVar14 = (ulong *)0x0;
      }
      puVar28 = puVar12;
      puVar30 = puVar15;
      param_6 = puVar20;
      puVar34 = puVar11;
      if (cVar5 != '\x11') break;
      puVar13 = puVar37;
      FUN_109eca23c();
      if ((int)puVar13 == 0) {
        return puVar13;
      }
      param_8 = (ulong *)0x0;
      pbVar39 = (byte *)0x0;
      param_5 = (ulong *)&UNK_10f60dd73;
      *(undefined8 *)((long)puVar6 + -0x70) = *(undefined8 *)(puVar37[6] + 8);
      *(ulong **)((long)puVar6 + -0x68) = param_3;
      FUN_109f65f70(puVar11,(undefined1 *)((long)puVar6 + -0x68),&UNK_10f60dd73);
      puVar10 = *(ulong **)puVar37[6];
      puVar33 = *(ulong **)((long)puVar6 + -0x68);
      puVar13 = (ulong *)0x0;
      puVar14 = (ulong *)0x0;
      uVar42 = 0x109e74bc0;
      puVar6 = (ulong *)((long)puVar6 + -0x70);
    }
    puVar10 = puVar37;
    if (cVar5 != '\x13') break;
    do {
      cVar5 = *(char *)((long)puVar10[6] + 4);
      puVar10 = (ulong *)puVar10[6];
    } while (cVar5 == '\x13');
    puVar10 = puVar37;
    if (cVar5 != '\x11') {
      do {
        cVar5 = *(char *)((long)puVar10[6] + 4);
        puVar10 = (ulong *)puVar10[6];
      } while (cVar5 == '\x13');
      if ((cVar5 != '\x12') &&
         (puVar10 = puVar37, func_0x000109eca118(), *(char *)((long)puVar10 + 4) != '\x13')) break;
    }
    puVar10 = puVar37;
    FUN_109eca23c();
    if ((int)puVar10 == 0) {
      return puVar10;
    }
    param_7 = (ulong *)0x0;
    pbVar39 = &UNK_10f60dd19;
    *(undefined8 *)((long)puVar6 + -0x70) = 0;
    *(ulong **)((long)puVar6 + -0x68) = param_3;
    FUN_109f65f70(puVar11,(undefined1 *)((long)puVar6 + -0x68),&UNK_10f60dd19);
    puVar10 = puVar37;
    func_0x000109eca118();
    puVar33 = *(ulong **)((long)puVar6 + -0x68);
    uVar42 = 0x109e74b20;
    puVar6 = (ulong *)((long)puVar6 + -0x70);
    param_5 = puVar14;
    param_8 = puVar13;
  }
  FUN_109f65c2c(puVar20,*puVar11);
  uVar22 = *puVar15;
  uVar19 = *puVar12;
  *(uint *)puVar12 = (uint)uVar19 + 1;
  *(ulong **)(uVar22 + (ulong)(uint)uVar19 * 8) = puVar20;
  return puVar20;
}



/* Entry: 109e74bf8; end: 109e74fa7;  */

void FUN_109e74bf8(undefined8 param_1,undefined1 *param_2,long param_3,long param_4,int param_5,
                  int param_6,int param_7)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  
  bVar4 = param_6 - 1U < 2;
  cVar2 = *(char *)(param_4 + 0xab);
  cVar3 = *(char *)(param_3 + 0x4b1);
  bVar1 = *(char *)(param_3 + 0x4b0) != '\0' || (param_5 == 1 || bVar4);
  if (param_7 != 0) {
    bVar1 = (param_5 == -1 || param_6 == -1) || bVar1;
  }
  *(undefined4 *)(param_2 + 0x14) = 8;
  FUN_109f658b0(param_1,0x100);
  *(undefined8 *)(param_2 + 8) = param_1;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = bVar1;
  param_2[1] = cVar3 != '\0';
  param_2[2] = cVar2 != '\0' && (param_5 != 1 && !bVar4);
  param_2[3] = *(char *)(param_4 + 0x25) != '\0';
  param_2[4] = *(char *)(param_3 + 0x4c1) != '\0';
  *(int *)(param_2 + 0x18) = param_5;
  *(int *)(param_2 + 0x1c) = param_6;
  return;
}



/* Entry: 109e74fa8; end: 109e750ab;  */

void FUN_109e74fa8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_2 + 0x25) >> 2 & 1) == 0) {
    lVar1 = *(long *)(param_2 + 0x88);
    if (lVar1 == 0) {
      param_1 = *(undefined8 *)(param_2 + 0x18);
      uVar2 = param_1;
      (**(code **)(param_3 + 8))(param_1);
    }
    else {
      for (; *(char *)(lVar1 + 4) == '\x13'; lVar1 = *(long *)(lVar1 + 0x30)) {
      }
      if ((*(byte *)(lVar1 + 0xc) >> 1 & 1) == 0) {
        FUN_109eca058();
      }
      FUN_109f65d74(param_1,&UNK_10f518dd3);
      uVar2 = param_1;
      (**(code **)(param_4 + 8))();
      param_3 = param_4;
    }
    FUN_109f64fdc(param_3,uVar2,param_1);
  }
  return;
}



/* Entry: 109e750ac; end: 109e7521b;  */

void FUN_109e750ac(undefined8 param_1,byte *param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  if ((param_3 == 0) ||
     (((*(byte *)(param_3 + 0x25) >> 2 & 1) == 0 && (*(int *)(param_3 + 0x3c) == -1)))) {
    if (param_4 == 0) {
      uVar5 = *(ulong *)(param_3 + 0x10);
      uVar6 = uVar5;
      func_0x000109ec6594();
      if ((uVar6 & 1) == 0) {
        func_0x000109ec661c();
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      if ((*(byte *)(param_4 + 0x25) >> 2 & 1) != 0) {
        return;
      }
      if (*(int *)(param_4 + 0x3c) != -1) {
        return;
      }
      uVar5 = 0;
    }
    if ((((*param_2 & 1) == 0) &&
        (((param_3 == 0 || ((param_2[1] & 1) == 0)) || ((*(byte *)(param_3 + 0x2c) >> 2 & 1) == 0)))
        ) && (((uVar5 & 1) != 0 ||
              ((*(int *)(param_2 + 0x1c) != -1 && (*(int *)(param_2 + 0x1c) != 4)))))) {
      if (param_3 != 0) {
        *(ulong *)(param_3 + 0x20) = *(ulong *)(param_3 + 0x20) & 0xfffffff1ff3fffff | 0x400000000;
      }
      if (param_4 != 0) {
        *(ulong *)(param_4 + 0x20) = *(ulong *)(param_4 + 0x20) & 0xfffffff1ff3fffff | 0x400000000;
      }
    }
    if (*(int *)(param_2 + 0x10) == *(int *)(param_2 + 0x14)) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x10) << 1;
      FUN_109f65a40(param_1,*(undefined8 *)(param_2 + 8),0x20);
      *(undefined8 *)(param_2 + 8) = param_1;
    }
    lVar2 = param_4;
    if (param_4 == 0) {
      lVar2 = param_3;
    }
    if (((param_3 != 0) && (param_4 != 0)) && ((*(byte *)(param_4 + 0x2d) >> 3 & 1) != 0)) {
      *(ulong *)(param_3 + 0x2c) = *(ulong *)(param_3 + 0x2c) | 0x800;
    }
    lVar7 = lVar2;
    FUN_109e7521c();
    uVar3 = *(uint *)(param_2 + 0x10);
    puVar1 = (undefined4 *)(*(long *)(param_2 + 8) + (ulong)uVar3 * 0x20);
    *puVar1 = (int)lVar7;
    uVar4 = (undefined4)*(undefined8 *)(lVar2 + 0x10);
    FUN_109e752a0();
    puVar1[1] = uVar4;
    *(long *)(puVar1 + 2) = param_3;
    *(long *)(puVar1 + 4) = param_4;
    *(uint *)(param_2 + 0x10) = uVar3 + 1;
  }
  return;
}



/* Entry: 109e7521c; end: 109e7529f;  */

uint FUN_109e7521c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  if ((uVar4 & 0xe00000000) != 0x400000000) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    uVar1 = uVar3;
    func_0x000109ec6594();
    if ((uVar1 & 1) == 0) {
      func_0x000109ec661c();
      uVar2 = 2;
      if ((uVar3 & 1) == 0) {
        uVar2 = (uint)(uVar4 >> 0x21) & 7;
      }
      goto LAB_109e75274;
    }
  }
  uVar2 = 2;
LAB_109e75274:
  return uVar2 | (uint)(uVar4 >> 0x13) & 0x38 | *(uint *)(param_1 + 0x2c) >> 5 & 0x40;
}



/* Entry: 109e752a0; end: 109e752d7;  */

undefined4 FUN_109e752a0(long param_1)

{
  for (; *(char *)(param_1 + 4) == '\x13'; param_1 = *(long *)(param_1 + 0x30)) {
  }
  func_0x000109ec8650();
  return *(undefined4 *)(&UNK_10dfa3910 + (ulong)((uint)param_1 & 3) * 4);
}



/* Entry: 109e752d8; end: 109e7552f;  */

void FUN_109e752d8(long param_1,int param_2)

{
  long *plVar1;
  bool bVar2;
  byte bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  if ((param_2 == 4) && (*(char *)(param_1 + 0x61) == '\x04')) {
    plVar13 = *(long **)(param_1 + 0x178);
    for (plVar11 = (long *)**(long **)(param_1 + 0x178); plVar11 != (long *)0x0;
        plVar11 = (long *)*plVar11) {
      lVar14 = plVar13[6];
      if (lVar14 != 0) goto LAB_109e7533c;
      plVar13 = plVar11;
    }
  }
LAB_109e754fc:
  FUN_109f0f144(param_1);
  plVar13 = *(long **)(param_1 + 0x178);
  plVar11 = (long *)**(long **)(param_1 + 0x178);
  while( true ) {
    if (plVar11 == (long *)0x0) {
      return;
    }
    lVar14 = plVar13[6];
    if (lVar14 != 0) break;
    plVar13 = plVar11;
    plVar11 = (long *)*plVar11;
  }
  do {
    uStack_78 = 0;
    puStack_70 = (undefined8 *)0x0;
    lStack_68 = 0;
    lVar10 = *(long *)(lVar14 + 0x30);
    if (lVar10 == 0) {
LAB_109efa1a4:
      uVar7 = 0xfffffff7;
    }
    else {
      lVar12 = lVar10;
      FUN_109ecc434();
      uVar7 = 0;
      do {
        lVar6 = lVar12;
        plVar11 = (long *)**(undefined8 **)(lVar10 + 0x20);
        if (plVar11 != (long *)0x0) {
          lVar12 = *plVar11;
          puVar5 = &uStack_78;
          FUN_109efa1c4(puVar5,*(undefined8 **)(lVar10 + 0x20),0);
          uVar7 = uVar7 | (uint)puVar5;
          if (lVar12 != 0) {
            for (plVar9 = (long *)*plVar11; (plVar9 != (long *)0x0 && (*plVar9 != 0));
                plVar9 = (long *)*plVar9) {
              puVar5 = &uStack_78;
              FUN_109efa1c4(puVar5,plVar11,0);
              uVar7 = uVar7 | (uint)puVar5;
              plVar11 = plVar9;
            }
            puVar5 = &uStack_78;
            FUN_109efa1c4(puVar5,plVar11,0);
            uVar7 = uVar7 | (uint)puVar5;
          }
        }
        lVar12 = lVar6;
        FUN_109ecc434();
        lVar10 = lVar6;
      } while (lVar6 != 0);
      if ((uVar7 & 1) == 0) goto LAB_109efa1a4;
      uVar7 = 0x27;
    }
    *(uint *)(lVar14 + 0x84) = *(uint *)(lVar14 + 0x84) & uVar7;
    plVar13 = (long *)*plVar13;
    plVar11 = (long *)*plVar13;
    while( true ) {
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar14 = plVar13[6];
      if (lVar14 != 0) break;
      plVar13 = plVar11;
      plVar11 = (long *)*plVar11;
    }
  } while( true );
LAB_109e7533c:
  uStack_88 = 0;
  uStack_80 = 0;
  puStack_70 = *(undefined8 **)(*(long *)(lVar14 + 0x20) + 0x18);
  uStack_78 = 0;
  lVar10 = *(long *)(lVar14 + 0x30);
  lStack_68 = lVar14;
  if (lVar10 == 0) {
LAB_109e754c8:
    uVar7 = 0xfffffff7;
  }
  else {
    lVar12 = lVar10;
    FUN_109ecc434();
    bVar2 = false;
    do {
      lVar6 = lVar12;
      plVar9 = *(long **)(lVar10 + 0x20);
      plVar11 = (long *)*plVar9;
      if (plVar11 != (long *)0x0) {
        do {
          plVar4 = (long *)0x0;
          plVar8 = plVar9;
          if (*plVar11 != 0) {
            plVar4 = plVar11;
          }
          do {
            plVar9 = plVar4;
            if (((int)plVar8[3] == 4) && ((int)plVar8[5] - 0xbbU < 3)) {
              plVar11 = plVar8 + 0x13;
              do {
                lVar12 = *(long *)*plVar11;
                lVar10 = lVar12;
                if (*(int *)(lVar12 + 0x18) != 1) {
                  lVar10 = 0;
                }
                plVar11 = (long *)(lVar10 + 0x50);
              } while (*(int *)(lVar12 + 0x28) != 0);
              if ((*(ulong *)(*(long *)(lVar12 + 0x38) + 0x20) & 0x1fffff) != 0x20000)
              goto LAB_109e75488;
              plVar11 = plVar8 + 6;
              puVar5 = (undefined8 *)*puStack_70;
              FUN_109f6600c(puVar5,0x48,8);
              *(undefined4 *)(puVar5 + 3) = 7;
              puVar5[1] = 0;
              puVar5[2] = 0;
              *puVar5 = 0;
              FUN_109ecb048();
              FUN_109ece5ec(&uStack_88,puVar5);
              if ((long *)plVar8[8] + -1 != plVar11) {
                plVar4 = puVar5 + 6;
                plVar8 = (long *)plVar8[8];
                do {
                  lVar10 = *plVar8;
                  plVar1 = (long *)plVar8[1];
                  *(long **)(lVar10 + 8) = plVar1;
                  *plVar1 = lVar10;
                  plVar8[1] = (long)plVar4;
                  plVar8[2] = (long)(puVar5 + 5);
                  *plVar8 = 0;
                  lVar10 = *plVar4;
                  *plVar8 = lVar10;
                  *(long **)(lVar10 + 8) = plVar8;
                  *plVar4 = (long)plVar8;
                  plVar8 = plVar1;
                } while (plVar1 + -1 != plVar11);
              }
              FUN_109ecb9c0(*plVar11);
              bVar3 = 1;
            }
            else {
LAB_109e75488:
              bVar3 = 0;
            }
            bVar2 = (bool)(bVar2 | bVar3);
            if (plVar9 == (long *)0x0) goto LAB_109e754a8;
            plVar11 = (long *)*plVar9;
            plVar4 = (long *)0x0;
            plVar8 = plVar9;
          } while (plVar11 == (long *)0x0);
        } while( true );
      }
LAB_109e754a8:
      lVar12 = lVar6;
      FUN_109ecc434();
      lVar10 = lVar6;
    } while (lVar6 != 0);
    if (!bVar2) goto LAB_109e754c8;
    uVar7 = 3;
  }
  *(uint *)(lVar14 + 0x84) = *(uint *)(lVar14 + 0x84) & uVar7;
  plVar13 = (long *)*plVar13;
  plVar11 = (long *)*plVar13;
  while( true ) {
    if (plVar11 == (long *)0x0) goto LAB_109e754fc;
    lVar14 = plVar13[6];
    if (lVar14 != 0) break;
    plVar13 = plVar11;
    plVar11 = (long *)*plVar11;
  }
  goto LAB_109e7533c;
}



/* Entry: 109e75530; end: 109e7558b;  */

undefined1 FUN_109e75530(long param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = param_1;
  if (*(byte *)(param_1 + 4) == 0x13) {
    do {
      uVar2 = (uint)*(byte *)(*(long *)(lVar1 + 0x30) + 4);
      lVar1 = *(long *)(lVar1 + 0x30);
    } while (uVar2 == 0x13);
    if (uVar2 - 0x11 < 2) {
      return 4;
    }
    do {
      param_1 = *(long *)(param_1 + 0x30);
    } while (*(char *)(param_1 + 4) == '\x13');
  }
  else if (*(byte *)(param_1 + 4) - 0x11 < 2) {
    return 4;
  }
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 109e7558c; end: 109e7561b;  */

void FUN_109e7558c(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_2 + 0x10);
  uVar3 = param_2;
  func_0x000109f0f5ac(param_2,param_3);
  if (((uVar3 & 1) != 0) || (*(char *)(param_2 + 0x2d) < '\0')) {
    func_0x000109eca118();
  }
  iVar1 = *(int *)(param_2 + 0x3c);
  FUN_109ec9e40(uVar5,0,1);
  if ((int)uVar5 != 0) {
    uVar4 = iVar1 - 0x20;
    do {
      *(uint *)(param_1 + (ulong)(uVar4 >> 5) * 4) =
           1 << (ulong)(uVar4 & 0x1f) | *(uint *)(param_1 + (ulong)(uVar4 >> 5) * 4);
      uVar4 = uVar4 + 1;
      uVar2 = (int)uVar5 - 1;
      uVar5 = (ulong)uVar2;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 109e7561c; end: 109e75843;  */

undefined8 FUN_109e7561c(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  bool bVar11;
  long *plVar12;
  
  uVar4 = (uint)param_4;
  if (uVar4 != 8) {
    param_1 = param_2;
  }
  plVar12 = *(long **)(param_1 + 8);
  plVar5 = (long *)*plVar12;
  if (plVar5 != (long *)0x0) {
    bVar11 = false;
    plVar3 = (long *)0x0;
    if (*plVar5 != 0) {
      plVar3 = plVar5;
    }
LAB_109e75670:
    plVar5 = plVar3;
    uVar6 = plVar12[4];
    if ((((uVar4 & (uint)uVar6) != 0) &&
        ((((pcVar7 = (char *)plVar12[3], pcVar7 == (char *)0x0 || (*pcVar7 != 'g')) ||
          (pcVar7[1] != 'l')) || (pcVar7[2] != '_')))) && ((uVar6 >> 0x20 & 1) == 0)) {
      uVar2 = *(uint *)((long)plVar12 + 0x3c);
      uVar1 = uVar2 - 0x20;
      if ((0x1f < uVar2) &&
         (uVar10 = (uint)*(undefined8 *)((long)plVar12 + 0x2c), (uVar10 >> 4 & 1) == 0)) {
        if (-1 < (int)uVar2) {
          lVar9 = *(long *)(param_5 + (uVar6 >> 0x24 & 3) * 8);
          uVar6 = plVar12[2];
          plVar3 = plVar12;
          func_0x000109f0f5ac(plVar12,(long)*(char *)(param_1 + 0x61));
          if (((uVar10 >> 0xf & 1) != 0) || ((int)plVar3 != 0)) {
            func_0x000109eca118();
          }
          FUN_109ec9e40(uVar6,0,1);
          uVar2 = (uint)uVar6;
          while (uVar2 != 0) {
            if ((*(uint *)(lVar9 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)
            goto LAB_109e757e0;
            uVar1 = uVar1 + 1;
            uVar2 = (int)uVar6 - 1;
            uVar6 = (ulong)uVar2;
          }
        }
        *(undefined4 *)((long)plVar12 + 0x3c) = 0;
        plVar12[4] = plVar12[4] & 0xffffffffffe00000U | 0x20000;
        if (uVar4 == 4) {
          if ((*(char *)(param_3 + 0xa5) == '\x01') || (0x78 < *(uint *)(param_3 + 0xd8))) {
            func_0x000109f47670();
            func_0x000109f47670();
            func_0x000109eb84b0(param_3,&UNK_10f60e8ed);
          }
          else {
            func_0x000109f47670();
            func_0x000109f47670();
            func_0x000109eb844c(param_3,&UNK_10f60e8ed);
          }
        }
        bVar11 = true;
      }
    }
LAB_109e757e0:
    if (plVar5 != (long *)0x0) {
      plVar8 = (long *)*plVar5;
      plVar3 = (long *)0x0;
      plVar12 = plVar5;
      if ((plVar8 != (long *)0x0) && (plVar3 = (long *)0x0, *plVar8 != 0)) {
        plVar3 = plVar8;
      }
      goto LAB_109e75670;
    }
    if (bVar11) {
      FUN_109e752d8(param_1,param_4);
      return 1;
    }
  }
  return 0;
}



/* Entry: 109e75844; end: 109e7589f;  */

int FUN_109e75844(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  if ((*(byte *)(lVar2 + 0x25) >> 2 & 1) != 0) {
    if ((*(ulong *)(lVar3 + 0x20) >> 0x2a & 1) == 0) {
      return 1;
    }
    return *(int *)(lVar3 + 0x3c) - *(int *)(lVar2 + 0x3c);
  }
  if ((*(ulong *)(lVar3 + 0x20) >> 0x2a & 1) == 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
    _strcmp(uVar1,*(undefined8 *)(lVar3 + 0x18));
    return -(int)uVar1;
  }
  return -1;
}



/* Entry: 109e758a0; end: 109e75a9b;  */

int FUN_109e758a0(long param_1,long param_2)

{
  if ((*(long *)(param_1 + 8) == 0) || ((*(byte *)(*(long *)(param_1 + 8) + 0x2c) >> 3 & 1) == 0)) {
    if ((*(long *)(param_2 + 8) != 0) && ((*(byte *)(*(long *)(param_2 + 8) + 0x2c) >> 3 & 1) != 0))
    {
      return -1;
    }
    return *(int *)(param_1 + 0x1c) - *(int *)(param_2 + 0x1c);
  }
  if ((*(long *)(param_2 + 8) != 0) && ((*(byte *)(*(long *)(param_2 + 8) + 0x2c) >> 3 & 1) != 0)) {
    return 0;
  }
  return 1;
}



/* Entry: 109e75a9c; end: 109e75fab;  */

undefined8
FUN_109e75a9c(undefined8 *param_1,long param_2,long param_3,uint *param_4,uint param_5,
             undefined4 param_6,long param_7,long param_8,long param_9,byte param_10,
             undefined4 param_11,long param_12)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  undefined *puVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined8 *puVar20;
  int iVar21;
  
  iVar21 = *(int *)((long)param_1 + 0x3c);
  if (iVar21 != 0) {
    param_4[(ulong)param_5 * 4 + 9] = param_4[(ulong)param_5 * 4 + 9] + iVar21;
    goto LAB_109e75b04;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    iVar21 = 0;
    goto LAB_109e75b04;
  }
  if (param_10 == 0) {
    uVar17 = param_4[(ulong)param_5 * 4 + 9];
  }
  else {
    uVar17 = *(uint *)((long)param_1 + 0x24) >> 2;
  }
  iVar21 = *(int *)(param_1 + 7);
  *(uint *)(*(long *)(param_4 + 4) + (long)(int)param_4[6] * 0x28 + 0x24) = uVar17 << 2;
  iVar16 = *(int *)((long)param_1 + 0x1c);
  iVar18 = *(int *)(param_1 + 5);
  puVar20 = param_1;
  func_0x000109e75980();
  uVar8 = (int)puVar20 + uVar17;
  if ((((param_10 & 1) != 0) || (*(short *)(param_3 + 0x40) == -0x7374)) &&
     (*(uint *)(param_2 + 0x480) < uVar8)) {
    puVar7 = &UNK_10f60ec54;
LAB_109e75f90:
    func_0x000109eb844c(param_3,puVar7);
    return 0;
  }
  uVar13 = uVar17 >> 5;
  uVar12 = uVar8 - 1 >> 5;
  lVar14 = *(long *)(param_7 + (ulong)param_5 * 8);
  uVar10 = (ulong)param_5;
  if (lVar14 == 0) {
    func_0x000109f6590c(param_12,(ulong)*(uint *)(param_2 + 0x480) + 0x1f >> 3 & 0x3ffffffc);
    *(long *)(param_7 + uVar10 * 8) = param_12;
    lVar14 = param_12;
  }
  if (uVar13 <= uVar12) {
    lVar11 = 0;
    lVar15 = (ulong)uVar13 - (ulong)uVar12;
    lVar14 = lVar14 + (ulong)uVar13 * 4;
    do {
      uVar13 = uVar8 & 0x1f;
      if (lVar15 != 0) {
        uVar13 = 0;
      }
      uVar1 = *(uint *)(lVar14 + lVar11 * 4);
      uVar12 = 0xffffffff;
      if (uVar13 != 0) {
        uVar12 = ~(-1 << (ulong)uVar13);
      }
      uVar13 = -1 << (ulong)(uVar17 & 0x1f);
      if (lVar11 != 0) {
        uVar13 = 0xffffffff;
      }
      if ((uVar12 & uVar13 & uVar1) != 0) {
        puVar7 = &UNK_10f60ec9f;
        goto LAB_109e75f90;
      }
      *(uint *)(lVar14 + lVar11 * 4) = uVar12 & uVar13 | uVar1;
      lVar15 = lVar15 + 1;
      lVar11 = lVar11 + 1;
    } while (lVar15 != 1);
  }
  iVar4 = *(int *)((long)param_1 + 0x34);
  lVar14 = 1;
  if (((8 < iVar4 - 0x8f46U) &&
      ((0x15 < iVar4 - 0x8fe9U || ((1 << (ulong)(iVar4 - 0x8fe9U & 0x1f) & 0x387007U) == 0)))) &&
     ((5 < iVar4 - 0x140aU || ((1 << (ulong)(iVar4 - 0x140aU & 0x1f) & 0x31U) == 0)))) {
    lVar14 = 0;
  }
  if ((int)puVar20 != 0) {
    uVar13 = *(int *)((long)param_1 + 0x2c) << lVar14;
    lVar14 = *(long *)param_1[9];
    bVar2 = *(byte *)(param_1 + 8);
    uVar8 = *(uint *)(param_1 + 10);
    uVar12 = uVar13;
    do {
      uVar5 = *(ulong *)(lVar14 + 0x20);
      uVar19 = (uint)puVar20;
      uVar1 = uVar19;
      if (((uVar5 >> 0x2a & 1) == 0) || (*(int *)(lVar14 + 0x3c) < 0x20)) {
        if (4U - iVar18 <= uVar19) {
          uVar1 = 4U - iVar18;
        }
      }
      else {
        if (uVar12 <= uVar19) {
          uVar1 = uVar12;
        }
        if (3 < uVar1) {
          uVar1 = 4;
        }
        uVar3 = uVar12 - uVar1;
        uVar12 = uVar13;
        if (uVar3 != 0) {
          uVar12 = uVar3;
        }
      }
      if ((((bVar2 & 1) == 0) && (((uint)uVar5 >> 0x1e & 1) != 0)) &&
         (*(int *)((long)param_1 + 0x3c) == 0)) {
        uVar3 = *param_4;
        piVar6 = (int *)(*(long *)(param_4 + 2) + (ulong)uVar3 * 0x18);
        piVar6[2] = uVar1;
        piVar6[3] = uVar8;
        *piVar6 = iVar16;
        piVar6[1] = param_5;
        piVar6[4] = uVar17;
        piVar6[5] = iVar18;
        *param_4 = uVar3 + 1;
      }
      iVar18 = 0;
      param_4[uVar10 * 4 + 10] = uVar8;
      uVar17 = uVar1 + uVar17;
      iVar16 = iVar16 + 1;
      puVar20 = (undefined8 *)(ulong)(uVar19 - uVar1);
    } while (uVar19 - uVar1 != 0);
  }
  if ((param_8 != 0) && (*(char *)(param_8 + uVar10) == '\x01')) {
    if (((iVar4 - 0x8f46U < 9) ||
        ((iVar4 - 0x8fe9U < 0x16 && ((1 << (ulong)(iVar4 - 0x8fe9U & 0x1f) & 0x387007U) != 0)))) ||
       ((iVar4 - 0x140aU < 6 && ((1 << (ulong)(iVar4 - 0x140aU & 0x1f) & 0x31U) != 0)))) {
      uVar8 = param_4[uVar10 * 4 + 9];
      if ((uVar8 & 1) != 0) {
        puVar7 = &UNK_10f60ecd3;
        goto LAB_109e75f90;
      }
    }
    else {
      uVar8 = param_4[uVar10 * 4 + 9];
    }
    if (uVar8 < uVar17) {
      puVar7 = &UNK_10f60ed42;
      goto LAB_109e75f90;
    }
    goto LAB_109e75b04;
  }
  if ((param_9 == 0) || (param_10 == 0)) {
    param_4[uVar10 * 4 + 9] = uVar17;
    goto LAB_109e75b04;
  }
  uVar8 = *(uint *)(param_9 + uVar10 * 4);
  if ((iVar4 - 0x8f46U < 9) ||
     ((iVar4 - 0x8fe9U < 0x16 && ((1 << (ulong)(iVar4 - 0x8fe9U & 0x1f) & 0x387007U) != 0)))) {
LAB_109e75f1c:
    uVar13 = 2;
  }
  else {
    uVar13 = 1;
    if ((iVar4 - 0x140aU < 6) && ((1 << (ulong)(iVar4 - 0x140aU & 0x1f) & 0x31U) != 0))
    goto LAB_109e75f1c;
  }
  if (uVar8 <= uVar13) {
    func_0x000109e75a08();
    uVar8 = 1;
    if (iVar4 != 0) {
      uVar8 = 2;
    }
  }
  *(uint *)(param_9 + uVar10 * 4) = uVar8;
  param_4[uVar10 * 4 + 9] = (uVar17 + uVar8) - 1 & -uVar8;
LAB_109e75b04:
  FUN_109f65c2c(param_3,*param_1);
  plVar9 = (long *)(*(long *)(param_4 + 4) + (long)(int)param_4[6] * 0x28);
  *plVar9 = param_3;
  FUN_109eb8d70(plVar9);
  uVar17 = param_4[6];
  lVar14 = *(long *)(param_4 + 4) + (long)(int)uVar17 * 0x28;
  *(short *)(lVar14 + 0x18) = (short)*(undefined4 *)((long)param_1 + 0x34);
  *(undefined4 *)(lVar14 + 0x1c) = param_6;
  *(int *)(lVar14 + 0x20) = iVar21;
  param_4[6] = uVar17 + 1;
  param_4[(ulong)param_5 * 4 + 8] = param_4[(ulong)param_5 * 4 + 8] + 1;
  return 1;
}



/* Entry: 109e75fac; end: 109e760cb;  */

void FUN_109e75fac(uint *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  byte bVar11;
  
  if ((param_1 != (uint *)0x0) && (*param_1 != 0)) {
    func_0x000109f6590c(param_2,(*param_1 & 0xffff) * 8 + 0x18);
    *(short *)(param_2 + 0x16) = (short)*param_1;
    lVar7 = 0x12;
    lVar9 = 2;
    puVar4 = param_1 + 10;
    do {
      *(short *)(param_2 + lVar9) = (short)puVar4[-1] << 2;
      *(short *)(param_2 + lVar9 + 2) = (short)puVar4[-2];
      param_2[lVar7] = (byte)*puVar4;
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 4;
      puVar4 = puVar4 + 4;
    } while (lVar7 != 0x16);
    uVar5 = (ulong)*param_1;
    if (*param_1 != 0) {
      uVar6 = (uint)*param_2;
      pbVar10 = param_2 + 0x1f;
      uVar8 = (uint)param_2[1];
      puVar4 = (uint *)(*(long *)(param_1 + 2) + 0xc);
      do {
        uVar2 = puVar4[-3];
        uVar3 = puVar4[-2];
        pbVar10[-7] = (byte)uVar3;
        *(short *)(pbVar10 + -5) = (short)puVar4[1] << 2;
        pbVar10[-3] = (byte)uVar2;
        uVar2 = puVar4[2];
        bVar11 = 0xff;
        if (puVar4[-1] + uVar2 != 0x20) {
          bVar11 = ~(byte)(-1 << (ulong)(puVar4[-1] + uVar2 & 0x1f));
        }
        bVar1 = 0;
        if (uVar2 != 0x20) {
          bVar1 = (byte)(-1 << (ulong)(uVar2 & 0x1f));
        }
        uVar6 = uVar6 | 1 << (ulong)(uVar3 & 0x1f);
        uVar3 = *puVar4;
        *pbVar10 = (byte)uVar2;
        pbVar10[-1] = bVar11 & bVar1;
        uVar8 = uVar8 | 1 << (ulong)(uVar3 & 0x1f);
        pbVar10 = pbVar10 + 8;
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + 6;
      } while (uVar5 != 0);
      *param_2 = (byte)uVar6;
      param_2[1] = (byte)uVar8;
    }
  }
  return;
}



/* Entry: 109e760cc; end: 109e7636b;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_109e760cc(ulong param_1)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  long *plVar20;
  undefined8 uVar21;
  long *plVar22;
  long alStack_80 [2];
  code *pcStack_70;
  undefined1 *puStack_68;
  
  do {
    func_0x000109f1eca0(param_1);
    uVar4 = param_1;
    FUN_109f43ecc(param_1,0xe0000,0);
    uVar5 = param_1;
    FUN_109f2a108();
    uVar6 = param_1;
    FUN_109f251b0();
    uVar7 = param_1;
    FUN_109f29aac();
    if (*(char *)(*(long *)(param_1 + 0x28) + 0x58) == '\x01') {
      alStack_80[0] = *(long *)(*(long *)(param_1 + 0x28) + 0x60);
      alStack_80[1] = 0;
      pcStack_70 = (code *)0x0;
      if (alStack_80[0] != 0) {
        pcStack_70 = FUN_109f0a68c;
      }
      puStack_68 = (undefined1 *)alStack_80;
      FUN_109eccc7c(param_1,FUN_109f094ac,FUN_109f094f4,&pcStack_70);
      func_0x000109f1c4e0(param_1,0);
    }
    FUN_109f07f88(param_1);
    FUN_109f1ae3c(param_1);
    uVar8 = param_1;
    FUN_109f28540();
    uVar9 = param_1;
    FUN_109f333b4();
    uVar10 = param_1;
    FUN_109f287bc();
    uVar11 = param_1;
    FUN_109f2e338();
    if ((int)uVar11 == 0) {
      uVar19 = (uint)uVar10 | (uint)uVar9 | (uint)uVar8 | (uint)uVar7 |
               (uint)uVar6 | (uint)uVar5 | (uint)uVar4;
    }
    else {
      FUN_109f28540(param_1);
      FUN_109f287bc(param_1);
      uVar19 = 1;
    }
    uVar4 = param_1;
    FUN_109f2b460(param_1,0);
    uVar5 = param_1;
    FUN_109f28f94();
    uVar6 = param_1;
    FUN_109f285c0();
    uVar7 = param_1;
    FUN_109f2de50();
    uVar8 = param_1;
    FUN_109f319c0(param_1,8,1,1);
    uVar9 = param_1;
    FUN_109f32874();
    uVar10 = param_1;
    FUN_109f2117c();
    uVar11 = param_1;
    FUN_109f2414c();
    uVar12 = param_1;
    FUN_109f14560(param_1,0xc);
    uVar19 = (uint)uVar12 | (uint)uVar11 | (uint)uVar10 | (uint)uVar9 | (uint)uVar8 |
             (uint)uVar7 | (uint)uVar6 | (uint)uVar5 | (uint)uVar4 | uVar19;
    if ((*(ushort *)(param_1 + 0x152) >> 3 & 1) == 0) {
      lVar14 = *(long *)(param_1 + 0x28);
      uVar1 = (uint)*(byte *)(lVar14 + 7) << 4 | (uint)*(byte *)(lVar14 + 8) << 5 |
              (uint)*(byte *)(lVar14 + 9) << 6;
      if ((uVar1 != 0) && (uVar4 = param_1, FUN_109f0e0bc(param_1,uVar1,0), (int)uVar4 != 0)) {
        FUN_109f2414c(param_1);
        uVar19 = 1;
      }
      *(ushort *)(param_1 + 0x152) = *(ushort *)(param_1 + 0x152) | 8;
    }
    uVar4 = param_1;
    func_0x000109f34804();
    uVar5 = param_1;
    func_0x000109f23df0();
    uVar19 = (uint)uVar5 | (uint)uVar4 | uVar19;
    lVar14 = *(long *)(param_1 + 0x28);
    if ((*(int *)(lVar14 + 0x94) != 0) ||
       ((*(int *)(lVar14 + 0x9c) != 0 && ((*(byte *)(lVar14 + 0xb1) >> 6 & 1) != 0)))) {
      uVar4 = param_1;
      FUN_109f2f920();
      uVar19 = (uint)uVar4 | uVar19;
    }
    uVar4 = param_1;
    func_0x000109f337bc(param_1,0);
  } while (((uVar4 & 1) != 0) || ((uVar19 & 1) != 0));
  *(ushort *)(param_1 + 0x152) = *(ushort *)(param_1 + 0x152) | 0x20;
  plVar20 = *(long **)(param_1 + 0x178);
  plVar15 = (long *)**(long **)(param_1 + 0x178);
  while( true ) {
    if (plVar15 == (long *)0x0) {
      return 0;
    }
    lVar14 = plVar20[6];
    if (lVar14 != 0) break;
    plVar20 = plVar15;
    plVar15 = (long *)*plVar15;
  }
  uVar21 = 0;
  do {
    alStack_80[1] = 0;
    pcStack_70 = (code *)0x0;
    puStack_68 = (undefined1 *)0x0;
    lVar17 = *(long *)(lVar14 + 0x30);
    if (lVar17 == 0) {
LAB_109f1df54:
      uVar19 = 0xfffffff7;
    }
    else {
      lVar16 = lVar17;
      FUN_109ecc434();
      bVar2 = false;
      do {
        lVar13 = lVar16;
        plVar22 = *(long **)(lVar17 + 0x20);
        plVar15 = (long *)*plVar22;
        if (plVar15 != (long *)0x0) {
          do {
            plVar3 = (long *)0x0;
            plVar18 = plVar22;
            if (*plVar15 != 0) {
              plVar3 = plVar15;
            }
            do {
              plVar22 = plVar3;
              if ((int)plVar18[3] == 4) {
                lVar17 = plVar18[5];
                if ((int)lVar17 == 0x54) {
                  FUN_109f1db58(alStack_80 + 1,plVar18);
                  FUN_109ecb9c0(plVar18);
                  lVar16 = *(long *)plVar18[0x13];
                  if (*(int *)(lVar16 + 0x18) != 1) {
                    lVar16 = 0;
                  }
                  func_0x000109ef9690(lVar16);
                  lVar16 = *(long *)plVar18[0x17];
                  if (*(int *)(lVar16 + 0x18) != 1) {
                    lVar16 = 0;
                  }
                  func_0x000109ef9690(lVar16);
                  FUN_109ecbc58(plVar18);
                }
                bVar2 = (bool)(bVar2 | (int)lVar17 == 0x54);
              }
              if (plVar22 == (long *)0x0) goto LAB_109f1df38;
              plVar15 = (long *)*plVar22;
              plVar3 = (long *)0x0;
              plVar18 = plVar22;
            } while (plVar15 == (long *)0x0);
          } while( true );
        }
LAB_109f1df38:
        lVar16 = lVar13;
        FUN_109ecc434();
        lVar17 = lVar13;
      } while (lVar13 != 0);
      if (!bVar2) goto LAB_109f1df54;
      uVar21 = 1;
      uVar19 = 3;
    }
    *(uint *)(lVar14 + 0x84) = *(uint *)(lVar14 + 0x84) & uVar19;
    plVar20 = (long *)*plVar20;
    plVar15 = (long *)*plVar20;
    while( true ) {
      if (plVar15 == (long *)0x0) {
        return uVar21;
      }
      lVar14 = plVar20[6];
      if (lVar14 != 0) break;
      plVar20 = plVar15;
      plVar15 = (long *)*plVar15;
    }
  } while( true );
}



/* Entry: 109e7636c; end: 109e7644f;  */

undefined * FUN_109e7636c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = (uint)*(ulong *)(param_1 + 0x20) & 0x1fffff;
  if (uVar1 < 0x80) {
    if (uVar1 < 4) {
      if (uVar1 == 1) goto LAB_109e76414;
      if (uVar1 == 2) {
        return &UNK_10f60ed9c;
      }
    }
    else {
      if (uVar1 == 4) {
LAB_109e76414:
        return &UNK_10f60edab;
      }
      if (uVar1 == 8) {
        return &UNK_10f60edb8;
      }
      if (uVar1 == 0x10) {
        return &UNK_10f60ed9c;
      }
    }
  }
  else if (uVar1 < 0x20000) {
    if (uVar1 == 0x80) {
      return &UNK_10f60ed9c;
    }
    if (uVar1 == 0x200) {
      return &UNK_10f60eda4;
    }
  }
  else {
    if (uVar1 == 0x80000) {
      return &UNK_10f60edd5;
    }
    if (uVar1 == 0x40000) {
      return &UNK_10f60edc6;
    }
    if (uVar1 == 0x20000) {
      puVar2 = &UNK_10f60ed8c;
      if ((*(ulong *)(param_1 + 0x20) & 0x200000) != 0) {
        puVar2 = &UNK_10f60ed7c;
      }
      return puVar2;
    }
  }
  return &UNK_10f60ede3;
}



/* Entry: 109e76450; end: 109e764e3;  */

void FUN_109e76450(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  uint param_5,undefined8 param_6)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(undefined8 *)(param_4 + 0x20);
  if ((uVar2 >> 0x18 & 1) == 0) {
    uVar2 = uVar2 & 0x1fffff;
    if (((param_5 == 1) && (uVar2 == 8)) || ((param_5 - 1 < 3 && (uVar2 == 4)))) {
      uVar1 = 1;
      goto LAB_109e764a0;
    }
  }
  uVar1 = 0;
LAB_109e764a0:
  FUN_109e764e4(param_2,param_3,1 << (ulong)(param_5 & 0x1f),param_6,param_4,
                *(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),0,
                *(int *)(param_4 + 0x3c) + -0x20,uVar1,0);
  return;
}



/* Entry: 109e764e4; end: 109e76963;  */

undefined8 *
FUN_109e764e4(undefined8 *param_1,long param_2,undefined4 param_3,undefined4 param_4,long param_5,
             undefined8 *param_6,undefined *param_7,int param_8,int param_9,byte param_10,
             undefined *param_11)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  undefined2 *puVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  
  lVar15 = *(long *)(param_5 + 0x88);
  puVar4 = param_11;
  if ((param_11 == (undefined *)0x0) &&
     (puVar4 = param_7, (*(byte *)(param_5 + 0x2d) >> 1 & 1) != 0)) {
    if ((*(byte *)(lVar15 + 0xc) >> 1 & 1) == 0) {
      func_0x000109eca058();
    }
    if (*(char *)(lVar15 + 4) == '\x13') {
      func_0x000109eca118();
      lVar10 = lVar15;
      func_0x000109eca118();
      puVar4 = param_7;
      if ((*(byte *)(lVar10 + 0xc) >> 1 & 1) == 0) {
        func_0x000109eca058();
      }
    }
    param_6 = param_1;
    FUN_109f65d74(param_1,&UNK_10f518dd3);
    param_7 = puVar4;
  }
  if (param_7[4] == '\x13') {
    puVar4 = param_7;
    func_0x000109eca118();
    if ((puVar4[4] | 2) == 0x13) {
      if ((param_10 & 1) == 0) {
        puVar5 = puVar4;
        FUN_109ec9e40(puVar4,0,1);
        iVar12 = (int)puVar5;
      }
      else {
        iVar12 = 0;
      }
      puVar5 = param_7;
      FUN_109eca23c();
      if ((int)puVar5 == 0) {
        return (undefined8 *)0x1;
      }
      uVar13 = 0;
      do {
        puVar6 = param_1;
        puVar16 = param_6;
        FUN_109f65d74(param_1,&UNK_10f60f043);
        puVar7 = param_1;
        FUN_109e764e4(param_1,param_2,param_3,param_4,param_5,puVar6,puVar4,param_8,param_9,
                      (uint)((ulong)puVar16 >> 0x20) & 0xffffff00,param_11);
        if ((int)puVar7 == 0) {
          return puVar7;
        }
        param_9 = param_9 + iVar12;
        uVar13 = uVar13 + 1;
        puVar5 = param_7;
        FUN_109eca23c();
      } while (uVar13 < (uint)puVar5);
      return puVar7;
    }
  }
  else if (param_7[4] == '\x11') {
    puVar5 = param_7;
    FUN_109eca23c();
    if ((int)puVar5 == 0) {
      return (undefined8 *)0x1;
    }
    lVar15 = 0;
    uVar14 = 0;
    do {
      uVar8 = *(undefined8 *)(*(long *)(param_7 + 0x30) + lVar15);
      puVar6 = param_1;
      puVar16 = param_6;
      FUN_109f65d74(param_1,&UNK_10f518dd3);
      puVar7 = param_1;
      FUN_109e764e4(param_1,param_2,param_3,param_4,param_5,puVar6,uVar8,param_8,param_9,
                    (uint)((ulong)puVar16 >> 0x20) & 0xffffff00,puVar4);
      if ((int)puVar7 == 0) {
        return puVar7;
      }
      FUN_109ec9e40(uVar8,0,1);
      param_9 = (int)uVar8 + param_9;
      uVar14 = uVar14 + 1;
      puVar5 = param_7;
      FUN_109eca23c();
      lVar15 = lVar15 + 0x30;
    } while (uVar14 < ((ulong)puVar5 & 0xffffffff));
    return puVar7;
  }
  puVar6 = param_1;
  FUN_109f658b0(param_1,0x38);
  if (puVar6 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar6[6] = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[1] = 0;
  *puVar6 = 0;
  uVar14 = *(ulong *)(param_5 + 0x20) & 0x1fffff;
  if (uVar14 == 8) {
    if (*(int *)(param_5 + 0x3c) == 0x1b) {
LAB_109e767e8:
      puVar7 = param_1;
      FUN_109f65c2c(param_1,&UNK_10f60d824);
      puVar6[3] = puVar7;
      uVar8 = 2;
    }
    else {
      if (*(int *)(param_5 + 0x3c) != 0x1a) goto LAB_109e767dc;
LAB_109e767b0:
      puVar7 = param_1;
      FUN_109f65c2c(param_1,&UNK_10f60d812);
      puVar6[3] = puVar7;
      uVar8 = 4;
    }
    param_7 = &DAT_10e05dc38;
    FUN_109ec69f4(&DAT_10e05dc38,uVar8,0);
  }
  else {
    if (uVar14 == 1) {
      iVar12 = *(int *)(param_5 + 0x3c);
      if (iVar12 == 0x24) goto LAB_109e767e8;
      if (iVar12 == 0x23) goto LAB_109e767b0;
      if (iVar12 == 0xc) {
        param_6 = (undefined8 *)&UNK_10f60d6c9;
      }
    }
LAB_109e767dc:
    puVar7 = param_1;
    FUN_109f65c2c(param_1,param_6);
    puVar6[3] = puVar7;
  }
  FUN_109eb8d70(puVar6 + 3);
  if (puVar6[3] == 0) {
    return (undefined8 *)0x0;
  }
  if ((*(char *)(*(long *)(param_5 + 0x10) + 4) == '\x10') ||
     ((((pcVar9 = *(char **)(param_5 + 0x18), pcVar9 != (char *)0x0 && (*pcVar9 == 'g')) &&
       (pcVar9[1] == 'l')) && (pcVar9[2] == '_')))) {
    param_9 = -1;
  }
  else if (param_8 == 0 && (*(byte *)(param_5 + 0x25) & 4) == 0) {
    param_9 = -1;
  }
  *(int *)(puVar6 + 6) = param_9;
  puVar6[1] = lVar15;
  puVar6[2] = param_11;
  *puVar6 = param_7;
  uVar1 = *(ushort *)((long)puVar6 + 0x34);
  uVar3 = (ushort)(uint)((ulong)*(undefined8 *)(param_5 + 0x20) >> 0x24) & 3;
  *(ushort *)((long)puVar6 + 0x34) = uVar1 & 0xfffc | uVar3;
  uVar3 = uVar3 | (*(ushort *)(param_5 + 0x34) & 1) << 2;
  *(ushort *)((long)puVar6 + 0x34) = uVar1 & 0xfff8 | uVar3;
  uVar3 = uVar3 | (ushort)((*(uint *)(param_5 + 0x20) >> 0x18 & 1) << 3);
  *(ushort *)((long)puVar6 + 0x34) = uVar1 & 0xfff0 | uVar3;
  uVar3 = uVar3 | (*(ushort *)(param_5 + 0x20) & 0xf) << 4;
  *(ushort *)((long)puVar6 + 0x34) = uVar1 & 0xff00 | uVar3;
  uVar3 = uVar3 | (ushort)(((uint)((ulong)*(undefined8 *)(param_5 + 0x20) >> 0x21) & 3) << 8);
  *(ushort *)((long)puVar6 + 0x34) = uVar1 & 0xfc00 | uVar3;
  uVar2 = (ushort)((*(uint *)(param_5 + 0x20) >> 0x1c & 3) << 0xb);
  *(ushort *)((long)puVar6 + 0x34) = uVar1 & 0xe000 | uVar1 & 0x400 | uVar3 | uVar2;
  *(ushort *)((long)puVar6 + 0x34) =
       uVar1 & 0xe000 | uVar3 | uVar2 | *(ushort *)(param_5 + 0x24) & 0x400;
  puVar7 = puVar6;
  (**(code **)(param_2 + 0x10))(puVar6);
  lVar15 = param_2;
  FUN_109f66ba8(param_2,puVar7,puVar6);
  if (lVar15 == 0) {
    lVar15 = param_1[0xd];
    FUN_109f65a40(lVar15,*(undefined8 *)(lVar15 + 0x108),0x18,*(int *)(lVar15 + 0x110) + 1);
    lVar10 = param_1[0xd];
    *(long *)(lVar10 + 0x108) = lVar15;
    if (lVar15 == 0) {
      func_0x000109eb844c(param_1,&UNK_10f6153a6);
      return (undefined8 *)0x0;
    }
    uVar13 = *(uint *)(lVar10 + 0x110);
    puVar11 = (undefined2 *)(lVar15 + (ulong)uVar13 * 0x18);
    *puVar11 = (short)param_4;
    *(undefined8 **)(puVar11 + 4) = puVar6;
    *(char *)(puVar11 + 8) = (char)param_3;
    *(uint *)(lVar10 + 0x110) = uVar13 + 1;
    puVar7 = puVar6;
    (**(code **)(param_2 + 0x10))(puVar6);
    FUN_109f66e48(param_2,puVar7,puVar6,0);
    if (param_2 != 0) {
      *(undefined8 **)(param_2 + 8) = puVar6;
    }
  }
  return (undefined8 *)0x1;
}



/* Entry: 109e76964; end: 109e769ab;  */

void FUN_109e76964(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x68) + 0x108);
  if (lVar1 != 0) {
    lVar1 = lVar1 + -0x30;
    FUN_109f65aa4(lVar1);
    FUN_109f65ae0(lVar1);
    lVar1 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(lVar1 + 0x108) = 0;
    *(undefined4 *)(lVar1 + 0x110) = 0;
  }
  return;
}



/* Entry: 109e769ac; end: 109e778cf;  */

/* WARNING: Possible PIC construction at 0x000109f3b0a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109f3b24c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109f3aefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e76c8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109f3af00) */
/* WARNING: Removing unreachable block (ram,0x000109f3b250) */
/* WARNING: Removing unreachable block (ram,0x000109f3b260) */
/* WARNING: Removing unreachable block (ram,0x000109f3b26c) */
/* WARNING: Removing unreachable block (ram,0x000109f3b0a4) */
/* WARNING: Removing unreachable block (ram,0x000109e76c90) */
/* WARNING: Removing unreachable block (ram,0x000109e76ca4) */
/* WARNING: Removing unreachable block (ram,0x000109e76cac) */
/* WARNING: Type propagation algorithm not settling */

ulong * FUN_109e769ac(ulong *param_1,ulong *param_2,uint *param_3,long *param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined1 *puVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  long lVar13;
  undefined4 uVar14;
  ushort uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  uint *puVar20;
  int *piVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  ulong *unaff_x19;
  ulong *puVar26;
  ulong *puVar27;
  ulong *unaff_x20;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong *puVar31;
  ulong unaff_x21;
  long *plVar32;
  long lVar33;
  bool bVar34;
  uint uVar35;
  uint uVar36;
  undefined **unaff_x22;
  ulong *puVar37;
  ulong *unaff_x23;
  ulong *unaff_x24;
  long lVar38;
  long *plVar39;
  int iVar40;
  ulong *unaff_x25;
  ulong *puVar41;
  ulong **unaff_x26;
  ulong **ppuVar42;
  ulong **unaff_x27;
  ulong **ppuVar43;
  undefined8 *puVar44;
  ulong **unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar45;
  undefined8 unaff_x30;
  undefined8 uVar46;
  int iStack_178;
  code *pcStack_160;
  ulong *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong *puStack_140;
  ulong auStack_138 [3];
  ulong **ppuStack_120;
  ulong **ppuStack_118;
  ulong **ppuStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  ulong *puStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [12];
  uint uStack_b4;
  uint auStack_b0 [2];
  undefined8 uStack_a8;
  ulong *apuStack_a0 [2];
  ulong auStack_90 [5];
  long lStack_68;
  
  uVar35 = (uint)param_5;
  puVar5 = auStack_c0;
  puVar45 = &stack0xfffffffffffffff0;
  uStack_b4 = (uint)param_3;
  lVar16 = 0;
  puVar41 = (ulong *)0x0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = (uint *)((long)param_1 + 0xf4);
  puVar37 = (ulong *)0x1;
  uVar28 = 0xffffffff;
  plVar32 = (long *)0xffffffff;
  do {
    lVar24 = *(long *)((long)param_2 + lVar16 + 0xa8);
    puVar31 = unaff_x24;
    puVar26 = unaff_x19;
    puVar27 = unaff_x23;
    ppuVar42 = unaff_x26;
    if (lVar24 != 0) {
      uVar25 = *(ulong *)(*(long *)(lVar24 + 0x28) + 0x160);
      if ((*(char *)(uVar25 + 0x61) == '\x05') ||
         (uVar36 = *(uint *)(*(long *)(uVar25 + 0x28) + 200), (uVar36 >> 0x10 & 1) == 0))
      goto LAB_109e76cb4;
      auStack_90[(long)puVar41 + -1] = uVar25;
      uVar19 = (uint)plVar32;
      if (puVar20[-0xc] <= (uint)plVar32) {
        uVar19 = puVar20[-0xc];
      }
      plVar32 = (long *)(ulong)uVar19;
      uVar19 = (uint)uVar28;
      if (*puVar20 <= (uint)uVar28) {
        uVar19 = *puVar20;
      }
      uVar28 = (ulong)uVar19;
      puVar41 = (ulong *)(ulong)((int)puVar41 + 1);
      puVar37 = (ulong *)(ulong)((uint)puVar37 & (uVar36 & 0x20000) >> 0x11);
    }
    lVar16 = lVar16 + 8;
    puVar20 = puVar20 + 0x20;
  } while (lVar16 != 0x30);
  iVar40 = (int)puVar41;
  if (iVar40 == 0) {
    if ((int)puVar37 != 0) {
      unaff_x26 = (ulong **)0xffffffff;
LAB_109e76b9c:
      unaff_x28 = (ulong **)0x0;
      unaff_x27 = (ulong **)0x0;
      puVar26 = auStack_90;
      puVar27 = apuStack_a0[1];
      do {
        puVar37 = (ulong *)puVar26[(long)unaff_x28];
        param_3 = (uint *)(ulong)uStack_b4;
        puVar31 = puVar27;
        param_2 = puVar37;
        param_4 = plVar32;
        uVar25 = uVar28;
        FUN_109f35088();
        uVar35 = (uint)uVar25;
        param_1 = puVar31;
        if (((ulong)puVar31 & 1) != 0) {
          FUN_109e760cc();
          param_1 = puVar27;
          unaff_x27 = unaff_x28;
        }
        if (((uint)puVar31 >> 1 & 1) != 0) {
          param_1 = puVar37;
          FUN_109e760cc();
        }
        unaff_x28 = (ulong **)((long)unaff_x28 + 1);
        puVar27 = puVar37;
      } while (unaff_x26 != unaff_x28);
      if ((int)unaff_x27 != 0) {
        lVar16 = ((ulong)unaff_x27 & 0xffffffff) << 3;
        unaff_x26 = apuStack_a0;
        puVar27 = (ulong *)auStack_90[((ulong)unaff_x27 & 0xffffffff) - 1];
        do {
          puVar37 = *(ulong **)((long)unaff_x26 + lVar16);
          param_3 = (uint *)(ulong)uStack_b4;
          puVar31 = puVar37;
          param_2 = puVar27;
          param_4 = plVar32;
          uVar25 = uVar28;
          FUN_109f35088();
          uVar35 = (uint)uVar25;
          param_1 = puVar31;
          if (((ulong)puVar31 & 1) != 0) {
            param_1 = puVar37;
            FUN_109e760cc();
          }
          if (((uint)puVar31 >> 1 & 1) != 0) {
            FUN_109e760cc();
            param_1 = puVar27;
          }
          lVar16 = lVar16 + -8;
          puVar26 = (ulong *)0x0;
          puVar27 = puVar37;
        } while (lVar16 != 0);
      }
      puVar27 = puVar37;
      ppuVar42 = unaff_x26;
      if (iVar40 != 0) {
        unaff_x21 = 0xff00;
        unaff_x22 = (undefined **)0x4;
        unaff_x23 = (ulong *)0x8;
        unaff_x20 = auStack_90;
        uVar15 = *(ushort *)((long)apuStack_a0[1] + 0x61) & 0xff;
        uVar35 = 0;
        if (uVar15 != 0) {
          uVar35 = 4;
        }
        uVar36 = 0;
        if (uVar15 != 4) {
          uVar36 = 8;
        }
        puVar26 = (ulong *)(ulong)(uVar35 | uVar36);
        unaff_x30 = 0x109e76c90;
        puVar37 = apuStack_a0[1];
        unaff_x19 = apuStack_a0[1];
        unaff_x25 = puVar41;
SUB_109f3ae40:
        while( true ) {
          *(ulong ***)(puVar5 + -0x60) = unaff_x28;
          *(ulong ***)(puVar5 + -0x58) = unaff_x27;
          *(ulong ***)(puVar5 + -0x50) = unaff_x26;
          *(ulong **)(puVar5 + -0x48) = unaff_x25;
          *(ulong **)(puVar5 + -0x40) = puVar41;
          *(ulong **)(puVar5 + -0x38) = unaff_x23;
          *(undefined ***)(puVar5 + -0x30) = unaff_x22;
          *(ulong *)(puVar5 + -0x28) = unaff_x21;
          *(ulong **)(puVar5 + -0x20) = unaff_x20;
          *(ulong **)(puVar5 + -0x18) = unaff_x19;
          *(undefined1 **)(puVar5 + -0x10) = puVar45;
          *(undefined8 *)(puVar5 + -8) = unaff_x30;
          puVar45 = puVar5 + -0x10;
          *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          unaff_x23 = puVar26;
          if ((*(ushort *)((long)puVar37 + 0x61) & 0xff) == 4) {
            uVar35 = (uint)puVar26;
            if ((*(byte *)(puVar37[5] + 200) & 0x10) != 0) {
              uVar35 = (uint)puVar26 & 0xfffffffb;
            }
            unaff_x23 = (ulong *)(ulong)uVar35;
          }
          uVar35 = (uint)unaff_x23;
          if ((*(ushort *)((long)puVar37 + 0x61) & 0xff | 2) != 3 ||
              POPCOUNT((char)unaff_x23) != '\x02') break;
          puVar26 = (ulong *)0x4;
          unaff_x30 = 0x109f3af00;
          puVar5 = puVar5 + -0x1a0;
          unaff_x20 = puVar37;
        }
        *(undefined8 *)(puVar5 + -0x178) = 0;
        *(undefined8 *)(puVar5 + -0x170) = 0;
        *(undefined8 *)(puVar5 + -0x168) = 0;
        puVar27 = (ulong *)puVar37[0x2f];
        puVar31 = *(ulong **)puVar37[0x2f];
joined_r0x000109f3aed0:
        if (puVar31 == (ulong *)0x0) {
LAB_109f3af14:
          puVar31 = (ulong *)0x0;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar5 + -0x78)) {
            return (ulong *)0x0;
          }
          uVar46 = 0x109f3b300;
          ___stack_chk_fail();
        }
        else {
          unaff_x21 = puVar27[6];
          if (unaff_x21 == 0) goto code_r0x000109f3aedc;
          unaff_x26 = (ulong **)0x68;
          puVar41 = (ulong *)0x1;
          while( true ) {
            uVar36 = *(uint *)(unaff_x21 + 0x84);
            if ((uVar36 >> 5 & 1) == 0) {
              FUN_109ecc8fc(unaff_x21);
              uVar36 = *(uint *)(unaff_x21 + 0x84);
            }
            *(ulong **)(puVar5 + -0x188) = puVar27;
            *(uint *)(unaff_x21 + 0x84) = uVar36 | 0x20;
            lVar16 = *(long *)(unaff_x21 + 0x30);
            if (lVar16 != 0) break;
            unaff_x27 = (ulong **)0x0;
            *(uint *)(unaff_x21 + 0x84) = uVar36 & 0xfffffff7 | 0x20;
            puVar27 = (ulong *)**(undefined8 **)(puVar5 + -0x188);
            puVar37 = *(ulong **)**(undefined8 **)(puVar5 + -0x188);
            while( true ) {
              if (puVar37 == (ulong *)0x0) {
                puVar37 = *(ulong **)(puVar5 + -0x170);
                unaff_x22 = &PTR_DAT_110b67188;
                if ((puVar37 != (ulong *)0x0) && (*(long *)(puVar5 + -0x178) != 0x11386a228)) {
                  if (*(long *)(puVar5 + -0x178) == 0) {
                    _free();
                    unaff_x22 = &PTR_DAT_110b67188;
                  }
                  else {
                    puVar27 = puVar37 + -6;
                    FUN_109f65aa4(puVar27);
                    puVar37 = puVar27;
                    FUN_109f65ae0();
                  }
                }
                goto LAB_109f3af14;
              }
              unaff_x21 = puVar27[6];
              if (unaff_x21 != 0) break;
              puVar27 = puVar37;
              puVar37 = (ulong *)*puVar37;
            }
          }
          *(ulong *)(puVar5 + -0x198) = unaff_x21;
          *(undefined4 *)(puVar5 + -0x18c) = 0;
          unaff_x27 = (ulong **)0x0;
          *(undefined8 *)(puVar5 + -0xe8) = 0;
          *(undefined8 *)(puVar5 + -0xf0) = 0;
          *(undefined8 *)(puVar5 + -0xd8) = 0;
          *(undefined8 *)(puVar5 + -0xe0) = 0;
          *(undefined8 *)(puVar5 + -200) = 0;
          *(undefined8 *)(puVar5 + -0xd0) = 0;
          *(undefined8 *)(puVar5 + -0xb8) = 0;
          *(undefined8 *)(puVar5 + -0xc0) = 0;
          *(undefined8 *)(puVar5 + -0xa8) = 0;
          *(undefined8 *)(puVar5 + -0xb0) = 0;
          *(undefined8 *)(puVar5 + -0x98) = 0;
          *(undefined8 *)(puVar5 + -0xa0) = 0;
          *(undefined8 *)(puVar5 + -0x88) = 0;
          *(undefined8 *)(puVar5 + -0x90) = 0;
          *(undefined8 *)(puVar5 + -0x158) = 0;
          *(undefined8 *)(puVar5 + -0x160) = 0;
          *(undefined8 *)(puVar5 + -0x148) = 0;
          *(undefined8 *)(puVar5 + -0x150) = 0;
          *(undefined8 *)(puVar5 + -0x138) = 0;
          *(undefined8 *)(puVar5 + -0x140) = 0;
          *(undefined8 *)(puVar5 + -0x128) = 0;
          *(undefined8 *)(puVar5 + -0x130) = 0;
          *(undefined8 *)(puVar5 + -0x118) = 0;
          *(undefined8 *)(puVar5 + -0x120) = 0;
          *(undefined8 *)(puVar5 + -0x108) = 0;
          *(undefined8 *)(puVar5 + -0x110) = 0;
          *(undefined8 *)(puVar5 + -0xf8) = 0;
          *(undefined8 *)(puVar5 + -0x100) = 0;
          *(long *)(puVar5 + -0x180) = lVar16;
          puVar31 = *(ulong **)(lVar16 + 0x20);
          while( true ) {
            unaff_x22 = &PTR_DAT_110b67188;
            unaff_x26 = (ulong **)0x68;
            puVar41 = (ulong *)0x1;
            if (*puVar31 == 0) break;
            if ((int)puVar31[3] == 4) {
              uVar36 = (uint)puVar31[5];
              lVar16 = (ulong)uVar36 * 0x68;
              if ((ulong)(byte)(&UNK_110b671cf)[lVar16] == 0) {
                unaff_x21 = 0;
              }
              else {
                uVar19 = *(uint *)((long)puVar31 + (ulong)(byte)(&UNK_110b671cf)[lVar16] * 4 + 0x50)
                ;
                unaff_x21 = (ulong)((uVar19 >> 0x17 & 4 | (uVar19 & 0x7f) << 3) +
                                   *(int *)((long)puVar31 +
                                           (ulong)(byte)(&UNK_110b671b1)[(ulong)uVar36 * 0x68] * 4 +
                                           0x50));
              }
              bVar3 = (&UNK_110b6719c)[lVar16];
              puVar27 = (ulong *)(ulong)bVar3;
              if ((int)uVar36 < 0x27a) {
                uVar19 = uVar36 - 0x144;
                if (uVar19 < 0x28) {
                  if ((1L << ((ulong)uVar19 & 0x3f) & 0x5000000029U) != 0) {
                    if ((uVar35 >> 2 & 1) != 0) {
                      unaff_x28 = (ulong **)0x0;
                      goto LAB_109f3b124;
                    }
                    goto LAB_109f3b240;
                  }
                  if ((1L << ((ulong)uVar19 & 0x3f) & 0xa100000000U) != 0) goto LAB_109f3b078;
                }
                if (uVar36 == 0x2d) {
                  if ((uVar35 >> 3 != 0) && (((uint)puVar31[0xc] >> 3 & 1) != 0))
                  goto LAB_109f3b0e8;
                }
                else if (uVar36 == 0x6e) {
LAB_109f3b0e8:
                  uVar36 = (uint)(puVar5 + -0x178);
                  func_0x000109f3b300();
                  unaff_x27 = (ulong **)(ulong)((uint)unaff_x27 | uVar36);
                  *(undefined8 *)(puVar5 + -0xe8) = 0;
                  *(undefined8 *)(puVar5 + -0xf0) = 0;
                  *(undefined8 *)(puVar5 + -0xd8) = 0;
                  *(undefined8 *)(puVar5 + -0xe0) = 0;
                  *(undefined8 *)(puVar5 + -200) = 0;
                  *(undefined8 *)(puVar5 + -0xd0) = 0;
                  *(undefined8 *)(puVar5 + -0xb8) = 0;
                  *(undefined8 *)(puVar5 + -0xc0) = 0;
                  *(undefined8 *)(puVar5 + -0xa8) = 0;
                  *(undefined8 *)(puVar5 + -0xb0) = 0;
                  *(undefined8 *)(puVar5 + -0x98) = 0;
                  *(undefined8 *)(puVar5 + -0xa0) = 0;
                  *(undefined8 *)(puVar5 + -0x88) = 0;
                  *(undefined8 *)(puVar5 + -0x90) = 0;
                  *(undefined8 *)(puVar5 + -0x158) = 0;
                  *(undefined8 *)(puVar5 + -0x160) = 0;
                  *(undefined8 *)(puVar5 + -0x148) = 0;
                  *(undefined8 *)(puVar5 + -0x150) = 0;
                  *(undefined8 *)(puVar5 + -0x138) = 0;
                  *(undefined8 *)(puVar5 + -0x140) = 0;
                  *(undefined8 *)(puVar5 + -0x128) = 0;
                  *(undefined8 *)(puVar5 + -0x130) = 0;
                  *(undefined8 *)(puVar5 + -0x118) = 0;
                  *(undefined8 *)(puVar5 + -0x120) = 0;
                  *(undefined8 *)(puVar5 + -0x108) = 0;
                  *(undefined8 *)(puVar5 + -0x110) = 0;
                  *(undefined8 *)(puVar5 + -0xf8) = 0;
                  *(undefined8 *)(puVar5 + -0x100) = 0;
                }
              }
              else if (uVar36 - 0x27a < 3) {
LAB_109f3b078:
                if (uVar35 >> 3 != 0) {
                  puVar1 = puVar5 + -0x160;
                  if (bVar3 == 0) {
                    puVar1 = puVar5 + -0xf0;
                  }
                  if ((*(uint *)(puVar1 + (unaff_x21 >> 5) * 4) >> (ulong)((uint)unaff_x21 & 0x1f) &
                      1) != 0) {
                    puVar37 = (ulong *)(puVar5 + -0x178);
                    uVar46 = 0x109f3b0a4;
                    goto SUB_109f3b300;
                  }
                  unaff_x28 = (ulong **)0x1;
LAB_109f3b124:
                  uVar19 = *(uint *)(puVar5 + -0x168);
                  uVar36 = uVar19 + 8;
                  unaff_x25 = (ulong *)(ulong)uVar36;
                  if (*(uint *)(puVar5 + -0x164) < uVar36) {
                    uVar4 = *(uint *)(puVar5 + -0x164) << 1;
                    if (uVar4 <= uVar36) {
                      uVar4 = uVar36;
                    }
                    if (uVar4 < 0x41) {
                      uVar4 = 0x40;
                    }
                    puVar37 = (ulong *)(ulong)uVar4;
                    puVar12 = *(ulong **)(puVar5 + -0x178);
                    if (puVar12 == (ulong *)0x11386a228) {
                      _malloc();
                      puVar26 = *(ulong **)(puVar5 + -0x170);
                      _memcpy();
                      *(undefined8 *)(puVar5 + -0x178) = 0;
                      puVar41 = puVar37;
                    }
                    else {
                      puVar41 = *(ulong **)(puVar5 + -0x170);
                      if (puVar12 == (ulong *)0x0) {
                        _realloc();
                        puVar26 = puVar37;
                      }
                      else if (puVar41 == (ulong *)0x0) {
                        FUN_109f658b0();
                        puVar26 = puVar37;
                        puVar41 = puVar12;
                      }
                      else {
                        FUN_109f6595c();
                        puVar26 = puVar37;
                      }
                    }
                    *(ulong **)(puVar5 + -0x170) = puVar41;
                    *(uint *)(puVar5 + -0x164) = uVar4;
                  }
                  else {
                    puVar41 = *(ulong **)(puVar5 + -0x170);
                  }
                  *(uint *)(puVar5 + -0x168) = uVar36;
                  *(ulong **)((long)puVar41 + (ulong)uVar19) = puVar31;
                  if ((int)unaff_x28 != 0) {
                    puVar1 = puVar5 + -0xf0;
                    if (bVar3 == 0) {
                      puVar1 = puVar5 + -0x160;
                    }
                    uVar28 = unaff_x21 >> 3 & 0x1ffffffc;
                    *(uint *)(puVar1 + uVar28) =
                         *(uint *)(puVar1 + uVar28) | 1 << (ulong)((uint)unaff_x21 & 0x1f);
                  }
                }
              }
            }
LAB_109f3b240:
            puVar31 = (ulong *)*puVar31;
          }
          puVar37 = (ulong *)(puVar5 + -0x178);
          uVar46 = 0x109f3b250;
        }
SUB_109f3b300:
        puVar12 = (ulong *)(puVar5 + -0x250);
        *(ulong ***)(puVar5 + -0x200) = unaff_x28;
        *(ulong ***)(puVar5 + -0x1f8) = unaff_x27;
        *(ulong ***)(puVar5 + -0x1f0) = unaff_x26;
        *(ulong **)(puVar5 + -0x1e8) = unaff_x25;
        *(ulong **)(puVar5 + -0x1e0) = puVar41;
        *(ulong **)(puVar5 + -0x1d8) = unaff_x23;
        *(undefined ***)(puVar5 + -0x1d0) = unaff_x22;
        *(ulong *)(puVar5 + -0x1c8) = unaff_x21;
        *(ulong **)(puVar5 + -0x1c0) = puVar31;
        *(ulong **)(puVar5 + -0x1b8) = puVar27;
        *(undefined1 **)(puVar5 + -0x1b0) = puVar45;
        *(undefined8 *)(puVar5 + -0x1a8) = uVar46;
        *(undefined8 *)(puVar5 + -0x208) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        puVar41 = puVar37;
        if (0xf < (uint)puVar37[2]) {
          puVar26 = (ulong *)(ulong)((uint)puVar37[2] >> 3);
          puVar41 = (ulong *)puVar37[1];
          _qsort(puVar41,puVar26,8,FUN_109f3b4bc);
          *(undefined8 *)(puVar5 + -0x228) = 0;
          *(undefined8 *)(puVar5 + -0x230) = 0;
          *(undefined8 *)(puVar5 + -0x218) = 0;
          *(undefined8 *)(puVar5 + -0x220) = 0;
          *(undefined8 *)(puVar5 + -0x248) = 0;
          *(undefined8 *)(puVar5 + -0x250) = 0;
          *(undefined8 *)(puVar5 + -0x238) = 0;
          *(undefined8 *)(puVar5 + -0x240) = 0;
          if ((int)puVar37[2] != 0) {
            puVar31 = (ulong *)0x0;
            uVar35 = 0;
            plVar32 = (long *)puVar37[1];
            puVar27 = (ulong *)0x0;
            do {
              puVar41 = (ulong *)*plVar32;
              if ((puVar27 != (ulong *)0x0) &&
                 (puVar26 = puVar41, FUN_109f3b500(), (int)puVar27 != 0)) {
                if (((uint)puVar31 & (uint)puVar31 - 1) != 0) {
                  uVar36 = 0;
                  FUN_109f3b6f4(puVar5 + -0x250);
                  uVar35 = uVar35 | uVar36;
                  puVar41 = (ulong *)*plVar32;
                  puVar26 = puVar31;
                }
                puVar31 = (ulong *)0x0;
                *(undefined8 *)(puVar5 + -0x228) = 0;
                *(undefined8 *)(puVar5 + -0x230) = 0;
                *(undefined8 *)(puVar5 + -0x218) = 0;
                *(undefined8 *)(puVar5 + -0x220) = 0;
                *(undefined8 *)(puVar5 + -0x248) = 0;
                *(undefined8 *)(puVar5 + -0x250) = 0;
                *(undefined8 *)(puVar5 + -0x238) = 0;
                *(undefined8 *)(puVar5 + -0x240) = 0;
              }
              lVar16 = (ulong)(uint)puVar41[5] * 0x68;
              uVar36 = (*(uint *)((long)puVar41 + (ulong)(byte)(&UNK_110b671cf)[lVar16] * 4 + 0x50)
                        >> 0x17 & 4) +
                       *(int *)((long)puVar41 + (ulong)(byte)(&UNK_110b671b1)[lVar16] * 4 + 0x50);
              if ((((&UNK_110b6719c)[lVar16] & 1) == 0) &&
                 (*(long *)(puVar5 + (ulong)uVar36 * 8 + -0x250) != 0)) {
                FUN_109ecb9c0(*(long *)(puVar5 + (ulong)uVar36 * 8 + -0x250));
                puVar41 = (ulong *)*plVar32;
              }
              *(ulong **)(puVar5 + (ulong)uVar36 * 8 + -0x250) = puVar41;
              uVar36 = 1 << (ulong)(uVar36 & 0x1f) | (uint)puVar31;
              puVar31 = (ulong *)(ulong)uVar36;
              plVar32 = plVar32 + 1;
              puVar27 = puVar41;
            } while (plVar32 < (long *)(puVar37[1] + (ulong)(uint)puVar37[2]));
            if ((puVar41 != (ulong *)0x0) && ((uVar36 & uVar36 - 1) != 0)) {
              puVar26 = puVar31;
              FUN_109f3b6f4();
              uVar35 = uVar35 | (uint)puVar12;
              puVar41 = puVar12;
            }
            goto LAB_109f3b478;
          }
        }
        uVar35 = 0;
LAB_109f3b478:
        *(undefined4 *)(puVar37 + 2) = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar5 + -0x208)) {
          return (ulong *)(ulong)(uVar35 & 1);
        }
        ___stack_chk_fail();
        *(ulong **)(puVar5 + -0x270) = puVar31;
        *(ulong **)(puVar5 + -0x268) = puVar37;
        *(undefined1 **)(puVar5 + -0x260) = puVar5 + -0x1b0;
        *(code **)(puVar5 + -600) = FUN_109f3b4bc;
        puVar41 = (ulong *)*puVar41;
        uVar28 = *puVar26;
        puVar37 = puVar41;
        FUN_109f3b500(puVar41,uVar28);
        if ((int)puVar37 == 0) {
          uVar35 = 0xffffffff;
          if (*(uint *)(uVar28 + 0x20) < (uint)puVar41[4]) {
            uVar35 = 1;
          }
          puVar37 = (ulong *)(ulong)uVar35;
        }
        return puVar37;
      }
    }
LAB_109e76cb4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return param_1;
    }
  }
  else {
    puVar26 = (ulong *)0x0;
    puVar27 = (ulong *)((long)puVar41 << 3);
    do {
      param_1 = *(ulong **)((long)(apuStack_a0 + 1) + (long)puVar26);
      param_2 = (ulong *)0x1;
      FUN_109f14ba4();
      uVar35 = (uint)param_5;
      puVar26 = puVar26 + 1;
    } while (puVar27 != puVar26);
    puVar31 = puVar41;
    ppuVar42 = apuStack_a0 + 1;
    if ((int)puVar37 == 0) goto LAB_109e76cb4;
    ppuVar42 = (ulong **)(ulong)(iVar40 - 1U);
    if (iVar40 - 1U != 0) {
      ppuVar43 = apuStack_a0;
      puVar37 = puVar41;
      do {
        ppuVar43 = ppuVar43 + 1;
        puVar26 = *ppuVar43;
        uVar15 = *(ushort *)((long)puVar26 + 0x61) & 0xff;
        auStack_b0[0] = 0;
        if (uVar15 != 0) {
          auStack_b0[0] = 4;
        }
        uVar35 = 0;
        if (uVar15 != 4) {
          uVar35 = 8;
        }
        auStack_b0[0] = auStack_b0[0] | uVar35;
        uStack_a8 = 0;
        apuStack_a0[0] = (ulong *)0x0;
        func_0x000109f16fb8(puVar26,0x109f17130,auStack_b0);
        FUN_109e760cc(puVar26);
        puVar37 = (ulong *)((long)puVar37 + -1);
        unaff_x26 = ppuVar42;
      } while (puVar37 != (ulong *)0x0);
      goto LAB_109e76b9c;
    }
    uVar28 = 0xff00;
    uVar15 = *(ushort *)((long)apuStack_a0[1] + 0x61) & 0xff;
    plVar32 = (long *)0x4;
    auStack_b0[0] = 0;
    if (uVar15 != 0) {
      auStack_b0[0] = 4;
    }
    puVar37 = (ulong *)0x8;
    uVar36 = 0;
    if (uVar15 != 4) {
      uVar36 = 8;
    }
    auStack_b0[0] = auStack_b0[0] | uVar36;
    uStack_a8 = 0;
    apuStack_a0[0] = (ulong *)0x0;
    param_2 = (ulong *)0x109f17130;
    param_3 = auStack_b0;
    param_1 = apuStack_a0[1];
    func_0x000109f16fb8();
    uVar15 = *(ushort *)((long)apuStack_a0[1] + 0x61) & 0xff;
    uVar36 = 0;
    if (uVar15 != 0) {
      uVar36 = 4;
    }
    uVar19 = 0;
    if (uVar15 != 4) {
      uVar19 = 8;
    }
    puVar26 = apuStack_a0[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      puVar26 = (ulong *)(ulong)(uVar36 | uVar19);
      puVar5 = (undefined1 *)register0x00000008;
      puVar37 = apuStack_a0[1];
      puVar41 = unaff_x24;
      puVar45 = unaff_x29;
      goto SUB_109f3ae40;
    }
  }
  ___stack_chk_fail();
  ppuStack_120 = unaff_x28;
  ppuStack_118 = unaff_x27;
  ppuStack_110 = ppuVar42;
  puStack_108 = puVar41;
  puStack_100 = puVar31;
  puStack_f8 = puVar27;
  puStack_f0 = puVar37;
  plStack_e8 = plVar32;
  uStack_e0 = uVar28;
  puStack_d8 = puVar26;
  puStack_d0 = puVar45;
  uStack_c8 = 0x109e76cf0;
  if (uVar35 != 0) {
    uVar28 = 0;
    uVar36 = 0;
    do {
      piVar21 = (int *)param_4[uVar28];
      iStack_178 = *piVar21;
      uVar25 = param_1[(long)iStack_178 * 5 + 0xeb];
      lVar16 = *(long *)(piVar21 + 10);
      if (((*(char *)((long)param_3 + 0xa5) == '\x01') && (uVar28 == 0)) && (299 < param_3[0x36])) {
        auStack_138[0] =
             CONCAT71(auStack_138[0]._1_7_,*(byte *)(*(long *)(lVar16 + 0x160) + 0x152) >> 1) &
             0xffffffffffffff01;
        puStack_158 = auStack_138;
        pcStack_160 = FUN_109e7a988;
        FUN_109f43ecc(*(long *)(lVar16 + 0x160),0xc,&pcStack_160);
        iStack_178 = *piVar21;
      }
      lVar24 = (long)(int)*(char *)(lVar16 + 0x31);
      uVar29 = param_1[lVar24 * 5 + 0xeb];
      lVar38 = *(long *)(lVar16 + 0x160);
      plVar32 = (long *)**(long **)(lVar38 + 0x178);
      if (plVar32 == (long *)0x0) {
LAB_109e76e1c:
        lVar13 = 0;
      }
      else {
        plVar17 = *(long **)(lVar38 + 0x178);
        plVar18 = (long *)0x0;
        do {
          plVar39 = plVar17;
          if ((char)plVar17[7] == '\0') {
            plVar39 = plVar18;
          }
          plVar22 = (long *)*plVar32;
          plVar17 = plVar32;
          plVar18 = plVar39;
          plVar32 = plVar22;
        } while (plVar22 != (long *)0x0);
        if (plVar39 == (long *)0x0) goto LAB_109e76e1c;
        lVar13 = plVar39[6];
      }
      FUN_109eff9b8(lVar38,lVar13);
      if ((*(char *)(lVar16 + 0x31) == '\x04') && (*(char *)((long)param_1 + 0x865) == '\x01')) {
        FUN_109e7bb64(*(undefined8 *)(lVar16 + 0x160),*(char *)((long)param_2 + 0xd2) != '\0');
        FUN_109f0f144(*(undefined8 *)(lVar16 + 0x160));
        func_0x000109f23414(*(undefined8 *)(lVar16 + 0x160),8);
      }
      bVar3 = *(byte *)(lVar38 + 0x61);
      if (((*(ushort *)(lVar38 + 0x152) >> 1 & 1) == 0) && ((bVar3 & 0xfd) == 0)) {
        uVar19 = -1 << (ulong)((int)*(char *)(lVar16 + 0x31) + 1U & 0x1f) &
                 *(uint *)(*(long *)(param_3 + 0x1a) + 0x120);
        uVar4 = (uVar19 & 0xaaaaaaaa) >> 1 | (uVar19 & 0x55555555) << 1;
        uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        uVar15 = 0x400;
        if (uVar19 != 0) {
          uVar15 = (ushort)((int)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10) << 8);
        }
        uVar15 = uVar15 | bVar3;
      }
      else {
        uVar15 = bVar3 | 0x400;
      }
      *(ushort *)(lVar38 + 0x61) = uVar15;
      uVar30 = *(ulong *)(lVar38 + 0x78);
      *(bool *)(lVar16 + 0x188) = (uVar30 & 0x1000) == 0;
      if (((((*(byte *)((long)param_1 + 0x867) & 1) == 0) && (iStack_178 < 4)) && (iStack_178 != 1))
         && (((uint)uVar30 >> 0xc & 1) != 0)) {
        lVar13 = *(long *)(lVar16 + 0x160);
        if (lVar13 == 0) {
LAB_109e76fe8:
          lVar13 = lVar38;
          func_0x000109eca9c8(lVar38,8,0xc,&DAT_10e05dc38);
          *(ulong *)(lVar13 + 0x2c) = *(ulong *)(lVar13 + 0x2c) & 0xffffffffffff9fff | 0x4000;
          plVar18 = (long *)**(long **)(lVar38 + 0x178);
          plVar32 = (long *)0x0;
          plVar17 = *(long **)(lVar38 + 0x178);
          if (plVar18 != (long *)0x0) {
            do {
              plVar39 = plVar17;
              if ((char)plVar17[7] == '\0') {
                plVar39 = plVar32;
              }
              plVar22 = (long *)*plVar18;
              plVar17 = plVar18;
              plVar32 = plVar39;
              plVar18 = plVar22;
            } while (plVar22 != (long *)0x0);
            plVar32 = (long *)0x0;
            if (plVar39 != (long *)0x0) {
              plVar32 = (long *)plVar39[6];
            }
          }
          puVar44 = *(undefined8 **)(plVar32[4] + 0x18);
          lVar33 = plVar32[6];
          lVar7 = lVar33;
          FUN_109ecc434();
          bVar34 = false;
          do {
            lVar8 = lVar7;
            plVar18 = *(long **)(lVar33 + 0x20);
            plVar17 = (long *)*plVar18;
            if (plVar17 != (long *)0x0) {
              do {
                plVar39 = (long *)0x0;
                plVar22 = plVar18;
                if (*plVar17 != 0) {
                  plVar39 = plVar17;
                }
                do {
                  plVar18 = plVar39;
                  if (((int)plVar22[3] == 4) &&
                     (((int)plVar22[5] == 0x26f || ((int)plVar22[5] == 0x54)))) {
                    plVar17 = plVar22 + 0x13;
                    do {
                      lVar33 = *(long *)*plVar17;
                      lVar7 = lVar33;
                      if (*(int *)(lVar33 + 0x18) != 1) {
                        lVar7 = 0;
                      }
                      plVar17 = (long *)(lVar7 + 0x50);
                    } while (*(int *)(lVar33 + 0x28) != 0);
                    if (*(int *)(*(long *)(lVar33 + 0x38) + 0x3c) == 0) {
                      puVar9 = (undefined8 *)*puVar44;
                      FUN_109f6600c(puVar9,0xa0,8);
                      if (puVar9 != (undefined8 *)0x0) {
                        puVar9[0x11] = 0;
                        puVar9[0x10] = 0;
                        puVar9[0x13] = 0;
                        puVar9[0x12] = 0;
                        puVar9[0xd] = 0;
                        puVar9[0xc] = 0;
                        puVar9[0xf] = 0;
                        puVar9[0xe] = 0;
                        puVar9[9] = 0;
                        puVar9[8] = 0;
                        puVar9[0xb] = 0;
                        puVar9[10] = 0;
                        puVar9[5] = 0;
                        puVar9[4] = 0;
                        puVar9[7] = 0;
                        puVar9[6] = 0;
                        puVar9[1] = 0;
                        *puVar9 = 0;
                        puVar9[3] = 0;
                        puVar9[2] = 0;
                      }
                      *(undefined4 *)(puVar9 + 3) = 1;
                      puVar9[1] = 0;
                      puVar9[2] = 0;
                      *puVar9 = 0;
                      *(undefined4 *)(puVar9 + 5) = 0;
                      *(uint *)((long)puVar9 + 0x2c) = *(uint *)(lVar13 + 0x20) & 0x1fffff;
                      puVar9[6] = *(undefined8 *)(lVar13 + 0x10);
                      puVar9[7] = lVar13;
                      if (*(char *)((long)puVar44 + 0x61) == '\x0e') {
                        uVar14 = *(undefined4 *)(puVar44 + 0x2c);
                      }
                      else {
                        uVar14 = 0x20;
                      }
                      FUN_109ecb048(puVar9,puVar9 + 0x10,1,uVar14);
                      FUN_109ecb4f0(3,plVar22,puVar9);
                      pcStack_160 = (code *)0x3f800000;
                      puVar10 = (undefined8 *)*puVar44;
                      FUN_109f6600c(puVar10,0x50,8);
                      if (puVar10 != (undefined8 *)0x0) {
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
                      *(undefined4 *)(puVar10 + 3) = 5;
                      puVar10[1] = 0;
                      puVar10[2] = 0;
                      *puVar10 = 0;
                      uVar19 = 1;
                      FUN_109ecb048(puVar10,puVar10 + 5,1,0x20);
                      puVar10[9] = 0x3f800000;
                      FUN_109ecb4f0(3,puVar9,puVar10);
                      cVar2 = *(char *)((long)puVar10 + 0x44);
                      puVar11 = puVar44;
                      FUN_109ecb0a8(puVar44,0x26f);
                      bVar3 = *(byte *)((long)puVar10 + 0x44);
                      *(byte *)(puVar11 + 10) = bVar3;
                      puVar11[0x10] = 0;
                      puVar11[0x11] = 0;
                      puVar11[0x12] = 0;
                      puVar11[0x13] = puVar9 + 0x10;
                      puVar11[0x14] = 0;
                      puVar11[0x15] = 0;
                      puVar11[0x16] = 0;
                      puVar11[0x17] = puVar10 + 5;
                      if (cVar2 == '\0') {
                        uVar19 = 0xffffffff;
                        if (bVar3 != 0x20) {
                          uVar19 = ~(-1 << (ulong)(bVar3 & 0x1f));
                        }
                      }
                      uVar4 = *(uint *)(puVar11 + 5);
                      *(uint *)((long)puVar11 +
                               (ulong)(byte)(&UNK_110b671aa)[(ulong)uVar4 * 0x68] * 4 + 0x50) =
                           uVar19;
                      *(undefined4 *)
                       ((long)puVar11 +
                       (ulong)(byte)(&UNK_110b671ba)[(ulong)uVar4 * 0x68] * 4 + 0x50) = 0;
                      FUN_109ecb4f0(3,puVar10);
                      bVar34 = true;
                    }
                  }
                  if (plVar18 == (long *)0x0) goto LAB_109e77284;
                  plVar17 = (long *)*plVar18;
                  plVar39 = (long *)0x0;
                  plVar22 = plVar18;
                } while (plVar17 == (long *)0x0);
              } while( true );
            }
LAB_109e77284:
            lVar7 = lVar8;
            FUN_109ecc434();
            lVar33 = lVar8;
          } while (lVar8 != 0);
          if (!bVar34) {
            lVar7 = plVar32[6];
            if (*(int *)(lVar7 + 0x10) == 0) {
              uVar46 = 0;
            }
            else {
              plVar17 = (long *)(lVar7 + 8);
              lVar7 = 0;
              if (*(long *)(*plVar17 + 8) != 0) {
                lVar7 = *plVar17;
              }
              uVar46 = 1;
            }
            puVar9 = (undefined8 *)*puVar44;
            FUN_109f6600c(puVar9,0xa0,8);
            if (puVar9 != (undefined8 *)0x0) {
              puVar9[0x11] = 0;
              puVar9[0x10] = 0;
              puVar9[0x13] = 0;
              puVar9[0x12] = 0;
              puVar9[0xd] = 0;
              puVar9[0xc] = 0;
              puVar9[0xf] = 0;
              puVar9[0xe] = 0;
              puVar9[9] = 0;
              puVar9[8] = 0;
              puVar9[0xb] = 0;
              puVar9[10] = 0;
              puVar9[5] = 0;
              puVar9[4] = 0;
              puVar9[7] = 0;
              puVar9[6] = 0;
              puVar9[1] = 0;
              *puVar9 = 0;
              puVar9[3] = 0;
              puVar9[2] = 0;
            }
            *(undefined4 *)(puVar9 + 3) = 1;
            puVar9[1] = 0;
            puVar9[2] = 0;
            *puVar9 = 0;
            *(undefined4 *)(puVar9 + 5) = 0;
            *(uint *)((long)puVar9 + 0x2c) = *(uint *)(lVar13 + 0x20) & 0x1fffff;
            puVar9[6] = *(undefined8 *)(lVar13 + 0x10);
            puVar9[7] = lVar13;
            if (*(char *)((long)puVar44 + 0x61) == '\x0e') {
              uVar14 = *(undefined4 *)(puVar44 + 0x2c);
            }
            else {
              uVar14 = 0x20;
            }
            FUN_109ecb048(puVar9,puVar9 + 0x10,1,uVar14);
            FUN_109ecb4f0(uVar46,lVar7,puVar9);
            pcStack_160 = (code *)0x3f800000;
            puVar10 = (undefined8 *)*puVar44;
            FUN_109f6600c(puVar10,0x50,8);
            if (puVar10 != (undefined8 *)0x0) {
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
            *(undefined4 *)(puVar10 + 3) = 5;
            puVar10[1] = 0;
            puVar10[2] = 0;
            *puVar10 = 0;
            uVar19 = 1;
            FUN_109ecb048(puVar10,puVar10 + 5,1,0x20);
            puVar10[9] = pcStack_160;
            FUN_109ecb4f0(3,puVar9,puVar10);
            cVar2 = *(char *)((long)puVar10 + 0x44);
            FUN_109ecb0a8(puVar44,0x26f);
            bVar3 = *(byte *)((long)puVar10 + 0x44);
            *(byte *)(puVar44 + 10) = bVar3;
            puVar44[0x10] = 0;
            puVar44[0x11] = 0;
            puVar44[0x12] = 0;
            puVar44[0x13] = puVar9 + 0x10;
            puVar44[0x14] = 0;
            puVar44[0x15] = 0;
            puVar44[0x16] = 0;
            puVar44[0x17] = puVar10 + 5;
            if (cVar2 == '\0') {
              uVar19 = 0xffffffff;
              if (bVar3 != 0x20) {
                uVar19 = ~(-1 << (ulong)(bVar3 & 0x1f));
              }
            }
            uVar4 = *(uint *)(puVar44 + 5);
            *(uint *)((long)puVar44 + (ulong)(byte)(&UNK_110b671aa)[(ulong)uVar4 * 0x68] * 4 + 0x50)
                 = uVar19;
            *(undefined4 *)
             ((long)puVar44 + (ulong)(byte)(&UNK_110b671ba)[(ulong)uVar4 * 0x68] * 4 + 0x50) = 0;
            FUN_109ecb4f0(3,puVar10);
          }
          uVar30 = *(ulong *)(lVar38 + 0x78) | 0x1000;
          *(ulong *)(lVar38 + 0x78) = uVar30;
          *(uint *)((long)plVar32 + 0x84) = *(uint *)((long)plVar32 + 0x84) & 3;
        }
        else if ((*(byte *)(lVar13 + 0x79) >> 4 & 1) == 0) {
          uVar15 = *(ushort *)(lVar13 + 0x61);
          puVar20 = (uint *)((long)param_1 + 0x42c);
          if ((uVar15 & 0xff) != 3) {
            puVar20 = (uint *)((long)param_1 + (long)(char)uVar15 * 0x80 + 0xcc);
          }
          if ((uVar15 & 0xff) == 3) {
            uVar19 = (uint)*(ushort *)(lVar13 + 0x160);
          }
          else {
            uVar19 = 1;
          }
          uVar4 = *puVar20;
          plVar32 = (long *)**(long **)(lVar13 + 8);
          if (plVar32 == (long *)0x0) {
            iVar40 = 0;
          }
          else {
            iVar40 = 0;
            plVar17 = *(long **)(lVar13 + 8);
            do {
              if ((*(byte *)(plVar17 + 4) >> 3 & 1) != 0) {
                lVar7 = plVar17[2];
                FUN_109ec9f60(lVar7,0);
                iVar40 = (int)lVar7 + iVar40;
              }
              plVar18 = (long *)*plVar32;
              plVar17 = plVar32;
              plVar32 = plVar18;
            } while (plVar18 != (long *)0x0);
            if (((uVar15 & 0xff) == 3) && (iVar40 != 0)) {
              if (*(uint *)((long)param_1 + 0x24c) < iVar40 + uVar19) goto LAB_109e77480;
              iVar40 = iVar40 * (uint)*(ushort *)(lVar13 + 0x160);
            }
          }
          if (iVar40 + uVar19 <= uVar4) goto LAB_109e76fe8;
        }
      }
LAB_109e77480:
      if (((iStack_178 < 4) && (iStack_178 != 1)) && ((uVar30 & 0x60000) != 0)) {
        plVar39 = *(long **)(lVar38 + 8);
        plVar17 = (long *)*plVar39;
        plVar32 = plVar39;
        plVar18 = plVar17;
        if (plVar17 != (long *)0x0) {
          do {
            if (((*(byte *)(plVar32 + 4) >> 3 & 1) != 0) && (*(int *)((long)plVar32 + 0x3c) == 0x11)
               ) goto LAB_109e774d8;
            plVar22 = (long *)*plVar18;
            plVar32 = plVar18;
            plVar18 = plVar22;
          } while (plVar22 != (long *)0x0);
          plVar32 = (long *)0x0;
LAB_109e774d8:
          do {
            plVar18 = plVar17;
            if (((*(byte *)(plVar39 + 4) >> 3 & 1) != 0) && (*(int *)((long)plVar39 + 0x3c) == 0x12)
               ) {
              bVar6 = plVar32 != (long *)0x0;
              bVar34 = true;
              goto LAB_109e7751c;
            }
            plVar17 = (long *)*plVar18;
            plVar39 = plVar18;
          } while (plVar17 != (long *)0x0);
          if (plVar32 != (long *)0x0) {
            bVar34 = false;
            plVar39 = (long *)0x0;
            bVar6 = true;
LAB_109e7751c:
            plVar32 = (long *)**(long **)(lVar38 + 0x178);
            if (plVar32 == (long *)0x0) {
LAB_109e77554:
              lVar13 = 0;
            }
            else {
              plVar17 = *(long **)(lVar38 + 0x178);
              plVar18 = (long *)0x0;
              do {
                plVar22 = plVar17;
                if ((char)plVar17[7] == '\0') {
                  plVar22 = plVar18;
                }
                plVar23 = (long *)*plVar32;
                plVar17 = plVar32;
                plVar18 = plVar22;
                plVar32 = plVar23;
              } while (plVar23 != (long *)0x0);
              if (plVar22 == (long *)0x0) goto LAB_109e77554;
              lVar13 = plVar22[6];
            }
            puStack_140 = *(ulong **)(lVar13 + 0x30);
            if ((int)puStack_140[2] == 0) {
              pcStack_160 = (code *)0x0;
              puStack_158 = puStack_140;
              goto LAB_109e77594;
            }
            puVar41 = (ulong *)puStack_140[1];
            puStack_140 = (ulong *)0x0;
            if (puVar41[1] != 0) {
              puStack_140 = puVar41;
            }
            pcStack_160 = (code *)0x1;
            iVar40 = (int)puVar41[2];
            puStack_158 = puStack_140;
            while (iVar40 != 3) {
LAB_109e77594:
              puStack_140 = (ulong *)puStack_140[3];
              iVar40 = (int)puStack_140[2];
            }
            uStack_148 = *(undefined8 *)(puStack_140[4] + 0x18);
            uStack_150 = 0;
            if (bVar6) {
              FUN_109e7a9ec(&pcStack_160);
            }
            if (bVar34) {
              FUN_109e7a9ec(&pcStack_160,plVar39);
            }
            *(uint *)(lVar13 + 0x84) = *(uint *)(lVar13 + 0x84) & 3;
          }
        }
      }
      if ((*(byte *)(uVar29 + 0x44) & 1) == 0) {
        bVar3 = *(byte *)(lVar38 + 0x61);
        if (2 < bVar3) {
          if (bVar3 != 4) {
            if (bVar3 != 3) goto LAB_109e776b4;
            goto LAB_109e775f4;
          }
LAB_109e7766c:
          plVar32 = (long *)**(long **)(lVar38 + 0x178);
          if (plVar32 == (long *)0x0) {
LAB_109e776a0:
            lVar13 = 0;
          }
          else {
            plVar17 = *(long **)(lVar38 + 0x178);
            plVar18 = (long *)0x0;
            do {
              plVar39 = plVar17;
              if ((char)plVar17[7] == '\0') {
                plVar39 = plVar18;
              }
              plVar22 = (long *)*plVar32;
              plVar17 = plVar32;
              plVar18 = plVar39;
              plVar32 = plVar22;
            } while (plVar22 != (long *)0x0);
            if (plVar39 == (long *)0x0) goto LAB_109e776a0;
            lVar13 = plVar39[6];
          }
          uVar46 = 0;
          goto LAB_109e776b0;
        }
        if (bVar3 == 0) goto LAB_109e775f4;
        if (bVar3 == 2) goto LAB_109e7766c;
      }
      else {
LAB_109e775f4:
        plVar32 = (long *)**(long **)(lVar38 + 0x178);
        if (plVar32 == (long *)0x0) {
LAB_109e77644:
          lVar13 = 0;
        }
        else {
          plVar17 = *(long **)(lVar38 + 0x178);
          plVar18 = (long *)0x0;
          do {
            plVar39 = plVar17;
            if ((char)plVar17[7] == '\0') {
              plVar39 = plVar18;
            }
            plVar22 = (long *)*plVar32;
            plVar17 = plVar32;
            plVar18 = plVar39;
            plVar32 = plVar22;
          } while (plVar22 != (long *)0x0);
          if (plVar39 == (long *)0x0) goto LAB_109e77644;
          lVar13 = plVar39[6];
        }
        uVar46 = 1;
LAB_109e776b0:
        FUN_109f18ef4(lVar38,lVar13,1,uVar46);
      }
LAB_109e776b4:
      FUN_109f0f144(lVar38);
      FUN_109f46234(lVar38);
      FUN_109f1de0c(lVar38);
      if (((char)param_1[lVar24 * 5 + 0xe8] != '\0') &&
         (*(char *)((long)param_1 + lVar24 * 0x28 + 0x741) != '\0')) {
        FUN_109f1a93c(lVar38,0xe0000);
      }
      if (*(char *)(uVar29 + 0x58) == '\x01') {
        FUN_109f43ecc(lVar38,0xe0000,0);
        FUN_109f251b0(lVar38);
        auStack_138[0] = *(ulong *)(uVar29 + 0x60);
        auStack_138[1] = 0;
        pcStack_160 = (code *)0x0;
        if (auStack_138[0] != 0) {
          pcStack_160 = FUN_109f0a68c;
        }
        puStack_158 = auStack_138;
        FUN_109eccc7c(lVar38,FUN_109f094ac,FUN_109f094f4,&pcStack_160);
      }
      func_0x000109f23018(lVar38);
      FUN_109e80660(lVar38,1);
      if (*(char *)(*(long *)(lVar16 + 0x160) + 0x61) == '\x05') {
        func_0x000109f13c74(*(long *)(lVar16 + 0x160),0x80000,0x109e7a9ac);
        func_0x000109f12b40(*(undefined8 *)(lVar16 + 0x160),0x80000,9);
      }
      FUN_109f2414c(lVar38);
      if (*(uint *)((long)param_1 + 0x714) < *(uint *)(*(long *)(lVar16 + 0x160) + 0x128)) {
        func_0x000109eb844c(param_3,&UNK_10f60f04a);
        goto LAB_109e778ac;
      }
      if (*(char *)(uVar25 + 0x58) == '\x01') {
        FUN_109f1a0c4(*(undefined8 *)(*(long *)(piVar21 + 10) + 0x160));
      }
      uVar28 = uVar28 + 1;
      uVar36 = (uint)(uVar35 <= uVar28);
    } while (uVar28 != uVar35);
  }
  if (*(long *)(param_3 + 0x2c) != 0 && *(long *)(param_3 + 0x2e) != 0) {
    FUN_109f1c188(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x2e) + 0x28) + 0x160),
                  *(undefined1 *)
                   (*(long *)(*(long *)(*(long *)(param_3 + 0x2c) + 0x28) + 0x160) + 0x15c),0);
  }
  if (uVar35 == 1) {
    FUN_109e760cc(*(undefined8 *)(*(long *)(*param_4 + 0x28) + 0x160));
  }
  else if (uVar35 == 0) goto LAB_109e77890;
  uVar28 = (ulong)uVar35;
  do {
    lVar16 = *(long *)(*(long *)(*param_4 + 0x28) + 0x160);
    pcStack_160 = (code *)((ulong)pcStack_160 & 0xffffffffffffff00);
    FUN_109f20770(lVar16,&pcStack_160);
    if ((*(byte *)(*(long *)(lVar16 + 0x28) + 0xc1) & 1) == 0) {
      FUN_109f0b590(lVar16);
      FUN_109f19fa4(lVar16);
    }
    if (*(char *)((long)param_1 + 0x866) == '\x01') {
      FUN_109f0c62c(lVar16);
    }
    uVar28 = uVar28 - 1;
    param_4 = param_4 + 1;
  } while (uVar28 != 0);
LAB_109e77890:
  uVar36 = 1;
LAB_109e778ac:
  return (ulong *)(ulong)uVar36;
code_r0x000109f3aedc:
  puVar27 = puVar31;
  puVar31 = (ulong *)*puVar31;
  goto joined_r0x000109f3aed0;
}



/* Entry: 109e778d0; end: 109e779c3;  */

void FUN_109e778d0(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x58) == '\x01') {
    FUN_109f17a84(param_1,8);
    FUN_109f17a84(param_2,4);
  }
  FUN_109f16ae8(param_1,param_2);
  FUN_109e760cc(param_1);
  FUN_109e760cc(param_2);
  lVar7 = param_1;
  FUN_109f045b4(param_1,param_2);
  if ((int)lVar7 != 0) {
    FUN_109e760cc(param_2);
  }
  FUN_109f43ecc(param_1,8,0);
  FUN_109f43ecc(param_2,4,0);
  lVar7 = param_1;
  FUN_109f03e70(param_1,param_2);
  if ((int)lVar7 != 0) {
    FUN_109f0f144(param_1);
    FUN_109f0f144(param_2);
    FUN_109e760cc(param_1);
    FUN_109e760cc(param_2);
    FUN_109f43ecc(param_1,8,0);
    FUN_109f43ecc(param_2,4,0);
  }
  plVar8 = *(long **)(param_1 + 8);
  plVar9 = (long *)*plVar8;
  if (plVar9 != (long *)0x0) {
    cVar2 = *(char *)(param_2 + 0x61);
    do {
      uVar10 = (uint)plVar8[4];
      if (((uVar10 >> 3 & 1) != 0) && (-1 < *(int *)((long)plVar8 + 0x3c))) {
        plVar5 = *(long **)(param_2 + 8);
        for (plVar6 = (long *)**(long **)(param_2 + 8); plVar6 != (long *)0x0;
            plVar6 = (long *)*plVar6) {
          uVar11 = plVar5[4];
          if ((((uint)uVar11 >> 2 & 1) != 0) &&
             (*(int *)((long)plVar5 + 0x3c) == *(int *)((long)plVar8 + 0x3c) &&
              ((uVar11 ^ plVar8[4]) & 0x3000000000) == 0)) {
            uVar3 = uVar10 >> 0x1c & 3;
            uVar4 = (uint)uVar11 >> 0x1c & 3;
            uVar10 = uVar3;
            if (uVar3 <= uVar4) {
              uVar10 = uVar4;
            }
            if (cVar2 != '\x04') {
              uVar10 = uVar4;
            }
            uVar1 = uVar3;
            if (uVar4 != 0) {
              uVar1 = uVar10;
            }
            if (uVar3 != 0) {
              uVar4 = uVar1;
            }
            plVar5[4] = uVar11 & 0xffffffffcfffffff | (ulong)(uVar4 << 0x1c);
            plVar8[4] = plVar8[4] & 0xffffffffcfffffffU | (ulong)(uVar4 << 0x1c);
            plVar9 = (long *)*plVar8;
            break;
          }
          plVar5 = plVar6;
        }
      }
      plVar8 = plVar9;
      plVar9 = (long *)*plVar8;
    } while (plVar9 != (long *)0x0);
  }
  return;
}


