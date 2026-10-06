/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035bd348; end: 1035bd37b;  */

void FUN_1035bd348(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035bd37c; end: 1035bd38f;  */

undefined8 FUN_1035bd37c(void)

{
  return 0x1035bd38c;
}



/* Entry: 1035bd390; end: 1035bd3a3;  */

void FUN_1035bd390(void)

{
  FUN_1035bcdf4();
  return;
}



/* Entry: 1035bd3a4; end: 1035bd3f3;  */

void FUN_1035bd3a4(void)

{
  FUN_1035bcf4c();
  return;
}



/* Entry: 1035bd3f4; end: 1035bd3f7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035bd3f4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035bd3f8; end: 1035bd42f;  */

uint FUN_1035bd3f8(long param_1,long param_2)

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
  func_0x0001035c4574();
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



/* Entry: 1035bd430; end: 1035bd4af;  */

uint FUN_1035bd430(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_30 = param_1[0x10];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_d8 = unaff_x20[0xd];
  uStack_e0 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[0xf];
  uStack_d0 = unaff_x20[0xe];
  uStack_c0 = unaff_x20[0x10];
  uStack_118 = unaff_x20[5];
  uStack_120 = unaff_x20[4];
  uStack_108 = unaff_x20[7];
  uStack_110 = unaff_x20[6];
  uStack_f8 = unaff_x20[9];
  uStack_100 = unaff_x20[8];
  uStack_e8 = unaff_x20[0xb];
  uStack_f0 = unaff_x20[10];
  uStack_138 = unaff_x20[1];
  uStack_140 = *unaff_x20;
  uStack_128 = unaff_x20[3];
  uStack_130 = unaff_x20[2];
  func_0x0001035bf298(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 1035bd4b0; end: 1035bd54f;  */

/* WARNING: Possible PIC construction at 0x0001035bd4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035bd50c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035bd500) */
/* WARNING: Removing unreachable block (ram,0x0001035bd510) */

void FUN_1035bd4b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7ba50 != -1) {
    func_0x000107c61568(0x112f7ba50,FUN_1035bcdac);
  }
  uVar5 = uRam0000000113809238;
  uVar4 = uRam0000000113809230;
  uVar3 = uRam0000000113809228;
  uVar2 = uRam0000000113809220;
  uVar1 = uRam0000000113809218;
  *param_1 = uRam0000000113809210;
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



/* Entry: 1035bd550; end: 1035bd58b;  */

void FUN_1035bd550(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7bb18;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7bb18,&UNK_10dbe2808);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035bd58c; end: 1035bd6c7;  */

void FUN_1035bd58c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_108 [72];
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
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_40 = unaff_x20[0x10];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  func_0x000107c6068c(auStack_108,0);
  func_0x000107c5fa50(auStack_108,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035bd6c8; end: 1035bd747;  */

uint FUN_1035bd6c8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_30 = param_2[0x10];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  func_0x0001035bf298(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 1035bd748; end: 1035bd78f;  */

void FUN_1035bd748(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe2830,0x67,2);
  uRam0000000113809248 = uStack_38;
  uRam0000000113809240 = uStack_40;
  uRam0000000113809258 = uStack_28;
  uRam0000000113809250 = uStack_30;
  uRam0000000113809268 = uStack_18;
  uRam0000000113809260 = uStack_20;
  return;
}



/* Entry: 1035bd790; end: 1035bd8e3;  */

void FUN_1035bd790(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      puVar3 = &UNK_110790c00;
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_110790a00;
          goto LAB_1035bd818;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          lVar2 = unaff_x20 + 0x28;
          goto LAB_1035bd818;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          lVar2 = unaff_x20 + 0x40;
        }
        else if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          lVar2 = unaff_x20 + 0x58;
          puVar3 = &UNK_110790c80;
        }
        else {
          if (lVar1 != 5) goto LAB_1035bd82c;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          lVar2 = unaff_x20 + 0x78;
        }
LAB_1035bd818:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_1035bd82c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 1035bd8e4; end: 1035bd99f;  */

void FUN_1035bd8e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1035bd9a0();
  if (unaff_x21 == 0) {
    FUN_1035bda28();
    FUN_1035bdab0();
    FUN_1035bdb38();
    FUN_1035bdbbc();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1035bd9a0; end: 1035bda27;  */

void FUN_1035bd9a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,1,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bda28; end: 1035bdaaf;  */

void FUN_1035bda28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 1035bdab0; end: 1035bdb37;  */

void FUN_1035bdab0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x40);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x50);
    uStack_50 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,3,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bdb38; end: 1035bdbbb;  */

void FUN_1035bdb38(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x60);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,4,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bdbbc; end: 1035bdc43;  */

void FUN_1035bdbbc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x78);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x88);
    uStack_50 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,5,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bdc44; end: 1035bdcab;  */

void FUN_1035bdc44(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 2;
  param_1[4] = 0xf000000000000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 2;
  return;
}



/* Entry: 1035bdcac; end: 1035bdcdb;  */

undefined1  [16] FUN_1035bdcac(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1035bdcdc; end: 1035bdd0f;  */

void FUN_1035bdcdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035bdd10; end: 1035bdd23;  */

undefined8 FUN_1035bdd10(void)

{
  return 0x1035bdd20;
}



/* Entry: 1035bdd24; end: 1035bdd37;  */

void FUN_1035bdd24(void)

{
  FUN_1035bd790();
  return;
}



/* Entry: 1035bdd38; end: 1035bdd87;  */

void FUN_1035bdd38(void)

{
  FUN_1035bd8e4();
  return;
}



/* Entry: 1035bdd88; end: 1035bdd8b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035bdd88(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035bdd8c; end: 1035bddc3;  */

uint FUN_1035bdd8c(long param_1,long param_2)

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
  FUN_1035c4534();
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



/* Entry: 1035bddc4; end: 1035bde43;  */

uint FUN_1035bddc4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_28 = param_1[0x11];
  uStack_30 = param_1[0x10];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_d8 = unaff_x20[0xd];
  uStack_e0 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[0xf];
  uStack_d0 = unaff_x20[0xe];
  uStack_b8 = unaff_x20[0x11];
  uStack_c0 = unaff_x20[0x10];
  uStack_118 = unaff_x20[5];
  uStack_120 = unaff_x20[4];
  uStack_108 = unaff_x20[7];
  uStack_110 = unaff_x20[6];
  uStack_f8 = unaff_x20[9];
  uStack_100 = unaff_x20[8];
  uStack_e8 = unaff_x20[0xb];
  uStack_f0 = unaff_x20[10];
  uStack_138 = unaff_x20[1];
  uStack_140 = *unaff_x20;
  uStack_128 = unaff_x20[3];
  uStack_130 = unaff_x20[2];
  func_0x0001035bfa94(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 1035bde44; end: 1035bdee3;  */

/* WARNING: Possible PIC construction at 0x0001035bde90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035bdea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035bde94) */
/* WARNING: Removing unreachable block (ram,0x0001035bdea4) */

void FUN_1035bde44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7ba60 != -1) {
    func_0x000107c61568(0x112f7ba60,FUN_1035bd748);
  }
  uVar5 = uRam0000000113809268;
  uVar4 = uRam0000000113809260;
  uVar3 = uRam0000000113809258;
  uVar2 = uRam0000000113809250;
  uVar1 = uRam0000000113809248;
  *param_1 = uRam0000000113809240;
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



/* Entry: 1035bdee4; end: 1035bdf1f;  */

void FUN_1035bdee4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7bb08;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7bb08,&UNK_10dbe2800);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035bdf20; end: 1035be05b;  */

