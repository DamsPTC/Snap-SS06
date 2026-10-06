/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a05f10; end: 103a05f57;  */

void FUN_103a05f10(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3a9b0,0x34,2);
  uRam000000011380c9b0 = uStack_38;
  uRam000000011380c9a8 = uStack_40;
  uRam000000011380c9c0 = uStack_28;
  uRam000000011380c9b8 = uStack_30;
  uRam000000011380c9d0 = uStack_18;
  uRam000000011380c9c8 = uStack_20;
  return;
}



/* Entry: 103a05f58; end: 103a06083;  */

void FUN_103a05f58(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0x128);
          }
          else {
            if (lVar1 != 4) goto LAB_103a06060;
            pcVar3 = *(code **)(param_3 + 0x128);
          }
          goto LAB_103a06050;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x128);
          goto LAB_103a06050;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x128);
          goto LAB_103a06050;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x128);
          }
          else {
            if (lVar1 != 6) goto LAB_103a06060;
            pcVar3 = *(code **)(param_3 + 0x130);
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0x130);
        }
        else {
          if (lVar1 != 8) goto LAB_103a06060;
          pcVar3 = *(code **)(param_3 + 0x140);
        }
LAB_103a06050:
        (*pcVar3)();
      }
LAB_103a06060:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103a06084; end: 103a06203;  */

void FUN_103a06084(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if ((char)unaff_x20[5] != '\x01') {
    (**(code **)(param_3 + 0x60))(unaff_x20[4],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if ((char)unaff_x20[7] != '\x01') {
      (**(code **)(param_3 + 0x60))(unaff_x20[6],2,param_2,param_3);
    }
    if ((char)unaff_x20[9] != '\x01') {
      (**(code **)(param_3 + 0x60))(unaff_x20[8],3,param_2,param_3);
    }
    if ((char)unaff_x20[0xb] != '\x01') {
      (**(code **)(param_3 + 0x60))(unaff_x20[10],4,param_2,param_3);
    }
    if ((char)unaff_x20[0xd] != '\x01') {
      (**(code **)(param_3 + 0x60))(unaff_x20[0xc],5,param_2,param_3);
    }
    if (*(long *)(*unaff_x20 + 0x10) != 0) {
      (**(code **)(param_3 + 0xf0))(*unaff_x20,6,param_2,param_3);
    }
    if (*(long *)(unaff_x20[1] + 0x10) != 0) {
      (**(code **)(param_3 + 0xf0))(unaff_x20[1],7,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x69) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x69) & 1,8,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103a06204; end: 103a06287;  */

void FUN_103a06204(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = puVar1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0x201;
  return;
}



/* Entry: 103a06288; end: 103a062af;  */

void FUN_103a06288(void)

{
  FUN_103a05f58();
  return;
}



/* Entry: 103a062b0; end: 103a062e7;  */

uint FUN_103a062b0(long param_1,long param_2)

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
  func_0x000103a17914();
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



/* Entry: 103a062e8; end: 103a06387;  */

/* WARNING: Possible PIC construction at 0x000103a06334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a06344: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a06338) */
/* WARNING: Removing unreachable block (ram,0x000103a06348) */

void FUN_103a062e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9b50 != -1) {
    func_0x000107c61568(0x112fc9b50,FUN_103a05f10);
  }
  uVar5 = uRam000000011380c9d0;
  uVar4 = uRam000000011380c9c8;
  uVar3 = uRam000000011380c9c0;
  uVar2 = uRam000000011380c9b8;
  uVar1 = uRam000000011380c9b0;
  *param_1 = uRam000000011380c9a8;
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



/* Entry: 103a06388; end: 103a0639b;  */

void FUN_103a06388(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca538;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca538,&UNK_10dc3a678);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a0639c; end: 103a063cf;  */

void FUN_103a0639c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103a063d0; end: 103a064fb;  */

void FUN_103a063d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [72];
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
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_50 = unaff_x20[10];
  uStack_48 = (undefined2)unaff_x20[0xb];
  uStack_3e = *(undefined8 *)((long)unaff_x20 + 0x62);
  uStack_46 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x5a);
  uStack_40 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x5a) >> 0x30);
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  func_0x000107c6068c(auStack_e8,0);
  func_0x000107c5fa50(auStack_e8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a064fc; end: 103a06543;  */

void FUN_103a064fc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3a9a4,8,2);
  uRam000000011380c9e0 = uStack_38;
  uRam000000011380c9d8 = uStack_40;
  uRam000000011380c9f0 = uStack_28;
  uRam000000011380c9e8 = uStack_30;
  uRam000000011380ca00 = uStack_18;
  uRam000000011380c9f8 = uStack_20;
  return;
}



/* Entry: 103a06544; end: 103a065c7;  */

void FUN_103a06544(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x140))(unaff_x20 + 0x10,param_2,param_3);
    }
  }
  return;
}



/* Entry: 103a065c8; end: 103a06643;  */

void FUN_103a065c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5,long param_6)

