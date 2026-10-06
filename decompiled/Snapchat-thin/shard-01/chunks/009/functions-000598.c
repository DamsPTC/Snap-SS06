/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016190bc; end: 1016190bf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1016190bc(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1016190c0; end: 1016190f7;  */

uint FUN_1016190c0(long param_1,long param_2)

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
  func_0x00010161ee38();
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



/* Entry: 1016190f8; end: 101619147;  */

uint FUN_1016190f8(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_290 [312];
  undefined1 auStack_158 [312];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_158,param_1,0x138);
  func_0x000107c610b4(auStack_290);
  FUN_10161b5f0(auStack_290,auStack_158);
  return uVar1 & 1;
}



/* Entry: 101619148; end: 1016191e7;  */

/* WARNING: Possible PIC construction at 0x000101619194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016191a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101619198) */
/* WARNING: Removing unreachable block (ram,0x0001016191a8) */

void FUN_101619148(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba438 != -1) {
    func_0x000107c61568(0x112dba438,FUN_101618b0c);
  }
  uVar5 = uRam0000000113801760;
  uVar4 = uRam0000000113801758;
  uVar3 = uRam0000000113801750;
  uVar2 = uRam0000000113801748;
  uVar1 = uRam0000000113801740;
  *param_1 = uRam0000000113801738;
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



/* Entry: 1016191e8; end: 101619223;  */

void FUN_1016191e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dba550;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dba550,&UNK_10d96d810);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101619224; end: 10161932f;  */

void FUN_101619224(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b0 [72];
  undefined1 auStack_168 [312];
  
  func_0x000107c610b4(auStack_168);
  func_0x000107c6068c(auStack_1b0,0);
  func_0x000107c5fa50(auStack_1b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101619330; end: 1016193f3;  */

uint FUN_101619330(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_290 [312];
  undefined1 auStack_158 [312];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_290,param_1,0x138);
  func_0x000107c610b4(auStack_158,param_2,0x138);
  FUN_10161b5f0(auStack_290,auStack_158);
  return uVar1 & 1;
}



/* Entry: 1016193f4; end: 10161943b;  */

void FUN_1016193f4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96d8b0,0x12,2);
  uRam0000000113801780 = uStack_38;
  uRam0000000113801778 = uStack_40;
  uRam0000000113801790 = uStack_28;
  uRam0000000113801788 = uStack_30;
  uRam00000001138017a0 = uStack_18;
  uRam0000000113801798 = uStack_20;
  return;
}



/* Entry: 10161943c; end: 10161950b;  */