void FUN_1035bdf20(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_108 [72];
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
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_38 = unaff_x20[0x11];
  uStack_40 = unaff_x20[0x10];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  func_0x000107c6068c(auStack_108,0);
  func_0x000107c5fa50(auStack_108,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035be05c; end: 1035be0db;  */

uint FUN_1035be05c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_b8 = param_1[0x11];
  uStack_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_28 = param_2[0x11];
  uStack_30 = param_2[0x10];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  func_0x0001035bfa94(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 1035be0dc; end: 1035be10f;  */

void FUN_1035be0dc(void)

{
  return;
}



/* Entry: 1035be110; end: 1035be143;  */

undefined8 FUN_1035be110(undefined8 param_1,undefined8 param_2)

{
  FUN_1035c1f7c(param_2,param_1,&UNK_11066a200);
  return param_2;
}



/* Entry: 1035be144; end: 1035be153;  */

void FUN_1035be144(long param_1)

{
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 0xcfffffffffffffff;
  return;
}



/* Entry: 1035be154; end: 1035be187;  */

undefined8 FUN_1035be154(undefined8 param_1,undefined8 param_2)

{
  FUN_1035c23f4(param_2,param_1,&UNK_11066a278);
  return param_2;
}



/* Entry: 1035be188; end: 1035c030f;  */

uint FUN_1035be188(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long alStack_188 [3];
  long lStack_170;
  ulong uStack_168;
  ulong uStack_160;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long lStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long lStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar13 = param_1[3];
  lVar11 = param_1[2];
  uVar7 = param_1[4];
  uVar14 = param_2[3];
  lVar12 = param_2[2];
  uVar10 = param_2[4];
  lStack_b0 = lVar12;
  uStack_a8 = uVar14;
  uStack_a0 = uVar10;
  lStack_90 = lVar11;
  uStack_88 = uVar13;
  uStack_80 = uVar7;
  if (uVar7 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_1035be238;
    if ((float)lVar11 == (float)lVar12) {
      func_0x0001035c071c(&lStack_90,&lStack_d0,0x112db6358,&UNK_10d961e20);
      func_0x0001035c071c(&lStack_b0,&lStack_d0,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
      func_0x000100d561c0(lVar12,uVar14,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_1035be2dc;
    }
    else {
      uVar5 = 0x112db6358;
      puVar6 = &UNK_10d961e20;
      func_0x0001035c071c(&lStack_90,&lStack_d0,0x112db6358,&UNK_10d961e20);
      plVar3 = &lStack_b0;
      plVar4 = &lStack_d0;
LAB_1035be784:
      func_0x0001035c071c(plVar3,plVar4,uVar5,puVar6);
      func_0x000100d561c0(lVar12,uVar14,uVar10);
    }
  }
  else {
    if (0xe < uVar10 >> 0x3c) {
      func_0x0001035c071c(&lStack_90,&lStack_d0,0x112db6358,&UNK_10d961e20);
      func_0x0001035c071c(&lStack_b0,&lStack_d0,0x112db6358,&UNK_10d961e20);
LAB_1035be2dc:
      func_0x000100d561c0(lVar11,uVar13,uVar7);
      uVar13 = param_1[6];
      lVar11 = param_1[5];
      uVar7 = param_1[7];
      uVar14 = param_2[6];
      lVar12 = param_2[5];
      uVar10 = param_2[7];
      lStack_f0 = lVar12;
      uStack_e8 = uVar14;
      uStack_e0 = uVar10;
      lStack_d0 = lVar11;
      uStack_c8 = uVar13;
      uStack_c0 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_1035be374;
        if ((float)lVar11 != (float)lVar12) {
          uVar5 = 0x112db6358;
          puVar6 = &UNK_10d961e20;
          func_0x0001035c071c(&lStack_d0,&lStack_110,0x112db6358,&UNK_10d961e20);
          plVar3 = &lStack_f0;
          plVar4 = &lStack_110;
          goto LAB_1035be784;
        }
        func_0x0001035c071c(&lStack_d0,&lStack_110,0x112db6358,&UNK_10d961e20);
        func_0x0001035c071c(&lStack_f0,&lStack_110,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d561c0(lVar12,uVar14,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_1035be7ac;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_1035be374:
          uVar5 = 0x112db6358;
          puVar6 = &UNK_10d961e20;
          func_0x0001035c071c(&lStack_d0,&lStack_110,0x112db6358,&UNK_10d961e20);
          plVar3 = &lStack_f0;
          plVar4 = &lStack_110;
          uVar2 = uVar7;
          uVar8 = uVar13;
          lVar9 = lVar11;
          uVar7 = uVar10;
          uVar13 = uVar14;
          lVar11 = lVar12;
          goto LAB_1035be68c;
        }
        func_0x0001035c071c(&lStack_d0,&lStack_110,0x112db6358,&UNK_10d961e20);
        func_0x0001035c071c(&lStack_f0,&lStack_110,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d561c0(lVar11,uVar13,uVar7);
      uVar13 = param_1[9];
      lVar11 = param_1[8];
      uVar7 = param_1[10];
      uVar14 = param_2[9];
      lVar12 = param_2[8];
      uVar10 = param_2[10];
      lStack_130 = lVar12;
      uStack_128 = uVar14;
      uStack_120 = uVar10;
      lStack_110 = lVar11;
      uStack_108 = uVar13;
      uStack_100 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_1035be584;
        if (lVar11 != lVar12) {
          uVar5 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          func_0x0001035c071c(&lStack_110,&lStack_150,0x112db6f48,&UNK_10d969b40);
          plVar3 = &lStack_130;
          plVar4 = &lStack_150;
          goto LAB_1035be784;
        }
        func_0x0001035c071c(&lStack_110,&lStack_150,0x112db6f48,&UNK_10d969b40);
        func_0x0001035c071c(&lStack_130,&lStack_150,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d561c0(lVar11,uVar14,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_1035be7ac;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_1035be584:
          uVar5 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          func_0x0001035c071c(&lStack_110,&lStack_150,0x112db6f48,&UNK_10d969b40);
          plVar3 = &lStack_130;
          plVar4 = &lStack_150;
          uVar2 = uVar7;
          uVar8 = uVar13;
          lVar9 = lVar11;
          uVar7 = uVar10;
          uVar13 = uVar14;
          lVar11 = lVar12;
          goto LAB_1035be68c;
        }
        func_0x0001035c071c(&lStack_110,&lStack_150,0x112db6f48,&UNK_10d969b40);
        func_0x0001035c071c(&lStack_130,&lStack_150,0x112db6f48,&UNK_10d969b40);
      }
      func_0x000100d561c0(lVar11,uVar13,uVar7);
      uVar13 = param_1[0xc];
      lVar11 = param_1[0xb];
      uVar7 = param_1[0xd];
      uVar14 = param_2[0xc];
      lVar12 = param_2[0xb];
      uVar10 = param_2[0xd];
      lStack_170 = lVar12;
      uStack_168 = uVar14;
      uStack_160 = uVar10;
      lStack_150 = lVar11;
      uStack_148 = uVar13;
      uStack_140 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_1035be660;
        if (lVar11 != lVar12) {
          uVar5 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          func_0x0001035c071c(&lStack_150,alStack_188,0x112db6f48,&UNK_10d969b40);
          plVar3 = &lStack_170;
          plVar4 = alStack_188;
          goto LAB_1035be784;
        }
        func_0x0001035c071c(&lStack_150,alStack_188,0x112db6f48,&UNK_10d969b40);
        func_0x0001035c071c(&lStack_170,alStack_188,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d561c0(lVar11,uVar14,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_1035be7ac;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_1035be660:
          uVar5 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          func_0x0001035c071c(&lStack_150,alStack_188,0x112db6f48,&UNK_10d969b40);
          plVar3 = &lStack_170;
          plVar4 = alStack_188;
          uVar2 = uVar7;
          uVar8 = uVar13;
          lVar9 = lVar11;
          uVar7 = uVar10;
          uVar13 = uVar14;
          lVar11 = lVar12;
          goto LAB_1035be68c;
        }
        func_0x0001035c071c(&lStack_150,alStack_188,0x112db6f48,&UNK_10d969b40);
        func_0x0001035c071c(&lStack_170,alStack_188,0x112db6f48,&UNK_10d969b40);
      }
      func_0x000100d561c0(lVar11,uVar13,uVar7);
      uVar5 = *param_1;
      func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar5;
      goto LAB_1035be7b4;
    }
LAB_1035be238:
    uVar5 = 0x112db6358;
    puVar6 = &UNK_10d961e20;
    func_0x0001035c071c(&lStack_90,&lStack_d0,0x112db6358,&UNK_10d961e20);
    plVar3 = &lStack_b0;
    plVar4 = &lStack_d0;
    uVar2 = uVar7;
    uVar8 = uVar13;
    lVar9 = lVar11;
    uVar7 = uVar10;
    uVar13 = uVar14;
    lVar11 = lVar12;
LAB_1035be68c:
    func_0x0001035c071c(plVar3,plVar4,uVar5,puVar6);
    func_0x000100d561c0(lVar9,uVar8,uVar2);
  }
LAB_1035be7ac:
  func_0x000100d561c0(lVar11,uVar13,uVar7);
  uVar1 = 0;
LAB_1035be7b4:
  return uVar1 & 1;
}



/* Entry: 1035c0310; end: 1035c06ef;  */

uint FUN_1035c0310(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
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
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
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
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_40;
  
  iVar1 = (int)&uStack_330;
  puVar5 = &uStack_330;
  uStack_128 = param_1[0x11];
  uStack_130 = param_1[0x10];
  uStack_118 = param_1[0x13];
  uStack_120 = param_1[0x12];
  uStack_108 = param_1[0x15];
  uStack_110 = param_1[0x14];
  uStack_100 = param_1[0x16];
  uStack_168 = param_1[9];
  uStack_170 = param_1[8];
  uStack_158 = param_1[0xb];
  uStack_160 = param_1[10];
  uStack_148 = param_1[0xd];
  uStack_150 = param_1[0xc];
  uStack_138 = param_1[0xf];
  uStack_140 = param_1[0xe];
  uStack_1a8 = param_1[1];
  uStack_1b0 = *param_1;
  uStack_198 = param_1[3];
  uStack_1a0 = param_1[2];
  uStack_188 = param_1[5];
  uStack_190 = param_1[4];
  uStack_178 = param_1[7];
  uStack_180 = param_1[6];
  iVar2 = (int)&uStack_1b0;
  func_0x0001035be104();
  puVar4 = &uStack_1b0;
  func_0x000100d56194();
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      uStack_228 = puVar4[9];
      uStack_230 = puVar4[8];
      uStack_218 = puVar4[0xb];
      uStack_220 = puVar4[10];
      uStack_208 = puVar4[0xd];
      uStack_210 = puVar4[0xc];
      uStack_268 = puVar4[1];
      uStack_270 = *puVar4;
      uStack_258 = puVar4[3];
      uStack_260 = puVar4[2];
      uStack_248 = puVar4[5];
      uStack_250 = puVar4[4];
      uStack_238 = puVar4[7];
      uStack_240 = puVar4[6];
      uStack_68 = param_2[0x11];
      uStack_70 = param_2[0x10];
      uStack_58 = param_2[0x13];
      uStack_60 = param_2[0x12];
      uStack_48 = param_2[0x15];
      uStack_50 = param_2[0x14];
      uStack_40 = param_2[0x16];
      uStack_a8 = param_2[9];
      uStack_b0 = param_2[8];
      uStack_98 = param_2[0xb];
      uStack_a0 = param_2[10];
      uStack_88 = param_2[0xd];
      uStack_90 = param_2[0xc];
      uStack_78 = param_2[0xf];
      uStack_80 = param_2[0xe];
      uStack_e8 = param_2[1];
      uStack_f0 = *param_2;
      uStack_d8 = param_2[3];
      uStack_e0 = param_2[2];
      uStack_c8 = param_2[5];
      uStack_d0 = param_2[4];
      uStack_b8 = param_2[7];
      uStack_c0 = param_2[6];
      iVar2 = (int)&uStack_f0;
      func_0x0001035be104();
      if (iVar2 == 0) {
        puVar4 = &uStack_f0;
        func_0x000100d56194();
        uStack_2f8 = puVar4[7];
        uStack_300 = puVar4[6];
        uStack_2e8 = puVar4[9];
        uStack_2f0 = puVar4[8];
        uStack_2d8 = puVar4[0xb];
        uStack_2e0 = puVar4[10];
        uStack_2c8 = puVar4[0xd];
        uStack_2d0 = puVar4[0xc];
        uStack_328 = puVar4[1];
        uStack_330 = *puVar4;
        uStack_318 = puVar4[3];
        uStack_320 = puVar4[2];
        uStack_308 = puVar4[5];
        uStack_310 = puVar4[4];
        puVar4 = &uStack_270;
        FUN_1035be188(puVar4,&uStack_330);
        uVar3 = (uint)puVar4;
        goto LAB_1035c06d8;
      }
    }
    else {
      uStack_68 = puVar4[0x11];
      uStack_70 = puVar4[0x10];
      uStack_58 = puVar4[0x13];
      uStack_60 = puVar4[0x12];
      uStack_48 = puVar4[0x15];
      uStack_50 = puVar4[0x14];
      uStack_40 = puVar4[0x16];
      uStack_a8 = puVar4[9];
      uStack_b0 = puVar4[8];
      uStack_98 = puVar4[0xb];
      uStack_a0 = puVar4[10];
      uStack_88 = puVar4[0xd];
      uStack_90 = puVar4[0xc];
      uStack_78 = puVar4[0xf];
      uStack_80 = puVar4[0xe];
      uStack_e8 = puVar4[1];
      uStack_f0 = *puVar4;
      uStack_d8 = puVar4[3];
      uStack_e0 = puVar4[2];
      uStack_c8 = puVar4[5];
      uStack_d0 = puVar4[4];
      uStack_b8 = puVar4[7];
      uStack_c0 = puVar4[6];
      uStack_308 = param_2[5];
      uStack_310 = param_2[4];
      uStack_2f8 = param_2[7];
      uStack_300 = param_2[6];
      uStack_328 = param_2[1];
      uStack_330 = *param_2;
      uStack_318 = param_2[3];
      uStack_320 = param_2[2];
      uStack_2c8 = param_2[0xd];
      uStack_2d0 = param_2[0xc];
      uStack_2b8 = param_2[0xf];
      uStack_2c0 = param_2[0xe];
      uStack_2e8 = param_2[9];
      uStack_2f0 = param_2[8];
      uStack_2d8 = param_2[0xb];
      uStack_2e0 = param_2[10];
      uStack_280 = param_2[0x16];
      uStack_298 = param_2[0x13];
      uStack_2a0 = param_2[0x12];
      uStack_288 = param_2[0x15];
      uStack_290 = param_2[0x14];
      uStack_2a8 = param_2[0x11];
      uStack_2b0 = param_2[0x10];
      func_0x0001035be104();
      if (iVar1 == 1) {
        func_0x000100d56194();
        uStack_1e8 = puVar5[0x11];
        uStack_1f0 = puVar5[0x10];
        uStack_1d8 = puVar5[0x13];
        uStack_1e0 = puVar5[0x12];
        uStack_1c8 = puVar5[0x15];
        uStack_1d0 = puVar5[0x14];
        uStack_1c0 = puVar5[0x16];
        uStack_228 = puVar5[9];
        uStack_230 = puVar5[8];
        uStack_218 = puVar5[0xb];
        uStack_220 = puVar5[10];
        uStack_208 = puVar5[0xd];
        uStack_210 = puVar5[0xc];
        uStack_1f8 = puVar5[0xf];
        uStack_200 = puVar5[0xe];
        uStack_268 = puVar5[1];
        uStack_270 = *puVar5;
        uStack_258 = puVar5[3];
        uStack_260 = puVar5[2];
        uStack_248 = puVar5[5];
        uStack_250 = puVar5[4];
        uStack_238 = puVar5[7];
        uStack_240 = puVar5[6];
        puVar4 = &uStack_f0;
        func_0x0001035be7d8(puVar4,&uStack_270);
        uVar3 = (uint)puVar4;
        goto LAB_1035c06d8;
      }
    }
  }
  else if (iVar2 == 2) {
    uStack_208 = puVar4[0xd];
    uStack_210 = puVar4[0xc];
    uStack_1f8 = puVar4[0xf];
    uStack_200 = puVar4[0xe];
    uStack_1f0 = puVar4[0x10];
    uStack_248 = puVar4[5];
    uStack_250 = puVar4[4];
    uStack_238 = puVar4[7];
    uStack_240 = puVar4[6];
    uStack_228 = puVar4[9];
    uStack_230 = puVar4[8];
    uStack_218 = puVar4[0xb];
    uStack_220 = puVar4[10];
    uStack_268 = puVar4[1];
    uStack_270 = *puVar4;
    uStack_258 = puVar4[3];
    uStack_260 = puVar4[2];
    uStack_c8 = param_2[5];
    uStack_d0 = param_2[4];
    uStack_b8 = param_2[7];
    uStack_c0 = param_2[6];
    uStack_e8 = param_2[1];
    uStack_f0 = *param_2;
    uStack_d8 = param_2[3];
    uStack_e0 = param_2[2];
    uStack_88 = param_2[0xd];
    uStack_90 = param_2[0xc];
    uStack_78 = param_2[0xf];
    uStack_80 = param_2[0xe];
    uStack_a8 = param_2[9];
    uStack_b0 = param_2[8];
    uStack_98 = param_2[0xb];
    uStack_a0 = param_2[10];
    uStack_40 = param_2[0x16];
    uStack_58 = param_2[0x13];
    uStack_60 = param_2[0x12];
    uStack_48 = param_2[0x15];
    uStack_50 = param_2[0x14];
    uStack_68 = param_2[0x11];
    uStack_70 = param_2[0x10];
    iVar2 = (int)&uStack_f0;
    func_0x0001035be104();
    if (iVar2 == 2) {
      puVar4 = &uStack_f0;
      func_0x000100d56194();
      uStack_2d8 = puVar4[0xb];
      uStack_2e0 = puVar4[10];
      uStack_2c8 = puVar4[0xd];
      uStack_2d0 = puVar4[0xc];
      uStack_2b8 = puVar4[0xf];
      uStack_2c0 = puVar4[0xe];
      uStack_2b0 = puVar4[0x10];
      uStack_318 = puVar4[3];
      uStack_320 = puVar4[2];
      uStack_308 = puVar4[5];
      uStack_310 = puVar4[4];
      uStack_2f8 = puVar4[7];
      uStack_300 = puVar4[6];
      uStack_2e8 = puVar4[9];
      uStack_2f0 = puVar4[8];
      uStack_328 = puVar4[1];
      uStack_330 = *puVar4;
      puVar4 = &uStack_270;
      func_0x0001035bf298(puVar4,&uStack_330);
      uVar3 = (uint)puVar4;
      goto LAB_1035c06d8;
    }
  }
  else {
    uStack_208 = puVar4[0xd];
    uStack_210 = puVar4[0xc];
    uStack_1f8 = puVar4[0xf];
    uStack_200 = puVar4[0xe];
    uStack_1e8 = puVar4[0x11];
    uStack_1f0 = puVar4[0x10];
    uStack_248 = puVar4[5];
    uStack_250 = puVar4[4];
    uStack_238 = puVar4[7];
    uStack_240 = puVar4[6];
    uStack_228 = puVar4[9];
    uStack_230 = puVar4[8];
    uStack_218 = puVar4[0xb];
    uStack_220 = puVar4[10];
    uStack_268 = puVar4[1];
    uStack_270 = *puVar4;
    uStack_258 = puVar4[3];
    uStack_260 = puVar4[2];
    uStack_c8 = param_2[5];
    uStack_d0 = param_2[4];
    uStack_b8 = param_2[7];
    uStack_c0 = param_2[6];
    uStack_e8 = param_2[1];
    uStack_f0 = *param_2;
    uStack_d8 = param_2[3];
    uStack_e0 = param_2[2];
    uStack_88 = param_2[0xd];
    uStack_90 = param_2[0xc];
    uStack_78 = param_2[0xf];
    uStack_80 = param_2[0xe];
    uStack_a8 = param_2[9];
    uStack_b0 = param_2[8];
    uStack_98 = param_2[0xb];
    uStack_a0 = param_2[10];
    uStack_40 = param_2[0x16];
    uStack_58 = param_2[0x13];
    uStack_60 = param_2[0x12];
    uStack_48 = param_2[0x15];
    uStack_50 = param_2[0x14];
    uStack_68 = param_2[0x11];
    uStack_70 = param_2[0x10];
    iVar2 = (int)&uStack_f0;
    func_0x0001035be104();
    if (iVar2 == 3) {
      puVar4 = &uStack_f0;
      func_0x000100d56194();
      uStack_2d8 = puVar4[0xb];
      uStack_2e0 = puVar4[10];
      uStack_2c8 = puVar4[0xd];
      uStack_2d0 = puVar4[0xc];
      uStack_2b8 = puVar4[0xf];
      uStack_2c0 = puVar4[0xe];
      uStack_2a8 = puVar4[0x11];
      uStack_2b0 = puVar4[0x10];
      uStack_318 = puVar4[3];
      uStack_320 = puVar4[2];
      uStack_308 = puVar4[5];
      uStack_310 = puVar4[4];
      uStack_2f8 = puVar4[7];
      uStack_300 = puVar4[6];
      uStack_2e8 = puVar4[9];
      uStack_2f0 = puVar4[8];
      uStack_328 = puVar4[1];
      uStack_330 = *puVar4;
      puVar4 = &uStack_270;
      func_0x0001035bfa94(puVar4,&uStack_330);
      uVar3 = (uint)puVar4;
      goto LAB_1035c06d8;
    }
  }
  uVar3 = 0;
LAB_1035c06d8:
  return uVar3 & 1;
}



/* Entry: 1035c06f0; end: 1035c0763;  */

void FUN_1035c06f0(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035c0764; end: 1035c0b4f;  */

uint FUN_1035c0764(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  undefined7 uVar22;
  undefined1 uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  undefined8 *puVar27;
  undefined7 uStack_70f;
  undefined1 auStack_700 [192];
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 uStack_598;
  undefined7 uStack_597;
  undefined1 uStack_590;
  undefined8 uStack_58f;
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
  undefined1 uStack_418;
  undefined7 uStack_417;
  undefined1 uStack_410;
  undefined8 uStack_40f;
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
  undefined1 uStack_358;
  undefined7 uStack_357;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined1 uStack_348;
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
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined8 uStack_28f;
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
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined8 uStack_1cf;
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
  undefined8 uStack_110;
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
  undefined8 uVar28;
  
  uStack_438 = param_1[0x11];
  uStack_440 = param_1[0x10];
  uStack_1e8 = param_1[0x13];
  uStack_1f0 = param_1[0x12];
  uStack_448 = param_1[0xf];
  uStack_450 = param_1[0xe];
  uStack_1f8 = param_1[0x11];
  uStack_200 = param_1[0x10];
  uStack_428 = param_1[0x13];
  uStack_430 = param_1[0x12];
  uStack_1e0 = param_1[0x14];
  uStack_1d8 = (undefined1)param_1[0x15];
  uStack_1cf = *(undefined8 *)((long)param_1 + 0xb1);
  uStack_1d7 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
  uStack_1d0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
  uStack_478 = param_1[9];
  uStack_480 = param_1[8];
  uStack_228 = param_1[0xb];
  uStack_230 = param_1[10];
  uStack_488 = param_1[7];
  uStack_490 = param_1[6];
  uStack_238 = param_1[9];
  uStack_240 = param_1[8];
  uStack_468 = param_1[0xb];
  uStack_470 = param_1[10];
  uStack_218 = param_1[0xd];
  uStack_220 = param_1[0xc];
  uStack_458 = param_1[0xd];
  uStack_460 = param_1[0xc];
  uStack_208 = param_1[0xf];
  uStack_210 = param_1[0xe];
  uStack_278 = param_1[1];
  uStack_280 = *param_1;
  uStack_268 = param_1[3];
  uStack_270 = param_1[2];
  uStack_258 = param_1[5];
  uStack_260 = param_1[4];
  uStack_248 = param_1[7];
  uStack_250 = param_1[6];
  uStack_4b8 = param_1[1];
  uStack_4c0 = *param_1;
  uStack_4a8 = param_1[3];
  uStack_4b0 = param_1[2];
  uStack_498 = param_1[5];
  uStack_4a0 = param_1[4];
  uStack_378 = param_2[0x11];
  uStack_380 = param_2[0x10];
  uStack_2a8 = param_2[0x13];
  uStack_2b0 = param_2[0x12];
  uStack_388 = param_2[0xf];
  uStack_390 = param_2[0xe];
  uStack_2b8 = param_2[0x11];
  uStack_2c0 = param_2[0x10];
  uStack_368 = param_2[0x13];
  uStack_370 = param_2[0x12];
  uStack_2a0 = param_2[0x14];
  uStack_298 = (undefined1)param_2[0x15];
  uStack_28f = *(undefined8 *)((long)param_2 + 0xb1);
  uStack_297 = (undefined7)*(undefined8 *)((long)param_2 + 0xa9);
  uStack_290 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0xa9) >> 0x38);
  uStack_3b8 = param_2[9];
  uStack_3c0 = param_2[8];
  uStack_2e8 = param_2[0xb];
  uStack_2f0 = param_2[10];
  uStack_3c8 = param_2[7];
  uStack_3d0 = param_2[6];
  uStack_2f8 = param_2[9];
  uStack_300 = param_2[8];
  uStack_3a8 = param_2[0xb];
  uStack_3b0 = param_2[10];
  uStack_2d8 = param_2[0xd];
  uStack_2e0 = param_2[0xc];
  uStack_398 = param_2[0xd];
  uStack_3a0 = param_2[0xc];
  uStack_2c8 = param_2[0xf];
  uStack_2d0 = param_2[0xe];
  uStack_338 = param_2[1];
  uStack_340 = *param_2;
  uStack_328 = param_2[3];
  uStack_330 = param_2[2];
  uStack_318 = param_2[5];
  uStack_320 = param_2[4];
  uStack_308 = param_2[7];
  uStack_310 = param_2[6];
  uStack_3f8 = param_2[1];
  uStack_400 = *param_2;
  uStack_3e8 = param_2[3];
  uStack_3f0 = param_2[2];
  uStack_3d8 = param_2[5];
  uStack_3e0 = param_2[4];
  uStack_420 = param_1[0x14];
  uStack_418 = (undefined1)param_1[0x15];
  uStack_40f = *(undefined8 *)((long)param_1 + 0xb1);
  uStack_417 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
  uStack_410 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
  iVar25 = (int)&uStack_400;
  uStack_34f = (undefined7)*(undefined8 *)((long)param_2 + 0xb1);
  uStack_348 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0xb1) >> 0x38);
  uStack_350 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0xa9) >> 0x38);
  uStack_360 = param_2[0x14];
  uStack_358 = (undefined1)param_2[0x15];
  uStack_357 = (undefined7)((ulong)param_2[0x15] >> 8);
  iVar24 = (int)&uStack_4c0;
  func_0x0001035be0e8();
  uVar23 = uStack_410;
  uVar22 = uStack_417;
  uVar21 = uStack_418;
  uVar20 = uStack_420;
  uVar19 = uStack_428;
  uVar18 = uStack_430;
  uVar17 = uStack_438;
  uVar16 = uStack_440;
  uVar15 = uStack_448;
  uVar14 = uStack_450;
  uVar13 = uStack_458;
  uVar12 = uStack_460;
  uVar11 = uStack_468;
  uVar10 = uStack_470;
  uVar9 = uStack_478;
  uVar8 = uStack_480;
  uVar7 = uStack_488;
  uVar6 = uStack_490;
  uVar5 = uStack_498;
  uVar4 = uStack_4a0;
  uVar3 = uStack_4a8;
  uVar2 = uStack_4b0;
  uVar1 = uStack_4b8;
  uVar28 = uStack_4c0;
  if (iVar24 == 1) {
    func_0x0001035be0e8();
    if (iVar25 == 1) {
      uStack_5b8 = uStack_438;
      uStack_5c0 = uStack_440;
      uStack_5a8 = uStack_428;
      uStack_5b0 = uStack_430;
      uStack_598 = uStack_418;
      uStack_5a0 = uStack_420;
      uStack_58f = uStack_40f;
      uStack_597 = uStack_417;
      uStack_590 = uStack_410;
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
      func_0x0001035c071c(&uStack_280,auStack_700,0x112f730c0,&UNK_10dbce2d0);
      func_0x0001035c071c(&uStack_340,auStack_700,0x112f730c0,&UNK_10dbce2d0);
      FUN_1035c4788(&uStack_640,0x112f730c0,&UNK_10dbce2d0);
LAB_1035c0b28:
      uVar28 = param_1[0x18];
      func_0x000100e25fcc(uVar28,param_1[0x19],param_2[0x18],param_2[0x19]);
      uVar26 = (uint)uVar28;
      goto LAB_1035c0b34;
    }
LAB_1035c0998:
    func_0x000107c610b4(&uStack_640,&uStack_4c0,0x179);
    func_0x0001035c071c(&uStack_280,auStack_700,0x112f730c0,&UNK_10dbce2d0);
    func_0x0001035c071c(&uStack_340,auStack_700,0x112f730c0,&UNK_10dbce2d0);
    FUN_1035c4788(&uStack_640,0x112f7bb60,&UNK_10dbe29d0);
  }
  else {
    uStack_70f = (undefined7)uStack_40f;
    func_0x0001035be0e8();
    if (iVar25 == 1) goto LAB_1035c0998;
    uStack_5b8 = uStack_378;
    uStack_5c0 = uStack_380;
    uStack_5a8 = uStack_368;
    uStack_5b0 = uStack_370;
    uStack_598 = uStack_358;
    uStack_5a0 = uStack_360;
    uStack_58f = CONCAT17(uStack_348,uStack_34f);
    uStack_597 = uStack_357;
    uStack_590 = uStack_350;
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
    uStack_78 = uStack_378;
    uStack_80 = uStack_380;
    uStack_68 = uStack_368;
    uStack_70 = uStack_370;
    uStack_58 = CONCAT71(uStack_357,uStack_358);
    uStack_60 = uStack_360;
    uStack_b8 = uStack_3b8;
    uStack_c0 = uStack_3c0;
    uStack_a8 = uStack_3a8;
    uStack_b0 = uStack_3b0;
    uStack_98 = uStack_398;
    uStack_a0 = uStack_3a0;
    uStack_88 = uStack_388;
    uStack_90 = uStack_390;
    uStack_f8 = uStack_3f8;
    uStack_100 = uStack_400;
    uStack_e8 = uStack_3e8;
    uStack_f0 = uStack_3f0;
    uStack_50 = CONCAT71(uStack_34f,uStack_350);
    uStack_d8 = uStack_3d8;
    uStack_e0 = uStack_3e0;
    uStack_c8 = uStack_3c8;
    uStack_d0 = uStack_3d0;
    uStack_138 = uVar17;
    uStack_140 = uVar16;
    uStack_128 = uVar19;
    uStack_130 = uVar18;
    uStack_118 = CONCAT71(uVar22,uVar21);
    uStack_120 = uVar20;
    uStack_110 = CONCAT71(uStack_70f,uVar23);
    uStack_178 = uVar9;
    uStack_180 = uVar8;
    uStack_168 = uVar11;
    uStack_170 = uVar10;
    uStack_158 = uVar13;
    uStack_160 = uVar12;
    uStack_148 = uVar15;
    uStack_150 = uVar14;
    uStack_1b8 = uVar1;
    uStack_1c0 = uVar28;
    uStack_1a8 = uVar3;
    uStack_1b0 = uVar2;
    uStack_198 = uVar5;
    uStack_1a0 = uVar4;
    uStack_188 = uVar7;
    uStack_190 = uVar6;
    func_0x0001035c071c(&uStack_280,auStack_700,0x112f730c0,&UNK_10dbce2d0);
    func_0x0001035c071c(&uStack_340,auStack_700,0x112f730c0,&UNK_10dbce2d0);
    puVar27 = &uStack_1c0;
    FUN_1035c0310(puVar27,&uStack_100);
    FUN_1035c4788(&uStack_640,0x112f730c0,&UNK_10dbce2d0);
    FUN_1035c4788(&uStack_4c0,0x112f730c0,&UNK_10dbce2d0);
    if (((ulong)puVar27 & 1) != 0) goto LAB_1035c0b28;
  }
  uVar26 = 0;
LAB_1035c0b34:
  return uVar26 & 1;
}