{
  long unaff_x21;
  
  if (param_4 != 2) {
    (**(code **)(param_6 + 0x68))(param_4 & 1,1,param_5,param_6);
  }
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 103a06644; end: 103a0667f;  */

void FUN_103a06644(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 2;
  return;
}



/* Entry: 103a06680; end: 103a066af;  */

undefined1  [16] FUN_103a06680(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103a066b0; end: 103a066e3;  */

void FUN_103a066b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103a066e4; end: 103a066f7;  */

undefined8 FUN_103a066e4(void)

{
  return 0x103a066f4;
}



/* Entry: 103a066f8; end: 103a0672f;  */

void FUN_103a066f8(void)

{
  FUN_103a06544();
  return;
}



/* Entry: 103a06730; end: 103a06733;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a06730(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103a06734; end: 103a0676b;  */

uint FUN_103a06734(long param_1,long param_2)

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
  func_0x000103a178d4();
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



/* Entry: 103a0676c; end: 103a067ab;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103a0676c(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar24;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  
  lVar23 = *param_1;
  uVar15 = param_1[1];
  bVar26 = *(byte *)(param_1 + 2);
  pbVar9 = (byte *)*unaff_x20;
  pbVar24 = (byte *)unaff_x20[1];
  if (*(byte *)(unaff_x20 + 2) == 2) {
    if (bVar26 == 2) {
SUB_100e25fcc:
      do {
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        *(undefined8 *)((long)register0x00000008 + -0x58) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar24 >> 0x20);
        uVar17 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar15 >> 0x20);
        uVar20 = uVar5 >> 0x1e;
        iVar7 = (int)pbVar9;
        pbVar12 = pbVar24;
        if ((ulong)pbVar24 >> 0x3e == 3) {
          uVar19 = 0;
          if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
              (uVar15 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar15 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar8 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar17 == 0) {
            uVar19 = (ulong)pbVar24 >> 0x30 & 0xff;
          }
          else {
            iVar18 = (int)((ulong)pbVar9 >> 0x20);
            if (SBORROW4(iVar18,iVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar19 = (ulong)(iVar18 - iVar7);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar20 == 0) {
            uVar21 = uVar15 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar18 = (int)((ulong)lVar23 >> 0x20);
          if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar19 == (long)(iVar18 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar8 = (byte *)0x0;
        }
        else {
          if (uVar17 == 2) {
            uVar19 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
            if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar19 = 0;
          if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar20 == 2) {
            uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
            if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar19 < 1) goto code_r0x000100e26128;
            if (uVar17 < 2) {
              if (uVar17 == 0) {
                *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
                *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
                *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
                *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
                *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
                *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
                *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
                *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
                *(char *)((long)register0x00000008 + -0x68) = (char)pbVar24;
                *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar24 >> 8);
                *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar24 >> 0x10);
                *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar24 >> 0x18);
                *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar24 >> 0x20);
                *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar24 >> 0x28);
                pbVar12 = (byte *)((long)register0x00000008 +
                                  (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                    (undefined1 *)((long)register0x00000008 + -0x70));
                pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar7;
              unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar24;
              if (pbVar9 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar9 = (byte *)0x0;
              }
              else {
                pbVar12 = pbVar9;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar12);
                func_0x000107c5ec38();
                unaff_x19 = pbVar9;
                if (pbVar9 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar12) {
                    pbVar12 = unaff_x23;
                  }
                  pbVar12 = pbVar12 + (long)pbVar9;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar12 = (byte *)0x0;
            }
            else {
              if (uVar17 != 2) {
                *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                pbVar12 = (byte *)((long)register0x00000008 + -0x70);
                goto code_r0x000100e26260;
              }
              lVar25 = *(long *)(pbVar9 + 0x10);
              unaff_x24 = *(byte **)(pbVar9 + 0x18);
              func_0x000107c5ec30();
              pbVar12 = pbVar9;
              if (pbVar9 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar9 = pbVar9 + (lVar25 - (long)pbVar12);
              }
              unaff_x23 = unaff_x24 + -lVar25;
              if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar9;
              unaff_x25 = pbVar24;
              if (pbVar9 == (byte *)0x0) {
                pbVar12 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar12) {
                  pbVar12 = unaff_x23;
                }
                pbVar12 = pbVar12 + (long)pbVar9;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (undefined8 *)((ulong)pbVar24 & 0x3fffffffffffffff);
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,
                                lVar23,uVar15);
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = uVar15;
          }
          else {
            pbVar8 = (byte *)(ulong)(uVar19 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
          return pbVar8;
        }
        func_0x000107c60e78();
        *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
        *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
        *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
        *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x90) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
        pbVar11 = *(byte **)pbVar8;
        pbVar9 = *(byte **)(pbVar8 + 8);
        pbVar22 = *(byte **)(pbVar8 + 0x18);
        bVar26 = pbVar8[0x28];
        pbVar24 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
        pbVar13 = pbVar9;
        if (bVar26 < 3) {
          if (bVar26 == 0) {
            if (pbVar12[0x28] == 0) {
              lVar23 = *(long *)pbVar12;
              uVar10 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar11,lVar23,uVar10);
              return (byte *)(ulong)((uint)pbVar11 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar26 == 1) {
            if (pbVar12[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)(pbVar12 + 8);
            pbVar16 = *(byte **)(pbVar12 + 0x10);
            lVar23 = *(long *)pbVar12;
            uVar10 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar11,lVar23,uVar10);
            if (((ulong)pbVar11 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar11 = pbVar9;
            pbVar13 = pbVar24;
            if ((pbVar9 == pbVar14) && (pbVar24 == pbVar16)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar12[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)pbVar12;
            pbVar16 = *(byte **)(pbVar12 + 8);
            lVar23 = *(long *)(pbVar12 + 0x18);
            if ((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) {
              if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar22 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar23 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar23);
              func_0x000107c61174();
              pbVar9 = pbVar22;
              func_0x000107c60118();
              func_0x000107c61170(pbVar22);
              func_0x000107c61170(lVar23);
              pbVar22 = pbVar9;
joined_r0x000100e266a4:
              if (((ulong)pbVar22 & 1) == 0) {
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
          )(pbVar11,pbVar13,pbVar14,pbVar16,0);
          return pbVar11;
        }
        lVar25 = *(long *)(pbVar8 + 0x20);
        if (bVar26 < 5) {
          if (bVar26 != 3) {
            if (pbVar12[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)pbVar12;
            pbVar16 = *(byte **)(pbVar12 + 8);
            if (((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) &&
               (pbVar11 = pbVar24, pbVar13 = pbVar22, pbVar14 = *(byte **)(pbVar12 + 0x10),
               pbVar16 = *(byte **)(pbVar12 + 0x18),
               pbVar24 == *(byte **)(pbVar12 + 0x10) && pbVar22 == *(byte **)(pbVar12 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar12[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar16 = *(byte **)(pbVar12 + 0x10);
          lVar23 = *(long *)(pbVar12 + 0x20);
          if (pbVar24 == (byte *)0x0) {
            if (pbVar16 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar16 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)(pbVar12 + 8);
            pbVar11 = pbVar9;
            pbVar13 = pbVar24;
            if ((pbVar9 != pbVar14) || (pbVar24 != pbVar16)) goto code_r0x000107c605b8;
          }
          if (lVar25 != 0) {
            if (lVar23 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar22 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar23)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar12 + 0x18),lVar23,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar26 != 5) {
          if ((((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
              lVar25 == 0) && pbVar24 == (byte *)0x0) {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar25 = *(long *)(pbVar12 + 0x20);
            lVar23 = *(long *)(pbVar12 + 0x18);
            bVar26 = pbVar12[8] | (byte)lVar23;
            bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
            bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
            bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
            bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
            bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
            bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
            bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
            bVar34 = pbVar12[0x10] | (byte)lVar25;
            bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
            bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
            bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
            bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
            bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
            bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
            bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
            auVar42[1] = bVar27;
            auVar42[0] = bVar26;
            auVar42[2] = bVar28;
            auVar42[3] = bVar29;
            auVar42[4] = bVar30;
            auVar42[5] = bVar31;
            auVar42[6] = bVar32;
            auVar42[7] = bVar33;
            auVar42[8] = bVar34;
            auVar42[9] = bVar35;
            auVar42[10] = bVar36;
            auVar42[0xb] = bVar37;
            auVar42[0xc] = bVar38;
            auVar42[0xd] = bVar39;
            auVar42[0xe] = bVar40;
            auVar42[0xf] = bVar41;
            auVar3[1] = bVar27;
            auVar3[0] = bVar26;
            auVar3[2] = bVar28;
            auVar3[3] = bVar29;
            auVar3[4] = bVar30;
            auVar3[5] = bVar31;
            auVar3[6] = bVar32;
            auVar3[7] = bVar33;
            auVar3[8] = bVar34;
            auVar3[9] = bVar35;
            auVar3[10] = bVar36;
            auVar3[0xb] = bVar37;
            auVar3[0xc] = bVar38;
            auVar3[0xd] = bVar39;
            auVar3[0xe] = bVar40;
            auVar3[0xf] = bVar41;
            auVar42 = NEON_ext(auVar42,auVar3,8,1);
            if (CONCAT17(bVar33 | auVar42[7],
                         CONCAT16(bVar32 | auVar42[6],
                                  CONCAT15(bVar31 | auVar42[5],
                                           CONCAT14(bVar30 | auVar42[4],
                                                    CONCAT13(bVar29 | auVar42[3],
                                                             CONCAT12(bVar28 | auVar42[2],
                                                                      CONCAT11(bVar27 | auVar42[1],
                                                                               bVar26 | auVar42[0]))
                                                            ))))) == 0 && *(long *)pbVar12 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar11 == (byte *)0x1) &&
             (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
              lVar25 == 0)) {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar12 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar12 != 2) {
              return (byte *)0x0;
            }
          }
          lVar25 = *(long *)(pbVar12 + 0x20);
          lVar23 = *(long *)(pbVar12 + 0x18);
          bVar26 = pbVar12[8] | (byte)lVar23;
          bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
          bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
          bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
          bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
          bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
          bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
          bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
          bVar34 = pbVar12[0x10] | (byte)lVar25;
          bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
          bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
          bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
          bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
          bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
          bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
          bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
          auVar1[1] = bVar27;
          auVar1[0] = bVar26;
          auVar1[2] = bVar28;
          auVar1[3] = bVar29;
          auVar1[4] = bVar30;
          auVar1[5] = bVar31;
          auVar1[6] = bVar32;
          auVar1[7] = bVar33;
          auVar1[8] = bVar34;
          auVar1[9] = bVar35;
          auVar1[10] = bVar36;
          auVar1[0xb] = bVar37;
          auVar1[0xc] = bVar38;
          auVar1[0xd] = bVar39;
          auVar1[0xe] = bVar40;
          auVar1[0xf] = bVar41;
          auVar2[1] = bVar27;
          auVar2[0] = bVar26;
          auVar2[2] = bVar28;
          auVar2[3] = bVar29;
          auVar2[4] = bVar30;
          auVar2[5] = bVar31;
          auVar2[6] = bVar32;
          auVar2[7] = bVar33;
          auVar2[8] = bVar34;
          auVar2[9] = bVar35;
          auVar2[10] = bVar36;
          auVar2[0xb] = bVar37;
          auVar2[0xc] = bVar38;
          auVar2[0xd] = bVar39;
          auVar2[0xe] = bVar40;
          auVar2[0xf] = bVar41;
          auVar42 = NEON_ext(auVar1,auVar2,8,1);
          lVar23 = CONCAT17(bVar33 | auVar42[7],
                            CONCAT16(bVar32 | auVar42[6],
                                     CONCAT15(bVar31 | auVar42[5],
                                              CONCAT14(bVar30 | auVar42[4],
                                                       CONCAT13(bVar29 | auVar42[3],
                                                                CONCAT12(bVar28 | auVar42[2],
                                                                         CONCAT11(bVar27 | auVar42[1
                                                  ],bVar26 | auVar42[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar12[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar23 = *(long *)(pbVar12 + 8);
        uVar15 = *(ulong *)(pbVar12 + 0x10);
        lVar25 = *(long *)pbVar12;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar25,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
        unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
        unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
        unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
        unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
        unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
        unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
      } while( true );
    }
  }
  else if ((bVar26 != 2) && (((*(byte *)(unaff_x20 + 2) ^ bVar26) & 1) == 0)) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 103a067ac; end: 103a0684b;  */

/* WARNING: Possible PIC construction at 0x000103a067f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a06808: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a067fc) */
/* WARNING: Removing unreachable block (ram,0x000103a0680c) */

void FUN_103a067ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9b60 != -1) {
    func_0x000107c61568(0x112fc9b60,FUN_103a064fc);
  }
  uVar5 = uRam000000011380ca00;
  uVar4 = uRam000000011380c9f8;
  uVar3 = uRam000000011380c9f0;
  uVar2 = uRam000000011380c9e8;
  uVar1 = uRam000000011380c9e0;
  *param_1 = uRam000000011380c9d8;
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



/* Entry: 103a0684c; end: 103a06887;  */

void FUN_103a0684c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca528;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca528,&UNK_10dc3a670);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a06888; end: 103a0698b;  */

