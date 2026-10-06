/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035508ec; end: 10355091f;  */

void FUN_1035508ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 103550920; end: 103550933;  */

undefined1  [16] FUN_103550920(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x103550930;
  return auVar1;
}



/* Entry: 103550934; end: 103550947;  */

void FUN_103550934(void)

{
  FUN_10354f654();
  return;
}



/* Entry: 103550948; end: 1035509af;  */

void FUN_103550948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_1a0 [352];
  
  func_0x000107c610b4(auStack_1a0);
  FUN_10354fd4c(param_1,param_2,param_3);
  return;
}



/* Entry: 1035509b0; end: 1035509b3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035509b0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035509b4; end: 1035509eb;  */

uint FUN_1035509b4(long param_1,long param_2)

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
  func_0x000103559b04();
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



/* Entry: 1035509ec; end: 103550a3b;  */

uint FUN_1035509ec(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_2e0 [352];
  undefined1 auStack_180 [352];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_180,param_1,0x160);
  func_0x000107c610b4(auStack_2e0);
  FUN_103552b2c(auStack_2e0,auStack_180);
  return uVar1 & 1;
}



/* Entry: 103550a3c; end: 103550adb;  */

/* WARNING: Possible PIC construction at 0x000103550a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103550a98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103550a8c) */
/* WARNING: Removing unreachable block (ram,0x000103550a9c) */

void FUN_103550a3c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77a88 != -1) {
    func_0x000107c61568(0x112f77a88,FUN_10354f60c);
  }
  uVar5 = uRam00000001138085a8;
  uVar4 = uRam00000001138085a0;
  uVar3 = uRam0000000113808598;
  uVar2 = uRam0000000113808590;
  uVar1 = uRam0000000113808588;
  *param_1 = uRam0000000113808580;
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



/* Entry: 103550adc; end: 103550b17;  */

void FUN_103550adc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f77e08;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f77e08,&UNK_10dbda4b0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103550b18; end: 103550c23;  */

void FUN_103550b18(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1d8 [72];
  undefined1 auStack_190 [352];
  
  func_0x000107c610b4(auStack_190);
  func_0x000107c6068c(auStack_1d8,0);
  func_0x000107c5fa50(auStack_1d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103550c24; end: 103550c77;  */

uint FUN_103550c24(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_2e0 [352];
  undefined1 auStack_180 [352];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_2e0,param_1,0x160);
  func_0x000107c610b4(auStack_180,param_2,0x160);
  FUN_103552b2c(auStack_2e0,auStack_180);
  return uVar1 & 1;
}



/* Entry: 103550c78; end: 103550cbf;  */

void FUN_103550c78(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbda510,0x4f,2);
  uRam00000001138085b8 = uStack_38;
  uRam00000001138085b0 = uStack_40;
  uRam00000001138085c8 = uStack_28;
  uRam00000001138085c0 = uStack_30;
  uRam00000001138085d8 = uStack_18;
  uRam00000001138085d0 = uStack_20;
  return;
}



/* Entry: 103550cc0; end: 103550e17;  */

/* WARNING: Removing unreachable block (ram,0x000103550d9c) */
/* WARNING: Removing unreachable block (ram,0x000103550de4) */
/* WARNING: Removing unreachable block (ram,0x000103550e14) */

void FUN_103550cc0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          lVar2 = unaff_x20 + 0x28;
          puVar3 = &UNK_110790c00;
        }
        else {
          if (lVar1 != 2) goto LAB_103550d48;
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x40;
          puVar3 = &UNK_110790980;
        }
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 3) {
        FUN_103550e18();
      }
      else if (lVar1 == 4) {
        FUN_103550fa0();
      }
      else if (lVar1 == 5) {
        FUN_10355112c();
      }
LAB_103550d48:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103550e18; end: 103550f9f;  */

/* WARNING: Removing unreachable block (ram,0x000103550f48) */

