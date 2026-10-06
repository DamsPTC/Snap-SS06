/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10356e8c0; end: 10356ea93;  */

/* WARNING: Removing unreachable block (ram,0x00010356ea90) */

void FUN_10356e8c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      puVar3 = &UNK_110790a00;
      switch(uVar1) {
      case 1:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        lVar2 = unaff_x20 + 0x70;
        puVar3 = &UNK_110790c80;
        break;
      case 2:
        pcVar5 = *(code **)(param_3 + 0x168);
        goto code_r0x00010356e938;
      case 3:
        pcVar5 = *(code **)(param_3 + 0x168);
        goto code_r0x00010356e938;
      case 4:
        pcVar5 = *(code **)(param_3 + 0x168);
        goto code_r0x00010356e938;
      case 5:
        pcVar5 = *(code **)(param_3 + 0x168);
        goto code_r0x00010356e938;
      case 6:
        pcVar5 = *(code **)(param_3 + 0x168);
        goto code_r0x00010356e938;
      case 7:
        pcVar5 = *(code **)(param_3 + 0x168);
code_r0x00010356e938:
        (*pcVar5)();
        goto LAB_10356e948;
      case 8:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x000103502f54();
        lVar2 = unaff_x20 + 0x90;
        puVar3 = &UNK_1106698f0;
        break;
      case 9:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        lVar2 = unaff_x20 + 0xe8;
        break;
      case 10:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0x100;
        goto code_r0x00010356ea58;
      case 0xb:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0x118;
code_r0x00010356ea58:
        puVar3 = &UNK_110790c00;
        break;
      case 0xc:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        lVar2 = unaff_x20 + 0x130;
        break;
      case 0xd:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        lVar2 = unaff_x20 + 0x148;
        break;
      default:
        goto LAB_10356e948;
      }
      (*pcVar5)(lVar2,puVar3,uVar1,param_2,param_3);
LAB_10356e948:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10356ea94; end: 10356ed9b;  */

void FUN_10356ea94(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_10356ed9c();
  if (unaff_x21 != 0) {
    return;
  }
  lVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((uVar2 & 0xff000000000000) != 0) {
LAB_10356eb24:
        (**(code **)(param_3 + 0x78))(lVar1,uVar2,2,param_2,param_3);
      }
    }
    else if ((long)(int)lVar1 != lVar1 >> 0x20) goto LAB_10356eb24;
  }
  else if ((uVar4 == 2) && (*(long *)(lVar1 + 0x10) != *(long *)(lVar1 + 0x18))) goto LAB_10356eb24;
  lVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((uVar2 & 0xff000000000000) == 0) goto LAB_10356eb94;
    }
    else {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
LAB_10356eb74:
      if (lVar5 == lVar6) goto LAB_10356eb94;
    }
    (**(code **)(param_3 + 0x78))(lVar1,uVar2,3,param_2,param_3);
  }
  else if (uVar4 == 2) {
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
    goto LAB_10356eb74;
  }
LAB_10356eb94:
  lVar1 = unaff_x20[4];
  uVar2 = unaff_x20[5];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((uVar2 & 0xff000000000000) == 0) goto LAB_10356ebec;
    }
    else {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
LAB_10356ebcc:
      if (lVar5 == lVar6) goto LAB_10356ebec;
    }
    (**(code **)(param_3 + 0x78))(lVar1,uVar2,4,param_2,param_3);
  }
  else if (uVar4 == 2) {
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
    goto LAB_10356ebcc;
  }
LAB_10356ebec:
  lVar1 = unaff_x20[6];
  uVar2 = unaff_x20[7];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((uVar2 & 0xff000000000000) == 0) goto LAB_10356ec44;
    }
    else {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
LAB_10356ec24:
      if (lVar5 == lVar6) goto LAB_10356ec44;
    }
    (**(code **)(param_3 + 0x78))(lVar1,uVar2,5,param_2,param_3);
  }
  else if (uVar4 == 2) {
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
    goto LAB_10356ec24;
  }
LAB_10356ec44:
  lVar1 = unaff_x20[8];
  uVar2 = unaff_x20[9];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((uVar2 & 0xff000000000000) == 0) goto LAB_10356ec9c;
    }
    else {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
LAB_10356ec7c:
      if (lVar5 == lVar6) goto LAB_10356ec9c;
    }
    (**(code **)(param_3 + 0x78))(lVar1,uVar2,6,param_2,param_3);
  }
  else if (uVar4 == 2) {
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
    goto LAB_10356ec7c;
  }
LAB_10356ec9c:
  lVar1 = unaff_x20[10];
  uVar2 = unaff_x20[0xb];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
      goto LAB_10356ecd4;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_10356ecf4;
  }
  else {
    if (uVar4 != 2) goto LAB_10356ecf4;
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
LAB_10356ecd4:
    if (lVar5 == lVar6) goto LAB_10356ecf4;
  }
  (**(code **)(param_3 + 0x78))(lVar1,uVar2,7,param_2,param_3);
LAB_10356ecf4:
  FUN_10356ee20();
  FUN_10356eeb4();
  FUN_10356ef3c();
  FUN_10356efc8();
  FUN_10356f050();
  FUN_10356f0d8();
  func_0x000100076224(param_1,unaff_x20[0xc],unaff_x20[0xd],param_2,param_3);
  return;
}



/* Entry: 10356ed9c; end: 10356ee1f;  */

void FUN_10356ed9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x78);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    uStack_48 = *(undefined8 *)(param_1 + 0x88);
    uStack_50 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,1,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10356ee20; end: 10356eeb3;  */

void FUN_10356ee20(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0xd0);
  if (lStack_60 != 1) {
    uStack_98 = *(undefined8 *)(param_1 + 0x98);
    uStack_a0 = *(undefined8 *)(param_1 + 0x90);
    uStack_88 = *(undefined8 *)(param_1 + 0xa8);
    uStack_90 = *(undefined8 *)(param_1 + 0xa0);
    uStack_78 = *(undefined8 *)(param_1 + 0xb8);
    uStack_80 = *(undefined8 *)(param_1 + 0xb0);
    uStack_68 = *(undefined8 *)(param_1 + 200);
    uStack_70 = *(undefined8 *)(param_1 + 0xc0);
    uStack_50 = *(undefined8 *)(param_1 + 0xe0);
    uStack_58 = *(undefined8 *)(param_1 + 0xd8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103502f54();
    (*pcVar1)(&uStack_a0,8,&UNK_1106698f0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10356eeb4; end: 10356ef3b;  */

void FUN_10356eeb4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xf8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xf0);
    uStack_60 = *(undefined8 *)(param_1 + 0xe8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,9,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10356ef3c; end: 10356efc7;  */

void FUN_10356ef3c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x100);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x110);
    uStack_50 = *(undefined8 *)(param_1 + 0x108);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,10,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10356efc8; end: 10356f04f;  */

void FUN_10356efc8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x118);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x128);
    uStack_50 = *(undefined8 *)(param_1 + 0x120);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,0xb,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10356f050; end: 10356f0d7;  */

void FUN_10356f050(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x140);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x138);
    uStack_60 = *(undefined8 *)(param_1 + 0x130);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,0xc,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10356f0d8; end: 10356f163;  */

void FUN_10356f0d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x158);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x150);
    uStack_60 = *(undefined8 *)(param_1 + 0x148);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,0xd,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10356f164; end: 10356f1eb;  */

void FUN_10356f164(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  param_1[9] = 0xc000000000000000;
  param_1[8] = 0;
  param_1[0xb] = 0xc000000000000000;
  param_1[10] = 0;
  param_1[0xd] = 0xc000000000000000;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 1;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 2;
  param_1[0x1f] = 0xf000000000000000;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 2;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0xf000000000000000;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0xf000000000000000;
  return;
}



/* Entry: 10356f1ec; end: 10356f21b;  */

undefined1  [16] FUN_10356f1ec(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x60);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68));
  return auVar1;
}



/* Entry: 10356f21c; end: 10356f24f;  */

void FUN_10356f21c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  return;
}



/* Entry: 10356f250; end: 10356f263;  */

undefined1  [16] FUN_10356f250(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x60;
  auVar1._0_8_ = 0x10356f260;
  return auVar1;
}



/* Entry: 10356f264; end: 10356f277;  */

void FUN_10356f264(void)

{
  FUN_10356e8c0();
  return;
}



/* Entry: 10356f278; end: 10356f2df;  */

void FUN_10356f278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_1a0 [352];
  
  func_0x000107c610b4(auStack_1a0);
  FUN_10356ea94(param_1,param_2,param_3);
  return;
}



/* Entry: 10356f2e0; end: 10356f2e3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10356f2e0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10356f2e4; end: 10356f31b;  */

uint FUN_10356f2e4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x00010357856c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10356f31c; end: 10356f36b;  */

uint FUN_10356f31c(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_2e0 [352];
  undefined1 auStack_180 [352];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_180,param_1,0x160);
  func_0x000107c610b4(auStack_2e0);
  func_0x0001035717ec(auStack_2e0,auStack_180);
  return uVar1 & 1;
}



/* Entry: 10356f36c; end: 10356f40b;  */

/* WARNING: Possible PIC construction at 0x00010356f3b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010356f3c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010356f3bc) */
/* WARNING: Removing unreachable block (ram,0x00010356f3cc) */

void FUN_10356f36c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f789a8 != -1) {
    func_0x000107c61568(0x112f789a8,FUN_10356e878);
  }
  uVar5 = uRam00000001138089c8;
  uVar4 = uRam00000001138089c0;
  uVar3 = uRam00000001138089b8;
  uVar2 = uRam00000001138089b0;
  uVar1 = uRam00000001138089a8;
  *param_1 = uRam00000001138089a0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10356f40c; end: 10356f447;  */

void FUN_10356f40c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f79580;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f79580,&UNK_10dbdc7f0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10356f448; end: 10356f553;  */

void FUN_10356f448(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1d8 [72];
  undefined1 auStack_190 [352];
  
  func_0x000107c610b4(auStack_190);
  func_0x000107c6068c(auStack_1d8,0);
  func_0x000107c5fa50(auStack_1d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10356f554; end: 10356f5a7;  */

uint FUN_10356f554(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_2e0 [352];
  undefined1 auStack_180 [352];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_2e0,param_1,0x160);
  func_0x000107c610b4(auStack_180,param_2,0x160);
  func_0x0001035717ec(auStack_2e0,auStack_180);
  return uVar1 & 1;
}



/* Entry: 10356f5a8; end: 10356f5ef;  */

void FUN_10356f5a8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdc830,0x4b,2);
  uRam00000001138089d8 = uStack_38;
  uRam00000001138089d0 = uStack_40;
  uRam00000001138089e8 = uStack_28;
  uRam00000001138089e0 = uStack_30;
  uRam00000001138089f8 = uStack_18;
  uRam00000001138089f0 = uStack_20;
  return;
}



/* Entry: 10356f5f0; end: 10356f71b;  */

void FUN_10356f5f0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x000101568c04();
          goto LAB_10356f678;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          goto LAB_10356f678;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
        }
        else {
          if (lVar1 != 4) goto LAB_10356f68c;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
        }
LAB_10356f678:
        (*pcVar4)();
      }
LAB_10356f68c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10356f71c; end: 10356f7f7;  */