void FUN_103a06888(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uStack_40 = *(undefined1 *)(unaff_x20 + 2);
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a0698c; end: 103a069d7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103a0698c(undefined8 *param_1,long *param_2)

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
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  
  pbVar11 = (byte *)*param_1;
  pbVar13 = (byte *)param_1[1];
  lVar24 = *param_2;
  uVar16 = param_2[1];
  bVar26 = *(byte *)(param_2 + 2);
  if (*(byte *)(param_1 + 2) == 2) {
    if (bVar26 == 2) {
SUB_100e25fcc:
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
        uVar4 = (uint)((ulong)pbVar13 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar16 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar7 = (int)pbVar11;
        pbVar12 = pbVar13;
        if ((ulong)pbVar13 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((pbVar11 != (byte *)0x0) || (pbVar13 != (byte *)0xc000000000000000)) ||
              (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar8 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar13 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar11 >> 0x20);
            if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar7);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar16 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar8 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
            if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar20 = 0;
          if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                *(char *)((long)register0x00000008 + -0x70) = (char)pbVar11;
                *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar11 >> 8);
                *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar11 >> 0x10);
                *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar11 >> 0x18);
                *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar11 >> 0x20);
                *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar11 >> 0x28);
                *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar11 >> 0x30);
                *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar11 >> 0x38);
                *(char *)((long)register0x00000008 + -0x68) = (char)pbVar13;
                *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar13 >> 8);
                *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar13 >> 0x10);
                *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar13 >> 0x18);
                *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar13 >> 0x20);
                *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar13 >> 0x28);
                pbVar12 = (byte *)((long)register0x00000008 +
                                  (((ulong)pbVar13 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                    (undefined1 *)((long)register0x00000008 + -0x70));
                pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar7;
              unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar13;
              if (pbVar11 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar11 = (byte *)0x0;
              }
              else {
                pbVar12 = pbVar11;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar12);
                func_0x000107c5ec38();
                unaff_x19 = pbVar11;
                if (pbVar11 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar12) {
                    pbVar12 = unaff_x23;
                  }
                  pbVar12 = pbVar12 + (long)pbVar11;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar12 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                pbVar12 = (byte *)((long)register0x00000008 + -0x70);
                goto code_r0x000100e26260;
              }
              lVar25 = *(long *)(pbVar11 + 0x10);
              unaff_x24 = *(byte **)(pbVar11 + 0x18);
              func_0x000107c5ec30();
              pbVar12 = pbVar11;
              if (pbVar11 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar11 = pbVar11 + (lVar25 - (long)pbVar12);
              }
              unaff_x23 = unaff_x24 + -lVar25;
              if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar11;
              unaff_x25 = pbVar13;
              if (pbVar11 == (byte *)0x0) {
                pbVar12 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar12) {
                  pbVar12 = unaff_x23;
                }
                pbVar12 = pbVar12 + (long)pbVar11;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar13 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar11,pbVar12,
                                lVar24,uVar16);
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = uVar16;
          }
          else {
            pbVar8 = (byte *)(ulong)(uVar20 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
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
        pbVar11 = *(byte **)(pbVar8 + 8);
        pbVar23 = *(byte **)(pbVar8 + 0x18);
        bVar26 = pbVar8[0x28];
        pbVar13 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
        pbVar14 = pbVar11;
        if (bVar26 < 3) {
          if (bVar26 == 0) {
            if (pbVar12[0x28] == 0) {
              lVar24 = *(long *)pbVar12;
              uVar9 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar10,lVar24,uVar9);
              return (byte *)(ulong)((uint)pbVar10 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar26 == 1) {
            if (pbVar12[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar12 + 8);
            pbVar17 = *(byte **)(pbVar12 + 0x10);
            lVar24 = *(long *)pbVar12;
            uVar9 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar10,lVar24,uVar9);
            if (((ulong)pbVar10 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar10 = pbVar11;
            pbVar14 = pbVar13;
            if ((pbVar11 == pbVar15) && (pbVar13 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar12[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar12;
            pbVar17 = *(byte **)(pbVar12 + 8);
            lVar24 = *(long *)(pbVar12 + 0x18);
            if ((pbVar10 == pbVar15) && (pbVar11 == pbVar17)) {
              if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar24 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar24);
              func_0x000107c61174();
              pbVar11 = pbVar23;
              func_0x000107c60118();
              func_0x000107c61170(pbVar23);
              func_0x000107c61170(lVar24);
              pbVar23 = pbVar11;
joined_r0x000100e266a4:
              if (((ulong)pbVar23 & 1) == 0) {
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
          )(pbVar10,pbVar14,pbVar15,pbVar17,0);
          return pbVar10;
        }
        lVar25 = *(long *)(pbVar8 + 0x20);
        if (bVar26 < 5) {
          if (bVar26 != 3) {
            if (pbVar12[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar12;
            pbVar17 = *(byte **)(pbVar12 + 8);
            if (((pbVar10 == pbVar15) && (pbVar11 == pbVar17)) &&
               (pbVar10 = pbVar13, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar12 + 0x10),
               pbVar17 = *(byte **)(pbVar12 + 0x18),
               pbVar13 == *(byte **)(pbVar12 + 0x10) && pbVar23 == *(byte **)(pbVar12 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar12[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar12 != ((uint)pbVar10 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar12 + 0x10);
          lVar24 = *(long *)(pbVar12 + 0x20);
          if (pbVar13 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar12 + 8);
            pbVar10 = pbVar11;
            pbVar14 = pbVar13;
            if ((pbVar11 != pbVar15) || (pbVar13 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar25 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar25,*(byte **)(pbVar12 + 0x18),lVar24,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar26 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
              lVar25 == 0) && pbVar13 == (byte *)0x0) {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar25 = *(long *)(pbVar12 + 0x20);
            lVar24 = *(long *)(pbVar12 + 0x18);
            bVar26 = pbVar12[8] | (byte)lVar24;
            bVar27 = pbVar12[9] | (byte)((ulong)lVar24 >> 8);
            bVar28 = pbVar12[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar29 = pbVar12[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar30 = pbVar12[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar31 = pbVar12[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar32 = pbVar12[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar33 = pbVar12[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar34 = pbVar12[0x10] | (byte)lVar25;
            bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
            bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
            bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
            bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
            bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
            bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
            bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
            auVar42[1] = bVar27;
            auVar42[0] = bVar26;
            auVar42[2] = bVar28;
            auVar42[3] = bVar29;
            auVar42[4] = bVar30;
            auVar42[5] = bVar31;
            auVar42[6] = bVar32;
            auVar42[7] = bVar33;
            auVar42[8] = bVar34;
            auVar42[9] = bVar35;
            auVar42[10] = bVar36;
            auVar42[0xb] = bVar37;
            auVar42[0xc] = bVar38;
            auVar42[0xd] = bVar39;
            auVar42[0xe] = bVar40;
            auVar42[0xf] = bVar41;
            auVar3[1] = bVar27;
            auVar3[0] = bVar26;
            auVar3[2] = bVar28;
            auVar3[3] = bVar29;
            auVar3[4] = bVar30;
            auVar3[5] = bVar31;
            auVar3[6] = bVar32;
            auVar3[7] = bVar33;
            auVar3[8] = bVar34;
            auVar3[9] = bVar35;
            auVar3[10] = bVar36;
            auVar3[0xb] = bVar37;
            auVar3[0xc] = bVar38;
            auVar3[0xd] = bVar39;
            auVar3[0xe] = bVar40;
            auVar3[0xf] = bVar41;
            auVar42 = NEON_ext(auVar42,auVar3,8,1);
            if (CONCAT17(bVar33 | auVar42[7],
                         CONCAT16(bVar32 | auVar42[6],
                                  CONCAT15(bVar31 | auVar42[5],
                                           CONCAT14(bVar30 | auVar42[4],
                                                    CONCAT13(bVar29 | auVar42[3],
                                                             CONCAT12(bVar28 | auVar42[2],
                                                                      CONCAT11(bVar27 | auVar42[1],
                                                                               bVar26 | auVar42[0]))
                                                            ))))) == 0 && *(long *)pbVar12 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar10 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
              lVar25 == 0)) {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar12 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar12 != 2) {
              return (byte *)0x0;
            }
          }
          lVar25 = *(long *)(pbVar12 + 0x20);
          lVar24 = *(long *)(pbVar12 + 0x18);
          bVar26 = pbVar12[8] | (byte)lVar24;
          bVar27 = pbVar12[9] | (byte)((ulong)lVar24 >> 8);
          bVar28 = pbVar12[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar29 = pbVar12[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar30 = pbVar12[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar31 = pbVar12[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar32 = pbVar12[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar33 = pbVar12[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar34 = pbVar12[0x10] | (byte)lVar25;
          bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
          bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
          bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
          bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
          bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
          bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
          bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
          auVar1[1] = bVar27;
          auVar1[0] = bVar26;
          auVar1[2] = bVar28;
          auVar1[3] = bVar29;
          auVar1[4] = bVar30;
          auVar1[5] = bVar31;
          auVar1[6] = bVar32;
          auVar1[7] = bVar33;
          auVar1[8] = bVar34;
          auVar1[9] = bVar35;
          auVar1[10] = bVar36;
          auVar1[0xb] = bVar37;
          auVar1[0xc] = bVar38;
          auVar1[0xd] = bVar39;
          auVar1[0xe] = bVar40;
          auVar1[0xf] = bVar41;
          auVar2[1] = bVar27;
          auVar2[0] = bVar26;
          auVar2[2] = bVar28;
          auVar2[3] = bVar29;
          auVar2[4] = bVar30;
          auVar2[5] = bVar31;
          auVar2[6] = bVar32;
          auVar2[7] = bVar33;
          auVar2[8] = bVar34;
          auVar2[9] = bVar35;
          auVar2[10] = bVar36;
          auVar2[0xb] = bVar37;
          auVar2[0xc] = bVar38;
          auVar2[0xd] = bVar39;
          auVar2[0xe] = bVar40;
          auVar2[0xf] = bVar41;
          auVar42 = NEON_ext(auVar1,auVar2,8,1);
          lVar24 = CONCAT17(bVar33 | auVar42[7],
                            CONCAT16(bVar32 | auVar42[6],
                                     CONCAT15(bVar31 | auVar42[5],
                                              CONCAT14(bVar30 | auVar42[4],
                                                       CONCAT13(bVar29 | auVar42[3],
                                                                CONCAT12(bVar28 | auVar42[2],
                                                                         CONCAT11(bVar27 | auVar42[1
                                                  ],bVar26 | auVar42[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar12[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar12 + 8);
        uVar16 = *(ulong *)(pbVar12 + 0x10);
        lVar25 = *(long *)pbVar12;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar25,uVar9);
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
  }
  else if ((bVar26 != 2) && (((*(byte *)(param_1 + 2) ^ bVar26) & 1) == 0)) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 103a069d8; end: 103a06b1f;  */

void FUN_103a069d8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3a8c0,0xe3,2);
  uRam000000011380ca10 = uStack_38;
  uRam000000011380ca08 = uStack_40;
  uRam000000011380ca20 = uStack_28;
  uRam000000011380ca18 = uStack_30;
  uRam000000011380ca30 = uStack_18;
  uRam000000011380ca28 = uStack_20;
  return;
}



/* Entry: 103a06b20; end: 103a06f37;  */

/* WARNING: Removing unreachable block (ram,0x000103a06c94) */
/* WARNING: Removing unreachable block (ram,0x000103a06c5c) */
/* WARNING: Removing unreachable block (ram,0x000103a06c40) */
/* WARNING: Removing unreachable block (ram,0x000103a06de4) */
/* WARNING: Removing unreachable block (ram,0x000103a06e24) */
/* WARNING: Removing unreachable block (ram,0x000103a06dc8) */
/* WARNING: Removing unreachable block (ram,0x000103a06d40) */
/* WARNING: Removing unreachable block (ram,0x000103a06e40) */
/* WARNING: Removing unreachable block (ram,0x000103a06c78) */
/* WARNING: Removing unreachable block (ram,0x000103a06f34) */

void FUN_103a06b20(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        func_0x000107c61428(param_1 + 0x10,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x158);
        lVar2 = param_1 + 0x10;
        break;
      case 2:
        func_0x000107c61428(param_1 + 0x30,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x98);
        lVar2 = param_1 + 0x30;
        break;
      case 3:
        func_0x000107c61428(param_1 + 0x40,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x98);
        lVar2 = param_1 + 0x40;
        break;
      case 4:
        func_0x000107c61428(param_1 + 0x60,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x98);
        lVar2 = param_1 + 0x60;
        break;
      case 5:
        func_0x000107c61428(param_1 + 0x70,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x98);
        lVar2 = param_1 + 0x70;
        break;
      case 6:
        func_0x000107c61428(param_1 + 0x80,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x158);
        lVar2 = param_1 + 0x80;
        break;
      case 7:
        func_0x000107c61428(param_1 + 0x90,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x158);
        lVar2 = param_1 + 0x90;
        break;
      case 8:
        func_0x000107c61428(param_1 + 0xa0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x158);
        lVar2 = param_1 + 0xa0;
        break;
      case 9:
        func_0x000107c61428(param_1 + 0xb0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x158);
        lVar2 = param_1 + 0xb0;
        break;
      case 10:
        func_0x000107c61428(param_1 + 0xd0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x160);
        lVar2 = param_1 + 0xd0;
        break;
      case 0xb:
        func_0x000107c61428(param_1 + 0xd8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x160);
        lVar2 = param_1 + 0xd8;
        break;
      case 0xc:
        FUN_103a06f38(param_2,param_1,param_3,param_4);
        goto LAB_103a06bcc;
      case 0xd:
        FUN_103a06fc4(param_2,param_1,param_3,param_4);
        goto LAB_103a06bcc;
      case 0xe:
        FUN_103a07054(param_2,param_1,param_3,param_4);
        goto LAB_103a06bcc;
      case 0xf:
        FUN_103a070e4(param_2,param_1,param_3,param_4);
        goto LAB_103a06bcc;
      case 0x10:
        FUN_103a07174(param_2,param_1,param_3,param_4);
        goto LAB_103a06bcc;
      case 0x11:
        FUN_103a07204(param_2,param_1,param_3,param_4);
        goto LAB_103a06bcc;
      case 0x12:
        FUN_103a07294(param_2,param_1,param_3,param_4);
        goto LAB_103a06bcc;
      case 0x13:
        func_0x000107c61428(param_1 + 0x20,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x98);
        lVar2 = param_1 + 0x20;
        break;
      case 0x14:
        func_0x000107c61428(param_1 + 0x50,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x98);
        lVar2 = param_1 + 0x50;
        break;
      case 0x15:
        FUN_103a07324(param_2,param_1,param_3,param_4);
        goto LAB_103a06bcc;
      case 0x16:
        FUN_103a073b4(param_2,param_1,param_3,param_4);
        goto LAB_103a06bcc;
      case 0x17:
        func_0x000107c61428(param_1 + 0xc0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x158);
        lVar2 = param_1 + 0xc0;
        break;
      case 0x18:
        FUN_103a07444(param_2,param_1,param_3,param_4);
        goto LAB_103a06bcc;
      case 0x19:
        func_0x000107c61428(param_1 + 0xe1,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x140);
        lVar2 = param_1 + 0xe1;
        break;
      case 0x1a:
        func_0x000107c61428(param_1 + 0xe2,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x140);
        lVar2 = param_1 + 0xe2;
        break;
      default:
        goto LAB_103a06bcc;
      }
      (*pcVar3)(lVar2,param_3,param_4);
      func_0x000107c614a8(auStack_68);
LAB_103a06bcc:
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103a06f38; end: 103a06fc3;  */

void FUN_103a06f38(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long unaff_x21;
  byte bStack_31;
  
  bStack_31 = 2;
  (**(code **)(param_4 + 0x140))(&bStack_31,param_3,param_4);
  bVar1 = bStack_31;
  if ((unaff_x21 == 0) && (bStack_31 != 2)) {
    if (*(byte *)(param_2 + 0xe0) < 0xfc) {
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    *(byte *)(param_2 + 0xe0) = bVar1 & 1;
  }
  return;
}



/* Entry: 103a06fc4; end: 103a07053;  */

void FUN_103a06fc4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long unaff_x21;
  byte bStack_31;
  
  bStack_31 = 2;
  (**(code **)(param_4 + 0x140))(&bStack_31,param_3,param_4);
  bVar1 = bStack_31;
  if ((unaff_x21 == 0) && (bStack_31 != 2)) {
    if (*(byte *)(param_2 + 0xe0) < 0xfc) {
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    *(byte *)(param_2 + 0xe0) = bVar1 & 1 | 0x10;
  }
  return;
}



/* Entry: 103a07054; end: 103a070e3;  */

void FUN_103a07054(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long unaff_x21;
  byte bStack_31;
  
  bStack_31 = 2;
  (**(code **)(param_4 + 0x140))(&bStack_31,param_3,param_4);
  bVar1 = bStack_31;
  if ((unaff_x21 == 0) && (bStack_31 != 2)) {
    if (*(byte *)(param_2 + 0xe0) < 0xfc) {
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    *(byte *)(param_2 + 0xe0) = bVar1 & 1 | 0x20;
  }
  return;
}



/* Entry: 103a070e4; end: 103a07173;  */

void FUN_103a070e4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long unaff_x21;
  byte bStack_31;
  
  bStack_31 = 2;
  (**(code **)(param_4 + 0x140))(&bStack_31,param_3,param_4);
  bVar1 = bStack_31;
  if ((unaff_x21 == 0) && (bStack_31 != 2)) {
    if (*(byte *)(param_2 + 0xe0) < 0xfc) {
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    *(byte *)(param_2 + 0xe0) = bVar1 & 1 | 0x30;
  }
  return;
}



/* Entry: 103a07174; end: 103a07203;  */

void FUN_103a07174(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long unaff_x21;
  byte bStack_31;
  
  bStack_31 = 2;
  (**(code **)(param_4 + 0x140))(&bStack_31,param_3,param_4);
  bVar1 = bStack_31;
  if ((unaff_x21 == 0) && (bStack_31 != 2)) {
    if (*(byte *)(param_2 + 0xe0) < 0xfc) {
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    *(byte *)(param_2 + 0xe0) = bVar1 & 1 | 0x40;
  }
  return;
}



/* Entry: 103a07204; end: 103a07293;  */

void FUN_103a07204(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long unaff_x21;
  byte bStack_31;
  
  bStack_31 = 2;
  (**(code **)(param_4 + 0x140))(&bStack_31,param_3,param_4);
  bVar1 = bStack_31;
  if ((unaff_x21 == 0) && (bStack_31 != 2)) {
    if (*(byte *)(param_2 + 0xe0) < 0xfc) {
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    *(byte *)(param_2 + 0xe0) = bVar1 & 1 | 0x50;
  }
  return;
}



/* Entry: 103a07294; end: 103a07323;  */

void FUN_103a07294(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long unaff_x21;
  byte bStack_31;
  
  bStack_31 = 2;
  (**(code **)(param_4 + 0x140))(&bStack_31,param_3,param_4);
  bVar1 = bStack_31;
  if ((unaff_x21 == 0) && (bStack_31 != 2)) {
    if (*(byte *)(param_2 + 0xe0) < 0xfc) {
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    *(byte *)(param_2 + 0xe0) = bVar1 & 1 | 0x60;
  }
  return;
}



/* Entry: 103a07324; end: 103a073b3;  */

void FUN_103a07324(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long unaff_x21;
  byte bStack_31;
  
  bStack_31 = 2;
  (**(code **)(param_4 + 0x140))(&bStack_31,param_3,param_4);
  bVar1 = bStack_31;
  if ((unaff_x21 == 0) && (bStack_31 != 2)) {
    if (*(byte *)(param_2 + 0xe0) < 0xfc) {
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    *(byte *)(param_2 + 0xe0) = bVar1 & 1 | 0x70;
  }
  return;
}



/* Entry: 103a073b4; end: 103a07443;  */

void FUN_103a073b4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long unaff_x21;
  byte bStack_31;
  
  bStack_31 = 2;
  (**(code **)(param_4 + 0x140))(&bStack_31,param_3,param_4);
  bVar1 = bStack_31;
  if ((unaff_x21 == 0) && (bStack_31 != 2)) {
    if (*(byte *)(param_2 + 0xe0) < 0xfc) {
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    *(byte *)(param_2 + 0xe0) = bVar1 & 1 | 0x80;
  }
  return;
}



/* Entry: 103a07444; end: 103a074f3;  */

void FUN_103a07444(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long unaff_x21;
  code *pcVar2;
  byte bStack_41;
  
  bStack_41 = 3;
  pcVar2 = *(code **)(param_4 + 0x188);
  func_0x000103a17c54();
  (*pcVar2)(&bStack_41,&UNK_1106bde58,param_1,param_3,param_4);
  bVar1 = bStack_41;
  if ((unaff_x21 == 0) && (bStack_41 != 3)) {
    if (*(byte *)(param_2 + 0xe0) < 0xfc) {
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    *(byte *)(param_2 + 0xe0) = bVar1 | 0x90;
  }
  return;
}



/* Entry: 103a074f4; end: 103a078ff;  */

/* WARNING: Removing unreachable block (ram,0x000103a07638) */
/* WARNING: Removing unreachable block (ram,0x000103a077c0) */

void FUN_103a074f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x21;
  code *pcVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  FUN_103a07900();
  if (unaff_x21 != 0) {
    return;
  }
  FUN_103a0799c(param_1,param_2,param_3,param_4);
  FUN_103a07a24(param_1,param_2,param_3,param_4);
  FUN_103a07aac(param_1,param_2,param_3,param_4);
  FUN_103a07b34(param_1,param_2,param_3,param_4);
  FUN_103a07bbc(param_1,param_2,param_3,param_4);
  FUN_103a07c58(param_1,param_2,param_3,param_4);
  FUN_103a07cf4(param_1,param_2,param_3,param_4);
  FUN_103a07d90(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0xd0,auStack_68,0,0);
  lVar3 = *(long *)(param_1 + 0xd0);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x100);
    func_0x000107c61434();
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0xd8,auStack_80,0,0);
  lVar3 = *(long *)(param_1 + 0xd8);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x100);
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  bVar1 = *(byte *)(param_1 + 0xe0);
  if (bVar1 < 0xfc) {
    bVar2 = bVar1 >> 4;
    if (bVar2 < 3) {
      if (bVar2 == 0) {
        if (0xf < bVar1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103a078ec);
          (*pcVar5)();
        }
        pcVar5 = *(code **)(param_4 + 0x68);
        uVar4 = 0xc;
      }
      else if (bVar2 == 1) {
        if ((bVar1 & 0xf0) != 0x10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103a078f8);
          (*pcVar5)();
        }
        pcVar5 = *(code **)(param_4 + 0x68);
        uVar4 = 0xd;
      }
      else {
        if (bVar2 != 2) goto LAB_103a077e0;
        if ((bVar1 & 0xf0) != 0x20) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103a078e4);
          (*pcVar5)();
        }
        pcVar5 = *(code **)(param_4 + 0x68);
        uVar4 = 0xe;
      }
    }
    else if (bVar2 < 5) {
      if (bVar2 == 3) {
        if ((bVar1 & 0xf0) != 0x30) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103a078f0);
          (*pcVar5)();
        }
        pcVar5 = *(code **)(param_4 + 0x68);
        uVar4 = 0xf;
      }
      else {
        if (bVar2 != 4) goto LAB_103a077e0;
        if ((bVar1 & 0xf0) != 0x40) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103a078e0);
          (*pcVar5)();
        }
        pcVar5 = *(code **)(param_4 + 0x68);
        uVar4 = 0x10;
      }
    }
    else if (bVar2 == 5) {
      if ((bVar1 & 0xf0) != 0x50) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103a078f4);
        (*pcVar5)();
      }
      pcVar5 = *(code **)(param_4 + 0x68);
      uVar4 = 0x11;
    }
    else {
      if (bVar2 != 6) goto LAB_103a077e0;
      if ((bVar1 & 0xf0) != 0x60) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103a078e8);
        (*pcVar5)();
      }
      pcVar5 = *(code **)(param_4 + 0x68);
      uVar4 = 0x12;
    }
    (*pcVar5)(bVar1 & 1,uVar4,param_3,param_4);
  }
LAB_103a077e0:
  func_0x000103a0ae6c(param_1,param_2,param_3,param_4,0x13);
  FUN_103a07e2c(param_1,param_2,param_3,param_4);
  bVar1 = *(byte *)(param_1 + 0xe0);
  if (bVar1 < 0xfc) {
    if (bVar1 >> 4 == 8) {
      if (-0x71 < (char)bVar1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103a07900);
        (*pcVar5)();
      }
      pcVar5 = *(code **)(param_4 + 0x68);
      uVar4 = 0x16;
    }
    else {
      if (bVar1 >> 4 != 7) goto LAB_103a0787c;
      if ((bVar1 & 0xf0) != 0x70) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103a078fc);
        (*pcVar5)();
      }
      pcVar5 = *(code **)(param_4 + 0x68);
      uVar4 = 0x15;
    }
    (*pcVar5)(bVar1 & 1,uVar4,param_3,param_4);
  }
LAB_103a0787c:
  FUN_103a07eb4(param_1,param_2,param_3,param_4);
  FUN_103a07f50(param_1,param_2,param_3,param_4);
  FUN_103a07fd4(param_1,param_2,param_3,param_4);
  FUN_103a0805c(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 103a07900; end: 103a0799b;  */

void FUN_103a07900(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(lVar2);
    (*pcVar3)(uVar1,lVar2,1,param_3,param_4);
    func_0x000107c6142c(lVar2);
  }
  return;
}



/* Entry: 103a0799c; end: 103a07a23;  */

void FUN_103a0799c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x30,auStack_58,0,0);
  if (*(char *)(param_1 + 0x38) != '\x01') {
    (**(code **)(param_4 + 0x30))(*(undefined8 *)(param_1 + 0x30),2,param_3,param_4);
  }
  return;
}



/* Entry: 103a07a24; end: 103a07aab;  */

void FUN_103a07a24(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x40,auStack_58,0,0);
  if (*(char *)(param_1 + 0x48) != '\x01') {
    (**(code **)(param_4 + 0x30))(*(undefined8 *)(param_1 + 0x40),3,param_3,param_4);
  }
  return;
}



/* Entry: 103a07aac; end: 103a07b33;  */

void FUN_103a07aac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x60,auStack_58,0,0);
  if (*(char *)(param_1 + 0x68) != '\x01') {
    (**(code **)(param_4 + 0x30))(*(undefined8 *)(param_1 + 0x60),4,param_3,param_4);
  }
  return;
}



/* Entry: 103a07b34; end: 103a07bbb;  */

void FUN_103a07b34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x70,auStack_58,0,0);
  if (*(char *)(param_1 + 0x78) != '\x01') {
    (**(code **)(param_4 + 0x30))(*(undefined8 *)(param_1 + 0x70),5,param_3,param_4);
  }
  return;
}



/* Entry: 103a07bbc; end: 103a07c57;  */

void FUN_103a07bbc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x80,auStack_58,0,0);
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    pcVar3 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(lVar2);
    (*pcVar3)(uVar1,lVar2,6,param_3,param_4);
    func_0x000107c6142c(lVar2);
  }
  return;
}



/* Entry: 103a07c58; end: 103a07cf3;  */

void FUN_103a07c58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x90,auStack_58,0,0);
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    pcVar3 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(lVar2);
    (*pcVar3)(uVar1,lVar2,7,param_3,param_4);
    func_0x000107c6142c(lVar2);
  }
  return;
}



/* Entry: 103a07cf4; end: 103a07d8f;  */

void FUN_103a07cf4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0xa0,auStack_58,0,0);
  lVar2 = *(long *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    pcVar3 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(lVar2);
    (*pcVar3)(uVar1,lVar2,8,param_3,param_4);
    func_0x000107c6142c(lVar2);
  }
  return;
}



/* Entry: 103a07d90; end: 103a07e2b;  */

void FUN_103a07d90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0xb0,auStack_58,0,0);
  lVar2 = *(long *)(param_1 + 0xb8);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    pcVar3 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(lVar2);
    (*pcVar3)(uVar1,lVar2,9,param_3,param_4);
    func_0x000107c6142c(lVar2);
  }
  return;
}



/* Entry: 103a07e2c; end: 103a07eb3;  */

void FUN_103a07e2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x50,auStack_58,0,0);
  if (*(char *)(param_1 + 0x58) != '\x01') {
    (**(code **)(param_4 + 0x30))(*(undefined8 *)(param_1 + 0x50),0x14,param_3,param_4);
  }
  return;
}