void FUN_10161943c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x10;
LAB_1016194b0:
        (*pcVar4)(lVar2,&UNK_110790980,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x28;
        goto LAB_1016194b0;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10161950c; end: 10161957f;  */

void FUN_10161950c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_101619580();
  if (unaff_x21 == 0) {
    FUN_101619608();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 101619580; end: 101619607;  */

void FUN_101619580(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101619608; end: 10161968f;  */

void FUN_101619608(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,2,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101619690; end: 1016196d7;  */

void FUN_101619690(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xf000000000000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  return;
}



/* Entry: 1016196d8; end: 101619707;  */

undefined1  [16] FUN_1016196d8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 101619708; end: 10161973b;  */

void FUN_101619708(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10161973c; end: 10161974f;  */

undefined8 FUN_10161973c(void)

{
  return 0x10161974c;
}



/* Entry: 101619750; end: 101619763;  */

void FUN_101619750(void)

{
  FUN_10161943c();
  return;
}



/* Entry: 101619764; end: 10161979b;  */

void FUN_101619764(void)

{
  FUN_10161950c();
  return;
}



/* Entry: 10161979c; end: 10161979f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10161979c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1016197a0; end: 1016197d7;  */

uint FUN_1016197a0(long param_1,long param_2)

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
  func_0x00010161edf8();
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



/* Entry: 1016197d8; end: 10161981f;  */

uint FUN_1016197d8(undefined8 *param_1)

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
  FUN_10161aa70(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101619820; end: 1016198bf;  */

/* WARNING: Possible PIC construction at 0x00010161986c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010161987c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101619870) */
/* WARNING: Removing unreachable block (ram,0x000101619880) */

void FUN_101619820(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba450 != -1) {
    func_0x000107c61568(0x112dba450,FUN_1016193f4);
  }
  uVar5 = uRam00000001138017a0;
  uVar4 = uRam0000000113801798;
  uVar3 = uRam0000000113801790;
  uVar2 = uRam0000000113801788;
  uVar1 = uRam0000000113801780;
  *param_1 = uRam0000000113801778;
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



/* Entry: 1016198c0; end: 1016198fb;  */

void FUN_1016198c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dba540;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dba540,&UNK_10d96d808);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1016198fc; end: 1016199ff;  */

void FUN_1016198fc(undefined8 param_1,undefined8 param_2)

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



/* Entry: 101619a00; end: 101619a47;  */

uint FUN_101619a00(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10161aa70(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101619a48; end: 101619ab7;  */

void FUN_101619a48(void)

{
  func_0x000107c5fb78(0xd000000000000012,0x800000010efb3880);
  uRam00000001138017a8 = 0xd00000000000002a;
  uRam00000001138017b0 = 0x800000010efb3830;
  return;
}



/* Entry: 101619ab8; end: 101619aff;  */

void FUN_101619ab8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96d880,0x22,2);
  uRam00000001138017c0 = uStack_38;
  uRam00000001138017b8 = uStack_40;
  uRam00000001138017d0 = uStack_28;
  uRam00000001138017c8 = uStack_30;
  uRam00000001138017e0 = uStack_18;
  uRam00000001138017d8 = uStack_20;
  return;
}



/* Entry: 101619b00; end: 101619c0b;  */

void FUN_101619b00(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x198);
        FUN_10161c160();
LAB_101619b88:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x198);
          func_0x00010159f674();
          goto LAB_101619b88;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x00010161be40();
          goto LAB_101619b88;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101619c0c; end: 101619cd7;  */

void FUN_101619c0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar2 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_50 = *unaff_x20;
    func_0x00010161be40();
    (*pcVar2)(&lStack_50,1,&UNK_1103e9228,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_101619cd8();
  if (unaff_x21 == 0) {
    FUN_101619d74();
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 101619cd8; end: 101619d73;  */

void FUN_101619cd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = *(ulong *)(param_1 + 0x38);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x28);
    uStack_80 = *(undefined8 *)(param_1 + 0x20);
    uStack_70 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010159f674();
    (*pcVar1)(&uStack_80,2,&UNK_110734b68,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101619d74; end: 101619e0b;  */

void FUN_101619d74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_78 = *(ulong *)(param_1 + 0x60);
  if (uStack_78 >> 0x3c < 0xf) {
    uStack_80 = *(undefined8 *)(param_1 + 0x58);
    uStack_68 = *(undefined8 *)(param_1 + 0x70);
    uStack_70 = *(undefined8 *)(param_1 + 0x68);
    uStack_58 = *(undefined8 *)(param_1 + 0x80);
    uStack_60 = *(undefined8 *)(param_1 + 0x78);
    uStack_48 = *(undefined8 *)(param_1 + 0x90);
    uStack_50 = *(undefined8 *)(param_1 + 0x88);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10161c160();
    (*pcVar1)(&uStack_80,3,&UNK_1103e9100,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101619e0c; end: 101619e73;  */

void FUN_101619e0c(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0xf000000000000000;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  return;
}



/* Entry: 101619e74; end: 101619ea3;  */

undefined1  [16] FUN_101619e74(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 101619ea4; end: 101619ed7;  */

void FUN_101619ea4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 101619ed8; end: 101619eeb;  */

undefined1  [16] FUN_101619ed8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x101619ee8;
  return auVar1;
}



/* Entry: 101619eec; end: 101619eff;  */

void FUN_101619eec(void)

{
  FUN_101619b00();
  return;
}



/* Entry: 101619f00; end: 101619f57;  */

void FUN_101619f00(void)

{
  FUN_101619c0c();
  return;
}



/* Entry: 101619f58; end: 101619f5b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101619f58(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101619f5c; end: 101619f93;  */

uint FUN_101619f5c(long param_1,long param_2)

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
  func_0x00010161edb8();
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



/* Entry: 101619f94; end: 10161a023;  */

uint FUN_101619f94(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  
  uVar1 = 0;
  uStack_58 = param_1[0xd];
  uStack_60 = param_1[0xc];
  uStack_48 = param_1[0xf];
  uStack_50 = param_1[0xe];
  uStack_38 = param_1[0x11];
  uStack_40 = param_1[0x10];
  uStack_30 = param_1[0x12];
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_f8 = unaff_x20[0xd];
  uStack_100 = unaff_x20[0xc];
  uStack_e8 = unaff_x20[0xf];
  uStack_f0 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[0x11];
  uStack_e0 = unaff_x20[0x10];
  uStack_d0 = unaff_x20[0x12];
  uStack_138 = unaff_x20[5];
  uStack_140 = unaff_x20[4];
  uStack_128 = unaff_x20[7];
  uStack_130 = unaff_x20[6];
  uStack_118 = unaff_x20[9];
  uStack_120 = unaff_x20[8];
  uStack_108 = unaff_x20[0xb];
  uStack_110 = unaff_x20[10];
  uStack_158 = unaff_x20[1];
  uStack_160 = *unaff_x20;
  uStack_148 = unaff_x20[3];
  uStack_150 = unaff_x20[2];
  func_0x00010161adf8(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 10161a024; end: 10161a0c3;  */

/* WARNING: Possible PIC construction at 0x00010161a070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010161a080: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010161a074) */
/* WARNING: Removing unreachable block (ram,0x00010161a084) */

void FUN_10161a024(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba468 != -1) {
    func_0x000107c61568(0x112dba468,FUN_101619ab8);
  }
  uVar5 = uRam00000001138017e0;
  uVar4 = uRam00000001138017d8;
  uVar3 = uRam00000001138017d0;
  uVar2 = uRam00000001138017c8;
  uVar1 = uRam00000001138017c0;
  *param_1 = uRam00000001138017b8;
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



/* Entry: 10161a0c4; end: 10161a0ff;  */

void FUN_10161a0c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dba530;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dba530,&UNK_10d96d800);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10161a100; end: 10161a24b;  */

void FUN_10161a100(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_118 [72];
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
  
  uStack_68 = unaff_x20[0xd];
  uStack_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  uStack_50 = unaff_x20[0x10];
  uStack_40 = unaff_x20[0x12];
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
  func_0x000107c6068c(auStack_118,0);
  func_0x000107c5fa50(auStack_118,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10161a24c; end: 10161a2db;  */

uint FUN_10161a24c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  func_0x00010161adf8(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 10161a2dc; end: 10161a323;  */

void FUN_10161a2dc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96d850,0x22,2);
  uRam00000001138017f0 = uStack_38;
  uRam00000001138017e8 = uStack_40;
  uRam0000000113801800 = uStack_28;
  uRam00000001138017f8 = uStack_30;
  uRam0000000113801810 = uStack_18;
  uRam0000000113801808 = uStack_20;
  return;
}



/* Entry: 10161a324; end: 10161a3c3;  */

/* WARNING: Possible PIC construction at 0x00010161a370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010161a380: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010161a374) */
/* WARNING: Removing unreachable block (ram,0x00010161a384) */

void FUN_10161a324(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba480 != -1) {
    func_0x000107c61568(0x112dba480,FUN_10161a2dc);
  }
  uVar5 = uRam0000000113801810;
  uVar4 = uRam0000000113801808;
  uVar3 = uRam0000000113801800;
  uVar2 = uRam00000001138017f8;
  uVar1 = uRam00000001138017f0;
  *param_1 = uRam00000001138017e8;
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



/* Entry: 10161a3c4; end: 10161a433;  */

void FUN_10161a3c4(void)

{
  func_0x000107c5fb78(0xd000000000000014,0x800000010efb3860);
  uRam0000000113801818 = 0xd00000000000002a;
  uRam0000000113801820 = 0x800000010efb3830;
  return;
}



/* Entry: 10161a434; end: 10161a47b;  */

void FUN_10161a434(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96d820,0x21,2);
  uRam0000000113801830 = uStack_38;
  uRam0000000113801828 = uStack_40;
  uRam0000000113801840 = uStack_28;
  uRam0000000113801838 = uStack_30;
  uRam0000000113801850 = uStack_18;
  uRam0000000113801848 = uStack_20;
  return;
}



/* Entry: 10161a47c; end: 10161a52f;  */

/* WARNING: Removing unreachable block (ram,0x00010161a52c) */

void FUN_10161a47c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_10161c160();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_1103e9100,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10161a530; end: 10161a58b;  */

void FUN_10161a530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10161a58c();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10161a58c; end: 10161a61f;  */

void FUN_10161a58c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_78 = *(ulong *)(param_1 + 0x18);
  if (uStack_78 >> 0x3c < 0xf) {
    uStack_80 = *(undefined8 *)(param_1 + 0x10);
    uStack_68 = *(undefined8 *)(param_1 + 0x28);
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10161c160();
    (*pcVar1)(&uStack_80,1,&UNK_1103e9100,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10161a620; end: 10161a663;  */

void FUN_10161a620(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0xf000000000000000;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return;
}



/* Entry: 10161a664; end: 10161a6bf;  */

undefined1  [16]
FUN_10161a664(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*param_3 != -1) {
    func_0x000107c61568(param_3,param_6);
  }
  uVar1 = *param_4;
  uVar2 = *param_5;
  func_0x000107c61434(uVar2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10161a6c0; end: 10161a6c7;  */

undefined8 FUN_10161a6c0(void)

{
  return 1;
}



/* Entry: 10161a6c8; end: 10161a6f7;  */

undefined1  [16] FUN_10161a6c8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10161a6f8; end: 10161a72b;  */

void FUN_10161a6f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10161a72c; end: 10161a73f;  */

undefined8 FUN_10161a72c(void)

{
  return 0x10161a73c;
}



/* Entry: 10161a740; end: 10161a753;  */

void FUN_10161a740(void)

{
  FUN_10161a47c();
  return;
}



/* Entry: 10161a754; end: 10161a793;  */

void FUN_10161a754(void)

{
  FUN_10161a530();
  return;
}



/* Entry: 10161a794; end: 10161a797;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10161a794(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10161a798; end: 10161a7cf;  */

uint FUN_10161a798(long param_1,long param_2)

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
  FUN_10161ed78();
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



/* Entry: 10161a7d0; end: 10161a827;  */

uint FUN_10161a7d0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_18 = param_1[9];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_10161b390(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10161a828; end: 10161a8c7;  */

/* WARNING: Possible PIC construction at 0x00010161a874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010161a884: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010161a878) */
/* WARNING: Removing unreachable block (ram,0x00010161a888) */

void FUN_10161a828(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba490 != -1) {
    func_0x000107c61568(0x112dba490,FUN_10161a434);
  }
  uVar5 = uRam0000000113801850;
  uVar4 = uRam0000000113801848;
  uVar3 = uRam0000000113801840;
  uVar2 = uRam0000000113801838;
  uVar1 = uRam0000000113801830;
  *param_1 = uRam0000000113801828;
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



/* Entry: 10161a8c8; end: 10161a903;  */

void FUN_10161a8c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dba520;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dba520,&UNK_10d96d7f8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10161a904; end: 10161aa17;  */

void FUN_10161a904(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
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
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_38 = unaff_x20[9];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  func_0x000107c6068c(auStack_c8,0);
  func_0x000107c5fa50(auStack_c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10161aa18; end: 10161aa6f;  */

uint FUN_10161aa18(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_10161b390(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10161aa70; end: 10161b2f7;  */

uint FUN_10161aa70(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 auStack_f8 [3];
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  uVar5 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  uVar8 = param_2[4];
  uStack_a0 = uVar10;
  uStack_98 = uVar12;
  uStack_90 = uVar8;
  uStack_80 = uVar9;
  uStack_78 = uVar11;
  uStack_70 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_10161ab20;
    if ((float)uVar9 == (float)uVar10) {
      FUN_10161b5a8(&uStack_80,&uStack_c0,0x112db6358,&UNK_10d961e20);
      FUN_10161b5a8(&uStack_a0,&uStack_c0,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar11;
      FUN_100e25fcc(uVar11,uVar5,uVar12,uVar8);
      FUN_101553ccc(uVar10,uVar12,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_10161abc4;
    }
    else {
      FUN_10161b5a8(&uStack_80,&uStack_c0,0x112db6358,&UNK_10d961e20);
      puVar3 = &uStack_a0;
      puVar4 = &uStack_c0;
LAB_10161ada4:
      FUN_10161b5a8(puVar3,puVar4,0x112db6358,&UNK_10d961e20);
      FUN_101553ccc(uVar10,uVar12,uVar8);
    }
  }
  else {
    if (0xe < uVar8 >> 0x3c) {
      FUN_10161b5a8(&uStack_80,&uStack_c0,0x112db6358,&UNK_10d961e20);
      FUN_10161b5a8(&uStack_a0,&uStack_c0,0x112db6358,&UNK_10d961e20);
LAB_10161abc4:
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[6];
      uVar9 = param_1[5];
      uVar5 = param_1[7];
      uVar12 = param_2[6];
      uVar10 = param_2[5];
      uVar8 = param_2[7];
      uStack_e0 = uVar10;
      uStack_d8 = uVar12;
      uStack_d0 = uVar8;
      uStack_c0 = uVar9;
      uStack_b8 = uVar11;
      uStack_b0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_10161ac5c;
        if ((float)uVar9 != (float)uVar10) {
          FUN_10161b5a8(&uStack_c0,auStack_f8,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_e0;
          puVar4 = auStack_f8;
          goto LAB_10161ada4;
        }
        FUN_10161b5a8(&uStack_c0,auStack_f8,0x112db6358,&UNK_10d961e20);
        FUN_10161b5a8(&uStack_e0,auStack_f8,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar11;
        FUN_100e25fcc(uVar11,uVar5,uVar12,uVar8);
        FUN_101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_10161adcc;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_10161ac5c:
          FUN_10161b5a8(&uStack_c0,auStack_f8,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_e0;
          puVar4 = auStack_f8;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_10161ac88;
        }
        FUN_10161b5a8(&uStack_c0,auStack_f8,0x112db6358,&UNK_10d961e20);
        FUN_10161b5a8(&uStack_e0,auStack_f8,0x112db6358,&UNK_10d961e20);
      }
      FUN_101553ccc(uVar9,uVar11,uVar5);
      uVar9 = *param_1;
      FUN_100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_10161add4;
    }
LAB_10161ab20:
    FUN_10161b5a8(&uStack_80,&uStack_c0,0x112db6358,&UNK_10d961e20);
    puVar3 = &uStack_a0;
    puVar4 = &uStack_c0;
    uVar2 = uVar5;
    uVar6 = uVar11;
    uVar7 = uVar9;
    uVar5 = uVar8;
    uVar11 = uVar12;
    uVar9 = uVar10;
LAB_10161ac88:
    FUN_10161b5a8(puVar3,puVar4,0x112db6358,&UNK_10d961e20);
    FUN_101553ccc(uVar7,uVar6,uVar2);
  }
LAB_10161adcc:
  FUN_101553ccc(uVar9,uVar11,uVar5);
  uVar1 = 0;
LAB_10161add4:
  return uVar1 & 1;
}



/* Entry: 10161b2f8; end: 10161b38f;  */

undefined8 FUN_10161b2f8(undefined8 param_1)

{
  FUN_10161d9bc(param_1,&UNK_1103e9100);
  return param_1;
}



/* Entry: 10161b390; end: 10161b5a7;  */

uint FUN_10161b390(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auStack_280 [64];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
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
  undefined8 uVar3;
  
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_178 = param_1[3];
  uStack_180 = param_1[2];
  uStack_168 = param_1[5];
  uStack_170 = param_1[4];
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uStack_e8 = param_2[5];
  uStack_f0 = param_2[4];
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  uStack_c8 = param_2[9];
  uStack_d0 = param_2[8];
  uStack_1b8 = param_2[3];
  uStack_1c0 = param_2[2];
  uStack_1a8 = param_2[5];
  uStack_1b0 = param_2[4];
  uStack_158 = param_1[7];
  uStack_160 = param_1[6];
  uStack_148 = param_1[9];
  uStack_150 = param_1[8];
  uStack_198 = param_2[7];
  uStack_1a0 = param_2[6];
  uStack_188 = param_2[9];
  uStack_190 = param_2[8];
  uStack_140 = uStack_1c0;
  uStack_138 = uStack_1b8;
  uStack_130 = uStack_1b0;
  uStack_128 = uStack_1a8;
  uStack_120 = uStack_1a0;
  uStack_118 = uStack_198;
  uStack_110 = uStack_190;
  uStack_108 = uStack_188;
  if (uStack_178 >> 0x3c < 0xf) {
    if (0xe < uStack_1b8 >> 0x3c) goto LAB_10161b474;
    uStack_238 = param_2[3];
    uStack_240 = param_2[2];
    uStack_228 = param_2[5];
    uStack_230 = param_2[4];
    uStack_218 = param_2[7];
    uStack_220 = param_2[6];
    uStack_208 = param_2[9];
    uStack_210 = param_2[8];
    uStack_78 = param_1[3];
    uStack_80 = param_1[2];
    uStack_68 = param_1[5];
    uStack_70 = param_1[4];
    uStack_58 = param_1[7];
    uStack_60 = param_1[6];
    uStack_48 = param_1[9];
    uStack_50 = param_1[8];
    uStack_200 = uStack_240;
    uStack_1f8 = uStack_238;
    uStack_1f0 = uStack_230;
    uStack_1e8 = uStack_228;
    uStack_1e0 = uStack_220;
    uStack_1d8 = uStack_218;
    uStack_1d0 = uStack_210;
    uStack_1c8 = uStack_208;
    FUN_10161b5a8(&uStack_c0,auStack_280,0x112dba3c8,&UNK_10d96d2c0);
    FUN_10161b5a8(&uStack_100,auStack_280,0x112dba3c8,&UNK_10d96d2c0);
    puVar2 = &uStack_80;
    FUN_10161aa70(puVar2,&uStack_200);
    func_0x00010161b350(&uStack_240,0x112dba3c8,&UNK_10d96d2c0);
    func_0x00010161b350(&uStack_180,0x112dba3c8,&UNK_10d96d2c0);
    if (((ulong)puVar2 & 1) != 0) goto LAB_10161b580;
  }
  else {
    if (0xe < uStack_1b8 >> 0x3c) {
      uStack_1f8 = param_1[3];
      uStack_200 = param_1[2];
      uStack_1e8 = param_1[5];
      uStack_1f0 = param_1[4];
      uStack_1d8 = param_1[7];
      uStack_1e0 = param_1[6];
      uStack_1c8 = param_1[9];
      uStack_1d0 = param_1[8];
      FUN_10161b5a8(&uStack_c0,&uStack_80,0x112dba3c8,&UNK_10d96d2c0);
      FUN_10161b5a8(&uStack_100,&uStack_80,0x112dba3c8,&UNK_10d96d2c0);
      func_0x00010161b350(&uStack_200,0x112dba3c8,&UNK_10d96d2c0);
LAB_10161b580:
      uVar3 = *param_1;
      FUN_100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar3;
      goto LAB_10161b58c;
    }
LAB_10161b474:
    uStack_200 = uStack_180;
    uStack_1f8 = uStack_178;
    uStack_1f0 = uStack_170;
    uStack_1e8 = uStack_168;
    uStack_1e0 = uStack_160;
    uStack_1d8 = uStack_158;
    uStack_1d0 = uStack_150;
    uStack_1c8 = uStack_148;
    FUN_10161b5a8(&uStack_c0,&uStack_80,0x112dba3c8,&UNK_10d96d2c0);
    FUN_10161b5a8(&uStack_100,&uStack_80,0x112dba3c8,&UNK_10d96d2c0);
    func_0x00010161b350(&uStack_200,0x112dba3d0,&UNK_10d96d2c8);
  }
  uVar1 = 0;
LAB_10161b58c:
  return uVar1 & 1;
}



/* Entry: 10161b5a8; end: 10161b5ef;  */

undefined8 FUN_10161b5a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10161b5f0; end: 10161bdbf;  */

uint FUN_10161b5f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
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
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined1 auStack_710 [80];
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  ulong uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  ulong uStack_628;
  undefined8 uStack_620;
  ulong uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_540;
  ulong uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  ulong uStack_4f8;
  undefined8 uStack_4f0;
  ulong uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
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
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
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
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
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
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
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
  
  uStack_4d8 = param_1[0xf];
  uStack_4e0 = param_1[0xe];
  uStack_228 = param_1[0x11];
  uStack_230 = param_1[0x10];
  uStack_4e8 = param_1[0xd];
  uStack_4f0 = param_1[0xc];
  uStack_238 = param_1[0xf];
  uStack_240 = param_1[0xe];
  uStack_4c8 = param_1[0x11];
  uStack_4d0 = param_1[0x10];
  uStack_218 = param_1[0x13];
  uStack_220 = param_1[0x12];
  uStack_518 = param_1[7];
  uStack_520 = param_1[6];
  uStack_268 = param_1[9];
  uStack_270 = param_1[8];
  uStack_528 = param_1[5];
  uStack_530 = param_1[4];
  uStack_278 = param_1[7];
  uStack_280 = param_1[6];
  uStack_508 = param_1[9];
  uStack_510 = param_1[8];
  uStack_258 = param_1[0xb];
  uStack_260 = param_1[10];
  uStack_4f8 = param_1[0xb];
  uStack_500 = param_1[10];
  uStack_248 = param_1[0xd];
  uStack_250 = param_1[0xc];
  uStack_298 = param_1[3];
  uStack_2a0 = param_1[2];
  uStack_288 = param_1[5];
  uStack_290 = param_1[4];
  uStack_538 = param_1[3];
  uStack_540 = param_1[2];
  uStack_440 = param_2[0xf];
  uStack_448 = param_2[0xe];
  uStack_2c8 = param_2[0x11];
  uStack_2d0 = param_2[0x10];
  uStack_450 = param_2[0xd];
  uStack_458 = param_2[0xc];
  uStack_2d8 = param_2[0xf];
  uStack_2e0 = param_2[0xe];
  uStack_430 = param_2[0x11];
  uStack_438 = param_2[0x10];
  uStack_2b8 = param_2[0x13];
  uStack_2c0 = param_2[0x12];
  uStack_480 = param_2[7];
  uStack_488 = param_2[6];
  uStack_308 = param_2[9];
  uStack_310 = param_2[8];
  uStack_490 = param_2[5];
  uStack_498 = param_2[4];
  uStack_318 = param_2[7];
  uStack_320 = param_2[6];
  uStack_470 = param_2[9];
  uStack_478 = param_2[8];
  uStack_2f8 = param_2[0xb];
  uStack_300 = param_2[10];
  uStack_460 = param_2[0xb];
  uStack_468 = param_2[10];
  uStack_2e8 = param_2[0xd];
  uStack_2f0 = param_2[0xc];
  uStack_338 = param_2[3];
  uStack_340 = param_2[2];
  uStack_328 = param_2[5];
  uStack_330 = param_2[4];
  uStack_4a0 = param_2[3];
  uStack_4a8 = param_2[2];
  uStack_4b8 = param_1[0x13];
  uStack_4c0 = param_1[0x12];
  iVar2 = (int)&uStack_4a8;
  uStack_420 = param_2[0x13];
  uStack_428 = param_2[0x12];
  uStack_210 = param_1[0x14];
  uStack_2b0 = param_2[0x14];
  uStack_4b0 = param_1[0x14];
  uStack_418 = param_2[0x14];
  iVar1 = (int)&uStack_540;
  func_0x0001016188dc();
  if (iVar1 == 1) {
    func_0x0001016188dc();
    if (iVar2 == 1) {
      uStack_608 = uStack_4d8;
      uStack_610 = uStack_4e0;
      uStack_5f8 = uStack_4c8;
      uStack_600 = uStack_4d0;
      uStack_5e8 = uStack_4b8;
      uStack_5f0 = uStack_4c0;
      uStack_5e0 = uStack_4b0;
      uStack_648 = uStack_518;
      uStack_650 = uStack_520;
      uStack_638 = uStack_508;
      uStack_640 = uStack_510;
      uStack_628 = uStack_4f8;
      uStack_630 = uStack_500;
      uStack_618 = uStack_4e8;
      uStack_620 = uStack_4f0;
      uStack_668 = uStack_538;
      uStack_670 = uStack_540;
      uStack_658 = uStack_528;
      uStack_660 = uStack_530;
      FUN_10161b5a8(&uStack_2a0,&uStack_e0,0x112dba3b8,&UNK_10d96d2b0);
      FUN_10161b5a8(&uStack_340,&uStack_e0,0x112dba3b8,&UNK_10d96d2b0);
      func_0x00010161b350(&uStack_670,0x112dba3b8,&UNK_10d96d2b0);
LAB_10161b948:
      uStack_378 = param_1[0x16];
      uStack_380 = param_1[0x15];
      uStack_368 = param_1[0x18];
      uStack_370 = param_1[0x17];
      uStack_358 = param_1[0x1a];
      uStack_360 = param_1[0x19];
      uStack_348 = param_1[0x1c];
      uStack_350 = param_1[0x1b];
      uStack_3b8 = param_2[0x16];
      uStack_3c0 = param_2[0x15];
      uStack_3a8 = param_2[0x18];
      uStack_3b0 = param_2[0x17];
      uStack_398 = param_2[0x1a];
      uStack_3a0 = param_2[0x19];
      uStack_388 = param_2[0x1c];
      uStack_390 = param_2[0x1b];
      uStack_538 = param_1[0x16];
      uStack_540 = param_1[0x15];
      uStack_528 = param_1[0x18];
      uStack_530 = param_1[0x17];
      uStack_518 = param_1[0x1a];
      uStack_520 = param_1[0x19];
      uStack_508 = param_1[0x1c];
      uStack_510 = param_1[0x1b];
      uStack_4f8 = param_2[0x16];
      uStack_500 = param_2[0x15];
      uStack_4e8 = param_2[0x18];
      uStack_4f0 = param_2[0x17];
      uStack_4d8 = param_2[0x1a];
      uStack_4e0 = param_2[0x19];
      uStack_4c8 = param_2[0x1c];
      uStack_4d0 = param_2[0x1b];
      if (uStack_538 >> 0x3c < 0xf) {
        if (0xe < uStack_4f8 >> 0x3c) goto LAB_10161ba44;
        uStack_668 = param_2[0x16];
        uStack_670 = param_2[0x15];
        uStack_658 = param_2[0x18];
        uStack_660 = param_2[0x17];
        uStack_648 = param_2[0x1a];
        uStack_650 = param_2[0x19];
        uStack_638 = param_2[0x1c];
        uStack_640 = param_2[0x1b];
        uStack_1f8 = param_1[0x16];
        uStack_200 = param_1[0x15];
        uStack_1e8 = param_1[0x18];
        uStack_1f0 = param_1[0x17];
        uStack_1d8 = param_1[0x1a];
        uStack_1e0 = param_1[0x19];
        uStack_1c8 = param_1[0x1c];
        uStack_1d0 = param_1[0x1b];
        uStack_1c0 = uStack_670;
        uStack_1b8 = uStack_668;
        uStack_1b0 = uStack_660;
        uStack_1a8 = uStack_658;
        uStack_1a0 = uStack_650;
        uStack_198 = uStack_648;
        uStack_190 = uStack_640;
        uStack_188 = uStack_638;
        FUN_10161b5a8(&uStack_380,&uStack_7b0,0x112dba3c8,&UNK_10d96d2c0);
        FUN_10161b5a8(&uStack_3c0,&uStack_7b0,0x112dba3c8,&UNK_10d96d2c0);
        puVar4 = &uStack_200;
        FUN_10161aa70(puVar4,&uStack_1c0);
        func_0x00010161b350(&uStack_670,0x112dba3c8,&UNK_10d96d2c0);
        func_0x00010161b350(&uStack_540,0x112dba3c8,&UNK_10d96d2c0);
        if (((ulong)puVar4 & 1) == 0) goto LAB_10161bce8;
      }
      else {
        if (uStack_4f8 >> 0x3c < 0xf) {
LAB_10161ba44:
          uStack_670 = uStack_540;
          uStack_668 = uStack_538;
          uStack_660 = uStack_530;
          uStack_658 = uStack_528;
          uStack_650 = uStack_520;
          uStack_648 = uStack_518;
          uStack_640 = uStack_510;
          uStack_638 = uStack_508;
          uStack_630 = uStack_500;
          uStack_628 = uStack_4f8;
          uStack_620 = uStack_4f0;
          uStack_618 = uStack_4e8;
          uStack_610 = uStack_4e0;
          uStack_608 = uStack_4d8;
          uStack_600 = uStack_4d0;
          uStack_5f8 = uStack_4c8;
          FUN_10161b5a8(&uStack_380,&uStack_7b0,0x112dba3c8,&UNK_10d96d2c0);
          FUN_10161b5a8(&uStack_3c0,&uStack_7b0,0x112dba3c8,&UNK_10d96d2c0);
          uVar5 = 0x112dba3d0;
          puVar6 = &UNK_10d96d2c8;
          goto LAB_10161bce0;
        }
        uStack_668 = param_1[0x16];
        uStack_670 = param_1[0x15];
        uStack_658 = param_1[0x18];
        uStack_660 = param_1[0x17];
        uStack_648 = param_1[0x1a];
        uStack_650 = param_1[0x19];
        uStack_638 = param_1[0x1c];
        uStack_640 = param_1[0x1b];
        FUN_10161b5a8(&uStack_380,&uStack_7b0,0x112dba3c8,&UNK_10d96d2c0);
        FUN_10161b5a8(&uStack_3c0,&uStack_7b0,0x112dba3c8,&UNK_10d96d2c0);
        func_0x00010161b350(&uStack_670,0x112dba3c8,&UNK_10d96d2c0);
      }
      uStack_838 = param_1[0x20];
      uStack_840 = param_1[0x1f];
      uStack_848 = param_1[0x1e];
      uStack_850 = param_1[0x1d];
      uStack_828 = param_1[0x22];
      uStack_830 = param_1[0x21];
      uStack_818 = param_1[0x24];
      uStack_820 = param_1[0x23];
      uStack_808 = param_1[0x26];
      uStack_810 = param_1[0x25];
      uStack_518 = param_1[0x22];
      uStack_520 = param_1[0x21];
      uStack_508 = param_1[0x24];
      uStack_510 = param_1[0x23];
      uStack_3f8 = param_2[0x20];
      uStack_400 = param_2[0x1f];
      uStack_408 = param_2[0x1e];
      uStack_410 = param_2[0x1d];
      uStack_3e8 = param_2[0x22];
      uStack_3f0 = param_2[0x21];
      uStack_3d8 = param_2[0x24];
      uStack_3e0 = param_2[0x23];
      uStack_3c8 = param_2[0x26];
      uStack_3d0 = param_2[0x25];
      uStack_4c8 = param_2[0x22];
      uStack_4d0 = param_2[0x21];
      uStack_4b8 = param_2[0x24];
      uStack_4c0 = param_2[0x23];
      uStack_528 = param_1[0x20];
      uStack_530 = param_1[0x1f];
      uStack_4f8 = param_1[0x26];
      uStack_500 = param_1[0x25];
      uStack_538 = param_1[0x1e];
      uStack_540 = param_1[0x1d];
      uStack_4d8 = param_2[0x20];
      uStack_4e0 = param_2[0x1f];
      uStack_4e8 = param_2[0x1e];
      uStack_4f0 = param_2[0x1d];
      uStack_5d8 = param_2[0x26];
      uStack_4b0 = param_2[0x25];
      uStack_4a8 = uStack_5d8;
      if (uStack_538 >> 0x3c < 0xf) {
        if (0xe < uStack_4e8 >> 0x3c) goto LAB_10161bc70;
        uStack_698 = param_2[0x22];
        uStack_6a0 = param_2[0x21];
        uStack_688 = param_2[0x24];
        uStack_690 = param_2[0x23];
        uStack_678 = param_2[0x26];
        uStack_680 = param_2[0x25];
        uStack_6b8 = param_2[0x1e];
        uStack_6c0 = param_2[0x1d];
        uStack_6a8 = param_2[0x20];
        uStack_6b0 = param_2[0x1f];
        uStack_7a8 = param_1[0x1e];
        uStack_7b0 = param_1[0x1d];
        uStack_798 = param_1[0x20];
        uStack_7a0 = param_1[0x1f];
        uStack_788 = param_1[0x22];
        uStack_790 = param_1[0x21];
        uStack_778 = param_1[0x24];
        uStack_780 = param_1[0x23];
        uStack_768 = param_1[0x26];
        uStack_770 = param_1[0x25];
        uStack_670 = uStack_6c0;
        uStack_668 = uStack_6b8;
        uStack_660 = uStack_6b0;
        uStack_658 = uStack_6a8;
        uStack_650 = uStack_6a0;
        uStack_648 = uStack_698;
        uStack_640 = uStack_690;
        uStack_638 = uStack_688;
        uStack_630 = uStack_680;
        uStack_628 = uStack_678;
        FUN_10161b5a8(&uStack_850,auStack_710,0x112dba3d8,&UNK_10d96d2d0);
        FUN_10161b5a8(&uStack_410,auStack_710,0x112dba3d8,&UNK_10d96d2d0);
        puVar4 = &uStack_7b0;
        FUN_10161b390(puVar4,&uStack_670);
        func_0x00010161b350(&uStack_6c0,0x112dba3d8,&UNK_10d96d2d0);
        func_0x00010161b350(&uStack_540,0x112dba3d8,&UNK_10d96d2d0);
        if (((ulong)puVar4 & 1) == 0) goto LAB_10161bce8;
      }
      else {
        if (uStack_4e8 >> 0x3c < 0xf) {
LAB_10161bc70:
          uStack_670 = uStack_540;
          uStack_668 = uStack_538;
          uStack_660 = uStack_530;
          uStack_658 = uStack_528;
          uStack_650 = uStack_520;
          uStack_648 = uStack_518;
          uStack_640 = uStack_510;
          uStack_638 = uStack_508;
          uStack_630 = uStack_500;
          uStack_628 = uStack_4f8;
          uStack_620 = uStack_4f0;
          uStack_618 = uStack_4e8;
          uStack_610 = uStack_4e0;
          uStack_608 = uStack_4d8;
          uStack_600 = uStack_4d0;
          uStack_5f8 = uStack_4c8;
          uStack_5f0 = uStack_4c0;
          uStack_5e8 = uStack_4b8;
          uStack_5e0 = uStack_4b0;
          FUN_10161b5a8(&uStack_850,&uStack_7b0,0x112dba3d8,&UNK_10d96d2d0);
          FUN_10161b5a8(&uStack_410,&uStack_7b0,0x112dba3d8,&UNK_10d96d2d0);
          uVar5 = 0x112dba3e0;
          puVar6 = &UNK_10d96d2d8;
          goto LAB_10161bce0;
        }
        uStack_648 = param_1[0x22];
        uStack_650 = param_1[0x21];
        uStack_638 = param_1[0x24];
        uStack_640 = param_1[0x23];
        uStack_628 = param_1[0x26];
        uStack_630 = param_1[0x25];
        uStack_668 = param_1[0x1e];
        uStack_670 = param_1[0x1d];
        uStack_658 = param_1[0x20];
        uStack_660 = param_1[0x1f];
        FUN_10161b5a8(&uStack_850,&uStack_7b0,0x112dba3d8,&UNK_10d96d2d0);
        FUN_10161b5a8(&uStack_410,&uStack_7b0,0x112dba3d8,&UNK_10d96d2d0);
        func_0x00010161b350(&uStack_670,0x112dba3d8,&UNK_10d96d2d0);
      }
      uVar5 = *param_1;
      FUN_100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
      uVar3 = (uint)uVar5;
      goto LAB_10161bcec;
    }
LAB_10161b7e0:
    func_0x000107c610b4(&uStack_670,&uStack_540,0x130);
    FUN_10161b5a8(&uStack_2a0,&uStack_e0,0x112dba3b8,&UNK_10d96d2b0);
    FUN_10161b5a8(&uStack_340,&uStack_e0,0x112dba3b8,&UNK_10d96d2b0);
    uVar5 = 0x112dba3c0;
    puVar6 = &UNK_10d96d2b8;
LAB_10161bce0:
    func_0x00010161b350(&uStack_670,uVar5,puVar6);
  }
  else {
    uStack_608 = uStack_4d8;
    uStack_610 = uStack_4e0;
    uStack_5f8 = uStack_4c8;
    uStack_600 = uStack_4d0;
    uStack_5e8 = uStack_4b8;
    uStack_5f0 = uStack_4c0;
    uStack_5e0 = uStack_4b0;
    uStack_648 = uStack_518;
    uStack_650 = uStack_520;
    uStack_638 = uStack_508;
    uStack_640 = uStack_510;
    uStack_628 = uStack_4f8;
    uStack_630 = uStack_500;
    uStack_618 = uStack_4e8;
    uStack_620 = uStack_4f0;
    uStack_668 = uStack_538;
    uStack_670 = uStack_540;
    uStack_658 = uStack_528;
    uStack_660 = uStack_530;
    func_0x0001016188dc();
    if (iVar2 == 1) goto LAB_10161b7e0;
    uStack_748 = uStack_440;
    uStack_750 = uStack_448;
    uStack_738 = uStack_430;
    uStack_740 = uStack_438;
    uStack_728 = uStack_420;
    uStack_730 = uStack_428;
    uStack_788 = uStack_480;
    uStack_790 = uStack_488;
    uStack_778 = uStack_470;
    uStack_780 = uStack_478;
    uStack_768 = uStack_460;
    uStack_770 = uStack_468;
    uStack_758 = uStack_450;
    uStack_760 = uStack_458;
    uStack_7a8 = uStack_4a0;
    uStack_7b0 = uStack_4a8;
    uStack_798 = uStack_490;
    uStack_7a0 = uStack_498;
    uStack_78 = uStack_440;
    uStack_80 = uStack_448;
    uStack_68 = uStack_430;
    uStack_70 = uStack_438;
    uStack_58 = uStack_420;
    uStack_60 = uStack_428;
    uStack_b8 = uStack_480;
    uStack_c0 = uStack_488;
    uStack_a8 = uStack_470;
    uStack_b0 = uStack_478;
    uStack_98 = uStack_460;
    uStack_a0 = uStack_468;
    uStack_88 = uStack_450;
    uStack_90 = uStack_458;
    uStack_720 = uStack_418;
    uStack_50 = uStack_418;
    uStack_d8 = uStack_4a0;
    uStack_e0 = uStack_4a8;
    uStack_c8 = uStack_490;
    uStack_d0 = uStack_498;
    uStack_118 = uStack_608;
    uStack_120 = uStack_610;
    uStack_108 = uStack_5f8;
    uStack_110 = uStack_600;
    uStack_f8 = uStack_5e8;
    uStack_100 = uStack_5f0;
    uStack_f0 = uStack_5e0;
    uStack_158 = uStack_648;
    uStack_160 = uStack_650;
    uStack_148 = uStack_638;
    uStack_150 = uStack_640;
    uStack_138 = uStack_628;
    uStack_140 = uStack_630;
    uStack_128 = uStack_618;
    uStack_130 = uStack_620;
    uStack_178 = uStack_668;
    uStack_180 = uStack_670;
    uStack_168 = uStack_658;
    uStack_170 = uStack_660;
    FUN_10161b5a8(&uStack_2a0,&uStack_850,0x112dba3b8,&UNK_10d96d2b0);
    FUN_10161b5a8(&uStack_340,&uStack_850,0x112dba3b8,&UNK_10d96d2b0);
    puVar4 = &uStack_180;
    func_0x00010161adf8(puVar4,&uStack_e0);
    func_0x00010161b350(&uStack_7b0,0x112dba3b8,&UNK_10d96d2b0);
    func_0x00010161b350(&uStack_540,0x112dba3b8,&UNK_10d96d2b0);
    if (((ulong)puVar4 & 1) != 0) goto LAB_10161b948;
  }
LAB_10161bce8:
  uVar3 = 0;
LAB_10161bcec:
  return uVar3 & 1;
}



/* Entry: 10161bdc0; end: 10161beff;  */

void FUN_10161bdc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d458;
  func_0x000107c61520(&UNK_10d96d458,&UNK_1103e9078);
  puRam0000000112dba440 = puVar1;
  return;
}



/* Entry: 10161bf00; end: 10161bf13;  */

void FUN_10161bf00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10161bf14();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10161bf54)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10161bf14; end: 10161bf93;  */

void FUN_10161bf14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba4a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d380;
  func_0x000107c61520(&UNK_10d96d380,&UNK_1103e9228);
  puRam0000000112dba4a0 = puVar1;
  return;
}



/* Entry: 10161bf94; end: 10161bf97;  */

void FUN_10161bf94(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dba4b0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dba4b8;
  func_0x00010002969c(0x112dba4b8,&UNK_10d96d308);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dba4b0 = puVar2;
  return;
}



/* Entry: 10161bf98; end: 10161bfe7;  */

void FUN_10161bf98(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dba4b0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dba4b8;
  func_0x00010002969c(0x112dba4b8,&UNK_10d96d308);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dba4b0 = puVar2;
  return;
}



/* Entry: 10161bfe8; end: 10161bfeb;  */

void FUN_10161bfe8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba4c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d3c0;
  func_0x000107c61520(&UNK_10d96d3c0,&UNK_1103e9228);
  puRam0000000112dba4c0 = puVar1;
  return;
}



/* Entry: 10161bfec; end: 10161c02b;  */

void FUN_10161bfec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba4c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d3c0;
  func_0x000107c61520(&UNK_10d96d3c0,&UNK_1103e9228);
  puRam0000000112dba4c0 = puVar1;
  return;
}



/* Entry: 10161c02c; end: 10161c04f;  */

void FUN_10161c02c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10161c050();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10161c050; end: 10161c08f;  */

void FUN_10161c050(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba4c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d430;
  func_0x000107c61520(&UNK_10d96d430,&UNK_1103e9078);
  puRam0000000112dba4c8 = puVar1;
  return;
}



/* Entry: 10161c090; end: 10161c0a7;  */

void FUN_10161c090(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10161bdc0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101618600)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10161c0a8; end: 10161c0e7;  */

void FUN_10161c0a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba4d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d498;
  func_0x000107c61520(&UNK_10d96d498,&UNK_1103e9078);
  puRam0000000112dba4d0 = puVar1;
  return;
}



/* Entry: 10161c0e8; end: 10161c10b;  */

void FUN_10161c0e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10161c10c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10161c10c; end: 10161c14b;  */

void FUN_10161c10c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba4d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d508;
  func_0x000107c61520(&UNK_10d96d508,&UNK_1103e9100);
  puRam0000000112dba4d8 = puVar1;
  return;
}



/* Entry: 10161c14c; end: 10161c15f;  */

void FUN_10161c14c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10161be00)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10161c160();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10161c160; end: 10161c19f;  */

void FUN_10161c160(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba4e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96d4c0;
  func_0x000107c61520(&DAT_10d96d4c0,&UNK_1103e9100);
  puRam0000000112dba4e0 = puVar1;
  return;
}



/* Entry: 10161c1a0; end: 10161c1a3;  */

void FUN_10161c1a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba4e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d570;
  func_0x000107c61520(&UNK_10d96d570,&UNK_1103e9100);
  puRam0000000112dba4e8 = puVar1;
  return;
}



/* Entry: 10161c1a4; end: 10161c1e3;  */

void FUN_10161c1a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba4e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d570;
  func_0x000107c61520(&UNK_10d96d570,&UNK_1103e9100);
  puRam0000000112dba4e8 = puVar1;
  return;
}



/* Entry: 10161c1e4; end: 10161c207;  */

void FUN_10161c1e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10161c208();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10161c208; end: 10161c247;  */

void FUN_10161c208(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba4f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d5e0;
  func_0x000107c61520(&UNK_10d96d5e0,&UNK_1103e9188);
  puRam0000000112dba4f0 = puVar1;
  return;
}



/* Entry: 10161c248; end: 10161c25b;  */

void FUN_10161c248(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10161be80)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10161c25c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10161c25c; end: 10161c29b;  */

void FUN_10161c25c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba4f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96d598;
  func_0x000107c61520(&DAT_10d96d598,&UNK_1103e9188);
  puRam0000000112dba4f8 = puVar1;
  return;
}



/* Entry: 10161c29c; end: 10161c29f;  */

void FUN_10161c29c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba500 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d648;
  func_0x000107c61520(&UNK_10d96d648,&UNK_1103e9188);
  puRam0000000112dba500 = puVar1;
  return;
}



/* Entry: 10161c2a0; end: 10161c2df;  */

void FUN_10161c2a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba500 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d648;
  func_0x000107c61520(&UNK_10d96d648,&UNK_1103e9188);
  puRam0000000112dba500 = puVar1;
  return;
}



/* Entry: 10161c2e0; end: 10161c303;  */

void FUN_10161c2e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10161c304();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10161c304; end: 10161c343;  */

void FUN_10161c304(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba508 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d6c8;
  func_0x000107c61520(&UNK_10d96d6c8,&UNK_1103e92a0);
  puRam0000000112dba508 = puVar1;
  return;
}



/* Entry: 10161c344; end: 10161c357;  */

void FUN_10161c344(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10161bec0)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10161c388();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10161c358; end: 10161c387;  */

void FUN_10161c358(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10161c388; end: 10161c3c7;  */

void FUN_10161c388(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96d680;
  func_0x000107c61520(&DAT_10d96d680,&UNK_1103e92a0);
  puRam0000000112dba510 = puVar1;
  return;
}



/* Entry: 10161c3c8; end: 10161c3cb;  */

void FUN_10161c3c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba518 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96d730;
  func_0x000107c61520(&UNK_10d96d730,&UNK_1103e92a0);
  puRam0000000112dba518 = puVar1;
  return;
}