/* Entry: 1035c0b50; end: 1035c0c8f;  */

void FUN_1035c0b50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7ba28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2280;
  func_0x000107c61520(&UNK_10dbe2280,&UNK_11066a168);
  puRam0000000112f7ba28 = puVar1;
  return;
}



/* Entry: 1035c0c90; end: 1035c0ca3;  */

void FUN_1035c0c90(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035c0ca4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035c0ce4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035c0ca4; end: 1035c0d23;  */

void FUN_1035c0ca4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7ba70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2170;
  func_0x000107c61520(&UNK_10dbe2170,&UNK_11066a0f0);
  puRam0000000112f7ba70 = puVar1;
  return;
}



/* Entry: 1035c0d24; end: 1035c0d27;  */

void FUN_1035c0d24(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7ba80 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7ba88;
  func_0x00010002969c(0x112f7ba88,&UNK_10dbe20f8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7ba80 = puVar2;
  return;
}



/* Entry: 1035c0d28; end: 1035c0d77;  */

void FUN_1035c0d28(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7ba80 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7ba88;
  func_0x00010002969c(0x112f7ba88,&UNK_10dbe20f8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7ba80 = puVar2;
  return;
}



/* Entry: 1035c0d78; end: 1035c0d7b;  */

void FUN_1035c0d78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7ba90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe21b0;
  func_0x000107c61520(&UNK_10dbe21b0,&UNK_11066a0f0);
  puRam0000000112f7ba90 = puVar1;
  return;
}



/* Entry: 1035c0d7c; end: 1035c0dbb;  */

void FUN_1035c0d7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7ba90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe21b0;
  func_0x000107c61520(&UNK_10dbe21b0,&UNK_11066a0f0);
  puRam0000000112f7ba90 = puVar1;
  return;
}