/* Entry: 103a07eb4; end: 103a07f4f;  */

void FUN_103a07eb4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0xc0,auStack_58,0,0);
  lVar2 = *(long *)(param_1 + 200);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    pcVar3 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(lVar2);
    (*pcVar3)(uVar1,lVar2,0x17,param_3,param_4);
    func_0x000107c6142c(lVar2);
  }
  return;
}



/* Entry: 103a07f50; end: 103a07fd3;  */

void FUN_103a07f50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  byte bStack_31;
  
  bStack_31 = *(byte *)(param_1 + 0xe0);
  if ((bStack_31 < 0xfc) && ((bStack_31 & 0xf0) == 0x90)) {
    bStack_31 = bStack_31 & 0xf;
    pcVar1 = *(code **)(param_4 + 0x80);
    func_0x000103a17c54();
    (*pcVar1)(&bStack_31,0x18,&UNK_1106bde58,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103a07fd4; end: 103a0805b;  */

void FUN_103a07fd4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0xe1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0xe1) != 2) {
    (**(code **)(param_4 + 0x68))(*(byte *)(param_1 + 0xe1) & 1,0x19,param_3,param_4);
  }
  return;
}



/* Entry: 103a0805c; end: 103a080e3;  */

void FUN_103a0805c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0xe2,auStack_58,0,0);
  if (*(byte *)(param_1 + 0xe2) != 2) {
    (**(code **)(param_4 + 0x68))(*(byte *)(param_1 + 0xe2) & 1,0x1a,param_3,param_4);
  }
  return;
}