void FUN_10356f71c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *unaff_x20;
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_3 + 0x118);
    uVar1 = param_1;
    func_0x000101568c04();
    (*pcVar3)(lVar2,1,&UNK_110790c80,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_10356f7f8();
  if (unaff_x21 == 0) {
    FUN_10356f880();
    FUN_10356f908();
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 10356f7f8; end: 10356f87f;  */

void FUN_10356f7f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x28);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = *(undefined8 *)(param_1 + 0x18);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,2,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10356f880; end: 10356f907;  */

void FUN_10356f880(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x40);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,3,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10356f908; end: 10356f98f;  */

void FUN_10356f908(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x58);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    uStack_60 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,4,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10356f990; end: 10356f9e7;  */

void FUN_10356f990(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf000000000000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xf000000000000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xf000000000000000;
  return;
}



/* Entry: 10356f9e8; end: 10356fa17;  */

undefined1  [16] FUN_10356f9e8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 10356fa18; end: 10356fa4b;  */

void FUN_10356fa18(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10356fa4c; end: 10356fa5f;  */

undefined1  [16] FUN_10356fa4c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x10356fa5c;
  return auVar1;
}



/* Entry: 10356fa60; end: 10356fa73;  */

void FUN_10356fa60(void)

{
  FUN_10356f5f0();
  return;
}



/* Entry: 10356fa74; end: 10356fab3;  */

void FUN_10356fa74(void)

{
  FUN_10356f71c();
  return;
}



/* Entry: 10356fab4; end: 10356fab7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10356fab4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10356fab8; end: 10356faef;  */

uint FUN_10356fab8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_10357852c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10356faf0; end: 10356fb47;  */

uint FUN_10356faf0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_18 = param_1[0xb];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_1035712fc(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10356fb48; end: 10356fbe7;  */

/* WARNING: Possible PIC construction at 0x00010356fb94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010356fba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010356fb98) */
/* WARNING: Removing unreachable block (ram,0x00010356fba8) */

void FUN_10356fb48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f789b8 != -1) {
    func_0x000107c61568(0x112f789b8,FUN_10356f5a8);
  }
  uVar5 = uRam00000001138089f8;
  uVar4 = uRam00000001138089f0;
  uVar3 = uRam00000001138089e8;
  uVar2 = uRam00000001138089e0;
  uVar1 = uRam00000001138089d8;
  *param_1 = uRam00000001138089d0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10356fbe8; end: 10356fc23;  */

void FUN_10356fbe8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f79570;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f79570,&UNK_10dbdc7e8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10356fc24; end: 10356fd3f;  */

void FUN_10356fc24(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_38 = unaff_x20[0xb];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10356fd40; end: 10356fd97;  */

uint FUN_10356fd40(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_1035712fc(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10356fd98; end: 103570cef;  */

byte * FUN_10356fd98(byte *param_1,byte *param_2,code *param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  code *pcVar5;
  byte *pbVar6;
  code *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  code *pcVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  byte *unaff_x19;
  byte *unaff_x20;
  code *unaff_x21;
  long lVar19;
  int iVar20;
  byte *unaff_x22;
  ulong unaff_x23;
  code *unaff_x24;
  code *unaff_x25;
  byte *pbVar21;
  long lVar22;
  long lVar23;
  byte *unaff_x27;
  byte *pbVar24;
  ulong *unaff_x28;
  ulong *puVar25;
  undefined1 auStack_360 [96];
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong *puStack_240;
  byte *pbStack_238;
  byte *pbStack_230;
  code *pcStack_228;
  byte *pbStack_220;
  long lStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  long lStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  code *pcStack_1e0;
  code *pcStack_1d8;
  byte *pbStack_1d0;
  byte bStack_1c1;
  byte abStack_1c0 [24];
  long lStack_1a8;
  ulong *puStack_1a0;
  byte *pbStack_198;
  long lStack_190;
  code *pcStack_188;
  code *pcStack_180;
  ulong uStack_178;
  byte *pbStack_170;
  code *pcStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  undefined1 **ppuStack_150;
  undefined8 uStack_148;
  code *pcStack_138;
  code *pcStack_130;
  byte bStack_121;
  byte abStack_120 [24];
  long lStack_108;
  ulong *puStack_100;
  byte *pbStack_f8;
  long lStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  ulong uStack_d8;
  byte *pbStack_d0;
  code *pcStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_98;
  code *pcStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = *(long *)(param_1 + 0x10);
  if (lVar22 == *(long *)(param_2 + 0x10)) {
    if ((lVar22 != 0) && (param_1 != param_2)) {
      unaff_x21 = (code *)0x0;
      unaff_x27 = param_1 + 0x38;
      unaff_x28 = (ulong *)(param_2 + 0x38);
      do {
        unaff_x20 = &UNK_100d55e08;
        unaff_x25 = (code *)0xc000000000000000;
        unaff_x22 = *(byte **)(unaff_x27 + -8);
        unaff_x19 = *(byte **)unaff_x27;
        unaff_x24 = (code *)unaff_x28[-1];
        unaff_x23 = *unaff_x28;
        if ((char)unaff_x28[-2] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010356fe44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)*(int *)(&UNK_100d55e08 + unaff_x28[-3] * 4) + 0x10356fe38))();
          return param_1;
        }
        if (*(ulong *)(unaff_x27 + -0x18) != unaff_x28[-3] ||
            *(int *)(unaff_x27 + -0xc) != *(int *)((long)unaff_x28 + -0xc)) goto LAB_1035702a4;
        uVar18 = (uint)((ulong)unaff_x19 >> 0x20);
        uVar12 = uVar18 >> 0x1e;
        uVar2 = (uint)(unaff_x23 >> 0x20);
        uVar15 = uVar2 >> 0x1e;
        iVar20 = (int)unaff_x22;
        if ((ulong)unaff_x19 >> 0x3e == 3) {
          uVar14 = 0;
          if ((((unaff_x22 != (byte *)0x0) || (unaff_x19 != (byte *)0xc000000000000000)) ||
              (unaff_x23 >> 0x3e < 3)) ||
             ((uVar14 = 0, unaff_x24 != (code *)0x0 || (unaff_x23 != 0xc000000000000000))))
          goto joined_r0x000103570084;
        }
        else {
          if (uVar18 >> 0x1e < 2) {
            if (uVar12 == 0) {
              uVar14 = (ulong)unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar13 = (int)((ulong)unaff_x22 >> 0x20);
              if (SBORROW4(iVar13,iVar20)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1035702f4);
                (*pcVar4)();
              }
              uVar14 = (ulong)(iVar13 - iVar20);
            }
joined_r0x000103570084:
            if (uVar2 >> 0x1e < 2) goto LAB_10356fef0;
LAB_10356febc:
            if (uVar15 != 2) {
              if (uVar14 == 0) goto LAB_10356fe04;
              goto LAB_1035702a4;
            }
            uVar16 = *(long *)(unaff_x24 + 0x18) - *(long *)(unaff_x24 + 0x10);
            if (SBORROW8(*(long *)(unaff_x24 + 0x18),*(long *)(unaff_x24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1035702f0);
              (*pcVar4)();
            }
          }
          else {
            if (uVar12 == 2) {
              uVar14 = *(long *)(unaff_x22 + 0x18) - *(long *)(unaff_x22 + 0x10);
              if (SBORROW8(*(long *)(unaff_x22 + 0x18),*(long *)(unaff_x22 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1035702f8);
                (*pcVar4)();
              }
              goto joined_r0x000103570084;
            }
            uVar14 = 0;
            if (1 < uVar15) goto LAB_10356febc;
LAB_10356fef0:
            if (uVar15 == 0) {
              uVar16 = unaff_x23 >> 0x30 & 0xff;
            }
            else {
              iVar13 = (int)((ulong)unaff_x24 >> 0x20);
              if (SBORROW4(iVar13,(int)unaff_x24)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1035702ec);
                (*pcVar4)();
              }
              uVar16 = (ulong)(iVar13 - (int)unaff_x24);
            }
          }
          if (uVar14 != uVar16) goto LAB_1035702a4;
          if (0 < (long)uVar14) {
            param_1 = unaff_x22;
            param_2 = unaff_x19;
            param_3 = unaff_x24;
            if (uVar12 < 2) {
              if (uVar12 != 0) {
                lVar23 = (long)iVar20;
                pcStack_98 = (code *)(((long)unaff_x22 >> 0x20) - lVar23);
                if ((long)unaff_x22 >> 0x20 < lVar23) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1035702fc);
                  pcStack_90 = unaff_x21;
                  (*pcVar4)();
                }
                pcStack_90 = unaff_x21;
                func_0x00010006c00c(unaff_x22,unaff_x19);
                pcVar4 = unaff_x24;
                func_0x00010006c00c(unaff_x24,unaff_x23);
                func_0x000107c5ec30();
                if (pcVar4 == (code *)0x0) {
                  func_0x000107c5ec38();
                  pcVar7 = (code *)0x0;
                  pcVar11 = (code *)0x0;
                }
                else {
                  pcVar5 = pcVar4;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar23,(long)pcVar5)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103570308);
                    (*pcVar4)();
                  }
                  pcVar4 = pcVar4 + (lVar23 - (long)pcVar5);
                  func_0x000107c5ec38();
                  if ((long)pcStack_98 <= (long)pcVar5) {
                    pcVar5 = pcStack_98;
                  }
                  pcVar7 = (code *)0x0;
                  if (pcVar4 != (code *)0x0) {
                    pcVar7 = pcVar4;
                  }
                  pcVar11 = (code *)0x0;
                  if (pcVar4 != (code *)0x0) {
                    pcVar11 = pcVar5 + (long)pcVar4;
                  }
                }
                unaff_x21 = pcStack_90;
                func_0x000100e25bdc(abStack_80,pcVar7,pcVar11,unaff_x24,unaff_x23);
                func_0x00010006c090(unaff_x24,unaff_x23);
                func_0x00010006c090(unaff_x22);
                bVar3 = abStack_80[0];
joined_r0x00010357016c:
                unaff_x25 = (code *)0xc000000000000000;
                unaff_x20 = &UNK_100d55e08;
                if ((bVar3 & 1) != 0) goto LAB_10356fe04;
                goto LAB_1035702a4;
              }
              abStack_80[0] = (byte)unaff_x22;
              abStack_80[1] = (byte)((ulong)unaff_x22 >> 8);
              abStack_80[2] = (byte)((ulong)unaff_x22 >> 0x10);
              abStack_80[3] = (byte)((ulong)unaff_x22 >> 0x18);
              abStack_80[4] = (byte)((ulong)unaff_x22 >> 0x20);
              abStack_80[5] = (byte)((ulong)unaff_x22 >> 0x28);
              abStack_80[6] = (byte)((ulong)unaff_x22 >> 0x30);
              abStack_80[7] = (byte)((ulong)unaff_x22 >> 0x38);
              abStack_80[8] = (byte)unaff_x19;
              abStack_80[9] = (byte)((ulong)unaff_x19 >> 8);
              abStack_80[10] = (byte)((ulong)unaff_x19 >> 0x10);
              abStack_80[0xb] = (byte)((ulong)unaff_x19 >> 0x18);
              abStack_80[0xc] = (byte)((ulong)unaff_x19 >> 0x20);
              abStack_80[0xd] = (byte)((ulong)unaff_x19 >> 0x28);
              unaff_x20 = abStack_80 + ((ulong)unaff_x19 >> 0x30 & 0xff);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              func_0x00010006c00c(unaff_x24,unaff_x23);
              func_0x000100e25bdc(&bStack_81,abStack_80,unaff_x20,unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x22);
              bVar3 = bStack_81;
            }
            else {
              if (uVar12 != 2) {
                abStack_80[8] = 0;
                abStack_80[9] = 0;
                abStack_80[10] = 0;
                abStack_80[0xb] = 0;
                abStack_80[0xc] = 0;
                abStack_80[0xd] = 0;
                abStack_80[0] = 0;
                abStack_80[1] = 0;
                abStack_80[2] = 0;
                abStack_80[3] = 0;
                abStack_80[4] = 0;
                abStack_80[5] = 0;
                abStack_80[6] = 0;
                abStack_80[7] = 0;
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x00010006c00c(unaff_x24,unaff_x23);
                func_0x000100e25bdc(&bStack_81,abStack_80,abStack_80,unaff_x24,unaff_x23);
                func_0x00010006c090(unaff_x24,unaff_x23);
                func_0x00010006c090(unaff_x22);
                bVar3 = bStack_81;
                goto joined_r0x00010357016c;
              }
              lVar23 = *(long *)(unaff_x22 + 0x10);
              pcStack_98 = *(code **)(unaff_x22 + 0x18);
              pcStack_90 = unaff_x21;
              func_0x00010006c00c(unaff_x22,unaff_x19);
              unaff_x25 = unaff_x24;
              func_0x00010006c00c(unaff_x24,unaff_x23);
              func_0x000107c5ec30();
              pcVar4 = unaff_x25;
              if (unaff_x25 != (code *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar23,(long)pcVar4)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103570304);
                  (*pcVar4)();
                }
                unaff_x25 = unaff_x25 + (lVar23 - (long)pcVar4);
              }
              pcVar7 = pcStack_98 + -lVar23;
              if (SBORROW8((long)pcStack_98,lVar23)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103570300);
                (*pcVar4)();
              }
              func_0x000107c5ec38();
              unaff_x21 = pcStack_90;
              if (unaff_x25 == (code *)0x0) {
                pcVar4 = (code *)0x0;
              }
              else {
                if ((long)pcVar7 <= (long)pcVar4) {
                  pcVar4 = pcVar7;
                }
                pcVar4 = pcVar4 + (long)unaff_x25;
              }
              unaff_x20 = &UNK_100d55e08;
              func_0x000100e25bdc(abStack_80,unaff_x25,pcVar4,unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x22);
              bVar3 = abStack_80[0];
            }
            if ((bVar3 & 1) == 0) goto LAB_1035702a4;
          }
        }