/* Entry: 1035c0dbc; end: 1035c0ddf;  */

void FUN_1035c0dbc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035c0de0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035c0de0; end: 1035c0e1f;  */

void FUN_1035c0de0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7ba98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2258;
  func_0x000107c61520(&UNK_10dbe2258,&UNK_11066a168);
  puRam0000000112f7ba98 = puVar1;
  return;
}



/* Entry: 1035c0e20; end: 1035c0e37;  */

void FUN_1035c0e20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035c0b50();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035789ac)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035c0e38; end: 1035c0e77;  */

void FUN_1035c0e38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7baa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe22c0;
  func_0x000107c61520(&UNK_10dbe22c0,&UNK_11066a168);
  puRam0000000112f7baa0 = puVar1;
  return;
}



/* Entry: 1035c0e78; end: 1035c0e9b;  */

void FUN_1035c0e78(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035c0e9c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035c0e9c; end: 1035c0edb;  */

void FUN_1035c0e9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7baa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2330;
  func_0x000107c61520(&UNK_10dbe2330,&UNK_11066a278);
  puRam0000000112f7baa8 = puVar1;
  return;
}



/* Entry: 1035c0edc; end: 1035c0eef;  */

void FUN_1035c0edc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1035c0b90)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1035c0ef0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035c0ef0; end: 1035c0f2f;  */