/* Entry: 103a080e4; end: 103a08723;  */

undefined8 FUN_103a080e4(long param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
  lVar4 = *(long *)(param_2 + 0x18);
  if (lVar5 == 0) {
    if (lVar4 != 0) {
      return 0;
    }
  }
  else {
    if (lVar4 == 0) {
      return 0;
    }
    if ((uVar6 != *(ulong *)(param_2 + 0x10) || lVar5 != lVar4) &&
       (func_0x000107c605b8(uVar6,lVar5,*(ulong *)(param_2 + 0x10),lVar4,0), (uVar6 & 1) == 0)) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x20,auStack_88,0,0);
  lVar5 = *(long *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x28);
  func_0x000107c61428(param_2 + 0x20,auStack_a0,0,0);
  if (cVar1 == '\x01') {
    if (*(char *)(param_2 + 0x28) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0x28) == '\x01') {
      return 0;
    }
    if (lVar5 != *(long *)(param_2 + 0x20)) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x30,auStack_b8,0,0);
  lVar5 = *(long *)(param_1 + 0x30);
  cVar1 = *(char *)(param_1 + 0x38);
  func_0x000107c61428(param_2 + 0x30,auStack_d0,0,0);
  if (cVar1 == '\x01') {
    if (*(char *)(param_2 + 0x38) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0x38) == '\x01') {
      return 0;
    }
    if (lVar5 != *(long *)(param_2 + 0x30)) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x40,auStack_e8,0,0);
  lVar5 = *(long *)(param_1 + 0x40);
  cVar1 = *(char *)(param_1 + 0x48);
  func_0x000107c61428(param_2 + 0x40,auStack_100,0,0);
  if (cVar1 == '\x01') {
    if (*(char *)(param_2 + 0x48) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0x48) == '\x01') {
      return 0;
    }
    if (lVar5 != *(long *)(param_2 + 0x40)) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x50,auStack_118,0,0);
  lVar5 = *(long *)(param_1 + 0x50);
  cVar1 = *(char *)(param_1 + 0x58);
  func_0x000107c61428(param_2 + 0x50,auStack_130,0,0);
  if (cVar1 == '\x01') {
    if (*(char *)(param_2 + 0x58) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0x58) == '\x01') {
      return 0;
    }
    if (lVar5 != *(long *)(param_2 + 0x50)) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x60,auStack_148,0,0);
  lVar5 = *(long *)(param_1 + 0x60);
  cVar1 = *(char *)(param_1 + 0x68);
  func_0x000107c61428(param_2 + 0x60,auStack_160,0,0);
  if (cVar1 == '\x01') {
    if (*(char *)(param_2 + 0x68) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0x68) == '\x01') {
      return 0;
    }
    if (lVar5 != *(long *)(param_2 + 0x60)) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x70,auStack_178,0,0);
  lVar5 = *(long *)(param_1 + 0x70);
  cVar1 = *(char *)(param_1 + 0x78);
  func_0x000107c61428(param_2 + 0x70,auStack_190,0,0);
  if (cVar1 == '\x01') {
    if (*(char *)(param_2 + 0x78) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0x78) == '\x01') {
      return 0;
    }
    if (lVar5 != *(long *)(param_2 + 0x70)) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x80,auStack_1a8,0,0);
  uVar6 = *(ulong *)(param_1 + 0x80);
  lVar5 = *(long *)(param_1 + 0x88);
  func_0x000107c61428(param_2 + 0x80,auStack_1c0,0,0);
  lVar4 = *(long *)(param_2 + 0x88);
  if (lVar5 == 0) {
    if (lVar4 != 0) {
      return 0;
    }
  }
  else {
    if (lVar4 == 0) {
      return 0;
    }
    if (((uVar6 != *(ulong *)(param_2 + 0x80)) || (lVar5 != lVar4)) &&
       (func_0x000107c605b8(uVar6,lVar5,*(ulong *)(param_2 + 0x80),lVar4,0), (uVar6 & 1) == 0)) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x90,auStack_1d8,0,0);
  uVar6 = *(ulong *)(param_1 + 0x90);
  lVar5 = *(long *)(param_1 + 0x98);
  func_0x000107c61428(param_2 + 0x90,auStack_1f0,0,0);
  lVar4 = *(long *)(param_2 + 0x98);
  if (lVar5 == 0) {
    if (lVar4 != 0) {
      return 0;
    }
  }
  else {
    if (lVar4 == 0) {
      return 0;
    }
    if (((uVar6 != *(ulong *)(param_2 + 0x90)) || (lVar5 != lVar4)) &&
       (func_0x000107c605b8(uVar6,lVar5,*(ulong *)(param_2 + 0x90),lVar4,0), (uVar6 & 1) == 0)) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0xa0,auStack_208,0,0);
  uVar6 = *(ulong *)(param_1 + 0xa0);
  lVar5 = *(long *)(param_1 + 0xa8);
  func_0x000107c61428(param_2 + 0xa0,auStack_220,0,0);
  lVar4 = *(long *)(param_2 + 0xa8);
  if (lVar5 == 0) {
    if (lVar4 != 0) {
      return 0;
    }
  }
  else {
    if (lVar4 == 0) {
      return 0;
    }
    if (((uVar6 != *(ulong *)(param_2 + 0xa0)) || (lVar5 != lVar4)) &&
       (func_0x000107c605b8(uVar6,lVar5,*(ulong *)(param_2 + 0xa0),lVar4,0), (uVar6 & 1) == 0)) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0xb0,auStack_238,0,0);
  uVar6 = *(ulong *)(param_1 + 0xb0);
  lVar5 = *(long *)(param_1 + 0xb8);
  func_0x000107c61428(param_2 + 0xb0,auStack_250,0,0);
  lVar4 = *(long *)(param_2 + 0xb8);
  if (lVar5 == 0) {
    if (lVar4 != 0) {
      return 0;
    }
  }
  else {
    if (lVar4 == 0) {
      return 0;
    }
    if (((uVar6 != *(ulong *)(param_2 + 0xb0)) || (lVar5 != lVar4)) &&
       (func_0x000107c605b8(uVar6,lVar5,*(ulong *)(param_2 + 0xb0),lVar4,0), (uVar6 & 1) == 0)) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0xc0,auStack_268,0,0);
  uVar6 = *(ulong *)(param_1 + 0xc0);
  lVar5 = *(long *)(param_1 + 200);
  func_0x000107c61428(param_2 + 0xc0,auStack_280,0,0);
  lVar4 = *(long *)(param_2 + 200);
  if (lVar5 == 0) {
    if (lVar4 != 0) {
      return 0;
    }
  }
  else {
    if (lVar4 == 0) {
      return 0;
    }
    if (((uVar6 != *(ulong *)(param_2 + 0xc0)) || (lVar5 != lVar4)) &&
       (func_0x000107c605b8(uVar6,lVar5,*(ulong *)(param_2 + 0xc0),lVar4,0), (uVar6 & 1) == 0)) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0xd0,auStack_298,0,0);
  uVar6 = *(ulong *)(param_1 + 0xd0);
  func_0x000107c61428(param_2 + 0xd0,auStack_2b0,0,0);
  func_0x00010142cfc4(uVar6,*(undefined8 *)(param_2 + 0xd0));
  if ((uVar6 & 1) != 0) {
    func_0x000107c61428(param_1 + 0xd8,auStack_2c8,0,0);
    uVar6 = *(ulong *)(param_1 + 0xd8);
    func_0x000107c61428(param_2 + 0xd8,auStack_2e0,0,0);
    func_0x00010142cfc4(uVar6,*(undefined8 *)(param_2 + 0xd8));
    if ((uVar6 & 1) != 0) {
      uVar6 = (ulong)*(byte *)(param_1 + 0xe0);
      if (*(byte *)(param_1 + 0xe0) < 0xfc) {
        if (0xfb < *(byte *)(param_2 + 0xe0)) {
          return 0;
        }
        func_0x000103a0e75c();
        if ((uVar6 & 1) == 0) {
          return 0;
        }
      }
      else if (*(byte *)(param_2 + 0xe0) < 0xfc) {
        return 0;
      }
      func_0x000107c61428(param_1 + 0xe1,auStack_2f8,0,0);
      bVar2 = *(byte *)(param_1 + 0xe1);
      func_0x000107c61428(param_2 + 0xe1,auStack_310,0,0);
      bVar3 = *(byte *)(param_2 + 0xe1);
      if (bVar2 == 2) {
        if (bVar3 != 2) {
          return 0;
        }
      }
      else {
        if (bVar3 == 2) {
          return 0;
        }
        if (((bVar2 ^ bVar3) & 1) != 0) {
          return 0;
        }
      }
      func_0x000107c61428(param_1 + 0xe2,auStack_328,0,0);
      bVar2 = *(byte *)(param_1 + 0xe2);
      func_0x000107c61428(param_2 + 0xe2,auStack_340,0,0);
      bVar3 = *(byte *)(param_2 + 0xe2);
      if (bVar2 == 2) {
        if (bVar3 != 2) {
          return 0;
        }
      }
      else {
        if (bVar3 == 2) {
          return 0;
        }
        if (((bVar2 ^ bVar3) & 1) != 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 103a08724; end: 103a08783;  */

void FUN_103a08724(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112fc9890 != -1) {
    func_0x000107c61568(0x112fc9890,0x103a06a20);
  }
  uVar1 = uRam0000000112fc9898;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103a08784; end: 103a087bb;  */

undefined1  [16] FUN_103a08784(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f188750;
  auVar1._0_8_ = 0xd000000000000014;
  return auVar1;
}



/* Entry: 103a087bc; end: 103a08817;  */

void FUN_103a087bc(void)

{
  func_0x000103a0a94c();
  return;
}



/* Entry: 103a08818; end: 103a0884f;  */

uint FUN_103a08818(long param_1,long param_2)

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
  func_0x000103a17894();
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



/* Entry: 103a08850; end: 103a0885b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103a08850(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  byte *unaff_x25;
  ulong uVar26;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  lVar22 = *param_1;
  uVar16 = param_1[1];
  uVar26 = param_1[2];
  pbVar9 = (byte *)*unaff_x20;
  pbVar23 = (byte *)unaff_x20[1];
  uVar25 = unaff_x20[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_103a080e4(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
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
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
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
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103a0885c; end: 103a088fb;  */

/* WARNING: Possible PIC construction at 0x000103a088a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a088b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a088ac) */
/* WARNING: Removing unreachable block (ram,0x000103a088bc) */

void FUN_103a0885c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9b70 != -1) {
    func_0x000107c61568(0x112fc9b70,FUN_103a069d8);
  }
  uVar5 = uRam000000011380ca30;
  uVar4 = uRam000000011380ca28;
  uVar3 = uRam000000011380ca20;
  uVar2 = uRam000000011380ca18;
  uVar1 = uRam000000011380ca10;
  *param_1 = uRam000000011380ca08;
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



/* Entry: 103a088fc; end: 103a0890f;  */

void FUN_103a088fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca518;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca518,&UNK_10dc3a668);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a08910; end: 103a08947;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a08910(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  func_0x000103a13318();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 103a08948; end: 103a08953;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103a08948(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  byte *unaff_x25;
  ulong uVar26;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar9 = (byte *)*param_1;
  pbVar23 = (byte *)param_1[1];
  uVar25 = param_1[2];
  lVar22 = *param_2;
  uVar16 = param_2[1];
  uVar26 = param_2[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_103a080e4(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
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
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
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
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
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
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
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



/* Entry: 103a08954; end: 103a0899b;  */

void FUN_103a08954(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3a850,0x6c,2);
  uRam000000011380ca40 = uStack_38;
  uRam000000011380ca38 = uStack_40;
  uRam000000011380ca50 = uStack_28;
  uRam000000011380ca48 = uStack_30;
  uRam000000011380ca60 = uStack_18;
  uRam000000011380ca58 = uStack_20;
  return;
}



/* Entry: 103a0899c; end: 103a08b0f;  */

/* WARNING: Removing unreachable block (ram,0x000103a08b00) */
/* WARNING: Removing unreachable block (ram,0x000103a08a90) */
/* WARNING: Removing unreachable block (ram,0x000103a08a68) */

void FUN_103a0899c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar3 = *(code **)(param_3 + 0x170);
        break;
      case 2:
        pcVar3 = *(code **)(param_3 + 0x98);
        break;
      case 3:
        pcVar3 = *(code **)(param_3 + 0x98);
        break;
      case 4:
        pcVar3 = *(code **)(param_3 + 0x158);
        break;
      case 5:
        pcVar3 = *(code **)(param_3 + 0x170);
        break;
      case 6:
        pcVar3 = *(code **)(param_3 + 0x170);
        break;
      case 7:
        pcVar3 = *(code **)(param_3 + 0x170);
        break;
      case 8:
        pcVar3 = *(code **)(param_3 + 0x178);
        break;
      case 9:
        pcVar3 = *(code **)(param_3 + 0x178);
        break;
      case 10:
        FUN_103a08b10(param_1);
        goto LAB_103a08a0c;
      case 0xb:
        FUN_103a08b9c(param_1);
        goto LAB_103a08a0c;
      case 0xc:
        FUN_103a08c2c(param_1);
        goto LAB_103a08a0c;
      case 0xd:
        pcVar3 = *(code **)(param_3 + 0x98);
        break;
      case 0xe:
        pcVar3 = *(code **)(param_3 + 0x140);
        break;
      default:
        goto LAB_103a08a0c;
      }
      (*pcVar3)();
LAB_103a08a0c:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103a08b10; end: 103a08b9b;  */

void FUN_103a08b10(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long unaff_x21;
  byte bStack_31;
  
  bStack_31 = 2;
  (**(code **)(param_4 + 0x140))(&bStack_31,param_3,param_4);
  bVar1 = bStack_31;
  if ((unaff_x21 == 0) && (bStack_31 != 2)) {
    if (*(byte *)(param_2 + 0x10) < 0xfe) {
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    *(byte *)(param_2 + 0x10) = bVar1 & 1;
  }
  return;
}



/* Entry: 103a08b9c; end: 103a08c2b;  */

void FUN_103a08b9c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long unaff_x21;
  byte bStack_31;
  
  bStack_31 = 2;
  (**(code **)(param_4 + 0x140))(&bStack_31,param_3,param_4);
  bVar1 = bStack_31;
  if ((unaff_x21 == 0) && (bStack_31 != 2)) {
    if (*(byte *)(param_2 + 0x10) < 0xfe) {
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    *(byte *)(param_2 + 0x10) = bVar1 & 1 | 0x40;
  }
  return;
}



/* Entry: 103a08c2c; end: 103a08cbb;  */

void FUN_103a08c2c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long unaff_x21;
  byte bStack_31;
  
  bStack_31 = 2;
  (**(code **)(param_4 + 0x140))(&bStack_31,param_3,param_4);
  bVar1 = bStack_31;
  if ((unaff_x21 == 0) && (bStack_31 != 2)) {
    if (*(byte *)(param_2 + 0x10) < 0xfe) {
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    *(byte *)(param_2 + 0x10) = bVar1 & 1 | 0x80;
  }
  return;
}



/* Entry: 103a08cbc; end: 103a08ef3;  */

void FUN_103a08cbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_103a08ef4();
  if (unaff_x21 == 0) {
    if ((char)unaff_x20[10] != '\x01') {
      (**(code **)(param_3 + 0x30))(unaff_x20[9],2,param_2,param_3);
    }
    if ((char)unaff_x20[0xc] != '\x01') {
      (**(code **)(param_3 + 0x30))(unaff_x20[0xb],3,param_2,param_3);
    }
    if (unaff_x20[0xe] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[0xd],unaff_x20[0xe],4,param_2,param_3);
    }
    FUN_103a08f88();
    FUN_103a0901c();
    FUN_103a090b0();
    if (*(long *)(*unaff_x20 + 0x10) != 0) {
      (**(code **)(param_3 + 0x108))(*unaff_x20,8,param_2,param_3);
    }
    if (*(long *)(unaff_x20[1] + 0x10) != 0) {
      (**(code **)(param_3 + 0x108))(unaff_x20[1],9,param_2,param_3);
    }
    bVar1 = *(byte *)(unaff_x20 + 2);
    if (bVar1 < 0xfe) {
      if (bVar1 >> 6 == 0) {
        if (0x3f < bVar1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103a08ef0);
          (*pcVar3)();
        }
        pcVar3 = *(code **)(param_3 + 0x68);
        uVar2 = 10;
      }
      else if (bVar1 >> 6 == 1) {
        if ((bVar1 & 0xc0) != 0x40) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103a08eec);
          (*pcVar3)();
        }
        pcVar3 = *(code **)(param_3 + 0x68);
        uVar2 = 0xb;
      }
      else {
        if (-0x41 < (char)bVar1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103a08ef4);
          (*pcVar3)();
        }
        pcVar3 = *(code **)(param_3 + 0x68);
        uVar2 = 0xc;
      }
      (*pcVar3)(bVar1 & 1,uVar2,param_2,param_3);
    }
    if ((char)unaff_x20[8] != '\x01') {
      (**(code **)(param_3 + 0x30))(unaff_x20[7],0xd,param_2,param_3);
    }
    if (*(byte *)(unaff_x20 + 0x15) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 0x15) & 1,0xe,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 103a08ef4; end: 103a08f87;  */

void FUN_103a08ef4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_4 + 0x78);
    func_0x00010006c00c(uVar2,uVar1);
    (*pcVar3)(uVar2,uVar1,1,param_3,param_4);
    func_0x0001000b44c0(uVar2,uVar1);
  }
  return;
}