LAB_10356fe04:
        unaff_x20 = &UNK_100d55e08;
        unaff_x25 = (code *)0xc000000000000000;
        unaff_x27 = unaff_x27 + 0x20;
        unaff_x28 = unaff_x28 + 4;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    pbVar6 = (byte *)0x1;
  }
  else {
LAB_1035702a4:
    pbVar6 = (byte *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pbVar6;
  }
  func_0x000107c60e78();
  uStack_a8 = 0x10357030c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = *(long *)(pbVar6 + 0x10);
  pbVar24 = unaff_x27;
  puVar25 = unaff_x28;
  puStack_100 = unaff_x28;
  pbStack_f8 = unaff_x27;
  lStack_f0 = lVar22;
  pcStack_e8 = unaff_x25;
  pcStack_e0 = unaff_x24;
  uStack_d8 = unaff_x23;
  pbStack_d0 = unaff_x22;
  pcStack_c8 = unaff_x21;
  pbStack_c0 = unaff_x20;
  pbStack_b8 = unaff_x19;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (lVar23 == *(long *)(param_2 + 0x10)) {
    if ((lVar23 != 0) && (pbVar6 != param_2)) {
      pcVar4 = (code *)0x0;
      pbVar24 = pbVar6 + 0x38;
      puVar25 = (ulong *)(param_2 + 0x38);
      do {
        unaff_x21 = pcVar4;
        unaff_x25 = (code *)0xc000000000000000;
        uVar14 = *(ulong *)(pbVar24 + -0x18);
        iVar20 = *(int *)(pbVar24 + -0xc);
        unaff_x22 = *(byte **)(pbVar24 + -8);
        unaff_x19 = *(byte **)pbVar24;
        uVar16 = puVar25[-3];
        iVar13 = *(int *)((long)puVar25 + -0xc);
        unaff_x24 = (code *)puVar25[-1];
        unaff_x23 = *puVar25;
        if ((char)puVar25[-2] == '\x01') {
          if ((long)uVar16 < 3) {
            if (uVar16 == 0) {
              pbVar6 = (byte *)0x0;
              if (uVar14 != 0) goto LAB_1035707ac;
            }
            else if (uVar16 == 1) {
              pbVar6 = (byte *)0x0;
              if (uVar14 != 1) goto LAB_1035707ac;
            }
            else {
              pbVar6 = (byte *)0x0;
              if (uVar14 != 2) goto LAB_1035707ac;
            }
          }
          else {
            if (uVar16 == 3) {
              if (uVar14 == 3 && iVar20 == iVar13) goto LAB_103570438;
              goto LAB_1035707a0;
            }
            if (uVar16 == 4) {
              pbVar6 = (byte *)0x0;
              if (uVar14 != 4) goto LAB_1035707ac;
            }
            else {
              pbVar6 = (byte *)0x0;
              if (uVar14 != 5) goto LAB_1035707ac;
            }
          }
          pbVar6 = (byte *)0x0;
          if (iVar20 != iVar13) goto LAB_1035707ac;
        }
        else if (uVar14 != uVar16 || iVar20 != iVar13) goto LAB_1035707a0;
LAB_103570438:
        uVar18 = (uint)((ulong)unaff_x19 >> 0x20);
        uVar12 = uVar18 >> 0x1e;
        uVar2 = (uint)(unaff_x23 >> 0x20);
        uVar15 = uVar2 >> 0x1e;
        iVar20 = (int)unaff_x22;
        if ((ulong)unaff_x19 >> 0x3e == 3) {
          uVar14 = 0;
          if ((((unaff_x22 != (byte *)0x0) || (unaff_x19 != (byte *)0xc000000000000000)) ||
              (unaff_x23 >> 0x3e < 3)) ||
             ((uVar14 = 0, unaff_x24 != (code *)0x0 || (unaff_x23 != 0xc000000000000000))))
          goto joined_r0x000103570620;
        }
        else {
          if (uVar18 >> 0x1e < 2) {
            if (uVar12 == 0) {
              uVar14 = (ulong)unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar13 = (int)((ulong)unaff_x22 >> 0x20);
              if (SBORROW4(iVar13,iVar20)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1035707f0);
                (*pcVar4)();
              }
              uVar14 = (ulong)(iVar13 - iVar20);
            }
joined_r0x000103570620:
            if (uVar2 >> 0x1e < 2) goto LAB_1035704c0;
LAB_10357048c:
            if (uVar15 != 2) {
              if (uVar14 == 0) goto LAB_103570370;
              goto LAB_1035707a0;
            }
            uVar16 = *(long *)(unaff_x24 + 0x18) - *(long *)(unaff_x24 + 0x10);
            if (SBORROW8(*(long *)(unaff_x24 + 0x18),*(long *)(unaff_x24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1035707e8);
              (*pcVar4)();
            }
          }
          else {
            if (uVar12 == 2) {
              uVar14 = *(long *)(unaff_x22 + 0x18) - *(long *)(unaff_x22 + 0x10);
              if (SBORROW8(*(long *)(unaff_x22 + 0x18),*(long *)(unaff_x22 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1035707f4);
                (*pcVar4)();
              }
              goto joined_r0x000103570620;
            }
            uVar14 = 0;
            if (1 < uVar15) goto LAB_10357048c;
LAB_1035704c0:
            if (uVar15 == 0) {
              uVar16 = unaff_x23 >> 0x30 & 0xff;
            }
            else {
              iVar13 = (int)((ulong)unaff_x24 >> 0x20);
              if (SBORROW4(iVar13,(int)unaff_x24)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1035707ec);
                (*pcVar4)();
              }
              uVar16 = (ulong)(iVar13 - (int)unaff_x24);
            }
          }
          if (uVar14 != uVar16) goto LAB_1035707a0;
          if (0 < (long)uVar14) {
            param_2 = unaff_x19;
            param_3 = unaff_x24;
            if (uVar12 < 2) {
              if (uVar12 != 0) {
                lVar22 = (long)iVar20;
                pcStack_138 = (code *)(((long)unaff_x22 >> 0x20) - lVar22);
                if ((long)unaff_x22 >> 0x20 < lVar22) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1035707f8);
                  pcStack_130 = unaff_x21;
                  (*pcVar4)();
                }
                pcStack_130 = unaff_x21;
                func_0x00010006c00c(unaff_x22,unaff_x19);
                pcVar4 = unaff_x24;
                func_0x00010006c00c(unaff_x24,unaff_x23);
                func_0x000107c5ec30();
                if (pcVar4 == (code *)0x0) {
                  func_0x000107c5ec38();
                  pcVar7 = (code *)0x0;
                  pcVar11 = (code *)0x0;
                }
                else {
                  pcVar5 = pcVar4;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar22,(long)pcVar5)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103570804);
                    (*pcVar4)();
                  }
                  pcVar4 = pcVar4 + (lVar22 - (long)pcVar5);
                  func_0x000107c5ec38();
                  if ((long)pcStack_138 <= (long)pcVar5) {
                    pcVar5 = pcStack_138;
                  }
                  pcVar7 = (code *)0x0;
                  if (pcVar4 != (code *)0x0) {
                    pcVar7 = pcVar4;
                  }
                  pcVar11 = (code *)0x0;
                  if (pcVar4 != (code *)0x0) {
                    pcVar11 = pcVar5 + (long)pcVar4;
                  }
                }
                unaff_x21 = pcStack_130;
                unaff_x20 = (byte *)((ulong)unaff_x19 & 0x3fffffffffffffff);
                func_0x000100e25bdc(abStack_120,pcVar7,pcVar11,unaff_x24,unaff_x23);
                func_0x00010006c090(unaff_x24,unaff_x23);
                func_0x00010006c090(unaff_x22);
                unaff_x25 = (code *)0xc000000000000000;
                if ((abStack_120[0] & 1) != 0) goto LAB_103570370;
                goto LAB_1035707a0;
              }
              abStack_120[0] = (byte)unaff_x22;
              abStack_120[1] = (byte)((ulong)unaff_x22 >> 8);
              abStack_120[2] = (byte)((ulong)unaff_x22 >> 0x10);
              abStack_120[3] = (byte)((ulong)unaff_x22 >> 0x18);
              abStack_120[4] = (byte)((ulong)unaff_x22 >> 0x20);
              abStack_120[5] = (byte)((ulong)unaff_x22 >> 0x28);
              abStack_120[6] = (byte)((ulong)unaff_x22 >> 0x30);
              abStack_120[7] = (byte)((ulong)unaff_x22 >> 0x38);
              abStack_120[8] = (byte)unaff_x19;
              abStack_120[9] = (byte)((ulong)unaff_x19 >> 8);
              abStack_120[10] = (byte)((ulong)unaff_x19 >> 0x10);
              abStack_120[0xb] = (byte)((ulong)unaff_x19 >> 0x18);
              abStack_120[0xc] = (byte)((ulong)unaff_x19 >> 0x20);
              abStack_120[0xd] = (byte)((ulong)unaff_x19 >> 0x28);
              pbVar6 = abStack_120 + ((ulong)unaff_x19 >> 0x30 & 0xff);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              func_0x00010006c00c(unaff_x24,unaff_x23);
              unaff_x20 = pbVar6;
LAB_1035706e0:
              func_0x000100e25bdc(&bStack_121,abStack_120,pbVar6,unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x22);
              bVar3 = bStack_121;
            }
            else {
              if (uVar12 != 2) {
                abStack_120[8] = 0;
                abStack_120[9] = 0;
                abStack_120[10] = 0;
                abStack_120[0xb] = 0;
                abStack_120[0xc] = 0;
                abStack_120[0xd] = 0;
                abStack_120[0] = 0;
                abStack_120[1] = 0;
                abStack_120[2] = 0;
                abStack_120[3] = 0;
                abStack_120[4] = 0;
                abStack_120[5] = 0;
                abStack_120[6] = 0;
                abStack_120[7] = 0;
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x00010006c00c(unaff_x24,unaff_x23);
                pbVar6 = abStack_120;
                goto LAB_1035706e0;
              }
              lVar22 = *(long *)(unaff_x22 + 0x10);
              pcStack_138 = *(code **)(unaff_x22 + 0x18);
              pcStack_130 = unaff_x21;
              func_0x00010006c00c(unaff_x22,unaff_x19);
              unaff_x25 = unaff_x24;
              func_0x00010006c00c(unaff_x24,unaff_x23);
              func_0x000107c5ec30();
              pcVar4 = unaff_x25;
              if (unaff_x25 != (code *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar22,(long)pcVar4)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103570800);
                  (*pcVar4)();
                }
                unaff_x25 = unaff_x25 + (lVar22 - (long)pcVar4);
              }
              pcVar7 = pcStack_138 + -lVar22;
              if (SBORROW8((long)pcStack_138,lVar22)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1035707fc);
                (*pcVar4)();
              }
              unaff_x20 = (byte *)((ulong)unaff_x19 & 0x3fffffffffffffff);
              func_0x000107c5ec38();
              unaff_x21 = pcStack_130;
              if (unaff_x25 == (code *)0x0) {
                pcVar4 = (code *)0x0;
              }
              else {
                if ((long)pcVar7 <= (long)pcVar4) {
                  pcVar4 = pcVar7;
                }
                pcVar4 = pcVar4 + (long)unaff_x25;
              }
              func_0x000100e25bdc(abStack_120,unaff_x25,pcVar4,unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x22);
              bVar3 = abStack_120[0];
            }
            if ((bVar3 & 1) == 0) goto LAB_1035707a0;
          }
        }
LAB_103570370:
        unaff_x25 = (code *)0xc000000000000000;
        unaff_x27 = pbVar24 + 0x20;
        unaff_x28 = puVar25 + 4;
        lVar23 = lVar23 + -1;
        pcVar4 = unaff_x21;
        pbVar24 = unaff_x27;
        puVar25 = unaff_x28;
      } while (lVar23 != 0);
    }
    pbVar6 = (byte *)0x1;
    pbVar24 = unaff_x27;
    puVar25 = unaff_x28;
  }
  else {
LAB_1035707a0:
    pbVar6 = (byte *)0x0;
  }
LAB_1035707ac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return pbVar6;
  }
  func_0x000107c60e78();
  uStack_148 = 0x103570808;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = *(long *)(pbVar6 + 0x10);
  puStack_1a0 = puVar25;
  pbStack_198 = pbVar24;
  lStack_190 = lVar23;
  pcStack_188 = unaff_x25;
  pcStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  pbStack_170 = unaff_x22;
  pcStack_168 = unaff_x21;
  pbStack_160 = unaff_x20;
  pbStack_158 = unaff_x19;
  ppuStack_150 = &puStack_b0;
  if (lVar22 == *(long *)(param_2 + 0x10)) {
    pcVar4 = unaff_x21;
    if ((lVar22 != 0) && (pbVar6 != param_2)) {
      pcStack_1d8 = (code *)0x0;
      pbVar24 = pbVar6 + 0x30;
      puVar25 = (ulong *)(param_2 + 0x30);
      pcStack_1e0 = param_3;
      do {
        unaff_x21 = param_3;
        lVar23 = *(long *)(pbVar24 + -0x10);
        param_2 = *(byte **)(pbVar24 + -8);
        unaff_x22 = *(byte **)pbVar24;
        unaff_x20 = (byte *)puVar25[-2];
        uVar14 = puVar25[-1];
        pbVar21 = (byte *)*puVar25;
        func_0x00010006c00c(lVar23,param_2);
        func_0x000107c6157c(unaff_x22);
        pbStack_1d0 = unaff_x20;
        func_0x00010006c00c(unaff_x20,uVar14);
        pbVar6 = pbVar21;
        func_0x000107c6157c();
        if (unaff_x22 != pbVar21) {
          func_0x000107c6157c(unaff_x22);
          func_0x000107c6157c(pbVar21);
          unaff_x20 = unaff_x22;
          (*unaff_x21)(unaff_x22,pbVar21);
          func_0x000107c61574(pbVar21);
          pbVar6 = unaff_x22;
          func_0x000107c61574();
          if (((ulong)unaff_x20 & 1) != 0) goto LAB_10357094c;
LAB_103570c68:
          func_0x00010006c090(pbStack_1d0,uVar14);
          func_0x000107c61574(pbVar21);
          func_0x00010006c090(lVar23);
          func_0x000107c61574(unaff_x22);
          goto LAB_103570c90;
        }
LAB_10357094c:
        pbVar9 = pbStack_1d0;
        pcVar7 = pcStack_1d8;
        uVar18 = (uint)((ulong)param_2 >> 0x20);
        uVar12 = uVar18 >> 0x1e;
        uVar2 = (uint)(uVar14 >> 0x20);
        uVar15 = uVar2 >> 0x1e;
        iVar20 = (int)lVar23;
        if ((ulong)param_2 >> 0x3e == 3) {
          uVar16 = 0;
          if ((((lVar23 != 0) || (param_2 != (byte *)0xc000000000000000)) || (uVar14 >> 0x3e < 3))
             || ((uVar16 = 0, pbStack_1d0 != (byte *)0x0 || (uVar14 != 0xc000000000000000))))
          goto joined_r0x0001035709c4;
          func_0x00010006c090(0,0xc000000000000000);
          func_0x000107c61574(pbVar21);
          lVar23 = 0;
          param_2 = (byte *)0xc000000000000000;
LAB_103570ae0:
          func_0x00010006c090(lVar23);
          func_0x000107c61574(unaff_x22);
          pcVar4 = unaff_x21;
          pcVar7 = pcStack_1d8;
        }
        else {
          if (1 < uVar18 >> 0x1e) {
            if (uVar12 == 2) {
              uVar16 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
              if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103570cdc);
                (*pcVar4)();
              }
              goto joined_r0x0001035709c4;
            }
            uVar16 = 0;
            if (uVar15 < 2) goto LAB_103570a00;
LAB_1035709c8:
            if (uVar15 == 2) {
              uVar17 = *(long *)(pbStack_1d0 + 0x18) - *(long *)(pbStack_1d0 + 0x10);
              if (SBORROW8(*(long *)(pbStack_1d0 + 0x18),*(long *)(pbStack_1d0 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103570cd0);
                (*pcVar4)();
              }
              goto LAB_103570a28;
            }
            if (uVar16 != 0) goto LAB_103570c68;
LAB_103570ac4:
            func_0x00010006c090(pbStack_1d0,uVar14);
            func_0x000107c61574(pbVar21);
            goto LAB_103570ae0;
          }
          if (uVar12 == 0) {
            uVar16 = (ulong)param_2 >> 0x30 & 0xff;
          }
          else {
            iVar13 = (int)((ulong)lVar23 >> 0x20);
            if (SBORROW4(iVar13,iVar20)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103570cd8);
              (*pcVar4)();
            }
            uVar16 = (ulong)(iVar13 - iVar20);
          }
joined_r0x0001035709c4:
          if (1 < uVar2 >> 0x1e) goto LAB_1035709c8;
LAB_103570a00:
          if (uVar15 == 0) {
            uVar17 = uVar14 >> 0x30 & 0xff;
          }
          else {
            iVar13 = (int)((ulong)pbStack_1d0 >> 0x20);
            if (SBORROW4(iVar13,(int)pbStack_1d0)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103570cd4);
              (*pcVar4)();
            }
            uVar17 = (ulong)(iVar13 - (int)pbStack_1d0);
          }
LAB_103570a28:
          if (uVar16 != uVar17) goto LAB_103570c68;
          if ((long)uVar16 < 1) goto LAB_103570ac4;
          if (uVar12 < 2) {
            if (uVar12 != 0) {
              lVar19 = (long)iVar20;
              pbStack_1e8 = (byte *)((lVar23 >> 0x20) - lVar19);
              if (lVar23 >> 0x20 < lVar19) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103570ce0);
                (*pcVar4)();
              }
              func_0x000107c5ec30();
              if (pbVar6 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar9 = (byte *)0x0;
                pbVar8 = (byte *)0x0;
              }
              else {
                pbStack_1f0 = pbVar6;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar19,(long)pbVar6)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103570cec);
                  (*pcVar4)();
                }
                pbVar1 = pbStack_1f0 + (lVar19 - (long)pbVar6);
                func_0x000107c5ec38();
                if ((long)pbStack_1e8 <= (long)pbVar6) {
                  pbVar6 = pbStack_1e8;
                }
                pbVar9 = (byte *)0x0;
                if (pbVar1 != (byte *)0x0) {
                  pbVar9 = pbVar1;
                }
                pbVar8 = (byte *)0x0;
                if (pbVar1 != (byte *)0x0) {
                  pbVar8 = pbVar6 + (long)pbVar1;
                }
              }
              goto LAB_103570c1c;
            }
            abStack_1c0[0] = (byte)lVar23;
            abStack_1c0[1] = (byte)((ulong)lVar23 >> 8);
            abStack_1c0[2] = (byte)((ulong)lVar23 >> 0x10);
            abStack_1c0[3] = (byte)((ulong)lVar23 >> 0x18);
            abStack_1c0[4] = (byte)((ulong)lVar23 >> 0x20);
            abStack_1c0[5] = (byte)((ulong)lVar23 >> 0x28);
            abStack_1c0[6] = (byte)((ulong)lVar23 >> 0x30);
            abStack_1c0[7] = (byte)((ulong)lVar23 >> 0x38);
            abStack_1c0[8] = (byte)param_2;
            abStack_1c0[9] = (byte)((ulong)param_2 >> 8);
            abStack_1c0[10] = (byte)((ulong)param_2 >> 0x10);
            abStack_1c0[0xb] = (byte)((ulong)param_2 >> 0x18);
            abStack_1c0[0xc] = (byte)((ulong)param_2 >> 0x20);
            abStack_1c0[0xd] = (byte)((ulong)param_2 >> 0x28);
            pbVar6 = abStack_1c0 + ((ulong)param_2 >> 0x30 & 0xff);