void FUN_1035c0ef0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe22e8;
  func_0x000107c61520(&DAT_10dbe22e8,&UNK_11066a278);
  puRam0000000112f7bab0 = puVar1;
  return;
}



/* Entry: 1035c0f30; end: 1035c0f33;  */

void FUN_1035c0f30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bab8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2398;
  func_0x000107c61520(&UNK_10dbe2398,&UNK_11066a278);
  puRam0000000112f7bab8 = puVar1;
  return;
}



/* Entry: 1035c0f34; end: 1035c0f73;  */

void FUN_1035c0f34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bab8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2398;
  func_0x000107c61520(&UNK_10dbe2398,&UNK_11066a278);
  puRam0000000112f7bab8 = puVar1;
  return;
}



/* Entry: 1035c0f74; end: 1035c0f97;  */

void FUN_1035c0f74(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035c0f98();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035c0f98; end: 1035c0fd7;  */

void FUN_1035c0f98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2408;
  func_0x000107c61520(&UNK_10dbe2408,&UNK_11066a308);
  puRam0000000112f7bac0 = puVar1;
  return;
}



/* Entry: 1035c0fd8; end: 1035c0feb;  */

void FUN_1035c0fd8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1035c0bd0)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1035c0fec();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035c0fec; end: 1035c102b;  */

void FUN_1035c0fec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe23c0;
  func_0x000107c61520(&DAT_10dbe23c0,&UNK_11066a308);
  puRam0000000112f7bac8 = puVar1;
  return;
}



/* Entry: 1035c102c; end: 1035c102f;  */

void FUN_1035c102c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2470;
  func_0x000107c61520(&UNK_10dbe2470,&UNK_11066a308);
  puRam0000000112f7bad0 = puVar1;
  return;
}



/* Entry: 1035c1030; end: 1035c106f;  */

void FUN_1035c1030(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2470;
  func_0x000107c61520(&UNK_10dbe2470,&UNK_11066a308);
  puRam0000000112f7bad0 = puVar1;
  return;
}



/* Entry: 1035c1070; end: 1035c1093;  */