/* Entry: 103a08f88; end: 103a0901b;  */

void FUN_103a08f88(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x80);
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    pcVar3 = *(code **)(param_4 + 0x78);
    func_0x00010006c00c(uVar2,uVar1);
    (*pcVar3)(uVar2,uVar1,5,param_3,param_4);
    func_0x0001000b44c0(uVar2,uVar1);
  }
  return;
}



/* Entry: 103a0901c; end: 103a090af;  */

void FUN_103a0901c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x90);
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    pcVar3 = *(code **)(param_4 + 0x78);
    func_0x00010006c00c(uVar2,uVar1);
    (*pcVar3)(uVar2,uVar1,6,param_3,param_4);
    func_0x0001000b44c0(uVar2,uVar1);
  }
  return;
}



/* Entry: 103a090b0; end: 103a09143;  */

void FUN_103a090b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = *(ulong *)(param_1 + 0xa0);
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    pcVar3 = *(code **)(param_4 + 0x78);
    func_0x00010006c00c(uVar2,uVar1);
    (*pcVar3)(uVar2,uVar1,7,param_3,param_4);
    func_0x0001000b44c0(uVar2,uVar1);
  }
  return;
}



/* Entry: 103a09144; end: 103a091d7;  */

void FUN_103a09144(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = puVar1;
  *(undefined1 *)(param_1 + 2) = 0xfe;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  param_1[6] = 0xf000000000000000;
  param_1[5] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0xf000000000000000;
  param_1[0x13] = 0;
  param_1[0x12] = 0xf000000000000000;
  param_1[0x14] = 0xf000000000000000;
  *(undefined1 *)(param_1 + 0x15) = 2;
  return;
}