LAB_10357087c:
            func_0x000100e25bdc(&bStack_1c1,abStack_1c0,pbVar6,pbStack_1d0,uVar14);
            func_0x00010006c090(pbVar9,uVar14);
            func_0x000107c61574(pbVar21);
            func_0x00010006c090(lVar23);
            func_0x000107c61574(unaff_x22);
            pcVar4 = pcStack_1e0;
            unaff_x21 = pcVar7;
            unaff_x20 = pbVar9;
            bVar3 = bStack_1c1;
          }
          else {
            if (uVar12 != 2) {
              abStack_1c0[8] = 0;
              abStack_1c0[9] = 0;
              abStack_1c0[10] = 0;
              abStack_1c0[0xb] = 0;
              abStack_1c0[0xc] = 0;
              abStack_1c0[0xd] = 0;
              abStack_1c0[0] = 0;
              abStack_1c0[1] = 0;
              abStack_1c0[2] = 0;
              abStack_1c0[3] = 0;
              abStack_1c0[4] = 0;
              abStack_1c0[5] = 0;
              abStack_1c0[6] = 0;
              abStack_1c0[7] = 0;
              pbVar6 = abStack_1c0;
              goto LAB_10357087c;
            }
            pbStack_1e8 = *(byte **)(lVar23 + 0x10);
            pbStack_1f0 = *(byte **)(lVar23 + 0x18);
            func_0x000107c5ec30();
            lStack_1f8 = lVar23;
            if (pbVar6 == (byte *)0x0) {
              pbVar9 = (byte *)0x0;
            }
            else {
              pbVar8 = pbVar6;
              func_0x000107c5ec3c();
              if (SBORROW8((long)pbStack_1e8,(long)pbVar8)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103570ce8);
                (*pcVar4)();
              }
              pbVar9 = pbVar6 + ((long)pbStack_1e8 - (long)pbVar8);
              pbVar6 = pbVar8;
            }
            pbVar8 = pbStack_1f0 + -(long)pbStack_1e8;
            if (SBORROW8((long)pbStack_1f0,(long)pbStack_1e8)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103570ce4);
              (*pcVar4)();
            }
            func_0x000107c5ec38();
            lVar23 = lStack_1f8;
            if (pbVar9 == (byte *)0x0) {
              pbVar8 = (byte *)0x0;
            }
            else {
              if ((long)pbVar8 <= (long)pbVar6) {
                pbVar6 = pbVar8;
              }
              pbVar8 = pbVar6 + (long)pbVar9;
            }
LAB_103570c1c:
            unaff_x20 = pbStack_1d0;
            unaff_x21 = pcStack_1d8;
            func_0x000100e25bdc(abStack_1c0,pbVar9,pbVar8,pbStack_1d0,uVar14);
            func_0x00010006c090(unaff_x20,uVar14);
            func_0x000107c61574(pbVar21);
            func_0x00010006c090(lVar23);
            func_0x000107c61574(unaff_x22);
            pcVar4 = pcStack_1e0;
            bVar3 = abStack_1c0[0];
          }
          pcStack_1e0 = pcVar4;
          pcVar7 = unaff_x21;
          if ((bVar3 & 1) == 0) goto LAB_103570c90;
        }
        pcStack_1d8 = pcVar7;
        puVar25 = puVar25 + 3;
        pbVar24 = pbVar24 + 0x18;
        lVar22 = lVar22 + -1;
        param_3 = pcVar4;
      } while (lVar22 != 0);
    }
    pbVar6 = (byte *)0x1;
    unaff_x21 = pcVar4;
  }
  else {
LAB_103570c90:
    pbVar6 = (byte *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return pbVar6;
  }
  func_0x000107c60e78();
  pcStack_208 = FUN_103570cf0;
  lVar23 = *(long *)(pbVar6 + 0x10);
  if (lVar23 == *(long *)(param_2 + 0x10)) {
    if ((lVar23 == 0) || (pbVar6 == param_2)) {
      uVar18 = 1;
    }
    else {
      pbVar6 = pbVar6 + 0x20;
      pbVar21 = param_2 + 0x20;
      puStack_240 = puVar25;
      pbStack_238 = pbVar24;
      pbStack_230 = unaff_x22;
      pcStack_228 = unaff_x21;
      pbStack_220 = unaff_x20;
      lStack_218 = lVar22;
      pppuStack_210 = &ppuStack_150;
      do {
        lVar23 = lVar23 + -1;
        uStack_2d8 = *(undefined8 *)(pbVar6 + 0x28);
        uStack_2e0 = *(undefined8 *)(pbVar6 + 0x20);
        uStack_2c8 = *(undefined8 *)(pbVar6 + 0x38);
        uStack_2d0 = *(undefined8 *)(pbVar6 + 0x30);
        uStack_2b8 = *(undefined8 *)(pbVar6 + 0x48);
        uStack_2c0 = *(undefined8 *)(pbVar6 + 0x40);
        uStack_2a8 = *(undefined8 *)(pbVar6 + 0x58);
        uStack_2b0 = *(undefined8 *)(pbVar6 + 0x50);
        uStack_2f8 = *(undefined8 *)(pbVar6 + 8);
        uStack_300 = *(undefined8 *)pbVar6;
        uStack_2e8 = *(undefined8 *)(pbVar6 + 0x18);
        uStack_2f0 = *(undefined8 *)(pbVar6 + 0x10);
        uStack_278 = *(undefined8 *)(pbVar21 + 0x28);
        uStack_280 = *(undefined8 *)(pbVar21 + 0x20);
        uStack_268 = *(undefined8 *)(pbVar21 + 0x38);
        uStack_270 = *(undefined8 *)(pbVar21 + 0x30);
        uStack_258 = *(undefined8 *)(pbVar21 + 0x48);
        uStack_260 = *(undefined8 *)(pbVar21 + 0x40);
        uStack_248 = *(undefined8 *)(pbVar21 + 0x58);
        uStack_250 = *(undefined8 *)(pbVar21 + 0x50);
        uStack_298 = *(undefined8 *)(pbVar21 + 8);
        uStack_2a0 = *(undefined8 *)pbVar21;
        uStack_288 = *(undefined8 *)(pbVar21 + 0x18);
        uStack_290 = *(undefined8 *)(pbVar21 + 0x10);
        FUN_103578a6c(&uStack_300,auStack_360);
        FUN_103578a6c(&uStack_2a0,auStack_360);
        puVar10 = &uStack_300;
        FUN_1035712fc(puVar10,&uStack_2a0);
        uVar18 = (uint)puVar10;
        func_0x000103578aa0(&uStack_2a0);
        func_0x000103578aa0(&uStack_300);
        if (((ulong)puVar10 & 1) == 0) break;
        pbVar6 = pbVar6 + 0x60;
        pbVar21 = pbVar21 + 0x60;
      } while (lVar23 != 0);
    }
  }
  else {
    uVar18 = 0;
  }
  return (byte *)(ulong)(uVar18 & 1);
}



/* Entry: 103570cf0; end: 103570dd3;  */

uint FUN_103570cf0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_160 [96];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
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
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_d8 = puVar4[5];
        uStack_e0 = puVar4[4];
        uStack_c8 = puVar4[7];
        uStack_d0 = puVar4[6];
        uStack_b8 = puVar4[9];
        uStack_c0 = puVar4[8];
        uStack_a8 = puVar4[0xb];
        uStack_b0 = puVar4[10];
        uStack_f8 = puVar4[1];
        uStack_100 = *puVar4;
        uStack_e8 = puVar4[3];
        uStack_f0 = puVar4[2];
        uStack_78 = puVar5[5];
        uStack_80 = puVar5[4];
        uStack_68 = puVar5[7];
        uStack_70 = puVar5[6];
        uStack_58 = puVar5[9];
        uStack_60 = puVar5[8];
        uStack_48 = puVar5[0xb];
        uStack_50 = puVar5[10];
        uStack_98 = puVar5[1];
        uStack_a0 = *puVar5;
        uStack_88 = puVar5[3];
        uStack_90 = puVar5[2];
        FUN_103578a6c(&uStack_100,auStack_160);
        FUN_103578a6c(&uStack_a0,auStack_160);
        puVar1 = &uStack_100;
        FUN_1035712fc(puVar1,&uStack_a0);
        uVar3 = (uint)puVar1;
        func_0x000103578aa0(&uStack_a0);
        func_0x000103578aa0(&uStack_100);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar4 = puVar4 + 0xc;
        puVar5 = puVar5 + 0xc;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 103570dd4; end: 103570ddf;  */

void FUN_103570dd4(void)

{
  return;
}



/* Entry: 103570de0; end: 103570dff;  */

void FUN_103570de0(void)

{
  func_0x000107c61168(&PTR_PTR_112f78bf0);
  return;
}



/* Entry: 103570e00; end: 103570e53;  */

int FUN_103570e00(long param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20);
  iVar1 = 0;
  if ((uVar2 >> 0x1c & 3) != 0) {
    iVar1 = 0x10 - ((uVar2 >> 0x1c & 3) << 2 | uVar2 >> 0x1e);
  }
  return iVar1;
}



/* Entry: 103570e54; end: 103570ebb;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103570e54(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61434();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103570ebc; end: 103570f93;  */

/* WARNING: Possible PIC construction at 0x000103570f00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103570f04) */
/* WARNING: Removing unreachable block (ram,0x000101541464) */
/* WARNING: Removing unreachable block (ram,0x000101541474) */
/* WARNING: Removing unreachable block (ram,0x000101541470) */

void FUN_103570ebc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61434();
  func_0x000107c61434(param_2);
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c6157c(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_4 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103570f94; end: 1035711c3;  */

uint FUN_103570f94(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar7 = param_1[5];
  uVar2 = param_1[4];
  uVar4 = param_1[6];
  uVar8 = param_2[5];
  uVar6 = param_2[4];
  uVar5 = param_2[6];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar5;
  uStack_80 = uVar2;
  uStack_78 = uVar7;
  uStack_70 = uVar4;
  if ((uVar2 & 0xff) == 2) {
    if ((uVar6 & 0xff) != 2) {
LAB_10357107c:
      FUN_103571278(&uStack_80,auStack_b8,0x112db94f0,&UNK_10d96af00);
      FUN_103571278(&uStack_a0,auStack_b8,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar2,uVar7,uVar4);
      uVar2 = uVar6;
      uVar7 = uVar8;
      uVar4 = uVar5;
      goto LAB_103571198;
    }
    FUN_103571278(&uStack_80,auStack_b8,0x112db94f0,&UNK_10d96af00);
    FUN_103571278(&uStack_a0,auStack_b8,0x112db94f0,&UNK_10d96af00);
LAB_103571034:
    func_0x000101556278(uVar2,uVar7,uVar4);
    uVar2 = *param_1;
    FUN_10356fd98(uVar2,*param_2);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_1[1];
      func_0x00010357030c(uVar2,param_2[1]);
      if ((uVar2 & 1) != 0) {
        uVar2 = param_1[2];
        func_0x000100e25fcc(uVar2,param_1[3],param_2[2],param_2[3]);
        uVar1 = (uint)uVar2;
        goto LAB_1035711a0;
      }
    }
  }
  else {
    if ((uVar6 & 0xff) == 2) goto LAB_10357107c;
    if ((((uint)uVar6 ^ (uint)uVar2) & 1) == 0) {
      FUN_103571278(&uStack_80,auStack_b8,0x112db94f0,&UNK_10d96af00);
      FUN_103571278(&uStack_a0,auStack_b8,0x112db94f0,&UNK_10d96af00);
      uVar3 = uVar7;
      func_0x000100e25fcc(uVar7,uVar4,uVar8,uVar5);
      func_0x000101556278(uVar6,uVar8,uVar5);
      if ((uVar3 & 1) != 0) goto LAB_103571034;
    }
    else {
      FUN_103571278(&uStack_80,auStack_b8,0x112db94f0,&UNK_10d96af00);
      FUN_103571278(&uStack_a0,auStack_b8,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar6,uVar8,uVar5);
    }
LAB_103571198:
    func_0x000101556278(uVar2,uVar7,uVar4);
  }
  uVar1 = 0;
LAB_1035711a0:
  return uVar1 & 1;
}



/* Entry: 1035711c4; end: 1035711db;  */

void FUN_1035711c4(void)

{
  return;
}



/* Entry: 1035711dc; end: 1035711fb;  */

void FUN_1035711dc(void)

{
  func_0x000107c61168(&PTR_PTR_112f794b0);
  return;
}



/* Entry: 1035711fc; end: 103571253;  */

void FUN_1035711fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010006c00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_3);
    return;
  }
  return;
}



/* Entry: 103571254; end: 103571277;  */

int FUN_103571254(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x78);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103571278; end: 1035712bf;  */