void FUN_1035c1070(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035c1094();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035c1094; end: 1035c10d3;  */

void FUN_1035c1094(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe24e0;
  func_0x000107c61520(&UNK_10dbe24e0,&UNK_11066a3a0);
  puRam0000000112f7bad8 = puVar1;
  return;
}



/* Entry: 1035c10d4; end: 1035c10e7;  */

void FUN_1035c10d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1035c0c10)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1035c10e8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035c10e8; end: 1035c1127;  */

void FUN_1035c10e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe2498;
  func_0x000107c61520(&DAT_10dbe2498,&UNK_11066a3a0);
  puRam0000000112f7bae0 = puVar1;
  return;
}



/* Entry: 1035c1128; end: 1035c112b;  */

void FUN_1035c1128(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2548;
  func_0x000107c61520(&UNK_10dbe2548,&UNK_11066a3a0);
  puRam0000000112f7bae8 = puVar1;
  return;
}



/* Entry: 1035c112c; end: 1035c116b;  */

void FUN_1035c112c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2548;
  func_0x000107c61520(&UNK_10dbe2548,&UNK_11066a3a0);
  puRam0000000112f7bae8 = puVar1;
  return;
}



/* Entry: 1035c116c; end: 1035c118f;  */

void FUN_1035c116c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035c1190();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035c1190; end: 1035c11cf;  */

void FUN_1035c1190(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7baf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe25b8;
  func_0x000107c61520(&UNK_10dbe25b8,&UNK_11066a430);
  puRam0000000112f7baf0 = puVar1;
  return;
}



/* Entry: 1035c11d0; end: 1035c11e3;  */

void FUN_1035c11d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1035c0c50)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1035c1214();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035c11e4; end: 1035c1213;  */

void FUN_1035c11e4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035c1214; end: 1035c1253;  */

void FUN_1035c1214(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7baf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe2570;
  func_0x000107c61520(&DAT_10dbe2570,&UNK_11066a430);
  puRam0000000112f7baf8 = puVar1;
  return;
}



/* Entry: 1035c1254; end: 1035c1257;  */

void FUN_1035c1254(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bb00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2620;
  func_0x000107c61520(&UNK_10dbe2620,&UNK_11066a430);
  puRam0000000112f7bb00 = puVar1;
  return;
}



/* Entry: 1035c1258; end: 1035c1297;  */

void FUN_1035c1258(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bb00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2620;
  func_0x000107c61520(&UNK_10dbe2620,&UNK_11066a430);
  puRam0000000112f7bb00 = puVar1;
  return;
}



/* Entry: 1035c1298; end: 1035c1337;  */

int FUN_1035c1298(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1035c1338; end: 1035c157f;  */

/* WARNING: Possible PIC construction at 0x0001035c13a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c13c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c14a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c14c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c14d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c0704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c1404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c1424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c1514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c1534: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035c1518) */
/* WARNING: Removing unreachable block (ram,0x0001035c1428) */
/* WARNING: Removing unreachable block (ram,0x0001035c1408) */
/* WARNING: Removing unreachable block (ram,0x0001035c0708) */
/* WARNING: Removing unreachable block (ram,0x0001035c14dc) */
/* WARNING: Removing unreachable block (ram,0x0001035c06f0) */
/* WARNING: Removing unreachable block (ram,0x0001035c0718) */
/* WARNING: Removing unreachable block (ram,0x0001035c06f4) */
/* WARNING: Removing unreachable block (ram,0x0001035c14c4) */
/* WARNING: Removing unreachable block (ram,0x0001035c14a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */
/* WARNING: Removing unreachable block (ram,0x0001035c13c4) */
/* WARNING: Removing unreachable block (ram,0x0001035c143c) */
/* WARNING: Removing unreachable block (ram,0x0001035c13a4) */
/* WARNING: Removing unreachable block (ram,0x0001035c1538) */
/* WARNING: Removing unreachable block (ram,0x000101541464) */
/* WARNING: Removing unreachable block (ram,0x000101541474) */
/* WARNING: Removing unreachable block (ram,0x000101541470) */

ulong FUN_1035c1338(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3c) & 3;
  if (uVar1 < 2) {
    if (uVar1 == 0) goto code_r0x00010006c00c;
    func_0x00010006c00c(param_1,param_2 & 0xcfffffffffffffff);
  }
  else {
    param_2 = param_2 & 0xcfffffffffffffff;
    if (uVar1 != 2) goto code_r0x00010006c00c;
    func_0x00010006c00c();
  }
  param_1 = param_4;
  param_2 = param_5;
  if (0xe < param_5 >> 0x3c) {
    return param_3;
  }
code_r0x00010006c00c:
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return param_1;
}



/* Entry: 1035c1580; end: 1035c15eb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1035c1580(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x17) == '\0') {
    FUN_1035c15ec(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                  param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],
                  param_1[0xd],param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12],
                  param_1[0x13],param_1[0x14],param_1[0x15],param_1[0x16]);
  }
  uVar1 = param_1[0x18];
  uVar2 = (uint)((ulong)param_1[0x19] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[0x19] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1035c15ec; end: 1035c1cc7;  */

/* WARNING: Possible PIC construction at 0x0001035c1654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c1674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c1754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c1774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c178c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034d5940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c16b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c16d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c17c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c17e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035c17cc) */
/* WARNING: Removing unreachable block (ram,0x0001035c16dc) */
/* WARNING: Removing unreachable block (ram,0x0001035c16bc) */
/* WARNING: Removing unreachable block (ram,0x0001034d5944) */
/* WARNING: Removing unreachable block (ram,0x0001035c1790) */
/* WARNING: Removing unreachable block (ram,0x0001034d592c) */
/* WARNING: Removing unreachable block (ram,0x0001034d5954) */
/* WARNING: Removing unreachable block (ram,0x0001034d5930) */
/* WARNING: Removing unreachable block (ram,0x0001035c1778) */
/* WARNING: Removing unreachable block (ram,0x0001035c1758) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x0001035c1678) */
/* WARNING: Removing unreachable block (ram,0x0001035c16f0) */
/* WARNING: Removing unreachable block (ram,0x0001035c1658) */
/* WARNING: Removing unreachable block (ram,0x0001035c17ec) */
/* WARNING: Removing unreachable block (ram,0x000101556278) */
/* WARNING: Removing unreachable block (ram,0x000101556288) */
/* WARNING: Removing unreachable block (ram,0x000101556284) */

ulong FUN_1035c15ec(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3c) & 3;
  if (uVar1 < 2) {
    if (uVar1 == 0) goto code_r0x00010006c090;
    func_0x00010006c090(param_1,param_2 & 0xcfffffffffffffff);
  }
  else {
    param_2 = param_2 & 0xcfffffffffffffff;
    if (uVar1 != 2) goto code_r0x00010006c090;
    func_0x00010006c090();
  }
  param_1 = param_4;
  param_2 = param_5;
  if (0xe < param_5 >> 0x3c) {
    return param_3;
  }
code_r0x00010006c090:
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return param_1;
}



/* Entry: 1035c1cc8; end: 1035c1e3b;  */

undefined8 FUN_1035c1cc8(undefined8 param_1)

{
  FUN_1035c1f24(param_1,&UNK_11066a200);
  return param_1;
}



/* Entry: 1035c1e3c; end: 1035c1f23;  */

int FUN_1035c1e3c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x34] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0x32) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035c1f24; end: 1035c1f7b;  */

void FUN_1035c1f24(undefined8 *param_1)

{
  FUN_1035c15ec(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12],param_1[0x13],
                param_1[0x14],param_1[0x15],param_1[0x16]);
  return;
}



/* Entry: 1035c1f7c; end: 1035c2207;  */

undefined8 * FUN_1035c1f7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar1 = *param_2;
  uVar12 = param_2[1];
  uVar2 = param_2[2];
  uVar13 = param_2[3];
  uVar3 = param_2[4];
  uVar14 = param_2[5];
  uVar4 = param_2[6];
  uVar15 = param_2[7];
  uVar5 = param_2[8];
  uVar16 = param_2[9];
  uVar6 = param_2[10];
  uVar17 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar18 = param_2[0xd];
  uVar8 = param_2[0xe];
  uVar19 = param_2[0xf];
  uVar9 = param_2[0x10];
  uVar20 = param_2[0x11];
  uVar10 = param_2[0x12];
  uVar21 = param_2[0x13];
  uVar11 = param_2[0x14];
  uVar22 = param_2[0x15];
  uVar23 = param_2[0x16];
  FUN_1035c1338(uVar1,uVar12,uVar2,uVar13,uVar3,uVar14,uVar4,uVar15,uVar5,uVar16,uVar6,uVar17,uVar7,
                uVar18,uVar8,uVar19,uVar9,uVar20,uVar10,uVar21,uVar11,uVar22,uVar23);
  *param_1 = uVar1;
  param_1[1] = uVar12;
  param_1[2] = uVar2;
  param_1[3] = uVar13;
  param_1[4] = uVar3;
  param_1[5] = uVar14;
  param_1[6] = uVar4;
  param_1[7] = uVar15;
  param_1[8] = uVar5;
  param_1[9] = uVar16;
  param_1[10] = uVar6;
  param_1[0xb] = uVar17;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar18;
  param_1[0xe] = uVar8;
  param_1[0xf] = uVar19;
  param_1[0x10] = uVar9;
  param_1[0x11] = uVar20;
  param_1[0x12] = uVar10;
  param_1[0x13] = uVar21;
  param_1[0x14] = uVar11;
  param_1[0x15] = uVar22;
  param_1[0x16] = uVar23;
  return param_1;
}