/* Entry: 103a091d8; end: 103a09207;  */

undefined1  [16] FUN_103a091d8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 103a09208; end: 103a0923b;  */

void FUN_103a09208(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 103a0923c; end: 103a0924f;  */

undefined1  [16] FUN_103a0923c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x103a0924c;
  return auVar1;
}



/* Entry: 103a09250; end: 103a09263;  */

void FUN_103a09250(void)

{
  FUN_103a0899c();
  return;
}



/* Entry: 103a09264; end: 103a092bb;  */

void FUN_103a09264(void)

{
  FUN_103a08cbc();
  return;
}



/* Entry: 103a092bc; end: 103a092bf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a092bc(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103a092c0; end: 103a092f7;  */

uint FUN_103a092c0(long param_1,long param_2)

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
  func_0x000103a17854();
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



/* Entry: 103a092f8; end: 103a0938b;  */

uint FUN_103a092f8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
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
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_48 = param_1[0x11];
  uStack_50 = param_1[0x10];
  uStack_40 = param_1[0x12];
  uStack_38 = (undefined1)param_1[0x13];
  uStack_2f = *(undefined8 *)((long)param_1 + 0xa1);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_1 + 0x99);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x99) >> 0x38);
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_68 = param_1[0xd];
  uStack_70 = param_1[0xc];
  uStack_58 = param_1[0xf];
  uStack_60 = param_1[0xe];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_f8 = unaff_x20[0x11];
  uStack_100 = unaff_x20[0x10];
  uStack_f0 = unaff_x20[0x12];
  uStack_e8 = (undefined1)unaff_x20[0x13];
  uStack_df = *(undefined8 *)((long)unaff_x20 + 0xa1);
  uStack_e7 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x99);
  uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x99) >> 0x38);
  uStack_138 = unaff_x20[9];
  uStack_140 = unaff_x20[8];
  uStack_128 = unaff_x20[0xb];
  uStack_130 = unaff_x20[10];
  uStack_118 = unaff_x20[0xd];
  uStack_120 = unaff_x20[0xc];
  uStack_108 = unaff_x20[0xf];
  uStack_110 = unaff_x20[0xe];
  uStack_178 = unaff_x20[1];
  uStack_180 = *unaff_x20;
  uStack_168 = unaff_x20[3];
  uStack_170 = unaff_x20[2];
  uStack_158 = unaff_x20[5];
  uStack_160 = unaff_x20[4];
  uStack_148 = unaff_x20[7];
  uStack_150 = unaff_x20[6];
  func_0x000103a0e834(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 103a0938c; end: 103a0942b;  */

/* WARNING: Possible PIC construction at 0x000103a093d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a093e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a093dc) */
/* WARNING: Removing unreachable block (ram,0x000103a093ec) */

void FUN_103a0938c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9b80 != -1) {
    func_0x000107c61568(0x112fc9b80,FUN_103a08954);
  }
  uVar5 = uRam000000011380ca60;
  uVar4 = uRam000000011380ca58;
  uVar3 = uRam000000011380ca50;
  uVar2 = uRam000000011380ca48;
  uVar1 = uRam000000011380ca40;
  *param_1 = uRam000000011380ca38;
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