undefined8 FUN_103571278(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035712c0; end: 1035712fb;  */

void FUN_1035712c0(undefined8 *param_1)

{
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
  param_1[0xe] = 0;
  param_1[0xf] = 1;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  return;
}



/* Entry: 1035712fc; end: 10357240b;  */

uint FUN_1035712fc(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong auStack_138 [3];
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar2 = *param_1;
  func_0x000101565c24(uVar2,*param_2);
  if ((uVar2 & 1) != 0) {
    uVar11 = param_1[4];
    uVar9 = param_1[3];
    uVar2 = param_1[5];
    uVar12 = param_2[4];
    uVar10 = param_2[3];
    uVar8 = param_2[5];
    uStack_a0 = uVar10;
    uStack_98 = uVar12;
    uStack_90 = uVar8;
    uStack_80 = uVar9;
    uStack_78 = uVar11;
    uStack_70 = uVar2;
    if (uVar2 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_1035714ec;
      if (uVar9 == uVar10) {
        FUN_103571278(&uStack_80,&uStack_c0,0x112db6f48,&UNK_10d969b40);
        FUN_103571278(&uStack_a0,&uStack_c0,0x112db6f48,&UNK_10d969b40);
        uVar10 = uVar11;
        func_0x000100e25fcc(uVar11,uVar2,uVar12,uVar8);
        func_0x000100d55e4c(uVar9,uVar12,uVar8);
        if ((uVar10 & 1) != 0) goto LAB_1035713b0;
      }
      else {
        FUN_103571278(&uStack_80,&uStack_c0,0x112db6f48,&UNK_10d969b40);
        puVar3 = &uStack_a0;
        puVar4 = &uStack_c0;
LAB_103571798:
        FUN_103571278(puVar3,puVar4,0x112db6f48,&UNK_10d969b40);
        func_0x000100d55e4c(uVar10,uVar12,uVar8);
      }
    }
    else {
      if (0xe < uVar8 >> 0x3c) {
        FUN_103571278(&uStack_80,&uStack_c0,0x112db6f48,&UNK_10d969b40);
        FUN_103571278(&uStack_a0,&uStack_c0,0x112db6f48,&UNK_10d969b40);
LAB_1035713b0:
        func_0x000100d55e4c(uVar9,uVar11,uVar2);
        uVar11 = param_1[7];
        uVar9 = param_1[6];
        uVar2 = param_1[8];
        uVar12 = param_2[7];
        uVar10 = param_2[6];
        uVar8 = param_2[8];
        uStack_e0 = uVar10;
        uStack_d8 = uVar12;
        uStack_d0 = uVar8;
        uStack_c0 = uVar9;
        uStack_b8 = uVar11;
        uStack_b0 = uVar2;
        if (uVar2 >> 0x3c < 0xf) {
          if (0xe < uVar8 >> 0x3c) goto LAB_103571598;
          if (uVar9 != uVar10) {
            FUN_103571278(&uStack_c0,&uStack_100,0x112db6f48,&UNK_10d969b40);
            puVar3 = &uStack_e0;
            puVar4 = &uStack_100;
            goto LAB_103571798;
          }
          FUN_103571278(&uStack_c0,&uStack_100,0x112db6f48,&UNK_10d969b40);
          FUN_103571278(&uStack_e0,&uStack_100,0x112db6f48,&UNK_10d969b40);
          uVar10 = uVar11;
          func_0x000100e25fcc(uVar11,uVar2,uVar12,uVar8);
          func_0x000100d55e4c(uVar9,uVar12,uVar8);
          if ((uVar10 & 1) == 0) goto LAB_1035717c0;
        }
        else {
          if (uVar8 >> 0x3c < 0xf) {
LAB_103571598:
            FUN_103571278(&uStack_c0,&uStack_100,0x112db6f48,&UNK_10d969b40);
            puVar3 = &uStack_e0;
            puVar4 = &uStack_100;
            uVar5 = uVar2;
            uVar6 = uVar11;
            uVar7 = uVar9;
            uVar2 = uVar8;
            uVar11 = uVar12;
            uVar9 = uVar10;
            goto LAB_1035716a0;
          }
          FUN_103571278(&uStack_c0,&uStack_100,0x112db6f48,&UNK_10d969b40);
          FUN_103571278(&uStack_e0,&uStack_100,0x112db6f48,&UNK_10d969b40);
        }
        func_0x000100d55e4c(uVar9,uVar11,uVar2);
        uVar11 = param_1[10];
        uVar9 = param_1[9];
        uVar2 = param_1[0xb];
        uVar12 = param_2[10];
        uVar10 = param_2[9];
        uVar8 = param_2[0xb];
        uStack_120 = uVar10;
        uStack_118 = uVar12;
        uStack_110 = uVar8;
        uStack_100 = uVar9;
        uStack_f8 = uVar11;
        uStack_f0 = uVar2;
        if (uVar2 >> 0x3c < 0xf) {
          if (0xe < uVar8 >> 0x3c) goto LAB_103571674;
          if (uVar9 != uVar10) {
            FUN_103571278(&uStack_100,auStack_138,0x112db6f48,&UNK_10d969b40);
            puVar3 = &uStack_120;
            puVar4 = auStack_138;
            goto LAB_103571798;
          }
          FUN_103571278(&uStack_100,auStack_138,0x112db6f48,&UNK_10d969b40);
          FUN_103571278(&uStack_120,auStack_138,0x112db6f48,&UNK_10d969b40);
          uVar10 = uVar11;
          func_0x000100e25fcc(uVar11,uVar2,uVar12,uVar8);
          func_0x000100d55e4c(uVar9,uVar12,uVar8);
          if ((uVar10 & 1) == 0) goto LAB_1035717c0;
        }
        else {
          if (uVar8 >> 0x3c < 0xf) {
LAB_103571674:
            FUN_103571278(&uStack_100,auStack_138,0x112db6f48,&UNK_10d969b40);
            puVar3 = &uStack_120;
            puVar4 = auStack_138;
            uVar5 = uVar2;
            uVar6 = uVar11;
            uVar7 = uVar9;
            uVar2 = uVar8;
            uVar11 = uVar12;
            uVar9 = uVar10;
            goto LAB_1035716a0;
          }
          FUN_103571278(&uStack_100,auStack_138,0x112db6f48,&UNK_10d969b40);
          FUN_103571278(&uStack_120,auStack_138,0x112db6f48,&UNK_10d969b40);
        }
        func_0x000100d55e4c(uVar9,uVar11,uVar2);
        uVar2 = param_1[1];
        func_0x000100e25fcc(uVar2,param_1[2],param_2[1],param_2[2]);
        uVar1 = (uint)uVar2;
        goto LAB_1035717c8;
      }
LAB_1035714ec:
      FUN_103571278(&uStack_80,&uStack_c0,0x112db6f48,&UNK_10d969b40);
      puVar3 = &uStack_a0;
      puVar4 = &uStack_c0;
      uVar5 = uVar2;
      uVar6 = uVar11;
      uVar7 = uVar9;
      uVar2 = uVar8;
      uVar11 = uVar12;
      uVar9 = uVar10;
LAB_1035716a0:
      FUN_103571278(puVar3,puVar4,0x112db6f48,&UNK_10d969b40);
      func_0x000100d55e4c(uVar7,uVar6,uVar5);
    }
LAB_1035717c0:
    func_0x000100d55e4c(uVar9,uVar11,uVar2);
  }
  uVar1 = 0;
LAB_1035717c8:
  return uVar1 & 1;
}



/* Entry: 10357240c; end: 10357248b;  */

void FUN_10357240c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f788c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbdb280;
  func_0x000107c61520(&DAT_10dbdb280,&UNK_110665a88);
  puRam0000000112f788c8 = puVar1;
  return;
}



/* Entry: 10357248c; end: 103572553;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10357248c(byte *param_1,ulong param_2,byte *param_3,byte *param_4,byte *param_5,
                    ulong param_6,long param_7,ulong param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  
  if ((param_6 & 0xff) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001035724b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)param_5[0x10dbdb1cd] * 4 + 0x1035724b8))();
    return param_1;
  }
  if ((param_1 != param_5) || (param_2 >> 0x20 != param_6 >> 0x20)) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)param_4 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_8 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_3;
    pbVar11 = param_4;
    if ((ulong)param_4 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_3 != (byte *)0x0) || (param_4 != (byte *)0xc000000000000000)) ||
          (param_8 >> 0x3e < 3)) || ((uVar17 = 0, param_7 != 0 || (param_8 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_4 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_3 >> 0x20);
        if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar17 = (ulong)(iVar16 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar18 == 0) {
        uVar19 = param_8 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar16 = (int)((ulong)param_7 >> 0x20);
      if (SBORROW4(iVar16,(int)param_7)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_7)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
        if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar17 = 0;
      if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
        if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar17 < 1) goto code_r0x000100e26128;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)param_3;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_3 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_3 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_3 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_3 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_3 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_3 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_3 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_4;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_4 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_4 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_4 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_4 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_4 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_4 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_3 >> 0x20) - (long)unaff_x25);
          if ((long)param_3 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_4;
          if (param_3 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_3 = (byte *)0x0;
          }
          else {
            pbVar11 = param_3;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_3 = param_3 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_3;
            if (param_3 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_3;
              goto code_r0x000100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar21 = *(long *)(param_3 + 0x10);
          unaff_x24 = *(byte **)(param_3 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_3;
          if (param_3 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_3 = param_3 + (lVar21 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_3;
          unaff_x25 = param_4;
          if (param_3 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_3;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)param_4 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_3,pbVar11,param_7
                            ,param_8);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_8;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar10 = *(byte **)pbVar8;
    param_3 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar23 = pbVar8[0x28];
    param_4 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_3;
    if (bVar23 < 3) {
      if (bVar23 == 0) {
        if (pbVar11[0x28] == 0) {
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          return (byte *)(ulong)((uint)pbVar10 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar23 == 1) {
        if (pbVar11[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar14 = *(byte **)(pbVar11 + 0x10);
        lVar21 = *(long *)pbVar11;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar21,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar10 = param_3;
        pbVar12 = param_4;
        if ((param_3 == pbVar13) && (param_4 == pbVar14)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar11[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        lVar21 = *(long *)(pbVar11 + 0x18);
        if ((pbVar10 == pbVar13) && (param_3 == pbVar14)) {
          if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar21 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar21);
          func_0x000107c61174();
          pbVar11 = pbVar20;
          func_0x000107c60118();
          func_0x000107c61170(pbVar20);
          func_0x000107c61170(lVar21);
          pbVar20 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar20 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar10,pbVar12,pbVar13,pbVar14,0);
      return pbVar10;
    }
    lVar22 = *(long *)(pbVar8 + 0x20);
    if (bVar23 < 5) {
      if (bVar23 != 3) {
        if (pbVar11[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        if (((pbVar10 == pbVar13) && (param_3 == pbVar14)) &&
           (pbVar10 = param_4, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_4 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar11[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar14 = *(byte **)(pbVar11 + 0x10);
      lVar21 = *(long *)(pbVar11 + 0x20);
      if (param_4 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_3;
        pbVar12 = param_4;
        if ((param_3 != pbVar13) || (param_4 != pbVar14)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar21 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar21 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar23 != 5) {
      if ((((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar22 == 0) && param_4 == (byte *)0x0) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar11 + 0x20);
        lVar21 = *(long *)(pbVar11 + 0x18);
        bVar23 = pbVar11[8] | (byte)lVar21;
        bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
        bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
        bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
        bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
        bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
        bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
        bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
        bVar31 = pbVar11[0x10] | (byte)lVar22;
        bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar39[1] = bVar24;
        auVar39[0] = bVar23;
        auVar39[2] = bVar25;
        auVar39[3] = bVar26;
        auVar39[4] = bVar27;
        auVar39[5] = bVar28;
        auVar39[6] = bVar29;
        auVar39[7] = bVar30;
        auVar39[8] = bVar31;
        auVar39[9] = bVar32;
        auVar39[10] = bVar33;
        auVar39[0xb] = bVar34;
        auVar39[0xc] = bVar35;
        auVar39[0xd] = bVar36;
        auVar39[0xe] = bVar37;
        auVar39[0xf] = bVar38;
        auVar3[1] = bVar24;
        auVar3[0] = bVar23;
        auVar3[2] = bVar25;
        auVar3[3] = bVar26;
        auVar3[4] = bVar27;
        auVar3[5] = bVar28;
        auVar3[6] = bVar29;
        auVar3[7] = bVar30;
        auVar3[8] = bVar31;
        auVar3[9] = bVar32;
        auVar3[10] = bVar33;
        auVar3[0xb] = bVar34;
        auVar3[0xc] = bVar35;
        auVar3[0xd] = bVar36;
        auVar3[0xe] = bVar37;
        auVar3[0xf] = bVar38;
        auVar39 = NEON_ext(auVar39,auVar3,8,1);
        if (CONCAT17(bVar30 | auVar39[7],
                     CONCAT16(bVar29 | auVar39[6],
                              CONCAT15(bVar28 | auVar39[5],
                                       CONCAT14(bVar27 | auVar39[4],
                                                CONCAT13(bVar26 | auVar39[3],
                                                         CONCAT12(bVar25 | auVar39[2],
                                                                  CONCAT11(bVar24 | auVar39[1],
                                                                           bVar23 | auVar39[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && param_4 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar11 + 0x20);
      lVar21 = *(long *)(pbVar11 + 0x18);
      bVar23 = pbVar11[8] | (byte)lVar21;
      bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
      bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
      bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
      bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
      bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
      bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
      bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
      bVar31 = pbVar11[0x10] | (byte)lVar22;
      bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar24;
      auVar1[0] = bVar23;
      auVar1[2] = bVar25;
      auVar1[3] = bVar26;
      auVar1[4] = bVar27;
      auVar1[5] = bVar28;
      auVar1[6] = bVar29;
      auVar1[7] = bVar30;
      auVar1[8] = bVar31;
      auVar1[9] = bVar32;
      auVar1[10] = bVar33;
      auVar1[0xb] = bVar34;
      auVar1[0xc] = bVar35;
      auVar1[0xd] = bVar36;
      auVar1[0xe] = bVar37;
      auVar1[0xf] = bVar38;
      auVar2[1] = bVar24;
      auVar2[0] = bVar23;
      auVar2[2] = bVar25;
      auVar2[3] = bVar26;
      auVar2[4] = bVar27;
      auVar2[5] = bVar28;
      auVar2[6] = bVar29;
      auVar2[7] = bVar30;
      auVar2[8] = bVar31;
      auVar2[9] = bVar32;
      auVar2[10] = bVar33;
      auVar2[0xb] = bVar34;
      auVar2[0xc] = bVar35;
      auVar2[0xd] = bVar36;
      auVar2[0xe] = bVar37;
      auVar2[0xf] = bVar38;
      auVar39 = NEON_ext(auVar1,auVar2,8,1);
      lVar21 = CONCAT17(bVar30 | auVar39[7],
                        CONCAT16(bVar29 | auVar39[6],
                                 CONCAT15(bVar28 | auVar39[5],
                                          CONCAT14(bVar27 | auVar39[4],
                                                   CONCAT13(bVar26 | auVar39[3],
                                                            CONCAT12(bVar25 | auVar39[2],
                                                                     CONCAT11(bVar24 | auVar39[1],
                                                                              bVar23 | auVar39[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_7 = *(long *)(pbVar11 + 8);
    param_8 = *(ulong *)(pbVar11 + 0x10);
    lVar21 = *(long *)pbVar11;
    uVar9 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar10,lVar21,uVar9);
    if (((ulong)pbVar10 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103572554; end: 10357325f;  */