void FUN_103550e18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x21;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uVar1 = param_1[1];
  uVar7 = param_1[2];
  bVar4 = ((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  bVar5 = ((uVar7 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0;
  puVar6 = param_1;
  if (uVar7 >> 0x3e == 0 && (!bVar4 || !bVar5)) {
    uVar10 = *param_1;
    FUN_1035553e0(uVar10,uVar1,uVar7);
    puVar6 = (undefined8 *)0x0;
    FUN_103559bc4(0,0,0);
    uStack_78 = uVar10;
    uStack_70 = uVar1;
    uStack_68 = uVar7;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  func_0x0001035027d4();
  (*pcVar9)(&uStack_78,&UNK_110667f00,puVar6,param_3,param_4);
  uVar7 = uStack_68;
  uVar1 = uStack_70;
  uVar10 = uStack_78;
  if (unaff_x21 == 0) {
    if (uStack_68 != 0) {
      if (bVar4 && bVar5) {
        func_0x00010006c00c();
        func_0x000107c6157c(uVar7);
      }
      else {
        pcVar9 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(uVar7);
        (*pcVar9)(param_3,param_4);
      }
      FUN_103559bc4(uStack_78,uStack_70,uStack_68);
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar8 = param_1[2];
      *param_1 = uVar10;
      param_1[1] = uVar1;
      param_1[2] = uVar7;
      func_0x000100d55b74(uVar2,uVar3,uVar8);
      return;
    }
    uVar7 = 0;
  }
  FUN_103559bc4(uStack_78,uStack_70,uVar7);
  return;
}



/* Entry: 103550fa0; end: 10355112b;  */

/* WARNING: Removing unreachable block (ram,0x0001035510d0) */

void FUN_103550fa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x21;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uVar1 = param_1[1];
  uVar7 = param_1[2];
  bVar4 = ((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  bVar5 = ((uVar7 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0;
  puVar6 = param_1;
  if (uVar7 >> 0x3e == 1 && (!bVar4 || !bVar5)) {
    uVar10 = *param_1;
    FUN_1035553e0(uVar10,uVar1);
    puVar6 = (undefined8 *)0x0;
    FUN_103559bc4(0,0,0);
    uStack_78 = uVar10;
    uStack_70 = uVar1;
    uStack_68 = uVar7 & 0x3fffffffffffffff;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  func_0x000103502854();
  (*pcVar9)(&uStack_78,&UNK_11066a9c0,puVar6,param_3,param_4);
  uVar7 = uStack_68;
  uVar1 = uStack_70;
  uVar10 = uStack_78;
  if (unaff_x21 == 0) {
    if (uStack_68 != 0) {
      if (bVar4 && bVar5) {
        func_0x00010006c00c();
        func_0x000107c6157c(uVar7);
      }
      else {
        pcVar9 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(uVar7);
        (*pcVar9)(param_3,param_4);
      }
      FUN_103559bc4(uStack_78,uStack_70,uStack_68);
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar8 = param_1[2];
      *param_1 = uVar10;
      param_1[1] = uVar1;
      param_1[2] = uVar7 | 0x4000000000000000;
      func_0x000100d55b74(uVar2,uVar3,uVar8);
      return;
    }
    uVar7 = 0;
  }
  FUN_103559bc4(uStack_78,uStack_70,uVar7);
  return;
}



/* Entry: 10355112c; end: 1035512b7;  */

/* WARNING: Removing unreachable block (ram,0x00010355125c) */

void FUN_10355112c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x21;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uVar1 = param_1[1];
  uVar7 = param_1[2];
  bVar4 = ((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  bVar5 = ((uVar7 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0;
  puVar6 = param_1;
  if ((long)uVar7 < -0x4000000000000000 && (!bVar4 || !bVar5)) {
    uVar10 = *param_1;
    FUN_1035553e0(uVar10,uVar1);
    puVar6 = (undefined8 *)0x0;
    FUN_103559bc4(0,0,0);
    uStack_78 = uVar10;
    uStack_70 = uVar1;
    uStack_68 = uVar7 & 0x3fffffffffffffff;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  func_0x000103502994();
  (*pcVar9)(&uStack_78,&UNK_110666c90,puVar6,param_3,param_4);
  uVar7 = uStack_68;
  uVar1 = uStack_70;
  uVar10 = uStack_78;
  if (unaff_x21 == 0) {
    if (uStack_68 != 0) {
      if (bVar4 && bVar5) {
        func_0x00010006c00c();
        func_0x000107c6157c(uVar7);
      }
      else {
        pcVar9 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(uVar7);
        (*pcVar9)(param_3,param_4);
      }
      FUN_103559bc4(uStack_78,uStack_70,uStack_68);
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar8 = param_1[2];
      *param_1 = uVar10;
      param_1[1] = uVar1;
      param_1[2] = uVar7 | 0x8000000000000000;
      func_0x000100d55b74(uVar2,uVar3,uVar8);
      return;
    }
    uVar7 = 0;
  }
  FUN_103559bc4(uStack_78,uStack_70,uVar7);
  return;
}



/* Entry: 1035512b8; end: 10355138b;  */

void FUN_1035512b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  
  FUN_10355138c();
  if (unaff_x21 == 0) {
    FUN_103551414();
    if (((*(ulong *)(unaff_x20 + 8) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
        (*(ulong *)(unaff_x20 + 0x10) & 0xf000000000000007) != 0xf000000000000007) {
      uVar1 = (uint)(*(ulong *)(unaff_x20 + 0x10) >> 0x3e);
      if (uVar1 == 0) {
        FUN_10355149c();
      }
      else if (uVar1 == 1) {
        FUN_103551544();
      }
      else {
        FUN_1035515f0();
      }
    }
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                        param_2,param_3);
  }
  return;
}



/* Entry: 10355138c; end: 103551413;  */

void FUN_10355138c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x28);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,1,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103551414; end: 10355149b;  */

void FUN_103551414(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x50);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,2,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10355149c; end: 103551543;  */

void FUN_10355149c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_50 = param_1[1];
  uStack_48 = param_1[2];
  if (uStack_48 >> 0x3e == 0 &&
      (((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      ((uStack_48 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
    uStack_58 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001035027d4();
    (*pcVar1)(&uStack_58,3,&UNK_110667f00,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103551544);
  (*pcVar1)();
}



/* Entry: 103551544; end: 1035515ef;  */

void FUN_103551544(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_50 = param_1[1];
  uStack_48 = param_1[2];
  if (uStack_48 >> 0x3e == 1 &&
      (((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      ((uStack_48 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
    uStack_58 = *param_1;
    uStack_48 = uStack_48 & 0x3fffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103502854();
    (*pcVar1)(&uStack_58,4,&UNK_11066a9c0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1035515f0);
  (*pcVar1)();
}



/* Entry: 1035515f0; end: 10355169b;  */

void FUN_1035515f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_50 = param_1[1];
  uStack_48 = param_1[2];
  if ((long)uStack_48 < -0x4000000000000000 &&
      (((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      ((uStack_48 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
    uStack_58 = *param_1;
    uStack_48 = uStack_48 & 0x3fffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103502994();
    (*pcVar1)(&uStack_58,5,&UNK_110666c90,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10355169c);
  (*pcVar1)();
}



/* Entry: 10355169c; end: 1035516f3;  */

void FUN_10355169c(undefined8 *param_1)

{
  param_1[1] = 0x3000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0xf000000000000007;
  param_1[5] = 2;
  param_1[4] = 0xc000000000000000;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0xf000000000000000;
  return;
}



/* Entry: 1035516f4; end: 103551723;  */

undefined1  [16] FUN_1035516f4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 103551724; end: 103551757;  */

void FUN_103551724(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 103551758; end: 10355176b;  */

undefined1  [16] FUN_103551758(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x103551768;
  return auVar1;
}



/* Entry: 10355176c; end: 10355177f;  */

void FUN_10355176c(void)

{
  FUN_103550cc0();
  return;
}



/* Entry: 103551780; end: 1035517c7;  */

void FUN_103551780(void)

{
  FUN_1035512b8();
  return;
}



/* Entry: 1035517c8; end: 1035517cb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035517c8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035517cc; end: 103551803;  */

uint FUN_1035517cc(long param_1,long param_2)

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
  func_0x000103559ac4();
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



/* Entry: 103551804; end: 10355186b;  */

uint FUN_103551804(undefined8 *param_1)

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
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
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
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  func_0x000103554168(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10355186c; end: 10355190b;  */

/* WARNING: Possible PIC construction at 0x0001035518b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035518c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035518bc) */
/* WARNING: Removing unreachable block (ram,0x0001035518cc) */

void FUN_10355186c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77a98 != -1) {
    func_0x000107c61568(0x112f77a98,FUN_103550c78);
  }
  uVar5 = uRam00000001138085d8;
  uVar4 = uRam00000001138085d0;
  uVar3 = uRam00000001138085c8;
  uVar2 = uRam00000001138085c0;
  uVar1 = uRam00000001138085b8;
  *param_1 = uRam00000001138085b0;
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



/* Entry: 10355190c; end: 103551947;  */

void FUN_10355190c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f77df8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f77df8,&UNK_10dbda4a8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103551948; end: 103551a6b;  */

void FUN_103551948(undefined8 param_1,undefined8 param_2)

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
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
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



/* Entry: 103551a6c; end: 103551b1b;  */

uint FUN_103551a6c(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
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
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  func_0x000103554168(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103551b1c; end: 103551bff;  */

void FUN_103551b1c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_110790b00;
LAB_103551ba4:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0x28;
        puVar3 = &UNK_110790c00;
        goto LAB_103551ba4;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103551c00; end: 103551c73;  */

void FUN_103551c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_103551c74();
  if (unaff_x21 == 0) {
    FUN_103551cfc();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 103551c74; end: 103551cfb;  */

void FUN_103551c74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x20);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,1,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103551cfc; end: 103551d83;  */

void FUN_103551cfc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x28);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,2,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103551d84; end: 103551dcb;  */

void FUN_103551d84(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 2;
  param_1[4] = 0xf000000000000000;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



/* Entry: 103551dcc; end: 103551dfb;  */

undefined1  [16] FUN_103551dcc(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103551dfc; end: 103551e2f;  */

void FUN_103551dfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103551e30; end: 103551e43;  */

undefined8 FUN_103551e30(void)

{
  return 0x103551e40;
}



/* Entry: 103551e44; end: 103551e57;  */

void FUN_103551e44(void)

{
  FUN_103551b1c();
  return;
}



/* Entry: 103551e58; end: 103551e8f;  */

void FUN_103551e58(void)

{
  FUN_103551c00();
  return;
}



/* Entry: 103551e90; end: 103551e93;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103551e90(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103551e94; end: 103551ecb;  */

uint FUN_103551e94(long param_1,long param_2)

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
  FUN_103559a84();
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



/* Entry: 103551ecc; end: 103551f13;  */

uint FUN_103551ecc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  func_0x000103554810(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103551f14; end: 103551fb3;  */

/* WARNING: Possible PIC construction at 0x000103551f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103551f70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103551f64) */
/* WARNING: Removing unreachable block (ram,0x000103551f74) */

void FUN_103551f14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77aa8 != -1) {
    func_0x000107c61568(0x112f77aa8,0x103551ad4);
  }
  uVar5 = uRam0000000113808608;
  uVar4 = uRam0000000113808600;
  uVar3 = uRam00000001138085f8;
  uVar2 = uRam00000001138085f0;
  uVar1 = uRam00000001138085e8;
  *param_1 = uRam00000001138085e0;
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



/* Entry: 103551fb4; end: 103551fef;  */

void FUN_103551fb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f77de8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f77de8,&UNK_10dbda4a0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103551ff0; end: 1035520f3;  */

void FUN_103551ff0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035520f4; end: 10355213b;  */

uint FUN_1035520f4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  func_0x000103554810(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10355213c; end: 103552217;  */

uint FUN_10355213c(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  undefined1 auStack_3b8 [296];
  undefined1 auStack_290 [296];
  undefined1 auStack_168 [296];
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
      do {
        lVar2 = lVar2 + -1;
        func_0x000107c610b4(auStack_290,param_1,0x128);
        func_0x000107c610b4(auStack_168,param_2,0x128);
        FUN_1034b0cb0(auStack_290,auStack_3b8);
        FUN_1034b0cb0(auStack_168,auStack_3b8);
        puVar1 = auStack_290;
        FUN_1035554c8(puVar1,auStack_168);
        uVar3 = (uint)puVar1;
        func_0x0001034b0cec(auStack_168);
        func_0x0001034b0cec(auStack_290);
        if (((ulong)puVar1 & 1) == 0) break;
        param_2 = param_2 + 0x128;
        param_1 = param_1 + 0x128;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 103552218; end: 103552a8b;  */

void FUN_103552218(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_a48 [24];
  undefined1 auStack_a30 [24];
  undefined1 auStack_a18 [24];
  undefined1 auStack_a00 [24];
  undefined1 auStack_9e8 [24];
  undefined1 auStack_9d0 [64];
  undefined1 auStack_990 [24];
  undefined1 auStack_978 [24];
  undefined1 auStack_960 [24];
  undefined1 auStack_948 [24];
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined1 auStack_8d0 [24];
  undefined1 auStack_8b8 [24];
  undefined1 auStack_8a0 [24];
  undefined1 auStack_888 [24];
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined1 auStack_710 [24];
  undefined1 auStack_6f8 [24];
  undefined1 auStack_6e0 [24];
  undefined1 auStack_6c8 [24];
  undefined1 auStack_6b0 [24];
  undefined1 auStack_698 [24];
  undefined1 auStack_680 [24];
  undefined1 auStack_668 [24];
  undefined1 auStack_650 [24];
  undefined1 auStack_638 [24];
  undefined1 auStack_620 [24];
  undefined1 auStack_608 [24];
  undefined1 auStack_5f0 [24];
  undefined1 auStack_5d8 [24];
  undefined1 auStack_5c0 [24];
  undefined1 auStack_5a8 [24];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [24];
  undefined1 auStack_548 [24];
  undefined1 auStack_530 [352];
  undefined1 auStack_3d0 [352];
  undefined1 auStack_270 [352];
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar14 = (undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *puVar14 = 0;
  puVar13 = (undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *puVar13 = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xf000000000000000;
  puVar2 = (undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *puVar2 = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xf000000000000000;
  puVar3 = (undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *puVar3 = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x78) = 1;
  puVar4 = (undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *puVar4 = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0xf000000000000000;
  puVar5 = (undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *puVar5 = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 2;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 200);
  *puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000103552ac0(auStack_530);
  func_0x000107c610b4(unaff_x20 + 0xd0,auStack_530,0x160);
  *(undefined8 *)(unaff_x20 + 0x238) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x248) = 0x3000000000000000;
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined8 *)(unaff_x20 + 0x250) = 0xb000000000000007;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 600) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x268) = 0;
  *(undefined8 *)(unaff_x20 + 0x280) = 0;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x290) = 0;
  *(undefined8 *)(unaff_x20 + 0x288) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d8) = 3;
  *(undefined8 *)(unaff_x20 + 0x2e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x300) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x310) = 0;
  *(undefined8 *)(unaff_x20 + 0x308) = 0;
  *(undefined8 *)(unaff_x20 + 800) = 0;
  *(undefined8 *)(unaff_x20 + 0x318) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x328) = 1;
  func_0x000107c61428(param_1 + 0x10,auStack_548,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61428(puVar14,auStack_560,1,0);
  uVar11 = *puVar14;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  *puVar14 = uVar7;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar9;
  func_0x000100d55b38(uVar7,uVar10,uVar9);
  func_0x000100d55b58(uVar11,uVar8,uVar12);
  func_0x000107c61428(param_1 + 0x28,auStack_578,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61428(puVar13,auStack_590,1,0);
  uVar11 = *puVar13;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  *puVar13 = uVar7;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar9;
  func_0x000100d55b38(uVar7,uVar10,uVar9);
  func_0x000100d55b58(uVar11,uVar8,uVar12);
  func_0x000107c61428(param_1 + 0x40,auStack_5a8,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c61428(puVar2,auStack_5c0,1,0);
  uVar11 = *puVar2;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
  *puVar2 = uVar7;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar9;
  func_0x000100d55b38(uVar7,uVar10,uVar9);
  func_0x000100d55b58(uVar11,uVar8,uVar12);
  func_0x000107c61428(param_1 + 0x58,auStack_5d8,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  uVar9 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61428(puVar3,auStack_5f0,1,0);
  uVar11 = *puVar3;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x68);
  *puVar3 = uVar7;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar9;
  func_0x000100d55b38(uVar7,uVar10,uVar9);
  func_0x000100d55b58(uVar11,uVar8,uVar12);
  func_0x000107c61428(param_1 + 0x70,auStack_608,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined1 *)(param_1 + 0x78);
  func_0x000107c61428(unaff_x20 + 0x70,auStack_620,1,0);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar7;
  *(undefined1 *)(unaff_x20 + 0x78) = uVar1;
  func_0x000107c61428(param_1 + 0x80,auStack_638,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  uVar10 = *(undefined8 *)(param_1 + 0x88);
  uVar9 = *(undefined8 *)(param_1 + 0x90);
  func_0x000107c61428(puVar4,auStack_650,1,0);
  uVar11 = *puVar4;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x90);
  *puVar4 = uVar7;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar9;
  func_0x000100d55b38(uVar7,uVar10,uVar9);
  func_0x000100d55b58(uVar11,uVar8,uVar12);
  func_0x000107c61428(param_1 + 0x98,auStack_668,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  uVar10 = *(undefined8 *)(param_1 + 0xa0);
  uVar9 = *(undefined8 *)(param_1 + 0xa8);
  func_0x000107c61428(puVar5,auStack_680,1,0);
  uVar11 = *puVar5;
  uVar8 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0xa8);
  *puVar5 = uVar7;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar10;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar9;
  func_0x000100d55b38(uVar7,uVar10,uVar9);
  func_0x000100d55b58(uVar11,uVar8,uVar12);
  func_0x000107c61428(param_1 + 0xb0,auStack_698,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0xb0);
  uVar10 = *(undefined8 *)(param_1 + 0xb8);
  uVar9 = *(undefined8 *)(param_1 + 0xc0);
  func_0x000107c61428(unaff_x20 + 0xb0,auStack_6b0,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar11 = *(undefined8 *)(unaff_x20 + 0xc0);
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar7;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar10;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar9;
  func_0x000101541464(uVar7,uVar10,uVar9);
  func_0x000101556278(uVar8,uVar12,uVar11);
  func_0x000107c61428(param_1 + 200,auStack_6c8,0,0);
  uVar7 = *(undefined8 *)(param_1 + 200);
  func_0x000107c61428(puVar6,auStack_6e0,1,0);
  uVar8 = *puVar6;
  *puVar6 = uVar7;
  func_0x000107c61434(uVar7);
  func_0x000107c6142c(uVar8);
  func_0x000107c61428(param_1 + 0xd0,auStack_6f8,0,0);
  func_0x000107c610b4(auStack_3d0,param_1 + 0xd0,0x160);
  func_0x000107c61428(unaff_x20 + 0xd0,auStack_710,1,0);
  func_0x000107c610b4(auStack_270,unaff_x20 + 0xd0,0x160);
  func_0x000107c610b4(unaff_x20 + 0xd0,auStack_3d0,0x160);
  FUN_103559c70(auStack_3d0,&uStack_870,0x112f77a28,&UNK_10dbd9da0);
  func_0x000103559bf0(auStack_270,0x112f77a28,&UNK_10dbd9da0);
  func_0x000107c61428(param_1 + 0x230,auStack_888,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x230);
  uVar8 = *(undefined8 *)(param_1 + 0x238);
  func_0x000107c61428(unaff_x20 + 0x230,auStack_8a0,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x230);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x238);
  *(undefined8 *)(unaff_x20 + 0x230) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x238) = uVar8;
  func_0x00010006c00c(uVar7,uVar8);
  func_0x00010006c090(uVar10,uVar12);
  func_0x000107c61428(param_1 + 0x240,auStack_8b8,0,0);
  uStack_e8 = *(undefined8 *)(param_1 + 0x268);
  uStack_f0 = *(undefined8 *)(param_1 + 0x260);
  uStack_d8 = *(undefined8 *)(param_1 + 0x278);
  uStack_e0 = *(undefined8 *)(param_1 + 0x270);
  uStack_c8 = *(undefined8 *)(param_1 + 0x288);
  uStack_d0 = *(undefined8 *)(param_1 + 0x280);
  uStack_c0 = *(undefined8 *)(param_1 + 0x290);
  uStack_108 = *(undefined8 *)(param_1 + 0x248);
  uStack_110 = *(undefined8 *)(param_1 + 0x240);
  uStack_f8 = *(undefined8 *)(param_1 + 600);
  uStack_100 = *(undefined8 *)(param_1 + 0x250);
  func_0x000107c61428(unaff_x20 + 0x240,auStack_8d0,1,0);
  uStack_848 = *(undefined8 *)(unaff_x20 + 0x268);
  uStack_850 = *(undefined8 *)(unaff_x20 + 0x260);
  uStack_838 = *(undefined8 *)(unaff_x20 + 0x278);
  uStack_840 = *(undefined8 *)(unaff_x20 + 0x270);
  uStack_828 = *(undefined8 *)(unaff_x20 + 0x288);
  uStack_830 = *(undefined8 *)(unaff_x20 + 0x280);
  uStack_820 = *(undefined8 *)(unaff_x20 + 0x290);
  uStack_868 = *(undefined8 *)(unaff_x20 + 0x248);
  uStack_870 = *(undefined8 *)(unaff_x20 + 0x240);
  uStack_858 = *(undefined8 *)(unaff_x20 + 600);
  uStack_860 = *(undefined8 *)(unaff_x20 + 0x250);
  *(undefined8 *)(unaff_x20 + 0x268) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x260) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x278) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x270) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x288) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x280) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x290) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x248) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x240) = uStack_110;
  *(undefined8 *)(unaff_x20 + 600) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x250) = uStack_100;
  FUN_103559c70(&uStack_110,&uStack_930,0x112f77a38,&UNK_10dbd9db0);
  func_0x000103559bf0(&uStack_870,0x112f77a38,&UNK_10dbd9db0);
  func_0x000107c61428(param_1 + 0x298,auStack_948,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x298);
  uVar8 = *(undefined8 *)(param_1 + 0x2a0);
  uVar10 = *(undefined8 *)(param_1 + 0x2a8);
  func_0x000107c61428(unaff_x20 + 0x298,auStack_960,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x298);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x2a0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x2a8);
  *(undefined8 *)(unaff_x20 + 0x298) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x2a0) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x2a8) = uVar10;
  func_0x000100d55b38(uVar7,uVar8,uVar10);
  func_0x000100d55b58(uVar12,uVar9,uVar11);
  func_0x000107c61428(param_1 + 0x2b0,auStack_978,0,0);
  uStack_a8 = *(undefined8 *)(param_1 + 0x2b8);
  uStack_b0 = *(undefined8 *)(param_1 + 0x2b0);
  uStack_98 = *(undefined8 *)(param_1 + 0x2c8);
  uStack_a0 = *(undefined8 *)(param_1 + 0x2c0);
  uStack_88 = *(undefined8 *)(param_1 + 0x2d8);
  uStack_90 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_78 = *(undefined8 *)(param_1 + 0x2e8);
  uStack_80 = *(undefined8 *)(param_1 + 0x2e0);
  func_0x000107c61428(unaff_x20 + 0x2b0,auStack_990,1,0);
  uStack_928 = *(undefined8 *)(unaff_x20 + 0x2b8);
  uStack_930 = *(undefined8 *)(unaff_x20 + 0x2b0);
  uStack_918 = *(undefined8 *)(unaff_x20 + 0x2c8);
  uStack_920 = *(undefined8 *)(unaff_x20 + 0x2c0);
  uStack_908 = *(undefined8 *)(unaff_x20 + 0x2d8);
  uStack_910 = *(undefined8 *)(unaff_x20 + 0x2d0);
  uStack_8f8 = *(undefined8 *)(unaff_x20 + 0x2e8);
  uStack_900 = *(undefined8 *)(unaff_x20 + 0x2e0);
  *(undefined8 *)(unaff_x20 + 0x2b8) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x2b0) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x2d0) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x2e8) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uStack_80;
  FUN_103559c70(&uStack_b0,auStack_9d0,0x112f77a48,&UNK_10dbd9dc0);
  func_0x000103559bf0(&uStack_930,0x112f77a48,&UNK_10dbd9dc0);
  func_0x000107c61428(param_1 + 0x2f0,auStack_9d0,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x2f0);
  uVar8 = *(undefined8 *)(param_1 + 0x2f8);
  uVar10 = *(undefined8 *)(param_1 + 0x300);
  func_0x000107c61428(unaff_x20 + 0x2f0,auStack_9e8,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x2f0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x2f8);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x300);
  *(undefined8 *)(unaff_x20 + 0x2f0) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x300) = uVar10;
  func_0x000100d55b38(uVar7,uVar8,uVar10);
  func_0x000100d55b58(uVar12,uVar9,uVar11);
  func_0x000107c61428(param_1 + 0x308,auStack_a00,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x308);
  uVar8 = *(undefined8 *)(param_1 + 0x310);
  uVar10 = *(undefined8 *)(param_1 + 0x318);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x308),auStack_a18,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x308);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x310);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x318);
  *(undefined8 *)(unaff_x20 + 0x308) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x310) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x318) = uVar10;
  func_0x000100d55b38(uVar7,uVar8,uVar10);
  func_0x000100d55b58(uVar12,uVar9,uVar11);
  func_0x000107c61428(param_1 + 800,auStack_a30,0,0);
  uVar7 = *(undefined8 *)(param_1 + 800);
  uVar1 = *(undefined1 *)(param_1 + 0x328);
  func_0x000107c61428(unaff_x20 + 800,auStack_a48,1,0);
  *(undefined8 *)(unaff_x20 + 800) = uVar7;
  *(undefined1 *)(unaff_x20 + 0x328) = uVar1;
  return;
}



/* Entry: 103552a8c; end: 103552b2b;  */

uint FUN_103552a8c(long param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  uVar1 = (uVar1 >> 0x1e |
          ((uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x3c) & 3 |
           ((uint)*(undefined8 *)(param_1 + 0x10) & 7) << 2 | uVar1 >> 0x17 & 0x60) << 2) ^ 0x1ff;
  if (0x1fc < uVar1) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 103552b2c; end: 103554bd7;  */

uint FUN_103552b2c(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong auStack_408 [3];
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar15 = param_1[6];
  uVar11 = param_1[5];
  uVar7 = param_1[7];
  uVar16 = param_2[6];
  uVar14 = param_2[5];
  uVar8 = param_2[7];
  uStack_b0 = uVar14;
  uStack_a8 = uVar16;
  uStack_a0 = uVar8;
  uStack_90 = uVar11;
  uStack_88 = uVar15;
  uStack_80 = uVar7;
  if ((uVar11 & 0xff) == 2) {
    if ((uVar14 & 0xff) != 2) {
LAB_103552d88:
      FUN_103559c70(&uStack_90,&uStack_d0,0x112db94f0,&UNK_10d96af00);
      puVar4 = &uStack_b0;
      puVar5 = &uStack_d0;
      uVar3 = uVar7;
      uVar12 = uVar15;
      uVar13 = uVar11;
      uVar7 = uVar8;
      uVar15 = uVar16;
      uVar11 = uVar14;
LAB_103552f00:
      FUN_103559c70(puVar4,puVar5,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar13,uVar12,uVar3);
      goto LAB_103552ff4;
    }
    FUN_103559c70(&uStack_90,&uStack_d0,0x112db94f0,&UNK_10d96af00);
    FUN_103559c70(&uStack_b0,&uStack_d0,0x112db94f0,&UNK_10d96af00);
LAB_103552bd8:
    func_0x000101556278(uVar11,uVar15,uVar7);
    uVar15 = param_1[9];
    uVar11 = param_1[8];
    uVar7 = param_1[10];
    uVar16 = param_2[9];
    uVar14 = param_2[8];
    uVar8 = param_2[10];
    uStack_f0 = uVar14;
    uStack_e8 = uVar16;
    uStack_e0 = uVar8;
    uStack_d0 = uVar11;
    uStack_c8 = uVar15;
    uStack_c0 = uVar7;
    if ((uVar11 & 0xff) == 2) {
      if ((uVar14 & 0xff) != 2) {
LAB_103552df8:
        FUN_103559c70(&uStack_d0,&uStack_110,0x112db94f0,&UNK_10d96af00);
        puVar4 = &uStack_f0;
        puVar5 = &uStack_110;
        uVar3 = uVar7;
        uVar12 = uVar15;
        uVar13 = uVar11;
        uVar7 = uVar8;
        uVar15 = uVar16;
        uVar11 = uVar14;
        goto LAB_103552f00;
      }
      FUN_103559c70(&uStack_d0,&uStack_110,0x112db94f0,&UNK_10d96af00);
      FUN_103559c70(&uStack_f0,&uStack_110,0x112db94f0,&UNK_10d96af00);
    }
    else {
      if ((uVar14 & 0xff) == 2) goto LAB_103552df8;
      if ((((uint)uVar14 ^ (uint)uVar11) & 1) != 0) {
        FUN_103559c70(&uStack_d0,&uStack_110,0x112db94f0,&UNK_10d96af00);
        puVar4 = &uStack_f0;
        puVar5 = &uStack_110;
        goto LAB_103552fcc;
      }
      FUN_103559c70(&uStack_d0,&uStack_110,0x112db94f0,&UNK_10d96af00);
      FUN_103559c70(&uStack_f0,&uStack_110,0x112db94f0,&UNK_10d96af00);
      uVar3 = uVar15;
      func_0x000100e25fcc(uVar15,uVar7,uVar16,uVar8);
      func_0x000101556278(uVar14,uVar16,uVar8);
      if ((uVar3 & 1) == 0) goto LAB_103552ff4;
    }
    func_0x000101556278(uVar11,uVar15,uVar7);
    uVar15 = param_1[0xc];
    uVar11 = param_1[0xb];
    uVar7 = param_1[0xd];
    uVar16 = param_2[0xc];
    uVar14 = param_2[0xb];
    uVar8 = param_2[0xd];
    uStack_130 = uVar14;
    uStack_128 = uVar16;
    uStack_120 = uVar8;
    uStack_110 = uVar11;
    uStack_108 = uVar15;
    uStack_100 = uVar7;
    if ((uVar11 & 0xff) == 2) {
      if ((uVar14 & 0xff) != 2) {
LAB_103552ed4:
        FUN_103559c70(&uStack_110,&uStack_150,0x112db94f0,&UNK_10d96af00);
        puVar4 = &uStack_130;
        puVar5 = &uStack_150;
        uVar3 = uVar7;
        uVar12 = uVar15;
        uVar13 = uVar11;
        uVar7 = uVar8;
        uVar15 = uVar16;
        uVar11 = uVar14;
        goto LAB_103552f00;
      }
      FUN_103559c70(&uStack_110,&uStack_150,0x112db94f0,&UNK_10d96af00);
      FUN_103559c70(&uStack_130,&uStack_150,0x112db94f0,&UNK_10d96af00);
    }
    else {
      if ((uVar14 & 0xff) == 2) goto LAB_103552ed4;
      if ((((uint)uVar14 ^ (uint)uVar11) & 1) != 0) {
        FUN_103559c70(&uStack_110,&uStack_150,0x112db94f0,&UNK_10d96af00);
        puVar4 = &uStack_130;
        puVar5 = &uStack_150;
        goto LAB_103552fcc;
      }
      FUN_103559c70(&uStack_110,&uStack_150,0x112db94f0,&UNK_10d96af00);
      FUN_103559c70(&uStack_130,&uStack_150,0x112db94f0,&UNK_10d96af00);
      uVar3 = uVar15;
      func_0x000100e25fcc(uVar15,uVar7,uVar16,uVar8);
      func_0x000101556278(uVar14,uVar16,uVar8);
      if ((uVar3 & 1) == 0) goto LAB_103552ff4;
    }
    func_0x000101556278(uVar11,uVar15,uVar7);
    uVar15 = param_1[0xf];
    uVar11 = param_1[0xe];
    uVar7 = param_1[0x10];
    uVar16 = param_2[0xf];
    uVar14 = param_2[0xe];
    uVar8 = param_2[0x10];
    uStack_170 = uVar14;
    uStack_168 = uVar16;
    uStack_160 = uVar8;
    uStack_150 = uVar11;
    uStack_148 = uVar15;
    uStack_140 = uVar7;
    if (uVar7 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_103553028;
      if ((float)uVar11 == (float)uVar14) {
        FUN_103559c70(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
        FUN_103559c70(&uStack_170,&uStack_190,0x112db6358,&UNK_10d961e20);
        uVar3 = uVar15;
        func_0x000100e25fcc(uVar15,uVar7,uVar16,uVar8);
        func_0x000100d55b58(uVar14,uVar16,uVar8);
        if ((uVar3 & 1) != 0) goto LAB_103553164;
      }
      else {
        uVar9 = 0x112db6358;
        puVar10 = &UNK_10d961e20;
        FUN_103559c70(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
        puVar4 = &uStack_170;
        puVar5 = &uStack_190;
LAB_10355376c:
        FUN_103559c70(puVar4,puVar5,uVar9,puVar10);
        func_0x000100d55b58(uVar14,uVar16,uVar8);
      }
LAB_103553794:
      func_0x000100d55b58(uVar11,uVar15,uVar7);
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_103553028:
        uVar9 = 0x112db6358;
        puVar10 = &UNK_10d961e20;
        FUN_103559c70(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
        puVar4 = &uStack_170;
        puVar5 = &uStack_190;
        uVar3 = uVar7;
        uVar12 = uVar15;
        uVar13 = uVar11;
        uVar7 = uVar8;
        uVar15 = uVar16;
        uVar11 = uVar14;
LAB_103553054:
        FUN_103559c70(puVar4,puVar5,uVar9,puVar10);
        func_0x000100d55b58(uVar13,uVar12,uVar3);
        goto LAB_103553794;
      }
      FUN_103559c70(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
      FUN_103559c70(&uStack_170,&uStack_190,0x112db6358,&UNK_10d961e20);
LAB_103553164:
      func_0x000100d55b58(uVar11,uVar15,uVar7);
      uVar15 = param_1[0x12];
      uVar11 = param_1[0x11];
      uVar7 = param_1[0x13];
      uVar16 = param_2[0x12];
      uVar14 = param_2[0x11];
      uVar8 = param_2[0x13];
      uStack_1b0 = uVar14;
      uStack_1a8 = uVar16;
      uStack_1a0 = uVar8;
      uStack_190 = uVar11;
      uStack_188 = uVar15;
      uStack_180 = uVar7;
      if ((uVar11 & 0xff) == 2) {
        if ((uVar14 & 0xff) != 2) {
LAB_103553710:
          FUN_103559c70(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
          puVar4 = &uStack_1b0;
          puVar5 = &uStack_1d0;
          uVar3 = uVar7;
          uVar12 = uVar15;
          uVar13 = uVar11;
          uVar7 = uVar8;
          uVar15 = uVar16;
          uVar11 = uVar14;
          goto LAB_103552f00;
        }
        FUN_103559c70(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        FUN_103559c70(&uStack_1b0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      }
      else {
        if ((uVar14 & 0xff) == 2) goto LAB_103553710;
        if ((((uint)uVar14 ^ (uint)uVar11) & 1) != 0) {
          FUN_103559c70(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
          puVar4 = &uStack_1b0;
          puVar5 = &uStack_1d0;
          goto LAB_103552fcc;
        }
        FUN_103559c70(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        FUN_103559c70(&uStack_1b0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        uVar3 = uVar15;
        func_0x000100e25fcc(uVar15,uVar7,uVar16,uVar8);
        func_0x000101556278(uVar14,uVar16,uVar8);
        if ((uVar3 & 1) == 0) goto LAB_103552ff4;
      }
      func_0x000101556278(uVar11,uVar15,uVar7);
      uVar15 = param_1[0x15];
      uVar11 = param_1[0x14];
      uVar7 = param_1[0x16];
      uVar16 = param_2[0x15];
      uVar14 = param_2[0x14];
      uVar8 = param_2[0x16];
      uStack_1f0 = uVar14;
      uStack_1e8 = uVar16;
      uStack_1e0 = uVar8;
      uStack_1d0 = uVar11;
      uStack_1c8 = uVar15;
      uStack_1c0 = uVar7;
      if ((uVar11 & 0xff) == 2) {
        if ((uVar14 & 0xff) != 2) {
LAB_1035537dc:
          FUN_103559c70(&uStack_1d0,&uStack_210,0x112db94f0,&UNK_10d96af00);
          puVar4 = &uStack_1f0;
          puVar5 = &uStack_210;
          uVar3 = uVar7;
          uVar12 = uVar15;
          uVar13 = uVar11;
          uVar7 = uVar8;
          uVar15 = uVar16;
          uVar11 = uVar14;
          goto LAB_103552f00;
        }
        FUN_103559c70(&uStack_1d0,&uStack_210,0x112db94f0,&UNK_10d96af00);
        FUN_103559c70(&uStack_1f0,&uStack_210,0x112db94f0,&UNK_10d96af00);
      }
      else {
        if ((uVar14 & 0xff) == 2) goto LAB_1035537dc;
        if ((((uint)uVar14 ^ (uint)uVar11) & 1) != 0) {
          FUN_103559c70(&uStack_1d0,&uStack_210,0x112db94f0,&UNK_10d96af00);
          puVar4 = &uStack_1f0;
          puVar5 = &uStack_210;
          goto LAB_103552fcc;
        }
        FUN_103559c70(&uStack_1d0,&uStack_210,0x112db94f0,&UNK_10d96af00);
        FUN_103559c70(&uStack_1f0,&uStack_210,0x112db94f0,&UNK_10d96af00);
        uVar3 = uVar15;
        func_0x000100e25fcc(uVar15,uVar7,uVar16,uVar8);
        func_0x000101556278(uVar14,uVar16,uVar8);
        if ((uVar3 & 1) == 0) goto LAB_103552ff4;
      }
      func_0x000101556278(uVar11,uVar15,uVar7);
      uVar15 = param_1[0x18];
      uVar11 = param_1[0x17];
      uVar7 = param_1[0x19];
      uVar16 = param_2[0x18];
      uVar14 = param_2[0x17];
      uVar8 = param_2[0x19];
      uStack_230 = uVar14;
      uStack_228 = uVar16;
      uStack_220 = uVar8;
      uStack_210 = uVar11;
      uStack_208 = uVar15;
      uStack_200 = uVar7;
      if ((uVar11 & 0xff) == 2) {
        if ((uVar14 & 0xff) != 2) {
LAB_1035538b8:
          FUN_103559c70(&uStack_210,&uStack_250,0x112db94f0,&UNK_10d96af00);
          puVar4 = &uStack_230;
          puVar5 = &uStack_250;
          uVar3 = uVar7;
          uVar12 = uVar15;
          uVar13 = uVar11;
          uVar7 = uVar8;
          uVar15 = uVar16;
          uVar11 = uVar14;
          goto LAB_103552f00;
        }
        FUN_103559c70(&uStack_210,&uStack_250,0x112db94f0,&UNK_10d96af00);
        FUN_103559c70(&uStack_230,&uStack_250,0x112db94f0,&UNK_10d96af00);
      }
      else {
        if ((uVar14 & 0xff) == 2) goto LAB_1035538b8;
        if ((((uint)uVar14 ^ (uint)uVar11) & 1) != 0) {
          FUN_103559c70(&uStack_210,&uStack_250,0x112db94f0,&UNK_10d96af00);
          puVar4 = &uStack_230;
          puVar5 = &uStack_250;
          goto LAB_103552fcc;
        }
        FUN_103559c70(&uStack_210,&uStack_250,0x112db94f0,&UNK_10d96af00);
        FUN_103559c70(&uStack_230,&uStack_250,0x112db94f0,&UNK_10d96af00);
        uVar3 = uVar15;
        func_0x000100e25fcc(uVar15,uVar7,uVar16,uVar8);
        func_0x000101556278(uVar14,uVar16,uVar8);
        if ((uVar3 & 1) == 0) goto LAB_103552ff4;
      }
      func_0x000101556278(uVar11,uVar15,uVar7);
      uVar15 = param_1[1];
      uVar7 = *param_1;
      uVar11 = param_1[2];
      uVar14 = param_2[1];
      uVar16 = *param_2;
      uVar8 = param_2[2];
      bVar1 = ((uVar14 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
      bVar2 = ((uVar8 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0;
      uStack_270 = uVar16;
      uStack_268 = uVar14;
      uStack_260 = uVar8;
      uStack_250 = uVar7;
      uStack_248 = uVar15;
      uStack_240 = uVar11;
      if ((((uVar15 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
         ((uVar11 & 0xf000000000000007) == 0xf000000000000007)) {
        if (bVar1 && bVar2) {
          FUN_103559c70(&uStack_250,&uStack_290,0x112f77e50,&UNK_10dbda8f0);
          FUN_103559c70(&uStack_270,&uStack_290,0x112f77e50,&UNK_10dbda8f0);
LAB_1035533b4:
          func_0x000100d55b74(uVar7,uVar15,uVar11);
LAB_1035533c4:
          uVar15 = param_1[0x1b];
          uVar11 = param_1[0x1a];
          uVar7 = param_1[0x1c];
          uVar16 = param_2[0x1b];
          uVar14 = param_2[0x1a];
          uVar8 = param_2[0x1c];
          uStack_2b0 = uVar14;
          uStack_2a8 = uVar16;
          uStack_2a0 = uVar8;
          uStack_290 = uVar11;
          uStack_288 = uVar15;
          uStack_280 = uVar7;
          if ((uVar11 & 0xff) == 2) {
            if ((uVar14 & 0xff) != 2) {
LAB_103553ad0:
              FUN_103559c70(&uStack_290,&uStack_2d0,0x112db94f0,&UNK_10d96af00);
              puVar4 = &uStack_2b0;
              puVar5 = &uStack_2d0;
              uVar3 = uVar7;
              uVar12 = uVar15;
              uVar13 = uVar11;
              uVar7 = uVar8;
              uVar15 = uVar16;
              uVar11 = uVar14;
              goto LAB_103552f00;
            }
            FUN_103559c70(&uStack_290,&uStack_2d0,0x112db94f0,&UNK_10d96af00);
            FUN_103559c70(&uStack_2b0,&uStack_2d0,0x112db94f0,&UNK_10d96af00);
          }
          else {
            if ((uVar14 & 0xff) == 2) goto LAB_103553ad0;
            if ((((uint)uVar14 ^ (uint)uVar11) & 1) != 0) {
              FUN_103559c70(&uStack_290,&uStack_2d0,0x112db94f0,&UNK_10d96af00);
              puVar4 = &uStack_2b0;
              puVar5 = &uStack_2d0;
              goto LAB_103552fcc;
            }
            FUN_103559c70(&uStack_290,&uStack_2d0,0x112db94f0,&UNK_10d96af00);
            FUN_103559c70(&uStack_2b0,&uStack_2d0,0x112db94f0,&UNK_10d96af00);
            uVar3 = uVar15;
            func_0x000100e25fcc(uVar15,uVar7,uVar16,uVar8);
            func_0x000101556278(uVar14,uVar16,uVar8);
            if ((uVar3 & 1) == 0) goto LAB_103552ff4;
          }
          func_0x000101556278(uVar11,uVar15,uVar7);
          uVar15 = param_1[0x1e];
          uVar11 = param_1[0x1d];
          uVar7 = param_1[0x1f];
          uVar16 = param_2[0x1e];
          uVar14 = param_2[0x1d];
          uVar8 = param_2[0x1f];
          uStack_2f0 = uVar14;
          uStack_2e8 = uVar16;
          uStack_2e0 = uVar8;
          uStack_2d0 = uVar11;
          uStack_2c8 = uVar15;
          uStack_2c0 = uVar7;
          if ((uVar11 & 0xff) == 2) {
            if ((uVar14 & 0xff) != 2) {
LAB_103553ca0:
              FUN_103559c70(&uStack_2d0,&uStack_310,0x112db94f0,&UNK_10d96af00);
              puVar4 = &uStack_2f0;
              puVar5 = &uStack_310;
              uVar3 = uVar7;
              uVar12 = uVar15;
              uVar13 = uVar11;
              uVar7 = uVar8;
              uVar15 = uVar16;
              uVar11 = uVar14;
              goto LAB_103552f00;
            }
            FUN_103559c70(&uStack_2d0,&uStack_310,0x112db94f0,&UNK_10d96af00);
            FUN_103559c70(&uStack_2f0,&uStack_310,0x112db94f0,&UNK_10d96af00);
          }
          else {
            if ((uVar14 & 0xff) == 2) goto LAB_103553ca0;
            if ((((uint)uVar14 ^ (uint)uVar11) & 1) != 0) {
              FUN_103559c70(&uStack_2d0,&uStack_310,0x112db94f0,&UNK_10d96af00);
              puVar4 = &uStack_2f0;
              puVar5 = &uStack_310;
              goto LAB_103552fcc;
            }
            FUN_103559c70(&uStack_2d0,&uStack_310,0x112db94f0,&UNK_10d96af00);
            FUN_103559c70(&uStack_2f0,&uStack_310,0x112db94f0,&UNK_10d96af00);
            uVar3 = uVar15;
            func_0x000100e25fcc(uVar15,uVar7,uVar16,uVar8);
            func_0x000101556278(uVar14,uVar16,uVar8);
            if ((uVar3 & 1) == 0) goto LAB_103552ff4;
          }
          func_0x000101556278(uVar11,uVar15,uVar7);
          uVar15 = param_1[0x21];
          uVar11 = param_1[0x20];
          uVar7 = param_1[0x22];
          uVar16 = param_2[0x21];
          uVar14 = param_2[0x20];
          uVar8 = param_2[0x22];
          uStack_330 = uVar14;
          uStack_328 = uVar16;
          uStack_320 = uVar8;
          uStack_310 = uVar11;
          uStack_308 = uVar15;
          uStack_300 = uVar7;
          if (uVar7 >> 0x3c < 0xf) {
            if (0xe < uVar8 >> 0x3c) goto LAB_103553d78;
            if (uVar11 != uVar14) {
              uVar9 = 0x112db6f48;
              puVar10 = &UNK_10d969b40;
              FUN_103559c70(&uStack_310,&uStack_350,0x112db6f48,&UNK_10d969b40);
              puVar4 = &uStack_330;
              puVar5 = &uStack_350;
              goto LAB_10355376c;
            }
            FUN_103559c70(&uStack_310,&uStack_350,0x112db6f48,&UNK_10d969b40);
            FUN_103559c70(&uStack_330,&uStack_350,0x112db6f48,&UNK_10d969b40);
            uVar14 = uVar15;
            func_0x000100e25fcc(uVar15,uVar7,uVar16,uVar8);
            func_0x000100d55b58(uVar11,uVar16,uVar8);
            if ((uVar14 & 1) == 0) goto LAB_103553794;
          }
          else {
            if (uVar8 >> 0x3c < 0xf) {
LAB_103553d78:
              uVar9 = 0x112db6f48;
              puVar10 = &UNK_10d969b40;
              FUN_103559c70(&uStack_310,&uStack_350,0x112db6f48,&UNK_10d969b40);
              puVar4 = &uStack_330;
              puVar5 = &uStack_350;
              uVar3 = uVar7;
              uVar12 = uVar15;
              uVar13 = uVar11;
              uVar7 = uVar8;
              uVar15 = uVar16;
              uVar11 = uVar14;
              goto LAB_103553054;
            }
            FUN_103559c70(&uStack_310,&uStack_350,0x112db6f48,&UNK_10d969b40);
            FUN_103559c70(&uStack_330,&uStack_350,0x112db6f48,&UNK_10d969b40);
          }
          func_0x000100d55b58(uVar11,uVar15,uVar7);
          uVar15 = param_1[0x24];
          uVar11 = param_1[0x23];
          uVar7 = param_1[0x25];
          uVar16 = param_2[0x24];
          uVar14 = param_2[0x23];
          uVar8 = param_2[0x25];
          uStack_370 = uVar14;
          uStack_368 = uVar16;
          uStack_360 = uVar8;
          uStack_350 = uVar11;
          uStack_348 = uVar15;
          uStack_340 = uVar7;
          if (uVar7 >> 0x3c < 0xf) {
            if (0xe < uVar8 >> 0x3c) goto LAB_103553e8c;
            if (uVar11 != uVar14) {
              uVar9 = 0x112db6f48;
              puVar10 = &UNK_10d969b40;
              FUN_103559c70(&uStack_350,&uStack_390,0x112db6f48,&UNK_10d969b40);
              puVar4 = &uStack_370;
              puVar5 = &uStack_390;
              goto LAB_10355376c;
            }
            FUN_103559c70(&uStack_350,&uStack_390,0x112db6f48,&UNK_10d969b40);
            FUN_103559c70(&uStack_370,&uStack_390,0x112db6f48,&UNK_10d969b40);
            uVar14 = uVar15;
            func_0x000100e25fcc(uVar15,uVar7,uVar16,uVar8);
            func_0x000100d55b58(uVar11,uVar16,uVar8);
            if ((uVar14 & 1) == 0) goto LAB_103553794;
          }
          else {
            if (uVar8 >> 0x3c < 0xf) {
LAB_103553e8c:
              uVar9 = 0x112db6f48;
              puVar10 = &UNK_10d969b40;
              FUN_103559c70(&uStack_350,&uStack_390,0x112db6f48,&UNK_10d969b40);
              puVar4 = &uStack_370;
              puVar5 = &uStack_390;
              uVar3 = uVar7;
              uVar12 = uVar15;
              uVar13 = uVar11;
              uVar7 = uVar8;
              uVar15 = uVar16;
              uVar11 = uVar14;
              goto LAB_103553054;
            }
            FUN_103559c70(&uStack_350,&uStack_390,0x112db6f48,&UNK_10d969b40);
            FUN_103559c70(&uStack_370,&uStack_390,0x112db6f48,&UNK_10d969b40);
          }
          func_0x000100d55b58(uVar11,uVar15,uVar7);
          uVar15 = param_1[0x27];
          uVar11 = param_1[0x26];
          uVar7 = param_1[0x28];
          uVar16 = param_2[0x27];
          uVar14 = param_2[0x26];
          uVar8 = param_2[0x28];
          uStack_3b0 = uVar14;
          uStack_3a8 = uVar16;
          uStack_3a0 = uVar8;
          uStack_390 = uVar11;
          uStack_388 = uVar15;
          uStack_380 = uVar7;
          if (uVar7 >> 0x3c < 0xf) {
            if (0xe < uVar8 >> 0x3c) goto LAB_103553f68;
            if (uVar11 != uVar14) {
              uVar9 = 0x112db6f48;
              puVar10 = &UNK_10d969b40;
              FUN_103559c70(&uStack_390,&uStack_3d0,0x112db6f48,&UNK_10d969b40);
              puVar4 = &uStack_3b0;
              puVar5 = &uStack_3d0;
              goto LAB_10355376c;
            }
            FUN_103559c70(&uStack_390,&uStack_3d0,0x112db6f48,&UNK_10d969b40);
            FUN_103559c70(&uStack_3b0,&uStack_3d0,0x112db6f48,&UNK_10d969b40);
            uVar14 = uVar15;
            func_0x000100e25fcc(uVar15,uVar7,uVar16,uVar8);
            func_0x000100d55b58(uVar11,uVar16,uVar8);
            if ((uVar14 & 1) == 0) goto LAB_103553794;
          }
          else {
            if (uVar8 >> 0x3c < 0xf) {
LAB_103553f68:
              uVar9 = 0x112db6f48;
              puVar10 = &UNK_10d969b40;
              FUN_103559c70(&uStack_390,&uStack_3d0,0x112db6f48,&UNK_10d969b40);
              puVar4 = &uStack_3b0;
              puVar5 = &uStack_3d0;
              uVar3 = uVar7;
              uVar12 = uVar15;
              uVar13 = uVar11;
              uVar7 = uVar8;
              uVar15 = uVar16;
              uVar11 = uVar14;
              goto LAB_103553054;
            }
            FUN_103559c70(&uStack_390,&uStack_3d0,0x112db6f48,&UNK_10d969b40);
            FUN_103559c70(&uStack_3b0,&uStack_3d0,0x112db6f48,&UNK_10d969b40);
          }
          func_0x000100d55b58(uVar11,uVar15,uVar7);
          uVar15 = param_1[0x2a];
          uVar11 = param_1[0x29];
          uVar7 = param_1[0x2b];
          uVar16 = param_2[0x2a];
          uVar14 = param_2[0x29];
          uVar8 = param_2[0x2b];
          uStack_3f0 = uVar14;
          uStack_3e8 = uVar16;
          uStack_3e0 = uVar8;
          uStack_3d0 = uVar11;
          uStack_3c8 = uVar15;
          uStack_3c0 = uVar7;
          if (uVar7 >> 0x3c < 0xf) {
            if (0xe < uVar8 >> 0x3c) goto LAB_103554044;
            if ((float)uVar11 != (float)uVar14) {
              uVar9 = 0x112db6358;
              puVar10 = &UNK_10d961e20;
              FUN_103559c70(&uStack_3d0,auStack_408,0x112db6358,&UNK_10d961e20);
              puVar4 = &uStack_3f0;
              puVar5 = auStack_408;
              goto LAB_10355376c;
            }
            FUN_103559c70(&uStack_3d0,auStack_408,0x112db6358,&UNK_10d961e20);
            FUN_103559c70(&uStack_3f0,auStack_408,0x112db6358,&UNK_10d961e20);
            uVar3 = uVar15;
            func_0x000100e25fcc(uVar15,uVar7,uVar16,uVar8);
            func_0x000100d55b58(uVar14,uVar16,uVar8);
            if ((uVar3 & 1) == 0) goto LAB_103553794;
          }
          else {
            if (uVar8 >> 0x3c < 0xf) {
LAB_103554044:
              uVar9 = 0x112db6358;
              puVar10 = &UNK_10d961e20;
              FUN_103559c70(&uStack_3d0,auStack_408,0x112db6358,&UNK_10d961e20);
              puVar4 = &uStack_3f0;
              puVar5 = auStack_408;
              uVar3 = uVar7;
              uVar12 = uVar15;
              uVar13 = uVar11;
              uVar7 = uVar8;
              uVar15 = uVar16;
              uVar11 = uVar14;
              goto LAB_103553054;
            }
            FUN_103559c70(&uStack_3d0,auStack_408,0x112db6358,&UNK_10d961e20);
            FUN_103559c70(&uStack_3f0,auStack_408,0x112db6358,&UNK_10d961e20);
          }
          func_0x000100d55b58(uVar11,uVar15,uVar7);
          uVar7 = param_1[3];
          func_0x000100e25fcc(uVar7,param_1[4],param_2[3],param_2[4]);
          uVar6 = (uint)uVar7;
          goto LAB_103552ffc;
        }
LAB_103553990:
        FUN_103559c70(&uStack_250,&uStack_290,0x112f77e50,&UNK_10dbda8f0);
        FUN_103559c70(&uStack_270,&uStack_290,0x112f77e50,&UNK_10dbda8f0);
        func_0x000100d55b74(uVar7,uVar15,uVar11);
        uVar7 = uVar16;
        uVar15 = uVar14;
        uVar11 = uVar8;
LAB_103553c58:
        func_0x000100d55b74(uVar7,uVar15,uVar11);
      }
      else {
        if (bVar1 && bVar2) goto LAB_103553990;
        uVar6 = (uint)(uVar11 >> 0x3e);
        uVar3 = uVar7;
        if (uVar6 == 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_103553c04;
          FUN_103559c70(&uStack_250,&uStack_290,0x112f77e50,&UNK_10dbda8f0);
          FUN_103559c70(&uStack_270,&uStack_290,0x112f77e50,&UNK_10dbda8f0);
          FUN_103598e38(uVar7,uVar15,uVar11,uVar16,uVar14,uVar8);
LAB_103553b5c:
          func_0x000100d55b74(uVar16,uVar14,uVar8);
          if ((uVar3 & 1) != 0) goto LAB_1035533b4;
          goto LAB_103553c58;
        }
        if (uVar6 == 1) {
          if (uVar8 >> 0x3e == 1) {
            FUN_103559c70(&uStack_250,&uStack_290,0x112f77e50,&UNK_10dbda8f0);
            FUN_103559c70(&uStack_270,&uStack_290,0x112f77e50,&UNK_10dbda8f0);
            FUN_1035c9484(uVar7,uVar15,uVar11 & 0x3fffffffffffffff,uVar16,uVar14,
                          uVar8 & 0x3fffffffffffffff);
            goto LAB_103553b5c;
          }
LAB_103553c04:
          FUN_103559c70(&uStack_250,&uStack_290,0x112f77e50,&UNK_10dbda8f0);
          FUN_103559c70(&uStack_270,&uStack_290,0x112f77e50,&UNK_10dbda8f0);
          func_0x000100d55b74(uVar16,uVar14,uVar8);
          goto LAB_103553c58;
        }
        if (-0x4000000000000001 < (long)uVar8) goto LAB_103553c04;
        FUN_103559c70(&uStack_250,&uStack_290,0x112f77e50,&UNK_10dbda8f0);
        FUN_103559c70(&uStack_270,&uStack_290,0x112f77e50,&UNK_10dbda8f0);
        FUN_10358180c(uVar7,uVar15,uVar11 & 0x3fffffffffffffff,uVar16,uVar14,
                      uVar8 & 0x3fffffffffffffff);
        func_0x000100d55b74(uVar16,uVar14,uVar8);
        func_0x000100d55b74(uVar7,uVar15,uVar11);
        if ((uVar3 & 1) != 0) goto LAB_1035533c4;
      }
    }
  }
  else {
    if ((uVar14 & 0xff) == 2) goto LAB_103552d88;
    if ((((uint)uVar14 ^ (uint)uVar11) & 1) == 0) {
      FUN_103559c70(&uStack_90,&uStack_d0,0x112db94f0,&UNK_10d96af00);
      FUN_103559c70(&uStack_b0,&uStack_d0,0x112db94f0,&UNK_10d96af00);
      uVar3 = uVar15;
      func_0x000100e25fcc(uVar15,uVar7,uVar16,uVar8);
      func_0x000101556278(uVar14,uVar16,uVar8);
      if ((uVar3 & 1) != 0) goto LAB_103552bd8;
    }
    else {
      FUN_103559c70(&uStack_90,&uStack_d0,0x112db94f0,&UNK_10d96af00);
      puVar4 = &uStack_b0;
      puVar5 = &uStack_d0;
LAB_103552fcc:
      FUN_103559c70(puVar4,puVar5,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar14,uVar16,uVar8);
    }
LAB_103552ff4:
    func_0x000101556278(uVar11,uVar15,uVar7);
  }
  uVar6 = 0;
LAB_103552ffc:
  return uVar6 & 1;
}



/* Entry: 103554bd8; end: 103554bf7;  */

int FUN_103554bd8(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0xb < *(byte *)(param_1 + 0xc0)) {
    iVar1 = (*(byte *)(param_1 + 0xc0) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Entry: 103554bf8; end: 103554c2b;  */

undefined8 FUN_103554bf8(undefined8 param_1,undefined8 param_2)

{
  FUN_1035574a0(param_2,param_1,&UNK_110664848);
  return param_2;
}



/* Entry: 103554c2c; end: 103554c9f;  */

void FUN_103554c2c(void)

{
  return;
}



/* Entry: 103554ca0; end: 1035553df;  */

void FUN_103554ca0(undefined8 *param_1)

{
  undefined8 *puVar1;
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
  undefined1 uStack_110;
  
  uStack_1c8 = param_1[1];
  uStack_1d0 = *param_1;
  uStack_1b8 = param_1[3];
  uStack_1c0 = param_1[2];
  uStack_1a8 = param_1[5];
  uStack_1b0 = param_1[4];
  uStack_198 = param_1[7];
  uStack_1a0 = param_1[6];
  uStack_188 = param_1[9];
  uStack_190 = param_1[8];
  uStack_178 = param_1[0xb];
  uStack_180 = param_1[10];
  uStack_168 = param_1[0xd];
  uStack_170 = param_1[0xc];
  uStack_158 = param_1[0xf];
  uStack_160 = param_1[0xe];
  uStack_148 = param_1[0x11];
  uStack_150 = param_1[0x10];
  uStack_138 = param_1[0x13];
  uStack_140 = param_1[0x12];
  uStack_128 = param_1[0x15];
  uStack_130 = param_1[0x14];
  uStack_118 = param_1[0x17];
  uStack_120 = param_1[0x16];
  uStack_110 = *(undefined1 *)(param_1 + 0x18);
  puVar1 = &uStack_1d0;
  func_0x000103554bec();
                    /* WARNING: Could not recover jumptable at 0x000103554d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10dbd9d6e + ((ulong)puVar1 & 0xffffffff) * 2) * 4 + 0x103554d18
            ))();
  return;
}



/* Entry: 1035553e0; end: 103555487;  */

void FUN_1035553e0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      param_3 = param_3 & 0x3fffffffffffffff;
    }
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    param_3 = param_3 & 0x3fffffffffffffff;
  }
  func_0x00010006c00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 103555488; end: 1035554c7;  */

void FUN_103555488(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77a70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd9ec0;
  func_0x000107c61520(&UNK_10dbd9ec0,&UNK_110664720);
  puRam0000000112f77a70 = puVar1;
  return;
}



/* Entry: 1035554c8; end: 103555c1b;  */

uint FUN_1035554c8(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_8e8 [200];
  long lStack_820;
  long lStack_818;
  long lStack_810;
  long lStack_808;
  long lStack_800;
  long lStack_7f8;
  long lStack_7f0;
  long lStack_7e8;
  long lStack_7e0;
  long lStack_7d8;
  long lStack_7d0;
  long lStack_7c8;
  long lStack_7c0;
  long lStack_7b8;
  long lStack_7b0;
  long lStack_7a8;
  long lStack_7a0;
  long lStack_798;
  long lStack_790;
  long lStack_788;
  long lStack_780;
  long lStack_778;
  long lStack_770;
  long lStack_768;
  undefined1 uStack_760;
  long lStack_750;
  long lStack_748;
  long lStack_740;
  long lStack_738;
  long lStack_730;
  long lStack_728;
  long lStack_720;
  long lStack_718;
  long lStack_710;
  long lStack_708;
  long lStack_700;
  long lStack_6f8;
  long lStack_6f0;
  long lStack_6e8;
  long lStack_6e0;
  long lStack_6d8;
  long lStack_6d0;
  long lStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  long lStack_6a8;
  long lStack_6a0;
  long lStack_698;
  undefined1 uStack_690;
  long lStack_680;
  long lStack_678;
  long lStack_670;
  long lStack_668;
  long lStack_660;
  long lStack_658;
  long lStack_650;
  long lStack_648;
  long lStack_640;
  long lStack_638;
  long lStack_630;
  long lStack_628;
  long lStack_620;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  undefined1 uStack_5c0;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  undefined1 uStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  undefined1 uStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined1 uStack_2a0;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 uStack_1d0;
  long lStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  long lStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  long lStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long lStack_160;
  ulong uStack_158;
  ulong uStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_80;
  
  uVar12 = param_1[0x20];
  lVar11 = param_1[0x1f];
  uVar7 = param_1[0x21];
  uVar13 = param_2[0x20];
  lVar4 = param_2[0x1f];
  uVar10 = param_2[0x21];
  lStack_180 = lVar4;
  uStack_178 = uVar13;
  uStack_170 = uVar10;
  lStack_160 = lVar11;
  uStack_158 = uVar12;
  uStack_150 = uVar7;
  if (uVar7 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_103555818;
    if ((int)lVar11 == (int)lVar4) {
      FUN_103559c70(&lStack_160,&lStack_4f0,0x112db80f8,&UNK_10d9671e0);
      FUN_103559c70(&lStack_180,&lStack_4f0,0x112db80f8,&UNK_10d9671e0);
      uVar5 = uVar12;
      func_0x000100e25fcc(uVar12,uVar7,uVar13,uVar10);
      func_0x000100d55b58(lVar4,uVar13,uVar10);
      if ((uVar5 & 1) != 0) goto LAB_103555574;
    }
    else {
      FUN_103559c70(&lStack_160,&lStack_4f0,0x112db80f8,&UNK_10d9671e0);
      plVar6 = &lStack_180;
LAB_1035559e4:
      FUN_103559c70(plVar6,&lStack_4f0,0x112db80f8,&UNK_10d9671e0);
      func_0x000100d55b58(lVar4,uVar13,uVar10);
    }
LAB_103555a10:
    func_0x000100d55b58(lVar11,uVar12,uVar7);
  }
  else {
    if (uVar10 >> 0x3c < 0xf) {
LAB_103555818:
      FUN_103559c70(&lStack_160,&lStack_4f0,0x112db80f8,&UNK_10d9671e0);
      plVar6 = &lStack_180;
      uVar5 = uVar7;
      uVar9 = uVar12;
      lVar8 = lVar11;
      uVar7 = uVar10;
      uVar12 = uVar13;
      lVar11 = lVar4;
LAB_1035558ec:
      FUN_103559c70(plVar6,&lStack_4f0,0x112db80f8,&UNK_10d9671e0);
      func_0x000100d55b58(lVar8,uVar9,uVar5);
      goto LAB_103555a10;
    }
    FUN_103559c70(&lStack_160,&lStack_4f0,0x112db80f8,&UNK_10d9671e0);
    FUN_103559c70(&lStack_180,&lStack_4f0,0x112db80f8,&UNK_10d9671e0);
LAB_103555574:
    func_0x000100d55b58(lVar11,uVar12,uVar7);
    uVar12 = param_1[0x23];
    lVar11 = param_1[0x22];
    uVar7 = param_1[0x24];
    uVar13 = param_2[0x23];
    lVar4 = param_2[0x22];
    uVar10 = param_2[0x24];
    lStack_1c0 = lVar4;
    uStack_1b8 = uVar13;
    uStack_1b0 = uVar10;
    lStack_1a0 = lVar11;
    uStack_198 = uVar12;
    uStack_190 = uVar7;
    if (uVar7 >> 0x3c < 0xf) {
      if (0xe < uVar10 >> 0x3c) goto LAB_1035558c4;
      if ((int)lVar11 != (int)lVar4) {
        FUN_103559c70(&lStack_1a0,&lStack_4f0,0x112db80f8,&UNK_10d9671e0);
        plVar6 = &lStack_1c0;
        goto LAB_1035559e4;
      }
      FUN_103559c70(&lStack_1a0,&lStack_4f0,0x112db80f8,&UNK_10d9671e0);
      FUN_103559c70(&lStack_1c0,&lStack_4f0,0x112db80f8,&UNK_10d9671e0);
      uVar5 = uVar12;
      func_0x000100e25fcc(uVar12,uVar7,uVar13,uVar10);
      func_0x000100d55b58(lVar4,uVar13,uVar10);
      if ((uVar5 & 1) == 0) goto LAB_103555a10;
    }
    else {
      if (uVar10 >> 0x3c < 0xf) {
LAB_1035558c4:
        FUN_103559c70(&lStack_1a0,&lStack_4f0,0x112db80f8,&UNK_10d9671e0);
        plVar6 = &lStack_1c0;
        uVar5 = uVar7;
        uVar9 = uVar12;
        lVar8 = lVar11;
        uVar7 = uVar10;
        uVar12 = uVar13;
        lVar11 = lVar4;
        goto LAB_1035558ec;
      }
      FUN_103559c70(&lStack_1a0,&lStack_4f0,0x112db80f8,&UNK_10d9671e0);
      FUN_103559c70(&lStack_1c0,&lStack_4f0,0x112db80f8,&UNK_10d9671e0);
    }
    func_0x000100d55b58(lVar11,uVar12,uVar7);
    lVar4 = *param_1;
    lVar8 = *param_2;
    lVar11 = param_2[1];
    func_0x00010355a214(lVar4,(char)param_1[1]);
    func_0x00010355a214(lVar8,(char)lVar11);
    if (lVar4 == lVar8) {
      lVar4 = param_1[2];
      lVar8 = param_2[2];
      lVar11 = param_2[3];
      func_0x000103559d2c(lVar4,(char)param_1[3]);
      func_0x000103559d2c(lVar8,(char)lVar11);
      if (lVar4 == lVar8) {
        lStack_458 = param_1[0x17];
        lStack_460 = param_1[0x16];
        lStack_1e8 = param_1[0x19];
        lStack_1f0 = param_1[0x18];
        lStack_448 = param_1[0x19];
        lStack_450 = param_1[0x18];
        lStack_1d8 = param_1[0x1b];
        lStack_1e0 = param_1[0x1a];
        lStack_498 = param_1[0xf];
        lStack_4a0 = param_1[0xe];
        lStack_228 = param_1[0x11];
        lStack_230 = param_1[0x10];
        lStack_488 = param_1[0x11];
        lStack_490 = param_1[0x10];
        lStack_218 = param_1[0x13];
        lStack_220 = param_1[0x12];
        lStack_478 = param_1[0x13];
        lStack_480 = param_1[0x12];
        lStack_208 = param_1[0x15];
        lStack_210 = param_1[0x14];
        lStack_468 = param_1[0x15];
        lStack_470 = param_1[0x14];
        lStack_1f8 = param_1[0x17];
        lStack_200 = param_1[0x16];
        lStack_4d8 = param_1[7];
        lStack_4e0 = param_1[6];
        lStack_268 = param_1[9];
        lStack_270 = param_1[8];
        lStack_4c8 = param_1[9];
        lStack_4d0 = param_1[8];
        lStack_258 = param_1[0xb];
        lStack_260 = param_1[10];
        lStack_4b8 = param_1[0xb];
        lStack_4c0 = param_1[10];
        lStack_248 = param_1[0xd];
        lStack_250 = param_1[0xc];
        lStack_4a8 = param_1[0xd];
        lStack_4b0 = param_1[0xc];
        lStack_238 = param_1[0xf];
        lStack_240 = param_1[0xe];
        lStack_288 = param_1[5];
        lStack_290 = param_1[4];
        lStack_278 = param_1[7];
        lStack_280 = param_1[6];
        lStack_4e8 = param_1[5];
        lStack_4f0 = param_1[4];
        lStack_390 = param_2[0x17];
        lStack_398 = param_2[0x16];
        lStack_2b8 = param_2[0x19];
        lStack_2c0 = param_2[0x18];
        lStack_380 = param_2[0x19];
        lStack_388 = param_2[0x18];
        lStack_2a8 = param_2[0x1b];
        lStack_2b0 = param_2[0x1a];
        lStack_3d0 = param_2[0xf];
        lStack_3d8 = param_2[0xe];
        lStack_2f8 = param_2[0x11];
        lStack_300 = param_2[0x10];
        lStack_3c0 = param_2[0x11];
        lStack_3c8 = param_2[0x10];
        lStack_2e8 = param_2[0x13];
        lStack_2f0 = param_2[0x12];
        lStack_3b0 = param_2[0x13];
        lStack_3b8 = param_2[0x12];
        lStack_2d8 = param_2[0x15];
        lStack_2e0 = param_2[0x14];
        lStack_3a0 = param_2[0x15];
        lStack_3a8 = param_2[0x14];
        lStack_2c8 = param_2[0x17];
        lStack_2d0 = param_2[0x16];
        lStack_410 = param_2[7];
        lStack_418 = param_2[6];
        lStack_338 = param_2[9];
        lStack_340 = param_2[8];
        lStack_400 = param_2[9];
        lStack_408 = param_2[8];
        lStack_328 = param_2[0xb];
        lStack_330 = param_2[10];
        lStack_3e0 = param_2[0xd];
        lStack_3e8 = param_2[0xc];
        lStack_308 = param_2[0xf];
        lStack_310 = param_2[0xe];
        lStack_3f0 = param_2[0xb];
        lStack_3f8 = param_2[10];
        lStack_318 = param_2[0xd];
        lStack_320 = param_2[0xc];
        lStack_358 = param_2[5];
        lStack_360 = param_2[4];
        lStack_348 = param_2[7];
        lStack_350 = param_2[6];
        lStack_428 = param_2[4];
        lStack_420 = param_2[5];
        lStack_438 = param_1[0x1b];
        lStack_440 = param_1[0x1a];
        iVar2 = (int)&lStack_428;
        lStack_370 = param_2[0x1b];
        lStack_378 = param_2[0x1a];
        uStack_1d0 = (undefined1)param_1[0x1c];
        uStack_2a0 = (undefined1)param_2[0x1c];
        uStack_430 = (undefined1)param_1[0x1c];
        uStack_368 = (undefined1)param_2[0x1c];
        iVar1 = (int)&lStack_4f0;
        FUN_103554bd8();
        if (iVar1 == 1) {
          FUN_103554bd8();
          if (iVar2 == 1) {
            lStack_5d8 = lStack_448;
            lStack_5e0 = lStack_450;
            lStack_5c8 = lStack_438;
            lStack_5d0 = lStack_440;
            uStack_5c0 = uStack_430;
            lStack_618 = lStack_488;
            lStack_620 = lStack_490;
            lStack_608 = lStack_478;
            lStack_610 = lStack_480;
            lStack_5f8 = lStack_468;
            lStack_600 = lStack_470;
            lStack_5e8 = lStack_458;
            lStack_5f0 = lStack_460;
            lStack_658 = lStack_4c8;
            lStack_660 = lStack_4d0;
            lStack_648 = lStack_4b8;
            lStack_650 = lStack_4c0;
            lStack_638 = lStack_4a8;
            lStack_640 = lStack_4b0;
            lStack_628 = lStack_498;
            lStack_630 = lStack_4a0;
            lStack_678 = lStack_4e8;
            lStack_680 = lStack_4f0;
            lStack_668 = lStack_4d8;
            lStack_670 = lStack_4e0;
            FUN_103559c70(&lStack_290,&lStack_140,0x112f73130,&UNK_10dbce400);
            FUN_103559c70(&lStack_360,&lStack_140,0x112f73130,&UNK_10dbce400);
            func_0x000103559bf0(&lStack_680,0x112f73130,&UNK_10dbce400);
LAB_103555c0c:
            lVar11 = param_1[0x1d];
            func_0x000100e25fcc(lVar11,param_1[0x1e],param_2[0x1d],param_2[0x1e]);
            uVar3 = (uint)lVar11;
            goto LAB_103555a18;
          }
        }
        else {
          lStack_6a8 = lStack_448;
          lStack_6b0 = lStack_450;
          lStack_698 = lStack_438;
          lStack_6a0 = lStack_440;
          uStack_690 = uStack_430;
          lStack_6e8 = lStack_488;
          lStack_6f0 = lStack_490;
          lStack_6d8 = lStack_478;
          lStack_6e0 = lStack_480;
          lStack_6c8 = lStack_468;
          lStack_6d0 = lStack_470;
          lStack_6b8 = lStack_458;
          lStack_6c0 = lStack_460;
          lStack_728 = lStack_4c8;
          lStack_730 = lStack_4d0;
          lStack_718 = lStack_4b8;
          lStack_720 = lStack_4c0;
          lStack_708 = lStack_4a8;
          lStack_710 = lStack_4b0;
          lStack_6f8 = lStack_498;
          lStack_700 = lStack_4a0;
          lStack_748 = lStack_4e8;
          lStack_750 = lStack_4f0;
          lStack_738 = lStack_4d8;
          lStack_740 = lStack_4e0;
          FUN_103554bd8();
          if (iVar2 != 1) {
            lStack_778 = lStack_380;
            lStack_780 = lStack_388;
            lStack_768 = lStack_370;
            lStack_770 = lStack_378;
            lStack_7b8 = lStack_3c0;
            lStack_7c0 = lStack_3c8;
            lStack_7a8 = lStack_3b0;
            lStack_7b0 = lStack_3b8;
            lStack_798 = lStack_3a0;
            lStack_7a0 = lStack_3a8;
            lStack_788 = lStack_390;
            lStack_790 = lStack_398;
            lStack_7f8 = lStack_400;
            lStack_800 = lStack_408;
            lStack_7e8 = lStack_3f0;
            lStack_7f0 = lStack_3f8;
            lStack_7d8 = lStack_3e0;
            lStack_7e0 = lStack_3e8;
            lStack_7c8 = lStack_3d0;
            lStack_7d0 = lStack_3d8;
            lStack_818 = lStack_420;
            lStack_820 = lStack_428;
            lStack_808 = lStack_410;
            lStack_810 = lStack_418;
            lStack_5d8 = lStack_380;
            lStack_5e0 = lStack_388;
            lStack_5c8 = lStack_370;
            lStack_5d0 = lStack_378;
            lStack_618 = lStack_3c0;
            lStack_620 = lStack_3c8;
            lStack_608 = lStack_3b0;
            lStack_610 = lStack_3b8;
            lStack_5f8 = lStack_3a0;
            lStack_600 = lStack_3a8;
            lStack_5e8 = lStack_390;
            lStack_5f0 = lStack_398;
            lStack_658 = lStack_400;
            lStack_660 = lStack_408;
            lStack_648 = lStack_3f0;
            lStack_650 = lStack_3f8;
            lStack_638 = lStack_3e0;
            lStack_640 = lStack_3e8;
            lStack_628 = lStack_3d0;
            lStack_630 = lStack_3d8;
            lStack_678 = lStack_420;
            lStack_680 = lStack_428;
            lStack_668 = lStack_410;
            lStack_670 = lStack_418;
            lStack_a8 = lStack_6b8;
            lStack_b0 = lStack_6c0;
            lStack_98 = lStack_6a8;
            lStack_a0 = lStack_6b0;
            lStack_88 = lStack_698;
            lStack_90 = lStack_6a0;
            lStack_d8 = lStack_6e8;
            lStack_e0 = lStack_6f0;
            uStack_760 = uStack_368;
            uStack_5c0 = uStack_368;
            uStack_80 = uStack_690;
            lStack_c8 = lStack_6d8;
            lStack_d0 = lStack_6e0;
            lStack_b8 = lStack_6c8;
            lStack_c0 = lStack_6d0;
            lStack_118 = lStack_728;
            lStack_120 = lStack_730;
            lStack_108 = lStack_718;
            lStack_110 = lStack_720;
            lStack_f8 = lStack_708;
            lStack_100 = lStack_710;
            lStack_e8 = lStack_6f8;
            lStack_f0 = lStack_700;
            lStack_138 = lStack_748;
            lStack_140 = lStack_750;
            lStack_128 = lStack_738;
            lStack_130 = lStack_740;
            FUN_103559c70(&lStack_290,auStack_8e8,0x112f73130,&UNK_10dbce400);
            FUN_103559c70(&lStack_360,auStack_8e8,0x112f73130,&UNK_10dbce400);
            plVar6 = &lStack_140;
            FUN_103554ca0(plVar6,&lStack_680);
            func_0x000103559bf0(&lStack_820,0x112f73130,&UNK_10dbce400);
            func_0x000103559bf0(&lStack_4f0,0x112f73130,&UNK_10dbce400);
            if (((ulong)plVar6 & 1) != 0) goto LAB_103555c0c;
            goto LAB_103555a14;
          }
        }
        func_0x000107c610b4(&lStack_680,&lStack_4f0,0x189);
        FUN_103559c70(&lStack_290,&lStack_140,0x112f73130,&UNK_10dbce400);
        FUN_103559c70(&lStack_360,&lStack_140,0x112f73130,&UNK_10dbce400);
        func_0x000103559bf0(&lStack_680,0x112f77e38,&UNK_10dbda6a0);
      }
    }
  }
LAB_103555a14:
  uVar3 = 0;
LAB_103555a18:
  return uVar3 & 1;
}



/* Entry: 103555c1c; end: 103555d1b;  */

void FUN_103555c1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77a80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd9f98;
  func_0x000107c61520(&UNK_10dbd9f98,&UNK_1106647a0);
  puRam0000000112f77a80 = puVar1;
  return;
}



/* Entry: 103555d1c; end: 103555d3f;  */

void FUN_103555d1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103555d40();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103555d40; end: 103555d7f;  */

void FUN_103555d40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77ab8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd9e98;
  func_0x000107c61520(&UNK_10dbd9e98,&UNK_110664720);
  puRam0000000112f77ab8 = puVar1;
  return;
}



/* Entry: 103555d80; end: 103555d97;  */

void FUN_103555d80(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103555488();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035028d4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103555d98; end: 103555dd7;  */

void FUN_103555d98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd9f00;
  func_0x000107c61520(&UNK_10dbd9f00,&UNK_110664720);
  puRam0000000112f77ac0 = puVar1;
  return;
}



/* Entry: 103555dd8; end: 103555dfb;  */

void FUN_103555dd8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103555dfc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103555dfc; end: 103555e3b;  */

void FUN_103555dfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77ac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd9f70;
  func_0x000107c61520(&UNK_10dbd9f70,&UNK_1106647a0);
  puRam0000000112f77ac8 = puVar1;
  return;
}



/* Entry: 103555e3c; end: 103555e4f;  */

void FUN_103555e3c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103555c1c();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103555e50();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103555e50; end: 103555e8f;  */

void FUN_103555e50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd9f28;
  func_0x000107c61520(&DAT_10dbd9f28,&UNK_1106647a0);
  puRam0000000112f77ad0 = puVar1;
  return;
}



/* Entry: 103555e90; end: 103555e93;  */

void FUN_103555e90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd9fd8;
  func_0x000107c61520(&UNK_10dbd9fd8,&UNK_1106647a0);
  puRam0000000112f77ad8 = puVar1;
  return;
}



/* Entry: 103555e94; end: 103555ed3;  */

void FUN_103555e94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd9fd8;
  func_0x000107c61520(&UNK_10dbd9fd8,&UNK_1106647a0);
  puRam0000000112f77ad8 = puVar1;
  return;
}



/* Entry: 103555ed4; end: 103555ef7;  */

void FUN_103555ed4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103555ef8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103555ef8; end: 103555f37;  */

void FUN_103555ef8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77ae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbda048;
  func_0x000107c61520(&UNK_10dbda048,&UNK_1106648c0);
  puRam0000000112f77ae0 = puVar1;
  return;
}



/* Entry: 103555f38; end: 103555f4b;  */

void FUN_103555f38(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103555c5c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103555f4c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103555f4c; end: 103555f8b;  */

void FUN_103555f4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77ae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbda000;
  func_0x000107c61520(&DAT_10dbda000,&UNK_1106648c0);
  puRam0000000112f77ae8 = puVar1;
  return;
}



/* Entry: 103555f8c; end: 103555f8f;  */

void FUN_103555f8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77af0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbda0b0;
  func_0x000107c61520(&UNK_10dbda0b0,&UNK_1106648c0);
  puRam0000000112f77af0 = puVar1;
  return;
}



/* Entry: 103555f90; end: 103555fcf;  */

void FUN_103555f90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77af0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbda0b0;
  func_0x000107c61520(&UNK_10dbda0b0,&UNK_1106648c0);
  puRam0000000112f77af0 = puVar1;
  return;
}



/* Entry: 103555fd0; end: 103555ff3;  */

void FUN_103555fd0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103555ff4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103555ff4; end: 103556033;  */

void FUN_103555ff4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77af8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbda120;
  func_0x000107c61520(&UNK_10dbda120,&UNK_110664a08);
  puRam0000000112f77af8 = puVar1;
  return;
}



/* Entry: 103556034; end: 103556047;  */

void FUN_103556034(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103555c9c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103556048();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103556048; end: 103556087;  */

void FUN_103556048(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77b00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbda0d8;
  func_0x000107c61520(&DAT_10dbda0d8,&UNK_110664a08);
  puRam0000000112f77b00 = puVar1;
  return;
}



/* Entry: 103556088; end: 10355608b;  */

void FUN_103556088(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbda188;
  func_0x000107c61520(&UNK_10dbda188,&UNK_110664a08);
  puRam0000000112f77b08 = puVar1;
  return;
}



/* Entry: 10355608c; end: 1035560cb;  */

void FUN_10355608c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbda188;
  func_0x000107c61520(&UNK_10dbda188,&UNK_110664a08);
  puRam0000000112f77b08 = puVar1;
  return;
}



/* Entry: 1035560cc; end: 1035560ef;  */

void FUN_1035560cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035560f0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035560f0; end: 10355612f;  */

void FUN_1035560f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbda1f8;
  func_0x000107c61520(&UNK_10dbda1f8,&UNK_110664b20);
  puRam0000000112f77b10 = puVar1;
  return;
}



/* Entry: 103556130; end: 103556143;  */

void FUN_103556130(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103555cdc)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103556174();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103556144; end: 103556173;  */

void FUN_103556144(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103556174; end: 1035561b3;  */

void FUN_103556174(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbda1b0;
  func_0x000107c61520(&DAT_10dbda1b0,&UNK_110664b20);
  puRam0000000112f77b18 = puVar1;
  return;
}



/* Entry: 1035561b4; end: 1035561b7;  */

void FUN_1035561b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbda260;
  func_0x000107c61520(&UNK_10dbda260,&UNK_110664b20);
  puRam0000000112f77b20 = puVar1;
  return;
}



/* Entry: 1035561b8; end: 1035561f7;  */

void FUN_1035561b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbda260;
  func_0x000107c61520(&UNK_10dbda260,&UNK_110664b20);
  puRam0000000112f77b20 = puVar1;
  return;
}



/* Entry: 1035561f8; end: 103556223;  */

void FUN_1035561f8(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 103556224; end: 1035562cf;  */

undefined8 * FUN_103556224(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 1035562d0; end: 103556317;  */

undefined8 * FUN_1035562d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103556318; end: 1035563af;  */

int FUN_103556318(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1035563b0; end: 1035566c7;  */

/* WARNING: Possible PIC construction at 0x00010355649c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035564bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035565d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035565f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103556614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010355662c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010355645c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035564fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103556418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103556658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103556678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010355652c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010355667c) */
/* WARNING: Removing unreachable block (ram,0x00010355665c) */
/* WARNING: Removing unreachable block (ram,0x00010355641c) */
/* WARNING: Removing unreachable block (ram,0x000103556500) */
/* WARNING: Removing unreachable block (ram,0x000103556460) */
/* WARNING: Removing unreachable block (ram,0x000101541464) */
/* WARNING: Removing unreachable block (ram,0x000101541474) */
/* WARNING: Removing unreachable block (ram,0x000101541470) */
/* WARNING: Removing unreachable block (ram,0x000103556630) */
/* WARNING: Removing unreachable block (ram,0x000103556618) */
/* WARNING: Removing unreachable block (ram,0x0001035565f8) */
/* WARNING: Removing unreachable block (ram,0x0001035565d8) */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */
/* WARNING: Removing unreachable block (ram,0x0001035564c0) */
/* WARNING: Removing unreachable block (ram,0x000101597350) */
/* WARNING: Removing unreachable block (ram,0x000101597384) */
/* WARNING: Removing unreachable block (ram,0x000101597354) */
/* WARNING: Removing unreachable block (ram,0x0001035564a0) */
/* WARNING: Removing unreachable block (ram,0x000103556530) */
/* WARNING: Removing unreachable block (ram,0x000103556688) */
/* WARNING: Removing unreachable block (ram,0x000100d55b38) */
/* WARNING: Removing unreachable block (ram,0x000100d55b48) */
/* WARNING: Removing unreachable block (ram,0x000100d55b44) */

void FUN_1035563b0(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *puVar4;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined1 in_stack_00000080;
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
  
  uVar1 = in_stack_00000020;
  puVar2 = &uStack_d0;
  puVar4 = &stack0xfffffffffffffff0;
  switch(in_stack_00000080) {
  case 0:
    func_0x00010006c00c(param_1,param_2);
    puVar2 = (undefined8 *)register0x00000008;
    param_8 = unaff_x19;
    param_6 = unaff_x20;
    puVar4 = unaff_x29;
    break;
  case 1:
  case 3:
  case 5:
    param_5 = param_1;
    goto code_r0x00010006c00c;
  case 2:
    func_0x00010006c00c(param_1,param_2);
    unaff_x30 = 0x103556530;
    break;
  case 4:
    uStack_70 = in_stack_00000018;
    uStack_78 = param_8;
    func_0x00010006c00c(param_1,param_2);
    unaff_x30 = 0x10355665c;
    puVar2 = &uStack_d0;
    param_8 = uVar1;
    break;
  case 6:
  case 8:
  case 9:
    func_0x00010006c00c(param_1,param_2);
    unaff_x30 = 0x103556460;
    puVar2 = &uStack_d0;
    break;
  case 7:
    func_0x000107c61434();
    param_5 = param_2;
    param_2 = param_3;
    goto code_r0x00010006c00c;
  case 10:
    uStack_80 = in_stack_00000078;
    uStack_88 = in_stack_00000070;
    uStack_90 = in_stack_00000068;
    uStack_98 = in_stack_00000060;
    uStack_a0 = in_stack_00000058;
    uStack_a8 = in_stack_00000050;
    uStack_b0 = in_stack_00000048;
    uStack_b8 = in_stack_00000040;
    uStack_c0 = in_stack_00000038;
    uStack_c8 = in_stack_00000030;
    uStack_70 = in_stack_00000018;
    uStack_d0 = param_7;
    uStack_78 = param_8;
    func_0x000107c61434();
    param_5 = param_2;
    param_2 = param_3;
    goto code_r0x00010006c00c;
  case 0xb:
    param_5 = param_1;
code_r0x00010006c00c:
    uVar3 = (uint)(param_2 >> 0x3e);
    if (uVar3 == 1) {
      param_5 = param_2 & 0x3fffffffffffffff;
    }
    else if (uVar3 != 2) {
      return;
    }
    goto code_r0x000107c6157c;
  default:
    return;
  }
  if (param_5 == 0) {
    return;
  }
  *(undefined8 *)((long)puVar2 + -0x20) = param_6;
  *(undefined8 *)((long)puVar2 + -0x18) = param_8;
  *(undefined1 **)((long)puVar2 + -0x10) = puVar4;
  *(undefined8 *)((long)puVar2 + -8) = unaff_x30;
  func_0x00010006c00c(param_3,param_4);
code_r0x000107c6157c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_5);
  return;
}



/* Entry: 1035566c8; end: 10355677b;  */

/* WARNING: Possible PIC construction at 0x00010355672c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103556730) */
/* WARNING: Removing unreachable block (ram,0x000103556740) */
/* WARNING: Removing unreachable block (ram,0x000103556748) */
/* WARNING: Removing unreachable block (ram,0x000103556768) */
/* WARNING: Removing unreachable block (ram,0x000103556758) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1035566c8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0xe0) != -1) {
    FUN_10355677c(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                  *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  }
  uVar1 = *(ulong *)(param_1 + 0xe8);
  uVar2 = (uint)(*(ulong *)(param_1 + 0xf0) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0xf0) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10355677c; end: 103557153;  */

/* WARNING: Possible PIC construction at 0x000103556868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103556888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035569a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035569c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035569e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035569fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035568c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035567e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103556a38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035568e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103556910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035568ec) */
/* WARNING: Removing unreachable block (ram,0x000103556a3c) */
/* WARNING: Removing unreachable block (ram,0x0001035567e8) */
/* WARNING: Removing unreachable block (ram,0x0001035568cc) */
/* WARNING: Removing unreachable block (ram,0x000103556a00) */
/* WARNING: Removing unreachable block (ram,0x000103556a58) */
/* WARNING: Removing unreachable block (ram,0x0001035569e8) */
/* WARNING: Removing unreachable block (ram,0x0001035569c8) */
/* WARNING: Removing unreachable block (ram,0x0001035569a8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010355688c) */
/* WARNING: Removing unreachable block (ram,0x000101597ae4) */
/* WARNING: Removing unreachable block (ram,0x000101597b18) */
/* WARNING: Removing unreachable block (ram,0x000101597ae8) */
/* WARNING: Removing unreachable block (ram,0x00010355686c) */
/* WARNING: Removing unreachable block (ram,0x000103556914) */
/* WARNING: Removing unreachable block (ram,0x000103556920) */

ulong FUN_10355677c(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                   ulong param_6,ulong param_7,ulong param_8)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined1 *puVar6;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined1 in_stack_00000080;
  ulong uStack_d0;
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
  ulong uStack_78;
  undefined8 uStack_70;
  
  uVar5 = in_stack_00000020;
  puVar1 = &uStack_d0;
  puVar6 = &stack0xfffffffffffffff0;
  switch(in_stack_00000080) {
  case 0:
    unaff_x30 = 0x103556914;
    puVar1 = &uStack_d0;
    param_7 = param_1;
    break;
  case 1:
  case 3:
  case 5:
    unaff_x30 = 0x1035567e8;
    puVar1 = &uStack_d0;
    param_7 = param_1;
    break;
  case 2:
    unaff_x30 = 0x1035568ec;
    puVar1 = &uStack_d0;
    param_7 = param_1;
    uVar5 = param_8;
    break;
  case 4:
    uStack_70 = in_stack_00000018;
    uStack_78 = param_8;
    func_0x00010006c090(param_1,param_2);
    FUN_103559bc4(param_3,param_4,param_5);
    unaff_x30 = 0x103556a3c;
    param_2 = uStack_78;
    if (0xe < uStack_78 >> 0x3c) {
      return param_6;
    }
    break;
  case 6:
  case 8:
  case 9:
    func_0x00010006c090(param_1,param_2);
    FUN_103559bc4(param_3,param_4,param_5);
    uVar2 = param_6;
    uVar4 = param_6 & 0xff;
    puVar1 = (ulong *)register0x00000008;
    param_2 = param_8;
    uVar5 = unaff_x19;
    param_6 = unaff_x20;
    puVar6 = unaff_x29;
    if (uVar4 == 2) {
      return uVar2;
    }
    break;
  case 7:
    func_0x000107c6142c();
    unaff_x30 = 0x1035568cc;
    puVar1 = &uStack_d0;
    param_7 = param_2;
    param_2 = param_3;
    break;
  case 10:
    uStack_80 = in_stack_00000078;
    uStack_88 = in_stack_00000070;
    uStack_90 = in_stack_00000068;
    uStack_98 = in_stack_00000060;
    uStack_a0 = in_stack_00000058;
    uStack_a8 = in_stack_00000050;
    uStack_b0 = in_stack_00000048;
    uStack_b8 = in_stack_00000040;
    uStack_c0 = in_stack_00000038;
    uStack_c8 = in_stack_00000030;
    uStack_70 = in_stack_00000018;
    uStack_d0 = param_7;
    uStack_78 = param_8;
    func_0x000107c6142c();
    unaff_x30 = 0x1035569a8;
    puVar1 = &uStack_d0;
    param_7 = param_2;
    param_2 = param_3;
    break;
  case 0xb:
    unaff_x30 = 0x10355686c;
    puVar1 = &uStack_d0;
    param_7 = param_1;
    uVar5 = param_8;
    break;
  default:
    return param_1;
  }
  uVar3 = (uint)(param_2 >> 0x3e);
  if (uVar3 == 1) {
    param_7 = param_2 & 0x3fffffffffffffff;
  }
  else {
    if (uVar3 != 2) {
      return param_7;
    }
    *(ulong *)((long)puVar1 + -0x20) = param_6;
    *(ulong *)((long)puVar1 + -0x18) = uVar5;
    *(undefined1 **)((long)puVar1 + -0x10) = puVar6;
    *(undefined8 *)((long)puVar1 + -8) = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_7);
  return param_7;
}