/* Entry: 103a0942c; end: 103a09467;  */

void FUN_103a0942c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca508;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca508,&UNK_10dc3a660);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a09468; end: 103a095b3;  */

void FUN_103a09468(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_128 [72];
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
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_58 = unaff_x20[0x11];
  uStack_60 = unaff_x20[0x10];
  uStack_50 = unaff_x20[0x12];
  uStack_48 = (undefined1)unaff_x20[0x13];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0xa1);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x99);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x99) >> 0x38);
  uStack_98 = unaff_x20[9];
  uStack_a0 = unaff_x20[8];
  uStack_88 = unaff_x20[0xb];
  uStack_90 = unaff_x20[10];
  uStack_78 = unaff_x20[0xd];
  uStack_80 = unaff_x20[0xc];
  uStack_68 = unaff_x20[0xf];
  uStack_70 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[1];
  uStack_e0 = *unaff_x20;
  uStack_c8 = unaff_x20[3];
  uStack_d0 = unaff_x20[2];
  uStack_b8 = unaff_x20[5];
  uStack_c0 = unaff_x20[4];
  uStack_a8 = unaff_x20[7];
  uStack_b0 = unaff_x20[6];
  func_0x000107c6068c(auStack_128,0);
  func_0x000107c5fa50(auStack_128,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a095b4; end: 103a09647;  */

uint FUN_103a095b4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
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
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_f0 = param_1[0x12];
  uStack_e8 = (undefined1)param_1[0x13];
  uStack_df = *(undefined8 *)((long)param_1 + 0xa1);
  uStack_e7 = (undefined7)*(undefined8 *)((long)param_1 + 0x99);
  uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x99) >> 0x38);
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  uStack_118 = param_1[0xd];
  uStack_120 = param_1[0xc];
  uStack_108 = param_1[0xf];
  uStack_110 = param_1[0xe];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_48 = param_2[0x11];
  uStack_50 = param_2[0x10];
  uStack_40 = param_2[0x12];
  uStack_38 = (undefined1)param_2[0x13];
  uStack_2f = *(undefined8 *)((long)param_2 + 0xa1);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_2 + 0x99);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x99) >> 0x38);
  uStack_88 = param_2[9];
  uStack_90 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_68 = param_2[0xd];
  uStack_70 = param_2[0xc];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  func_0x000103a0e834(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 103a09648; end: 103a0968f;  */

void FUN_103a09648(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3a820,0x22,2);
  uRam000000011380ca70 = uStack_38;
  uRam000000011380ca68 = uStack_40;
  uRam000000011380ca80 = uStack_28;
  uRam000000011380ca78 = uStack_30;
  uRam000000011380ca90 = uStack_18;
  uRam000000011380ca88 = uStack_20;
  return;
}



/* Entry: 103a09690; end: 103a0975b;  */

void FUN_103a09690(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x50);
          goto LAB_103a09728;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x140);
          goto LAB_103a09728;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x58);
        }
        else {
          if (lVar1 != 4) goto LAB_103a09738;
          pcVar3 = *(code **)(param_3 + 0x58);
        }
LAB_103a09728:
        (*pcVar3)();
      }
LAB_103a09738:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103a0975c; end: 103a0983b;  */

void FUN_103a0975c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if (*(char *)((long)unaff_x20 + 0x24) != '\x01') {
    (**(code **)(param_3 + 0x18))((int)unaff_x20[4],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(byte *)((long)unaff_x20 + 0x25) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x25) & 1,2,param_2,param_3);
    }
    if (*(long *)(*unaff_x20 + 0x10) != 0) {
      (**(code **)(param_3 + 0xa8))(*unaff_x20,3,param_2,param_3);
    }
    if (*(long *)(unaff_x20[1] + 0x10) != 0) {
      (**(code **)(param_3 + 0xa8))(unaff_x20[1],4,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103a0983c; end: 103a09887;  */

void FUN_103a0983c(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = puVar1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)((long)param_1 + 0x24) = 0x201;
  return;
}



/* Entry: 103a09888; end: 103a098b7;  */

undefined1  [16] FUN_103a09888(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 103a098b8; end: 103a098eb;  */

void FUN_103a098b8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103a098ec; end: 103a098ff;  */

undefined1  [16] FUN_103a098ec(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x103a098fc;
  return auVar1;
}



/* Entry: 103a09900; end: 103a09927;  */

void FUN_103a09900(void)

{
  FUN_103a09690();
  return;
}



/* Entry: 103a09928; end: 103a0992b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a09928(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103a0992c; end: 103a09963;  */

uint FUN_103a0992c(long param_1,long param_2)

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
  func_0x000103a17814();
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



/* Entry: 103a09964; end: 103a099ab;  */

uint FUN_103a09964(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined6 uStack_58;
  undefined2 uStack_52;
  undefined6 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined6 uStack_28;
  undefined2 uStack_22;
  undefined6 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_30 = param_1[2];
  uStack_28 = (undefined6)param_1[3];
  uStack_22 = (undefined2)*(undefined8 *)((long)param_1 + 0x1e);
  uStack_20 = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 0x1e) >> 0x10);
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_60 = unaff_x20[2];
  uStack_58 = (undefined6)unaff_x20[3];
  uStack_52 = (undefined2)*(undefined8 *)((long)unaff_x20 + 0x1e);
  uStack_50 = (undefined6)((ulong)*(undefined8 *)((long)unaff_x20 + 0x1e) >> 0x10);
  func_0x000103a11260(&uStack_70,&uStack_40);
  return uVar1 & 1;
}