ulong FUN_103572554(ulong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uStack_980;
  ulong uStack_978;
  ulong uStack_970;
  ulong uStack_968;
  ulong uStack_960;
  ulong uStack_958;
  ulong uStack_950;
  ulong uStack_948;
  ulong uStack_940;
  ulong uStack_938;
  ulong uStack_8c0;
  ulong uStack_8b8;
  ulong uStack_8b0;
  ulong uStack_8a8;
  ulong uStack_8a0;
  ulong uStack_898;
  ulong uStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  ulong uStack_860;
  ulong uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  ulong uStack_840;
  ulong uStack_838;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_7d0;
  ulong uStack_7c8;
  ulong uStack_7c0;
  ulong uStack_7b8;
  ulong uStack_7b0;
  ulong uStack_7a8;
  ulong uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong auStack_6a0 [4];
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
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
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uStack_168 = param_1[0x18];
  uStack_170 = param_1[0x17];
  uStack_158 = param_1[0x1a];
  uStack_160 = param_1[0x19];
  uStack_148 = param_1[0x1c];
  uStack_150 = param_1[0x1b];
  uStack_138 = param_1[0x1e];
  uStack_140 = param_1[0x1d];
  uStack_1a8 = param_1[0x10];
  uStack_1b0 = param_1[0xf];
  uStack_198 = param_1[0x12];
  uStack_1a0 = param_1[0x11];
  uStack_188 = param_1[0x14];
  uStack_190 = param_1[0x13];
  uStack_178 = param_1[0x16];
  uStack_180 = param_1[0x15];
  uStack_1e8 = param_1[8];
  uStack_1f0 = param_1[7];
  uStack_1d8 = param_1[10];
  uStack_1e0 = param_1[9];
  uStack_1c8 = param_1[0xc];
  uStack_1d0 = param_1[0xb];
  uStack_1b8 = param_1[0xe];
  uStack_1c0 = param_1[0xd];
  uStack_228 = param_2[0x18];
  uStack_230 = param_2[0x17];
  uStack_218 = param_2[0x1a];
  uStack_220 = param_2[0x19];
  uStack_208 = param_2[0x1c];
  uStack_210 = param_2[0x1b];
  uStack_1f8 = param_2[0x1e];
  uStack_200 = param_2[0x1d];
  uStack_268 = param_2[0x10];
  uStack_270 = param_2[0xf];
  uStack_258 = param_2[0x12];
  uStack_260 = param_2[0x11];
  uStack_248 = param_2[0x14];
  uStack_250 = param_2[0x13];
  uStack_238 = param_2[0x16];
  uStack_240 = param_2[0x15];
  uStack_2a8 = param_2[8];
  uStack_2b0 = param_2[7];
  uStack_298 = param_2[10];
  uStack_2a0 = param_2[9];
  uStack_288 = param_2[0xc];
  uStack_290 = param_2[0xb];
  uStack_278 = param_2[0xe];
  uStack_280 = param_2[0xd];
  uStack_478 = param_1[0x18];
  uStack_480 = param_1[0x17];
  uStack_468 = param_1[0x1a];
  uStack_470 = param_1[0x19];
  uStack_458 = param_1[0x1c];
  uStack_460 = param_1[0x1b];
  uStack_448 = param_1[0x1e];
  uStack_450 = param_1[0x1d];
  uStack_4b8 = param_1[0x10];
  uStack_4c0 = param_1[0xf];
  uStack_4a8 = param_1[0x12];
  uStack_4b0 = param_1[0x11];
  uStack_498 = param_1[0x14];
  uStack_4a0 = param_1[0x13];
  uStack_488 = param_1[0x16];
  uStack_490 = param_1[0x15];
  uStack_4f8 = param_1[8];
  uStack_500 = param_1[7];
  uStack_4e8 = param_1[10];
  uStack_4f0 = param_1[9];
  uStack_4d8 = param_1[0xc];
  uStack_4e0 = param_1[0xb];
  uStack_4c8 = param_1[0xe];
  uStack_4d0 = param_1[0xd];
  uStack_3b8 = param_2[0x18];
  uStack_3c0 = param_2[0x17];
  uStack_3a8 = param_2[0x1a];
  uStack_3b0 = param_2[0x19];
  uStack_398 = param_2[0x1c];
  uStack_3a0 = param_2[0x1b];
  uStack_388 = param_2[0x1e];
  uStack_390 = param_2[0x1d];
  uStack_3f8 = param_2[0x10];
  uStack_400 = param_2[0xf];
  uStack_3e8 = param_2[0x12];
  uStack_3f0 = param_2[0x11];
  uStack_3d8 = param_2[0x14];
  uStack_3e0 = param_2[0x13];
  uStack_3c8 = param_2[0x16];
  uStack_3d0 = param_2[0x15];
  uStack_438 = param_2[8];
  uStack_440 = param_2[7];
  uStack_428 = param_2[10];
  uStack_430 = param_2[9];
  uStack_418 = param_2[0xc];
  uStack_420 = param_2[0xb];
  uStack_408 = param_2[0xe];
  uStack_410 = param_2[0xd];
  iVar1 = (int)&uStack_500;
  FUN_10355c440();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_440;
    FUN_10355c440();
    if (iVar1 != 1) goto LAB_10357280c;
    uStack_5f8 = uStack_478;
    uStack_600 = uStack_480;
    uStack_5e8 = uStack_468;
    uStack_5f0 = uStack_470;
    uStack_5d8 = uStack_458;
    uStack_5e0 = uStack_460;
    uStack_5c8 = uStack_448;
    uStack_5d0 = uStack_450;
    uStack_638 = uStack_4b8;
    uStack_640 = uStack_4c0;
    uStack_628 = uStack_4a8;
    uStack_630 = uStack_4b0;
    uStack_618 = uStack_498;
    uStack_620 = uStack_4a0;
    uStack_608 = uStack_488;
    uStack_610 = uStack_490;
    uStack_678 = uStack_4f8;
    uStack_680 = uStack_500;
    uStack_668 = uStack_4e8;
    uStack_670 = uStack_4f0;
    uStack_658 = uStack_4d8;
    uStack_660 = uStack_4e0;
    uStack_648 = uStack_4c8;
    uStack_650 = uStack_4d0;
    FUN_103571278(&uStack_1f0,&uStack_130,0x112f730b0,&UNK_10dbce2c0);
    FUN_103571278(&uStack_2b0,&uStack_130,0x112f730b0,&UNK_10dbce2c0);
    FUN_1035789ec(&uStack_680,0x112f730b0,&UNK_10dbce2c0);
LAB_103572984:
    uVar13 = param_1[0x20];
    uVar5 = param_1[0x1f];
    uVar10 = param_1[0x22];
    uVar9 = param_1[0x21];
    uVar14 = param_2[0x20];
    uVar11 = param_2[0x1f];
    uVar12 = param_2[0x22];
    uVar15 = param_2[0x21];
    uStack_2f0 = uVar11;
    uStack_2e8 = uVar14;
    uStack_2e0 = uVar15;
    uStack_2d8 = uVar12;
    uStack_2d0 = uVar5;
    uStack_2c8 = uVar13;
    uStack_2c0 = uVar9;
    uStack_2b8 = uVar10;
    if (uVar13 != 0) {
      if (uVar14 != 0) {
        if (((uVar5 == uVar11) && (uVar13 == uVar14)) ||
           (uVar4 = uVar5, func_0x000107c605b8(uVar5,uVar13,uVar11,uVar14,0), (uVar4 & 1) != 0)) {
          FUN_103571278(&uStack_2d0,&uStack_500,0x112db6f40,&UNK_10d9681d0);
          FUN_103571278(&uStack_2f0,&uStack_500,0x112db6f40,&UNK_10d9681d0);
          uVar4 = uVar9;
          func_0x000100e25fcc(uVar9,uVar10,uVar15,uVar12);
          func_0x000101597ae4(uVar11,uVar14,uVar15,uVar12);
          if ((uVar4 & 1) != 0) goto LAB_103572b5c;
        }
        else {
          FUN_103571278(&uStack_2d0,&uStack_500,0x112db6f40,&UNK_10d9681d0);
          puVar3 = &uStack_2f0;
LAB_103572da4:
          FUN_103571278(puVar3,&uStack_500,0x112db6f40,&UNK_10d9681d0);
          func_0x000101597ae4(uVar11,uVar14,uVar15,uVar12);
        }
LAB_103572dd8:
        func_0x000101597ae4(uVar5,uVar13,uVar9,uVar10);
        goto LAB_103572af8;
      }
LAB_103572a88:
      uStack_500 = uVar5;
      uStack_4f8 = uVar13;
      uStack_4f0 = uVar9;
      uStack_4e8 = uVar10;
      uStack_4e0 = uVar11;
      uStack_4d8 = uVar14;
      uStack_4d0 = uVar15;
      uStack_4c8 = uVar12;
      FUN_103571278(&uStack_2d0,&uStack_800,0x112db6f40,&UNK_10d9681d0);
      puVar3 = &uStack_2f0;
      puVar7 = &uStack_800;
LAB_103572ad4:
      FUN_103571278(puVar3,puVar7,0x112db6f40,&UNK_10d9681d0);
      uVar6 = 0x112db7ec0;
      puVar8 = &UNK_10d966840;
      puVar3 = &uStack_500;
      goto LAB_103572af4;
    }
    if (uVar14 != 0) goto LAB_103572a88;
    FUN_103571278(&uStack_2d0,&uStack_500,0x112db6f40,&UNK_10d9681d0);
    FUN_103571278(&uStack_2f0,&uStack_500,0x112db6f40,&UNK_10d9681d0);
LAB_103572b5c:
    func_0x000101597ae4(uVar5,uVar13,uVar9,uVar10);
    uVar13 = param_1[0x24];
    uVar5 = param_1[0x23];
    uVar9 = param_1[0x25];
    uVar15 = param_2[0x24];
    uVar12 = param_2[0x23];
    uVar10 = param_2[0x25];
    uStack_330 = uVar12;
    uStack_328 = uVar15;
    uStack_320 = uVar10;
    uStack_310 = uVar5;
    uStack_308 = uVar13;
    uStack_300 = uVar9;
    if (uVar9 >> 0x3c < 0xf) {
      if (uVar10 >> 0x3c < 0xf) {
        if (uVar5 == uVar12) {
          FUN_103571278(&uStack_310,&uStack_500,0x112db6f48,&UNK_10d969b40);
          FUN_103571278(&uStack_330,&uStack_500,0x112db6f48,&UNK_10d969b40);
          uVar12 = uVar13;
          func_0x000100e25fcc(uVar13,uVar9,uVar15,uVar10);
          func_0x000100d55e4c(uVar5,uVar15,uVar10);
          if ((uVar12 & 1) != 0) goto LAB_103572bf8;
        }
        else {
          FUN_103571278(&uStack_310,&uStack_500,0x112db6f48,&UNK_10d969b40);
          FUN_103571278(&uStack_330,&uStack_500,0x112db6f48,&UNK_10d969b40);
          func_0x000100d55e4c(uVar12,uVar15,uVar10);
        }
      }
      else {
LAB_103572d24:
        FUN_103571278(&uStack_310,&uStack_500,0x112db6f48,&UNK_10d969b40);
        FUN_103571278(&uStack_330,&uStack_500,0x112db6f48,&UNK_10d969b40);
        func_0x000100d55e4c(uVar5,uVar13,uVar9);
        uVar5 = uVar12;
        uVar13 = uVar15;
        uVar9 = uVar10;
      }
      func_0x000100d55e4c(uVar5,uVar13,uVar9);
      goto LAB_103572af8;
    }
    if (uVar10 >> 0x3c < 0xf) goto LAB_103572d24;
    FUN_103571278(&uStack_310,&uStack_500,0x112db6f48,&UNK_10d969b40);
    FUN_103571278(&uStack_330,&uStack_500,0x112db6f48,&UNK_10d969b40);
LAB_103572bf8:
    func_0x000100d55e4c(uVar5,uVar13,uVar9);
    uVar5 = *param_1;
    func_0x000103570808(uVar5,*param_2,FUN_103567330);
    if ((uVar5 & 1) != 0) {
      uStack_4e8 = param_1[0x29];
      uStack_4f0 = param_1[0x28];
      uStack_958 = param_1[0x2b];
      uStack_960 = param_1[0x2a];
      uStack_4d8 = param_1[0x2b];
      uStack_4e0 = param_1[0x2a];
      uStack_948 = param_1[0x2d];
      uStack_950 = param_1[0x2c];
      uStack_4c8 = param_1[0x2d];
      uStack_4d0 = param_1[0x2c];
      uStack_938 = param_1[0x2f];
      uStack_940 = param_1[0x2e];
      uStack_978 = param_1[0x27];
      uStack_980 = param_1[0x26];
      uStack_968 = param_1[0x29];
      uStack_970 = param_1[0x28];
      uStack_4f8 = param_1[0x27];
      uStack_500 = param_1[0x26];
      uStack_498 = param_2[0x29];
      uStack_4a0 = param_2[0x28];
      uStack_358 = param_2[0x2b];
      uStack_360 = param_2[0x2a];
      uStack_488 = param_2[0x2b];
      uStack_490 = param_2[0x2a];
      uStack_348 = param_2[0x2d];
      uStack_350 = param_2[0x2c];
      uStack_478 = param_2[0x2d];
      uStack_480 = param_2[0x2c];
      uStack_338 = param_2[0x2f];
      uStack_340 = param_2[0x2e];
      uStack_378 = param_2[0x27];
      uStack_380 = param_2[0x26];
      uStack_368 = param_2[0x29];
      uStack_370 = param_2[0x28];
      uStack_4a8 = param_2[0x27];
      uStack_4b0 = param_2[0x26];
      uStack_4b8 = param_1[0x2f];
      uStack_4c0 = param_1[0x2e];
      uStack_468 = param_2[0x2f];
      uStack_470 = param_2[0x2e];
      if (uStack_4f8 >> 0x3c < 0xf) {
        if (0xe < uStack_4a8 >> 0x3c) goto LAB_103572eb4;
        uStack_7d8 = param_2[0x2b];
        uStack_7e0 = param_2[0x2a];
        uStack_7c8 = param_2[0x2d];
        uStack_7d0 = param_2[0x2c];
        uStack_7b8 = param_2[0x2f];
        uStack_7c0 = param_2[0x2e];
        uStack_7f8 = param_2[0x27];
        uStack_800 = param_2[0x26];
        uStack_7e8 = param_2[0x29];
        uStack_7f0 = param_2[0x28];
        uStack_8b8 = param_1[0x27];
        uStack_8c0 = param_1[0x26];
        uStack_8a8 = param_1[0x29];
        uStack_8b0 = param_1[0x28];
        uStack_898 = param_1[0x2b];
        uStack_8a0 = param_1[0x2a];
        uStack_888 = param_1[0x2d];
        uStack_890 = param_1[0x2c];
        uStack_878 = param_1[0x2f];
        uStack_880 = param_1[0x2e];
        uStack_6f0 = uStack_800;
        uStack_6e8 = uStack_7f8;
        uStack_6e0 = uStack_7f0;
        uStack_6d8 = uStack_7e8;
        uStack_6d0 = uStack_7e0;
        uStack_6c8 = uStack_7d8;
        uStack_6c0 = uStack_7d0;
        uStack_6b8 = uStack_7c8;
        uStack_6b0 = uStack_7c0;
        uStack_6a8 = uStack_7b8;
        FUN_103571278(&uStack_980,&uStack_740,0x112f730a8,&UNK_10dbd1870);
        FUN_103571278(&uStack_380,&uStack_740,0x112f730a8,&UNK_10dbd1870);
        puVar3 = &uStack_8c0;
        FUN_1035c4a34(puVar3,&uStack_800);
        FUN_1035789ec(&uStack_6f0,0x112f730a8,&UNK_10dbd1870);
        FUN_1035789ec(&uStack_500,0x112f730a8,&UNK_10dbd1870);
        if (((ulong)puVar3 & 1) != 0) goto LAB_103572fe8;
        goto LAB_103572af8;
      }
      if (0xe < uStack_4a8 >> 0x3c) {
        uStack_7d8 = param_1[0x2b];
        uStack_7e0 = param_1[0x2a];
        uStack_7c8 = param_1[0x2d];
        uStack_7d0 = param_1[0x2c];
        uStack_7b8 = param_1[0x2f];
        uStack_7c0 = param_1[0x2e];
        uStack_7f8 = param_1[0x27];
        uStack_800 = param_1[0x26];
        uStack_7e8 = param_1[0x29];
        uStack_7f0 = param_1[0x28];
        FUN_103571278(&uStack_980,&uStack_8c0,0x112f730a8,&UNK_10dbd1870);
        FUN_103571278(&uStack_380,&uStack_8c0,0x112f730a8,&UNK_10dbd1870);
        FUN_1035789ec(&uStack_800,0x112f730a8,&UNK_10dbd1870);
LAB_103572fe8:
        uVar5 = param_1[1];
        func_0x00010355c524(uVar5,(char)param_1[2],param_2[1],*(undefined1 *)(param_2 + 2));
        if ((uVar5 & 1) == 0) goto LAB_103572af8;
        if (*(char *)(param_2 + 4) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103573028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10dbdb1d7)[param_2[3]] * 4 + 0x10357302c))();
          return uVar5;
        }
        if (param_1[3] != param_2[3]) goto LAB_103572af8;
        uVar13 = param_1[0x31];
        uVar5 = param_1[0x30];
        uVar10 = param_1[0x33];
        uVar9 = param_1[0x32];
        uVar14 = param_2[0x31];
        uVar11 = param_2[0x30];
        uVar12 = param_2[0x33];
        uVar15 = param_2[0x32];
        uStack_740 = uVar11;
        uStack_738 = uVar14;
        uStack_730 = uVar15;
        uStack_728 = uVar12;
        uStack_6f0 = uVar5;
        uStack_6e8 = uVar13;
        uStack_6e0 = uVar9;
        uStack_6d8 = uVar10;
        if (uVar13 == 0) {
          if (uVar14 == 0) {
            FUN_103571278(&uStack_6f0,&uStack_500,0x112db6f40,&UNK_10d9681d0);
            FUN_103571278(&uStack_740,&uStack_500,0x112db6f40,&UNK_10d9681d0);
            goto LAB_1035731a4;
          }
        }
        else if (uVar14 != 0) {
          if (((uVar5 != uVar11) || (uVar13 != uVar14)) &&
             (uVar4 = uVar5, func_0x000107c605b8(uVar5,uVar13,uVar11,uVar14,0), (uVar4 & 1) == 0)) {
            FUN_103571278(&uStack_6f0,&uStack_500,0x112db6f40,&UNK_10d9681d0);
            puVar3 = &uStack_740;
            goto LAB_103572da4;
          }
          FUN_103571278(&uStack_6f0,&uStack_500,0x112db6f40,&UNK_10d9681d0);
          FUN_103571278(&uStack_740,&uStack_500,0x112db6f40,&UNK_10d9681d0);
          uVar4 = uVar9;
          func_0x000100e25fcc(uVar9,uVar10,uVar15,uVar12);
          func_0x000101597ae4(uVar11,uVar14,uVar15,uVar12);
          if ((uVar4 & 1) == 0) goto LAB_103572dd8;
LAB_1035731a4:
          func_0x000101597ae4(uVar5,uVar13,uVar9,uVar10);
          uVar5 = param_1[5];
          func_0x000100e25fcc(uVar5,param_1[6],param_2[5],param_2[6]);
          uVar2 = (uint)uVar5;
          goto LAB_103572afc;
        }
        uStack_500 = uVar5;
        uStack_4f8 = uVar13;
        uStack_4f0 = uVar9;
        uStack_4e8 = uVar10;
        uStack_4e0 = uVar11;
        uStack_4d8 = uVar14;
        uStack_4d0 = uVar15;
        uStack_4c8 = uVar12;
        FUN_103571278(&uStack_6f0,auStack_6a0,0x112db6f40,&UNK_10d9681d0);
        puVar3 = &uStack_740;
        puVar7 = auStack_6a0;
        goto LAB_103572ad4;
      }