/* Entry: 1035c2208; end: 1035c22ab;  */

undefined8 * FUN_1035c2208(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  uVar9 = param_2[0x16];
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar8 = param_1[7];
  uVar12 = param_1[9];
  uVar11 = param_1[8];
  uVar14 = param_1[0xb];
  uVar13 = param_1[10];
  uVar16 = param_1[0xd];
  uVar15 = param_1[0xc];
  uVar18 = param_1[0xf];
  uVar17 = param_1[0xe];
  uVar20 = param_1[0x11];
  uVar19 = param_1[0x10];
  uVar22 = param_1[0x13];
  uVar21 = param_1[0x12];
  uVar24 = param_1[0x15];
  uVar23 = param_1[0x14];
  uVar10 = param_1[0x16];
  uVar25 = *param_2;
  uVar27 = param_2[3];
  uVar26 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar25;
  param_1[3] = uVar27;
  param_1[2] = uVar26;
  uVar25 = param_2[4];
  uVar27 = param_2[7];
  uVar26 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar25;
  param_1[7] = uVar27;
  param_1[6] = uVar26;
  uVar25 = param_2[8];
  uVar27 = param_2[0xb];
  uVar26 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar25;
  param_1[0xb] = uVar27;
  param_1[10] = uVar26;
  uVar25 = param_2[0xc];
  uVar27 = param_2[0xf];
  uVar26 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar25;
  param_1[0xf] = uVar27;
  param_1[0xe] = uVar26;
  uVar25 = param_2[0x10];
  uVar27 = param_2[0x13];
  uVar26 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar25;
  param_1[0x13] = uVar27;
  param_1[0x12] = uVar26;
  uVar25 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar25;
  param_1[0x16] = uVar9;
  FUN_1035c15ec(uVar7,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8,uVar11,uVar12,uVar13,uVar14,uVar15,
                uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar10);
  return param_1;
}



/* Entry: 1035c22ac; end: 1035c2363;  */

int FUN_1035c22ac(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x2e] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1035c2364; end: 1035c23f3;  */

/* WARNING: Possible PIC construction at 0x0001035c237c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c23ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035c2380) */
/* WARNING: Removing unreachable block (ram,0x0001035c2390) */
/* WARNING: Removing unreachable block (ram,0x0001035c2398) */
/* WARNING: Removing unreachable block (ram,0x0001035c23b0) */
/* WARNING: Removing unreachable block (ram,0x0001035c23c0) */
/* WARNING: Removing unreachable block (ram,0x0001035c23c8) */
/* WARNING: Removing unreachable block (ram,0x0001035c23e4) */
/* WARNING: Removing unreachable block (ram,0x0001035c23d8) */
/* WARNING: Removing unreachable block (ram,0x0001035c23a8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1035c2364(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1035c23f4; end: 1035c296f;  */

undefined8 * FUN_1035c23f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar3,uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar1;
  uVar2 = param_2[4];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar3 = param_2[3];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[3] = uVar3;
    param_1[4] = uVar2;
  }
  else {
    uVar3 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[4] = param_2[4];
  }
  uVar2 = param_2[7];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar3 = param_2[6];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[6] = uVar3;
    param_1[7] = uVar2;
  }
  else {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[7] = param_2[7];
  }
  uVar2 = param_2[10];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[9];
    param_1[8] = param_2[8];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[9] = uVar3;
    param_1[10] = uVar2;
  }
  else {
    uVar3 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[10] = param_2[10];
  }
  uVar2 = param_2[0xd];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar2;
  }
  else {
    uVar3 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
    param_1[0xd] = param_2[0xd];
  }
  return param_1;
}



/* Entry: 1035c2970; end: 1035c2a3f;  */

int FUN_1035c2970(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035c2a40; end: 1035c2b0b;  */

void FUN_1035c2a40(undefined8 *param_1)

{
  long lVar1;
  
  func_0x00010006c090(*param_1,param_1[1]);
  if ((ulong)param_1[4] >> 0x3c < 0xf) {
    func_0x00010006c090(param_1[3]);
  }
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    func_0x00010006c090(param_1[6]);
  }
  if (*(char *)(param_1 + 8) != '\x02') {
    func_0x00010006c090(param_1[9],param_1[10]);
  }
  if (*(char *)(param_1 + 0xb) != '\x02') {
    func_0x00010006c090(param_1[0xc],param_1[0xd]);
  }
  if ((ulong)param_1[0x10] >> 0x3c < 0xf) {
    func_0x00010006c090(param_1[0xf]);
  }
  if (*(char *)(param_1 + 0x11) != '\x02') {
    func_0x00010006c090(param_1[0x12],param_1[0x13]);
  }
  lVar1 = param_1[0x16];
  if (lVar1 != 0) {
    func_0x00010006c090(param_1[0x14],param_1[0x15]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1035c2b0c; end: 1035c3177;  */

undefined8 * FUN_1035c2b0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar5,uVar1);
  *param_1 = uVar5;
  param_1[1] = uVar1;
  uVar3 = param_2[4];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar5 = param_2[3];
    func_0x00010006c00c(uVar5,uVar3);
    param_1[3] = uVar5;
    param_1[4] = uVar3;
  }
  else {
    uVar5 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar5;
    param_1[4] = param_2[4];
  }
  uVar3 = param_2[7];
  if (uVar3 >> 0x3c < 0xf) {
    uVar5 = param_2[6];
    param_1[5] = param_2[5];
    func_0x00010006c00c(uVar5,uVar3);
    param_1[6] = uVar5;
    param_1[7] = uVar3;
  }
  else {
    uVar5 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar5;
    param_1[7] = param_2[7];
  }
  cVar2 = *(char *)(param_2 + 8);
  if (cVar2 == '\x02') {
    uVar5 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar5;
    param_1[10] = param_2[10];
  }
  else {
    *(char *)(param_1 + 8) = cVar2;
    uVar5 = param_2[9];
    uVar1 = param_2[10];
    func_0x00010006c00c(uVar5,uVar1);
    param_1[9] = uVar5;
    param_1[10] = uVar1;
  }
  cVar2 = *(char *)(param_2 + 0xb);
  if (cVar2 == '\x02') {
    uVar5 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar5;
    param_1[0xd] = param_2[0xd];
  }
  else {
    *(char *)(param_1 + 0xb) = cVar2;
    uVar5 = param_2[0xc];
    uVar1 = param_2[0xd];
    func_0x00010006c00c(uVar5,uVar1);
    param_1[0xc] = uVar5;
    param_1[0xd] = uVar1;
  }
  uVar3 = param_2[0x10];
  if (uVar3 >> 0x3c < 0xf) {
    uVar5 = param_2[0xf];
    param_1[0xe] = param_2[0xe];
    func_0x00010006c00c(uVar5,uVar3);
    param_1[0xf] = uVar5;
    param_1[0x10] = uVar3;
  }
  else {
    uVar5 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar5;
    param_1[0x10] = param_2[0x10];
  }
  cVar2 = *(char *)(param_2 + 0x11);
  if (cVar2 == '\x02') {
    uVar5 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar5;
    param_1[0x13] = param_2[0x13];
    lVar4 = param_2[0x16];
  }
  else {
    *(char *)(param_1 + 0x11) = cVar2;
    uVar5 = param_2[0x12];
    uVar1 = param_2[0x13];
    func_0x00010006c00c(uVar5,uVar1);
    param_1[0x12] = uVar5;
    param_1[0x13] = uVar1;
    lVar4 = param_2[0x16];
  }
  if (lVar4 == 0) {
    uVar5 = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar5;
    param_1[0x16] = param_2[0x16];
  }
  else {
    uVar5 = param_2[0x14];
    uVar1 = param_2[0x15];
    func_0x00010006c00c(uVar5,uVar1);
    param_1[0x14] = uVar5;
    param_1[0x15] = uVar1;
    param_1[0x16] = lVar4;
    func_0x000107c6157c(lVar4);
  }
  return param_1;
}



/* Entry: 1035c3178; end: 1035c31ab;  */

undefined8 FUN_1035c3178(undefined8 param_1)

{
  FUN_10365943c();
  return param_1;
}



/* Entry: 1035c31ac; end: 1035c3423;  */