LAB_103572eb4:
      uStack_800 = uStack_500;
      uStack_7f8 = uStack_4f8;
      uStack_7f0 = uStack_4f0;
      uStack_7e8 = uStack_4e8;
      uStack_7e0 = uStack_4e0;
      uStack_7d8 = uStack_4d8;
      uStack_7d0 = uStack_4d0;
      uStack_7c8 = uStack_4c8;
      uStack_7c0 = uStack_4c0;
      uStack_7b8 = uStack_4b8;
      uStack_7b0 = uStack_4b0;
      uStack_7a8 = uStack_4a8;
      uStack_7a0 = uStack_4a0;
      uStack_798 = uStack_498;
      uStack_790 = uStack_490;
      uStack_788 = uStack_488;
      uStack_780 = uStack_480;
      uStack_778 = uStack_478;
      uStack_770 = uStack_470;
      uStack_768 = uStack_468;
      FUN_103571278(&uStack_980,&uStack_8c0,0x112f730a8,&UNK_10dbd1870);
      FUN_103571278(&uStack_380,&uStack_8c0,0x112f730a8,&UNK_10dbd1870);
      uVar6 = 0x112f74f28;
      puVar8 = &UNK_10dbdb200;
      puVar3 = &uStack_800;
      goto LAB_103572af4;
    }
  }
  else {
    uStack_778 = uStack_478;
    uStack_780 = uStack_480;
    uStack_768 = uStack_468;
    uStack_770 = uStack_470;
    uStack_758 = uStack_458;
    uStack_760 = uStack_460;
    uStack_748 = uStack_448;
    uStack_750 = uStack_450;
    uStack_7b8 = uStack_4b8;
    uStack_7c0 = uStack_4c0;
    uStack_7a8 = uStack_4a8;
    uStack_7b0 = uStack_4b0;
    uStack_798 = uStack_498;
    uStack_7a0 = uStack_4a0;
    uStack_788 = uStack_488;
    uStack_790 = uStack_490;
    uStack_7f8 = uStack_4f8;
    uStack_800 = uStack_500;
    uStack_7e8 = uStack_4e8;
    uStack_7f0 = uStack_4f0;
    uStack_7d8 = uStack_4d8;
    uStack_7e0 = uStack_4e0;
    uStack_7c8 = uStack_4c8;
    uStack_7d0 = uStack_4d0;
    iVar1 = (int)&uStack_440;
    FUN_10355c440();
    if (iVar1 != 1) {
      uStack_838 = uStack_3b8;
      uStack_840 = uStack_3c0;
      uStack_828 = uStack_3a8;
      uStack_830 = uStack_3b0;
      uStack_818 = uStack_398;
      uStack_820 = uStack_3a0;
      uStack_808 = uStack_388;
      uStack_810 = uStack_390;
      uStack_878 = uStack_3f8;
      uStack_880 = uStack_400;
      uStack_868 = uStack_3e8;
      uStack_870 = uStack_3f0;
      uStack_858 = uStack_3d8;
      uStack_860 = uStack_3e0;
      uStack_848 = uStack_3c8;
      uStack_850 = uStack_3d0;
      uStack_8b8 = uStack_438;
      uStack_8c0 = uStack_440;
      uStack_8a8 = uStack_428;
      uStack_8b0 = uStack_430;
      uStack_898 = uStack_418;
      uStack_8a0 = uStack_420;
      uStack_888 = uStack_408;
      uStack_890 = uStack_410;
      uStack_5f8 = uStack_3b8;
      uStack_600 = uStack_3c0;
      uStack_5e8 = uStack_3a8;
      uStack_5f0 = uStack_3b0;
      uStack_5d8 = uStack_398;
      uStack_5e0 = uStack_3a0;
      uStack_5c8 = uStack_388;
      uStack_5d0 = uStack_390;
      uStack_638 = uStack_3f8;
      uStack_640 = uStack_400;
      uStack_628 = uStack_3e8;
      uStack_630 = uStack_3f0;
      uStack_618 = uStack_3d8;
      uStack_620 = uStack_3e0;
      uStack_608 = uStack_3c8;
      uStack_610 = uStack_3d0;
      uStack_678 = uStack_438;
      uStack_680 = uStack_440;
      uStack_668 = uStack_428;
      uStack_670 = uStack_430;
      uStack_658 = uStack_418;
      uStack_660 = uStack_420;
      uStack_648 = uStack_408;
      uStack_650 = uStack_410;
      uStack_a8 = uStack_778;
      uStack_b0 = uStack_780;
      uStack_98 = uStack_768;
      uStack_a0 = uStack_770;
      uStack_88 = uStack_758;
      uStack_90 = uStack_760;
      uStack_78 = uStack_748;
      uStack_80 = uStack_750;
      uStack_e8 = uStack_7b8;
      uStack_f0 = uStack_7c0;
      uStack_d8 = uStack_7a8;
      uStack_e0 = uStack_7b0;
      uStack_c8 = uStack_798;
      uStack_d0 = uStack_7a0;
      uStack_b8 = uStack_788;
      uStack_c0 = uStack_790;
      uStack_128 = uStack_7f8;
      uStack_130 = uStack_800;
      uStack_118 = uStack_7e8;
      uStack_120 = uStack_7f0;
      uStack_108 = uStack_7d8;
      uStack_110 = uStack_7e0;
      uStack_f8 = uStack_7c8;
      uStack_100 = uStack_7d0;
      FUN_103571278(&uStack_1f0,&uStack_980,0x112f730b0,&UNK_10dbce2c0);
      FUN_103571278(&uStack_2b0,&uStack_980,0x112f730b0,&UNK_10dbce2c0);
      puVar3 = &uStack_130;
      FUN_1035b77e8(puVar3,&uStack_680);
      FUN_1035789ec(&uStack_8c0,0x112f730b0,&UNK_10dbce2c0);
      FUN_1035789ec(&uStack_500,0x112f730b0,&UNK_10dbce2c0);
      if (((ulong)puVar3 & 1) != 0) goto LAB_103572984;
      goto LAB_103572af8;
    }
LAB_10357280c:
    func_0x000107c610b4(&uStack_680,&uStack_500,0x180);
    FUN_103571278(&uStack_1f0,&uStack_130,0x112f730b0,&UNK_10dbce2c0);
    FUN_103571278(&uStack_2b0,&uStack_130,0x112f730b0,&UNK_10dbce2c0);
    uVar6 = 0x112f78258;
    puVar8 = &UNK_10dbdb1f0;
    puVar3 = &uStack_680;
LAB_103572af4:
    FUN_1035789ec(puVar3,uVar6,puVar8);
  }
LAB_103572af8:
  uVar2 = 0;
LAB_103572afc:
  return (ulong)(uVar2 & 1);
}



/* Entry: 103573260; end: 10357345f;  */

void FUN_103573260(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f788d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdbaf0;
  func_0x000107c61520(&UNK_10dbdbaf0,&UNK_1106659d0);
  puRam0000000112f788d8 = puVar1;
  return;
}



/* Entry: 103573460; end: 10357370b;  */

uint FUN_103573460(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 auStack_310 [80];
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_c8 = param_1[6];
  uStack_d0 = param_1[5];
  uStack_b8 = param_1[8];
  uStack_c0 = param_1[7];
  uStack_a8 = param_1[10];
  uStack_b0 = param_1[9];
  uStack_98 = param_1[0xc];
  uStack_a0 = param_1[0xb];
  uStack_d8 = param_1[4];
  uStack_e0 = param_1[3];
  uStack_118 = param_2[6];
  uStack_120 = param_2[5];
  uStack_108 = param_2[8];
  uStack_110 = param_2[7];
  uStack_f8 = param_2[10];
  uStack_100 = param_2[9];
  uStack_e8 = param_2[0xc];
  uStack_f0 = param_2[0xb];
  uStack_128 = param_2[4];
  uStack_130 = param_2[3];
  uStack_1b8 = param_1[6];
  uStack_1c0 = param_1[5];
  uStack_1a8 = param_1[8];
  uStack_1b0 = param_1[7];
  uStack_198 = param_1[10];
  uStack_1a0 = param_1[9];
  uStack_188 = param_1[0xc];
  uStack_190 = param_1[0xb];
  uStack_1c8 = param_1[4];
  uStack_1d0 = param_1[3];
  uStack_208 = param_2[6];
  uStack_210 = param_2[5];
  uStack_1f8 = param_2[8];
  uStack_200 = param_2[7];
  uStack_1e8 = param_2[10];
  uStack_1f0 = param_2[9];
  uStack_218 = param_2[4];
  uStack_220 = param_2[3];
  uStack_1d8 = param_2[0xc];
  uStack_1e0 = param_2[0xb];
  uStack_180 = uStack_220;
  uStack_178 = uStack_218;
  uStack_170 = uStack_210;
  uStack_168 = uStack_208;
  uStack_160 = uStack_200;
  uStack_158 = uStack_1f8;
  uStack_150 = uStack_1f0;
  uStack_148 = uStack_1e8;
  uStack_140 = uStack_1e0;
  uStack_138 = uStack_1d8;
  if (uStack_1c8 >> 0x3c < 0xf) {
    if (0xe < uStack_218 >> 0x3c) goto LAB_103573590;
    uStack_2a8 = param_2[6];
    uStack_2b0 = param_2[5];
    uStack_298 = param_2[8];
    uStack_2a0 = param_2[7];
    uStack_288 = param_2[10];
    uStack_290 = param_2[9];
    uStack_278 = param_2[0xc];
    uStack_280 = param_2[0xb];
    uStack_2b8 = param_2[4];
    uStack_2c0 = param_2[3];
    uStack_88 = param_1[4];
    uStack_90 = param_1[3];
    uStack_78 = param_1[6];
    uStack_80 = param_1[5];
    uStack_68 = param_1[8];
    uStack_70 = param_1[7];
    uStack_58 = param_1[10];
    uStack_60 = param_1[9];
    uStack_48 = param_1[0xc];
    uStack_50 = param_1[0xb];
    uStack_270 = uStack_2c0;
    uStack_268 = uStack_2b8;
    uStack_260 = uStack_2b0;
    uStack_258 = uStack_2a8;
    uStack_250 = uStack_2a0;
    uStack_248 = uStack_298;
    uStack_240 = uStack_290;
    uStack_238 = uStack_288;
    uStack_230 = uStack_280;
    uStack_228 = uStack_278;
    FUN_103571278(&uStack_e0,auStack_310,0x112f730a8,&UNK_10dbd1870);
    FUN_103571278(&uStack_130,auStack_310,0x112f730a8,&UNK_10dbd1870);
    puVar2 = &uStack_90;
    FUN_1035c4a34(puVar2,&uStack_270);
    FUN_1035789ec(&uStack_2c0,0x112f730a8,&UNK_10dbd1870);
    FUN_1035789ec(&uStack_1d0,0x112f730a8,&UNK_10dbd1870);
    if (((ulong)puVar2 & 1) != 0) goto LAB_1035736c4;
  }
  else if (uStack_218 >> 0x3c < 0xf) {
LAB_103573590:
    uStack_270 = uStack_1d0;
    uStack_268 = uStack_1c8;
    uStack_260 = uStack_1c0;
    uStack_258 = uStack_1b8;
    uStack_250 = uStack_1b0;
    uStack_248 = uStack_1a8;
    uStack_240 = uStack_1a0;
    uStack_238 = uStack_198;
    uStack_230 = uStack_190;
    uStack_228 = uStack_188;
    FUN_103571278(&uStack_e0,&uStack_90,0x112f730a8,&UNK_10dbd1870);
    FUN_103571278(&uStack_130,&uStack_90,0x112f730a8,&UNK_10dbd1870);
    FUN_1035789ec(&uStack_270,0x112f74f28,&UNK_10dbdb200);
  }
  else {
    uStack_258 = param_1[6];
    uStack_260 = param_1[5];
    uStack_248 = param_1[8];
    uStack_250 = param_1[7];
    uStack_238 = param_1[10];
    uStack_240 = param_1[9];
    uStack_228 = param_1[0xc];
    uStack_230 = param_1[0xb];
    uStack_268 = param_1[4];
    uStack_270 = param_1[3];
    FUN_103571278(&uStack_e0,&uStack_90,0x112f730a8,&UNK_10dbd1870);
    FUN_103571278(&uStack_130,&uStack_90,0x112f730a8,&UNK_10dbd1870);
    FUN_1035789ec(&uStack_270,0x112f730a8,&UNK_10dbd1870);
LAB_1035736c4:
    uVar3 = *param_1;
    func_0x000103570808(uVar3,*param_2,FUN_10356de78);
    if ((uVar3 & 1) != 0) {
      uVar3 = param_1[1];
      func_0x000100e25fcc(uVar3,param_1[2],param_2[1],param_2[2]);
      uVar1 = (uint)uVar3;
      goto LAB_1035736f0;
    }
  }
  uVar1 = 0;
LAB_1035736f0:
  return uVar1 & 1;
}