undefined8 * FUN_1035c31ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[4] >> 0x3c < 0xf) {
    uVar3 = param_2[4];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 2);
      goto LAB_1035c3204;
    }
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar1 = param_1[3];
    param_1[3] = param_2[3];
    param_1[4] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_1035c3204:
    uVar1 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_1[4] = param_2[4];
  }
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    uVar3 = param_2[7];
    if (0xe < uVar3 >> 0x3c) {
      func_0x00010159d670(param_1 + 5);
      goto LAB_1035c3258;
    }
    uVar1 = param_1[6];
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[7] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_1035c3258:
    uVar1 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar1;
    param_1[7] = param_2[7];
  }
  pcVar5 = (char *)(param_1 + 8);
  if (*pcVar5 == '\x02') {
LAB_1035c32a4:
    uVar1 = param_2[8];
    param_1[9] = param_2[9];
    *(undefined8 *)pcVar5 = uVar1;
    param_1[10] = param_2[10];
  }
  else {
    if (*(byte *)(param_2 + 8) == 2) {
      func_0x0001015fd618(pcVar5);
      goto LAB_1035c32a4;
    }
    *(byte *)(param_1 + 8) = *(byte *)(param_2 + 8) & 1;
    uVar1 = param_1[9];
    uVar2 = param_1[10];
    uVar6 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar6;
    func_0x00010006c090(uVar1,uVar2);
  }
  pcVar5 = (char *)(param_1 + 0xb);
  if (*pcVar5 == '\x02') {
LAB_1035c32f4:
    uVar1 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    *(undefined8 *)pcVar5 = uVar1;
    param_1[0xd] = param_2[0xd];
  }
  else {
    if (*(byte *)(param_2 + 0xb) == 2) {
      func_0x0001015fd618(pcVar5);
      goto LAB_1035c32f4;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_2 + 0xb) & 1;
    uVar1 = param_1[0xc];
    uVar2 = param_1[0xd];
    uVar6 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar6;
    func_0x00010006c090(uVar1,uVar2);
  }
  if ((ulong)param_1[0x10] >> 0x3c < 0xf) {
    uVar3 = param_2[0x10];
    if (0xe < uVar3 >> 0x3c) {
      func_0x00010159d670(param_1 + 0xe);
      goto LAB_1035c3348;
    }
    uVar1 = param_1[0xf];
    uVar2 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar2;
    param_1[0x10] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_1035c3348:
    uVar1 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar1;
    param_1[0x10] = param_2[0x10];
  }
  pcVar5 = (char *)(param_1 + 0x11);
  if (*pcVar5 != '\x02') {
    if (*(byte *)(param_2 + 0x11) != 2) {
      *(byte *)(param_1 + 0x11) = *(byte *)(param_2 + 0x11) & 1;
      uVar1 = param_1[0x12];
      uVar2 = param_1[0x13];
      uVar6 = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar6;
      func_0x00010006c090(uVar1,uVar2);
      lVar4 = param_1[0x16];
      goto joined_r0x0001035c33a8;
    }
    func_0x0001015fd618(pcVar5);
  }
  uVar1 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  *(undefined8 *)pcVar5 = uVar1;
  param_1[0x13] = param_2[0x13];
  lVar4 = param_1[0x16];
joined_r0x0001035c33a8:
  if (lVar4 != 0) {
    lVar4 = param_2[0x16];
    if (lVar4 != 0) {
      uVar1 = param_1[0x14];
      uVar2 = param_1[0x15];
      uVar6 = param_2[0x14];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar6;
      func_0x00010006c090(uVar1,uVar2);
      uVar1 = param_1[0x16];
      param_1[0x16] = lVar4;
      func_0x000107c61574(uVar1);
      return param_1;
    }
    FUN_1035c3178(param_1 + 0x14);
  }
  uVar1 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar1;
  param_1[0x16] = param_2[0x16];
  return param_1;
}



/* Entry: 1035c3424; end: 1035c350f;  */

int FUN_1035c3424(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x2e] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x2c);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035c3510; end: 1035c35af;  */

/* WARNING: Possible PIC construction at 0x0001035c3528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c3558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c3580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035c352c) */
/* WARNING: Removing unreachable block (ram,0x0001035c353c) */
/* WARNING: Removing unreachable block (ram,0x0001035c3544) */
/* WARNING: Removing unreachable block (ram,0x0001035c355c) */
/* WARNING: Removing unreachable block (ram,0x0001035c3568) */
/* WARNING: Removing unreachable block (ram,0x0001035c3570) */
/* WARNING: Removing unreachable block (ram,0x0001035c3584) */
/* WARNING: Removing unreachable block (ram,0x0001035c35a0) */
/* WARNING: Removing unreachable block (ram,0x0001035c3594) */
/* WARNING: Removing unreachable block (ram,0x0001035c357c) */
/* WARNING: Removing unreachable block (ram,0x0001035c3554) */

void FUN_1035c3510(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1035c35b0; end: 1035c3c4b;  */

undefined8 * FUN_1035c35b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar3,uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar1;
  uVar4 = param_2[4];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar3 = param_2[3];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[3] = uVar3;
    param_1[4] = uVar4;
  }
  else {
    uVar3 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[4] = param_2[4];
  }
  uVar4 = param_2[7];
  if (uVar4 >> 0x3c < 0xf) {
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[6] = uVar3;
    param_1[7] = uVar4;
  }
  else {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[7] = param_2[7];
  }
  cVar2 = *(char *)(param_2 + 8);
  if (cVar2 == '\x02') {
    uVar3 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[10] = param_2[10];
  }
  else {
    *(char *)(param_1 + 8) = cVar2;
    uVar3 = param_2[9];
    uVar1 = param_2[10];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[9] = uVar3;
    param_1[10] = uVar1;
  }
  cVar2 = *(char *)(param_2 + 0xb);
  if (cVar2 == '\x02') {
    uVar3 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
    param_1[0xd] = param_2[0xd];
  }
  else {
    *(char *)(param_1 + 0xb) = cVar2;
    uVar3 = param_2[0xc];
    uVar1 = param_2[0xd];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar1;
  }
  uVar4 = param_2[0x10];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    uVar3 = param_2[0xf];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0xf] = uVar3;
    param_1[0x10] = uVar4;
  }
  else {
    uVar3 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar3;
    param_1[0x10] = param_2[0x10];
  }
  return param_1;
}



/* Entry: 1035c3c4c; end: 1035c3d1f;  */

int FUN_1035c3c4c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)(param_1 + 0x10)) {
    uVar1 = (*(byte *)(param_1 + 0x10) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035c3d20; end: 1035c3db7;  */

/* WARNING: Possible PIC construction at 0x0001035c3d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c3d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035c3d8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035c3d3c) */
/* WARNING: Removing unreachable block (ram,0x0001035c3d4c) */
/* WARNING: Removing unreachable block (ram,0x0001035c3d54) */
/* WARNING: Removing unreachable block (ram,0x0001035c3d68) */
/* WARNING: Removing unreachable block (ram,0x0001035c3d74) */
/* WARNING: Removing unreachable block (ram,0x0001035c3d7c) */
/* WARNING: Removing unreachable block (ram,0x0001035c3d90) */
/* WARNING: Removing unreachable block (ram,0x0001035c3da8) */
/* WARNING: Removing unreachable block (ram,0x0001035c3d9c) */
/* WARNING: Removing unreachable block (ram,0x0001035c3d84) */
/* WARNING: Removing unreachable block (ram,0x0001035c3d60) */

void FUN_1035c3d20(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1035c3db8; end: 1035c444f;  */

undefined8 * FUN_1035c3db8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar5,uVar1);
  *param_1 = uVar5;
  param_1[1] = uVar1;
  uVar4 = param_2[4];
  if (uVar4 >> 0x3c < 0xf) {
    uVar5 = param_2[3];
    param_1[2] = param_2[2];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[3] = uVar5;
    param_1[4] = uVar4;
  }
  else {
    uVar5 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar5;
    param_1[4] = param_2[4];
  }
  cVar2 = *(char *)(param_2 + 5);
  if (cVar2 == '\x02') {
    uVar5 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar5;
    param_1[7] = param_2[7];
  }
  else {
    *(char *)(param_1 + 5) = cVar2;
    uVar5 = param_2[6];
    uVar1 = param_2[7];
    func_0x00010006c00c(uVar5,uVar1);
    param_1[6] = uVar5;
    param_1[7] = uVar1;
  }
  cVar2 = *(char *)(param_2 + 8);
  if (cVar2 == '\x02') {
    uVar5 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar5;
    param_1[10] = param_2[10];
    lVar3 = param_2[0xc];
  }
  else {
    *(char *)(param_1 + 8) = cVar2;
    uVar5 = param_2[9];
    uVar1 = param_2[10];
    func_0x00010006c00c(uVar5,uVar1);
    param_1[9] = uVar5;
    param_1[10] = uVar1;
    lVar3 = param_2[0xc];
  }
  if (lVar3 == 0) {
    uVar5 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar5;
    uVar5 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar5;
  }
  else {
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = lVar3;
    uVar5 = param_2[0xd];
    uVar1 = param_2[0xe];
    func_0x000107c61434();
    func_0x00010006c00c(uVar5,uVar1);
    param_1[0xd] = uVar5;
    param_1[0xe] = uVar1;
  }
  cVar2 = *(char *)(param_2 + 0xf);
  if (cVar2 == '\x02') {
    uVar5 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar5;
    param_1[0x11] = param_2[0x11];
  }
  else {
    *(char *)(param_1 + 0xf) = cVar2;
    uVar5 = param_2[0x10];
    uVar1 = param_2[0x11];
    func_0x00010006c00c(uVar5,uVar1);
    param_1[0x10] = uVar5;
    param_1[0x11] = uVar1;
  }
  return param_1;
}



/* Entry: 1035c4450; end: 1035c4533;  */

int FUN_1035c4450(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x24] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}