/* Entry: 10357370c; end: 1035737af;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10357370c(long param_1,ulong param_2,byte *param_3,byte *param_4,long param_5,
                    ulong param_6,long param_7,ulong param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  
  if ((param_6 & 0xff) == 1) {
    if (param_5 < 3) {
      if (param_5 == 0) {
        if (param_1 != 0) {
          return (byte *)0x0;
        }
      }
      else if (param_5 == 1) {
        if (param_1 != 1) {
          return (byte *)0x0;
        }
      }
      else if (param_1 != 2) {
        return (byte *)0x0;
      }
    }
    else if (param_5 == 3) {
      if (param_1 != 3) {
        return (byte *)0x0;
      }
    }
    else if (param_5 == 4) {
      if (param_1 != 4) {
        return (byte *)0x0;
      }
    }
    else if (param_1 != 5) {
      return (byte *)0x0;
    }
  }
  else if (param_1 != param_5) {
    return (byte *)0x0;
  }
  if (param_2 >> 0x20 != param_6 >> 0x20) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)param_4 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_8 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_3;
    pbVar11 = param_4;
    if ((ulong)param_4 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_3 != (byte *)0x0) || (param_4 != (byte *)0xc000000000000000)) ||
          (param_8 >> 0x3e < 3)) || ((uVar17 = 0, param_7 != 0 || (param_8 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_4 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_3 >> 0x20);
        if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar17 = (ulong)(iVar16 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar18 == 0) {
        uVar19 = param_8 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar16 = (int)((ulong)param_7 >> 0x20);
      if (SBORROW4(iVar16,(int)param_7)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_7)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
        if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar17 = 0;
      if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
        if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar17 < 1) goto code_r0x000100e26128;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)param_3;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_3 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_3 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_3 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_3 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_3 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_3 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_3 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_4;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_4 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_4 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_4 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_4 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_4 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_4 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_3 >> 0x20) - (long)unaff_x25);
          if ((long)param_3 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_4;
          if (param_3 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_3 = (byte *)0x0;
          }
          else {
            pbVar11 = param_3;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_3 = param_3 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_3;
            if (param_3 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_3;
              goto code_r0x000100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar21 = *(long *)(param_3 + 0x10);
          unaff_x24 = *(byte **)(param_3 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_3;
          if (param_3 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_3 = param_3 + (lVar21 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_3;
          unaff_x25 = param_4;
          if (param_3 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_3;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)param_4 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_3,pbVar11,param_7
                            ,param_8);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_8;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar10 = *(byte **)pbVar8;
    param_3 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar23 = pbVar8[0x28];
    param_4 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_3;
    if (bVar23 < 3) {
      if (bVar23 == 0) {
        if (pbVar11[0x28] == 0) {
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          return (byte *)(ulong)((uint)pbVar10 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar23 == 1) {
        if (pbVar11[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar14 = *(byte **)(pbVar11 + 0x10);
        lVar21 = *(long *)pbVar11;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar21,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar10 = param_3;
        pbVar12 = param_4;
        if ((param_3 == pbVar13) && (param_4 == pbVar14)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar11[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        lVar21 = *(long *)(pbVar11 + 0x18);
        if ((pbVar10 == pbVar13) && (param_3 == pbVar14)) {
          if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar21 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar21);
          func_0x000107c61174();
          pbVar11 = pbVar20;
          func_0x000107c60118();
          func_0x000107c61170(pbVar20);
          func_0x000107c61170(lVar21);
          pbVar20 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar20 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar10,pbVar12,pbVar13,pbVar14,0);
      return pbVar10;
    }
    lVar22 = *(long *)(pbVar8 + 0x20);
    if (bVar23 < 5) {
      if (bVar23 != 3) {
        if (pbVar11[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        if (((pbVar10 == pbVar13) && (param_3 == pbVar14)) &&
           (pbVar10 = param_4, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_4 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar11[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar14 = *(byte **)(pbVar11 + 0x10);
      lVar21 = *(long *)(pbVar11 + 0x20);
      if (param_4 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_3;
        pbVar12 = param_4;
        if ((param_3 != pbVar13) || (param_4 != pbVar14)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar21 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar21 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar23 != 5) {
      if ((((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar22 == 0) && param_4 == (byte *)0x0) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar11 + 0x20);
        lVar21 = *(long *)(pbVar11 + 0x18);
        bVar23 = pbVar11[8] | (byte)lVar21;
        bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
        bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
        bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
        bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
        bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
        bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
        bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
        bVar31 = pbVar11[0x10] | (byte)lVar22;
        bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar39[1] = bVar24;
        auVar39[0] = bVar23;
        auVar39[2] = bVar25;
        auVar39[3] = bVar26;
        auVar39[4] = bVar27;
        auVar39[5] = bVar28;
        auVar39[6] = bVar29;
        auVar39[7] = bVar30;
        auVar39[8] = bVar31;
        auVar39[9] = bVar32;
        auVar39[10] = bVar33;
        auVar39[0xb] = bVar34;
        auVar39[0xc] = bVar35;
        auVar39[0xd] = bVar36;
        auVar39[0xe] = bVar37;
        auVar39[0xf] = bVar38;
        auVar3[1] = bVar24;
        auVar3[0] = bVar23;
        auVar3[2] = bVar25;
        auVar3[3] = bVar26;
        auVar3[4] = bVar27;
        auVar3[5] = bVar28;
        auVar3[6] = bVar29;
        auVar3[7] = bVar30;
        auVar3[8] = bVar31;
        auVar3[9] = bVar32;
        auVar3[10] = bVar33;
        auVar3[0xb] = bVar34;
        auVar3[0xc] = bVar35;
        auVar3[0xd] = bVar36;
        auVar3[0xe] = bVar37;
        auVar3[0xf] = bVar38;
        auVar39 = NEON_ext(auVar39,auVar3,8,1);
        if (CONCAT17(bVar30 | auVar39[7],
                     CONCAT16(bVar29 | auVar39[6],
                              CONCAT15(bVar28 | auVar39[5],
                                       CONCAT14(bVar27 | auVar39[4],
                                                CONCAT13(bVar26 | auVar39[3],
                                                         CONCAT12(bVar25 | auVar39[2],
                                                                  CONCAT11(bVar24 | auVar39[1],
                                                                           bVar23 | auVar39[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && param_4 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar11 + 0x20);
      lVar21 = *(long *)(pbVar11 + 0x18);
      bVar23 = pbVar11[8] | (byte)lVar21;
      bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
      bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
      bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
      bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
      bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
      bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
      bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
      bVar31 = pbVar11[0x10] | (byte)lVar22;
      bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar24;
      auVar1[0] = bVar23;
      auVar1[2] = bVar25;
      auVar1[3] = bVar26;
      auVar1[4] = bVar27;
      auVar1[5] = bVar28;
      auVar1[6] = bVar29;
      auVar1[7] = bVar30;
      auVar1[8] = bVar31;
      auVar1[9] = bVar32;
      auVar1[10] = bVar33;
      auVar1[0xb] = bVar34;
      auVar1[0xc] = bVar35;
      auVar1[0xd] = bVar36;
      auVar1[0xe] = bVar37;
      auVar1[0xf] = bVar38;
      auVar2[1] = bVar24;
      auVar2[0] = bVar23;
      auVar2[2] = bVar25;
      auVar2[3] = bVar26;
      auVar2[4] = bVar27;
      auVar2[5] = bVar28;
      auVar2[6] = bVar29;
      auVar2[7] = bVar30;
      auVar2[8] = bVar31;
      auVar2[9] = bVar32;
      auVar2[10] = bVar33;
      auVar2[0xb] = bVar34;
      auVar2[0xc] = bVar35;
      auVar2[0xd] = bVar36;
      auVar2[0xe] = bVar37;
      auVar2[0xf] = bVar38;
      auVar39 = NEON_ext(auVar1,auVar2,8,1);
      lVar21 = CONCAT17(bVar30 | auVar39[7],
                        CONCAT16(bVar29 | auVar39[6],
                                 CONCAT15(bVar28 | auVar39[5],
                                          CONCAT14(bVar27 | auVar39[4],
                                                   CONCAT13(bVar26 | auVar39[3],
                                                            CONCAT12(bVar25 | auVar39[2],
                                                                     CONCAT11(bVar24 | auVar39[1],
                                                                              bVar23 | auVar39[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_7 = *(long *)(pbVar11 + 8);
    param_8 = *(ulong *)(pbVar11 + 0x10);
    lVar21 = *(long *)pbVar11;
    uVar9 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar10,lVar21,uVar9);
    if (((ulong)pbVar10 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 1035737b0; end: 10357392f;  */

void FUN_1035737b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdbec0;
  func_0x000107c61520(&UNK_10dbdbec0,&UNK_110665ff0);
  puRam0000000112f78970 = puVar1;
  return;
}



/* Entry: 103573930; end: 103573943;  */

void FUN_103573930(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103573944();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103573984)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103573944; end: 1035739ef;  */

void FUN_103573944(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f789c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb318;
  func_0x000107c61520(&UNK_10dbdb318,&UNK_110665a88);
  puRam0000000112f789c8 = puVar1;
  return;
}



/* Entry: 1035739f0; end: 1035739f3;  */

void FUN_1035739f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f789e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb358;
  func_0x000107c61520(&UNK_10dbdb358,&UNK_110665a88);
  puRam0000000112f789e8 = puVar1;
  return;
}



/* Entry: 1035739f4; end: 103573a33;  */

void FUN_1035739f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f789e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb358;
  func_0x000107c61520(&UNK_10dbdb358,&UNK_110665a88);
  puRam0000000112f789e8 = puVar1;
  return;
}



/* Entry: 103573a34; end: 103573a47;  */

void FUN_103573a34(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103573a48();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103573a88)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103573a48; end: 103573af3;  */

void FUN_103573a48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f789f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb418;
  func_0x000107c61520(&UNK_10dbdb418,&UNK_110665b98);
  puRam0000000112f789f0 = puVar1;
  return;
}



/* Entry: 103573af4; end: 103573af7;  */

void FUN_103573af4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78a10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb458;
  func_0x000107c61520(&UNK_10dbdb458,&UNK_110665b98);
  puRam0000000112f78a10 = puVar1;
  return;
}



/* Entry: 103573af8; end: 103573b37;  */

void FUN_103573af8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78a10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb458;
  func_0x000107c61520(&UNK_10dbdb458,&UNK_110665b98);
  puRam0000000112f78a10 = puVar1;
  return;
}



/* Entry: 103573b38; end: 103573b4b;  */

void FUN_103573b38(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103573b4c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103573b8c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103573b4c; end: 103573bf7;  */

void FUN_103573b4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78a18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb518;
  func_0x000107c61520(&UNK_10dbdb518,&UNK_110665c28);
  puRam0000000112f78a18 = puVar1;
  return;
}



/* Entry: 103573bf8; end: 103573bfb;  */

void FUN_103573bf8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78a38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb558;
  func_0x000107c61520(&UNK_10dbdb558,&UNK_110665c28);
  puRam0000000112f78a38 = puVar1;
  return;
}



/* Entry: 103573bfc; end: 103573c3b;  */

void FUN_103573bfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78a38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb558;
  func_0x000107c61520(&UNK_10dbdb558,&UNK_110665c28);
  puRam0000000112f78a38 = puVar1;
  return;
}



/* Entry: 103573c3c; end: 103573c4f;  */

void FUN_103573c3c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103573c50();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103573c90)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103573c50; end: 103573cfb;  */

void FUN_103573c50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78a40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb618;
  func_0x000107c61520(&UNK_10dbdb618,&UNK_110665cb8);
  puRam0000000112f78a40 = puVar1;
  return;
}



/* Entry: 103573cfc; end: 103573cff;  */

void FUN_103573cfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78a60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb658;
  func_0x000107c61520(&UNK_10dbdb658,&UNK_110665cb8);
  puRam0000000112f78a60 = puVar1;
  return;
}



/* Entry: 103573d00; end: 103573d3f;  */

void FUN_103573d00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78a60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb658;
  func_0x000107c61520(&UNK_10dbdb658,&UNK_110665cb8);
  puRam0000000112f78a60 = puVar1;
  return;
}



/* Entry: 103573d40; end: 103573d53;  */

void FUN_103573d40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103573d54();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103573d94)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103573d54; end: 103573dff;  */

void FUN_103573d54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78a68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb718;
  func_0x000107c61520(&UNK_10dbdb718,&UNK_110665d48);
  puRam0000000112f78a68 = puVar1;
  return;
}



/* Entry: 103573e00; end: 103573e03;  */

void FUN_103573e00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78a88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb758;
  func_0x000107c61520(&UNK_10dbdb758,&UNK_110665d48);
  puRam0000000112f78a88 = puVar1;
  return;
}



/* Entry: 103573e04; end: 103573e43;  */

void FUN_103573e04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78a88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb758;
  func_0x000107c61520(&UNK_10dbdb758,&UNK_110665d48);
  puRam0000000112f78a88 = puVar1;
  return;
}



/* Entry: 103573e44; end: 103573e57;  */

void FUN_103573e44(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103573e58();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103573e98)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103573e58; end: 103573f03;  */

void FUN_103573e58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78a90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb818;
  func_0x000107c61520(&UNK_10dbdb818,&UNK_110665dd8);
  puRam0000000112f78a90 = puVar1;
  return;
}



/* Entry: 103573f04; end: 103573f07;  */

void FUN_103573f04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb858;
  func_0x000107c61520(&UNK_10dbdb858,&UNK_110665dd8);
  puRam0000000112f78ab0 = puVar1;
  return;
}



/* Entry: 103573f08; end: 103573f47;  */

void FUN_103573f08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb858;
  func_0x000107c61520(&UNK_10dbdb858,&UNK_110665dd8);
  puRam0000000112f78ab0 = puVar1;
  return;
}



/* Entry: 103573f48; end: 103573f5b;  */

void FUN_103573f48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103573f5c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103573f9c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103573f5c; end: 103574007;  */

void FUN_103573f5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78ab8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb918;
  func_0x000107c61520(&UNK_10dbdb918,&UNK_110665f78);
  puRam0000000112f78ab8 = puVar1;
  return;
}



/* Entry: 103574008; end: 10357400b;  */

void FUN_103574008(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb958;
  func_0x000107c61520(&UNK_10dbdb958,&UNK_110665f78);
  puRam0000000112f78ad8 = puVar1;
  return;
}



/* Entry: 10357400c; end: 10357404b;  */

void FUN_10357400c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb958;
  func_0x000107c61520(&UNK_10dbdb958,&UNK_110665f78);
  puRam0000000112f78ad8 = puVar1;
  return;
}



/* Entry: 10357404c; end: 10357405f;  */

void FUN_10357404c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103574060();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035740a0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103574060; end: 10357410b;  */

void FUN_103574060(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78ae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdba18;
  func_0x000107c61520(&UNK_10dbdba18,&UNK_110666090);
  puRam0000000112f78ae0 = puVar1;
  return;
}



/* Entry: 10357410c; end: 10357414f;  */

void FUN_10357410c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103574150; end: 103574153;  */

void FUN_103574150(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78b00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdba58;
  func_0x000107c61520(&UNK_10dbdba58,&UNK_110666090);
  puRam0000000112f78b00 = puVar1;
  return;
}



/* Entry: 103574154; end: 103574193;  */

void FUN_103574154(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78b00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdba58;
  func_0x000107c61520(&UNK_10dbdba58,&UNK_110666090);
  puRam0000000112f78b00 = puVar1;
  return;
}



/* Entry: 103574194; end: 1035741b7;  */

void FUN_103574194(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035741b8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035741b8; end: 1035741f7;  */

void FUN_1035741b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdbac8;
  func_0x000107c61520(&UNK_10dbdbac8,&UNK_1106659d0);
  puRam0000000112f78b08 = puVar1;
  return;
}



/* Entry: 1035741f8; end: 10357420f;  */

void FUN_1035741f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103573260();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103502914)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103574210; end: 10357424f;  */

void FUN_103574210(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdbb30;
  func_0x000107c61520(&UNK_10dbdbb30,&UNK_1106659d0);
  puRam0000000112f78b10 = puVar1;
  return;
}


