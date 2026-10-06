/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10733b74c; end: 10733b773;  */

long FUN_10733b74c(long param_1)

{
  FUN_10733b774(param_1 + 8);
  return param_1;
}



/* Entry: 10733b774; end: 10733b78f;  */

void FUN_10733b774(long param_1)

{
  func_0x00010733a9ec();
  *(undefined4 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 10733b790; end: 10733b797;  */

void FUN_10733b790(void)

{
  return;
}



/* Entry: 10733b798; end: 10733b7e3;  */

void FUN_10733b798(void)

{
  func_0x000107346940();
  func_0x000107347e04();
  return;
}



/* Entry: 10733b7e4; end: 10733b843;  */

void FUN_10733b7e4(void)

{
  undefined1 in_ZR;
  undefined1 uStack_40;
  
  func_0x0001073446e8();
  func_0x000107344ab4();
  FUN_10733b844();
  func_0x000107346ae4(uStack_40);
  func_0x0001073466bc();
  func_0x000107346784();
  func_0x000107345b64();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107346288();
  func_0x00010733b8e0();
  func_0x000107345b64();
  func_0x000107345604();
  func_0x0001073446c4();
  FUN_107558dd0();
  return;
}



/* Entry: 10733b844; end: 10733b85f;  */

void FUN_10733b844(void)

{
  func_0x0001073446c4();
  FUN_107558dd0();
  return;
}



/* Entry: 10733b860; end: 10733b8bb;  */

void FUN_10733b860(long param_1)

{
  undefined1 in_ZR;
  undefined4 extraout_w8;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x000107344d7c();
  *(undefined4 *)(param_1 + 0x38) = extraout_w8;
  FUN_10733abd8();
  func_0x00010734709c();
  if (!(bool)in_ZR) {
    func_0x000107344c48((&PTR_FUN_1109a1dd8)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x38) = unaff_w21;
  }
  return;
}



/* Entry: 10733b8bc; end: 10733b8c3;  */

void FUN_10733b8bc(void)

{
  return;
}



/* Entry: 10733b8c4; end: 10733b903;  */

void FUN_10733b8c4(void)

{
  func_0x000107346940();
  func_0x0001073459fc();
  return;
}



/* Entry: 10733b904; end: 10733b93b;  */

void FUN_10733b904(void)

{
  func_0x0001073446c4();
  FUN_1075552f4();
  return;
}



/* Entry: 10733b93c; end: 10733b96b;  */

void FUN_10733b93c(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x000107344d7c();
  *(undefined4 *)(param_1 + 0x48) = extraout_w8;
  FUN_10733b96c();
  return;
}



/* Entry: 10733b96c; end: 10733b9ab;  */

void FUN_10733b96c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x000107345658();
  FUN_10733acb4();
  func_0x000107347e2c();
  if (!(bool)in_ZR) {
    func_0x0001073448fc(&PTR_FUN_1109a1df0);
    *(undefined4 *)(unaff_x19 + 0x48) = unaff_w21;
  }
  return;
}



/* Entry: 10733b9ac; end: 10733b9bf;  */

void FUN_10733b9ac(void)

{
  return;
}



/* Entry: 10733b9c0; end: 10733ba0b;  */

void FUN_10733b9c0(void)

{
  func_0x000107347bbc();
  func_0x000107347e18();
  return;
}



/* Entry: 10733ba0c; end: 10733ba27;  */

void FUN_10733ba0c(void)

{
  func_0x0001073446c4();
  FUN_10755b48c();
  return;
}



/* Entry: 10733ba28; end: 10733ba57;  */

void FUN_10733ba28(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x000107344d7c();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  FUN_10733ba58();
  return;
}



/* Entry: 10733ba58; end: 10733ba9b;  */

void FUN_10733ba58(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107345658();
  FUN_10733ad98();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 != -1) {
    func_0x0001073448fc(&PTR_FUN_1109a1e08);
    *(int *)(unaff_x19 + 0x30) = iVar1;
  }
  return;
}



/* Entry: 10733ba9c; end: 10733baaf;  */

void FUN_10733ba9c(void)

{
  return;
}



/* Entry: 10733bab0; end: 10733bb37;  */

void FUN_10733bab0(long param_1)

{
  long unaff_x19;
  
  func_0x000107347bbc();
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 10733bb38; end: 10733bcaf;  */

void FUN_10733bb38(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [56];
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [56];
  undefined1 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107345878();
  func_0x0001073447e0();
  FUN_10733bdc8(auStack_80);
  func_0x0001073477d0(auStack_b8,param_2,unaff_x21 + 8);
  func_0x000104c2f714(auStack_80);
  FUN_10733bdc8(auStack_80);
  func_0x0001073477d0(auStack_f0,param_2,unaff_x21 + 0x80);
  func_0x000104c2f714(auStack_80);
  func_0x00010733bdd0(auStack_110);
  if ((*(int *)(unaff_x21 + 0x138) == 0) || (in_ZR = *(int *)(unaff_x21 + 0x138) == 1, (bool)in_ZR))
  {
    func_0x0001073477fc();
  }
  else {
    auStack_80[0] = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x000107347b48();
    func_0x0001073461d0(&uStack_120);
    FUN_107339590();
    func_0x000104c335c0(auStack_100);
    func_0x00010724b3d8(auStack_80);
  }
  func_0x000104c335c0(auStack_110);
  __Znwm(0x88);
  func_0x00010734595c();
  func_0x000107347930();
  func_0x000107347994();
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_120;
  uStack_120 = 0;
  uStack_118 = 0;
  func_0x000107347f24(&PTR_DAT_1109a1eb8);
  func_0x000107346e60();
  func_0x0001073465e4();
  func_0x000107346dec();
  func_0x0001073446ac();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107346d84();
    func_0x000104c335c0();
    func_0x00010724b3d8(auStack_80);
    func_0x000104c335c0(auStack_110);
    func_0x000104c2f714(auStack_f0);
    puVar1 = auStack_b8;
    do {
      func_0x000104c2f714(puVar1);
      func_0x000107345604();
      puVar1 = auStack_80;
    } while( true );
  }
  return;
}



/* Entry: 10733bcb0; end: 10733bd4b;  */

long FUN_10733bcb0(long param_1)

{
  FUN_1073391b0(param_1 + 0xf0);
  FUN_10732442c(param_1 + 0x80);
  func_0x000107345f74();
  return param_1;
}



/* Entry: 10733bd4c; end: 10733bdc7;  */

long FUN_10733bd4c(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_c0 [144];
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x00010734479c();
  if (*(int *)(param_3 + 0x70) == 0) {
    func_0x0001073446ac();
    if ((bool)in_ZR) {
      func_0x000107346afc();
      goto SUB_104c2fe00;
    }
  }
  else {
    func_0x000107347e9c();
    if ((bool)in_ZR) {
      func_0x0001073446ac();
      if ((bool)in_ZR) {
        func_0x0001073470b8();
        goto SUB_104c2fe00;
      }
    }
    else {
      func_0x000107344da4();
      func_0x000107344f44();
      func_0x000107345e20();
      func_0x000107346168();
      func_0x0001073446ac();
      if ((bool)in_ZR) {
        return param_1;
      }
    }
  }
  ___stack_chk_fail();
  func_0x000107345820();
  func_0x000107346168();
  unaff_x30 = FUN_10733bdc8;
  func_0x000107345604();
  register0x00000008 = (BADSPACEBASE *)auStack_c0;
  unaff_x29 = puVar1;
SUB_104c2fe00:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001000d03a8();
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 10733bdc8; end: 10733bdd3;  */

void FUN_10733bdc8(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 10733bdd4; end: 10733be2b;  */

void FUN_10733bdd4(void)

{
  undefined1 in_ZR;
  
  func_0x0001073446e8();
  func_0x000107344ab4();
  FUN_107323db4();
  func_0x00010734661c();
  func_0x000107345c90();
  func_0x0001073461c8();
  func_0x000107345b64();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345d9c();
  func_0x000107345b64();
  func_0x000107345604();
  func_0x000107345708();
  FUN_10733bef8();
  return;
}



/* Entry: 10733be2c; end: 10733be6b;  */

void FUN_10733be2c(void)

{
  func_0x000107345708();
  FUN_10733bef8();
  return;
}



/* Entry: 10733be6c; end: 10733bef7;  */

void FUN_10733be6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  
  func_0x000107344fb4();
  func_0x000107347fc8();
  func_0x000107345c28();
  puVar1 = param_1;
  func_0x000107347fc8();
  func_0x000107345c28();
  puVar2 = puVar1;
  func_0x000107347fc8();
  func_0x000107345c28();
  puVar3 = puVar2;
  func_0x000107347fc8();
  func_0x000107345c28();
  puVar4 = puVar3;
  func_0x000107346180();
  puVar4[2] = puVar1;
  puVar4[3] = puVar2;
  puVar4[4] = puVar3;
  *puVar4 = &PTR_FUN_1109a1fc0;
  puVar4[1] = param_1;
  *unaff_x19 = puVar4;
  return;
}



/* Entry: 10733bef8; end: 10733bf2f;  */

long FUN_10733bef8(long param_1)

{
  FUN_10733abd8(param_1 + 0xe0);
  FUN_10733abd8(param_1 + 0x98);
  FUN_10733abd8(param_1 + 0x50);
  func_0x000107345aa0();
  return param_1;
}



/* Entry: 10733bf30; end: 10733bf37;  */

void FUN_10733bf30(void)

{
  return;
}



/* Entry: 10733bf38; end: 10733bf97;  */

ulong FUN_10733bf38(ulong param_1,long param_2,ulong *param_3)

{
  undefined1 in_ZR;
  int extraout_w9;
  ulong unaff_x19;
  undefined1 uStack_b0;
  
  func_0x000107344b40();
  func_0x000107346430();
  if ((bool)in_ZR) {
    unaff_x19 = *(ulong *)(param_2 + 8);
  }
  else if (extraout_w9 == 0) {
    unaff_x19 = *param_3;
  }
  else {
    func_0x000107347ffc();
    func_0x000107345920();
    func_0x000107345bf4();
    func_0x0001073451b4();
  }
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return unaff_x19 & 0xffffffffff;
  }
  ___stack_chk_fail();
  func_0x0001073451b4();
  func_0x000107345604();
  func_0x0001073446e8();
  func_0x000107344ab4();
  FUN_10733b844();
  func_0x000107346ae4(uStack_b0);
  func_0x0001073466bc();
  func_0x000107346784();
  func_0x000107345b64();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107346288();
  func_0x00010733b8e0();
  func_0x000107345b64();
  func_0x000107345604();
  func_0x000107345708();
  FUN_10733c3c4();
  return unaff_x19;
}



/* Entry: 10733bf98; end: 10733bff7;  */

void FUN_10733bf98(void)

{
  undefined1 in_ZR;
  undefined1 uStack_40;
  
  func_0x0001073446e8();
  func_0x000107344ab4();
  FUN_10733b844();
  func_0x000107346ae4(uStack_40);
  func_0x0001073466bc();
  func_0x000107346784();
  func_0x000107345b64();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107346288();
  func_0x00010733b8e0();
  func_0x000107345b64();
  func_0x000107345604();
  func_0x000107345708();
  FUN_10733c3c4();
  return;
}



/* Entry: 10733bff8; end: 10733c037;  */

void FUN_10733bff8(void)

{
  func_0x000107345708();
  FUN_10733c3c4();
  return;
}



/* Entry: 10733c038; end: 10733c1cb;  */

void FUN_10733c038(void)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x21;
  undefined1 *unaff_x22;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [128];
  
  func_0x000107345878();
  func_0x0001073447e0();
  FUN_10733c454(auStack_b0);
  if (*(int *)(unaff_x21 + 0x48) == 0) {
    unaff_x22 = auStack_b0;
  }
  else {
    func_0x000107347530();
    if (!(bool)in_ZR) {
      func_0x000107346670();
      func_0x0001073475fc();
      FUN_10733c45c();
      FUN_10733c4c0(&uStack_c0);
      func_0x000107347050();
      func_0x00010734614c();
      goto LAB_10733c0b0;
    }
  }
  FUN_10733c45c(&uStack_c0,unaff_x22);
LAB_10733c0b0:
  FUN_10733c27c(auStack_b0);
  func_0x00010733c7d0(auStack_b0);
  if ((*(int *)(unaff_x21 + 0x98) == 0) || (in_ZR = *(int *)(unaff_x21 + 0x98) == 1, (bool)in_ZR)) {
    func_0x0001073465b4();
  }
  else {
    func_0x000107346670();
    func_0x0001073475fc();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    func_0x0001073461d0(&uStack_d8);
    func_0x00010727f9d8();
    func_0x000107347048();
    func_0x00010734614c();
  }
  func_0x000107345f54();
  lVar1 = 0x30;
  __Znwm();
  *(undefined8 *)(lVar1 + 0x10) = uStack_b8;
  *(undefined8 *)(lVar1 + 8) = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  *(undefined8 *)(lVar1 + 0x20) = uStack_d0;
  *(undefined8 *)(lVar1 + 0x18) = uStack_d8;
  *(undefined8 *)(lVar1 + 0x28) = uStack_c8;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  func_0x0001073454dc(&PTR_DAT_1109a20f8);
  FUN_10733c27c(&uStack_c0);
  func_0x0001073446ac();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107347048();
    func_0x00010734614c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
    FUN_10733c27c(&uStack_c0);
    do {
      func_0x000107345604();
    } while( true );
  }
  return;
}



/* Entry: 10733c1cc; end: 10733c1ef;  */

void FUN_10733c1cc(void)

{
  func_0x000107344d34();
  FUN_10733c1f0();
  return;
}



/* Entry: 10733c1f0; end: 10733c22f;  */

void FUN_10733c1f0(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x000107345658();
  FUN_10733c230();
  func_0x0001073463a8();
  if (!(bool)in_ZR) {
    func_0x0001073448fc(&PTR_FUN_1109a20d0);
    *(undefined4 *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 10733c230; end: 10733c267;  */

void FUN_10733c230(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107346090();
  if (!(bool)in_ZR) {
    func_0x000107344d8c((&PTR_FUN_1109a20b8)[extraout_x8]);
  }
  func_0x00010734765c();
  return;
}



/* Entry: 10733c268; end: 10733c27b;  */

void FUN_10733c268(void)

{
  return;
}



/* Entry: 10733c27c; end: 10733c2c3;  */

void FUN_10733c27c(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_1;
  FUN_10733c2c4();
  if ((lVar1 == 1) && (func_0x0001073464b0(), extraout_x8 != 0)) {
    func_0x000107346aa8();
    func_0x000107346e70();
    func_0x000107346e68();
  }
  FUN_10733c300(param_1);
  return;
}



/* Entry: 10733c2c4; end: 10733c2ff;  */

long FUN_10733c2c4(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 10733c300; end: 10733c343;  */

void FUN_10733c300(long param_1)

{
  func_0x000107345acc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10733c344; end: 10733c363;  */

void FUN_10733c344(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10733c27c();
  }
  return;
}



/* Entry: 10733c364; end: 10733c377;  */

void FUN_10733c364(void)

{
  return;
}



/* Entry: 10733c378; end: 10733c39b;  */

void FUN_10733c378(void)

{
  func_0x00010734559c();
  func_0x0001073470f0();
  FUN_10733c39c();
  return;
}



/* Entry: 10733c39c; end: 10733c3c3;  */

void FUN_10733c39c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 2) == '\x01') {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 10733c3c4; end: 10733c453;  */

long FUN_10733c3c4(long param_1)

{
  func_0x00010727e9d0(param_1 + 0x48);
  FUN_10733c230(param_1);
  return param_1;
}



/* Entry: 10733c454; end: 10733c45b;  */

void FUN_10733c454(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000107347740();
  FUN_10733c5b4();
  return;
}



/* Entry: 10733c45c; end: 10733c47b;  */

void FUN_10733c45c(void)

{
  func_0x000107347740();
  FUN_10733c47c();
  return;
}



/* Entry: 10733c47c; end: 10733c4bf;  */

void FUN_10733c47c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10733c4c0; end: 10733c593;  */

undefined1 *
FUN_10733c4c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_d8 [16];
  char cStack_c8;
  undefined1 auStack_b8 [120];
  int iStack_40;
  
  func_0x00010734479c();
  func_0x000107753050(auStack_b8,*param_2,param_3,param_4);
  if (iStack_40 == 1) {
    func_0x00010727f7dc(auStack_b8);
    func_0x00010777713c(auStack_d8);
  }
  else {
    auStack_d8[0] = 0;
    cStack_c8 = '\0';
  }
  func_0x000107345840(auStack_b8);
  uVar1 = cStack_c8 == '\0';
  FUN_10733c45c();
  puVar2 = auStack_d8;
  FUN_10733c344();
  func_0x0001073446ac();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107345840(auStack_b8);
  func_0x000107345604();
  func_0x000107347740();
  FUN_10733c5b4();
  return puVar2;
}



/* Entry: 10733c594; end: 10733c5b3;  */

void FUN_10733c594(void)

{
  func_0x000107347740();
  FUN_10733c5b4();
  return;
}



/* Entry: 10733c5b4; end: 10733c637;  */

void FUN_10733c5b4(void)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if ((bRam00000001131ad3a8 & 1) == 0) {
    iVar1 = 0x131ad3a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10733c638(0x1131ad398);
      ___cxa_guard_release(0x1131ad3a8);
    }
  }
  func_0x00010734741c();
  if (extraout_x8 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10733c638; end: 10733c653;  */

void FUN_10733c638(void)

{
  undefined1 uStack_11;
  
  FUN_10733c654(&uStack_11);
  return;
}



/* Entry: 10733c654; end: 10733c6bf;  */

void FUN_10733c654(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  
  func_0x0001073447e0();
  func_0x000107346378();
  FUN_10733c6c0();
  func_0x000107347fbc();
  func_0x000107347710();
  *(undefined8 *)(extraout_x8_00 + 0x40) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x38) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x20) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x18) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x30) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x28) = 0;
  *(undefined4 *)(extraout_x8_00 + 0x38) = 0x3f800000;
  func_0x000107344a14();
  func_0x00010733c7c0();
  func_0x0001073447cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107346404();
  FUN_10733c6e0();
  func_0x0001073465ec();
  return;
}



/* Entry: 10733c6c0; end: 10733c6df;  */

void FUN_10733c6c0(void)

{
  func_0x000107346404();
  FUN_10733c6e0();
  func_0x0001073465ec();
  return;
}



/* Entry: 10733c6e0; end: 10733c6ff;  */

void FUN_10733c6e0(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  undefined8 *unaff_x30;
  
  func_0x000107348088();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  *unaff_x30 = &PTR_FUN_1109a3438;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10733c700; end: 10733c703;  */

void FUN_10733c700(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a3438;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10733c704; end: 10733c717;  */

void FUN_10733c704(void)

{
  func_0x00010733c724();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10733c718; end: 10733c72f;  */

undefined8 FUN_10733c718(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107347300(param_1 + 0x18);
  func_0x00010733c754();
  func_0x000107346294();
  FUN_10733c7a8();
  return unaff_x19;
}



/* Entry: 10733c730; end: 10733c7a7;  */

undefined8 FUN_10733c730(void)

{
  undefined8 unaff_x19;
  
  func_0x000107347300();
  func_0x00010733c754();
  func_0x000107346294();
  FUN_10733c7a8();
  return unaff_x19;
}



/* Entry: 10733c7a8; end: 10733c7d3;  */

void FUN_10733c7a8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10733c7d4; end: 10733c7ef;  */

void FUN_10733c7d4(void)

{
  func_0x000107347fe8();
  FUN_107557040();
  return;
}



/* Entry: 10733c7f0; end: 10733c847;  */

void FUN_10733c7f0(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x000107344d34();
  FUN_10733c230();
  func_0x0001073463a8();
  if (!(bool)in_ZR) {
    func_0x000107344c48((&PTR_FUN_1109a2168)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 10733c848; end: 10733c853;  */

void FUN_10733c848(void)

{
  return;
}



/* Entry: 10733c854; end: 10733c87b;  */

void FUN_10733c854(void)

{
  func_0x000107345bd8();
  func_0x000107347f50();
  FUN_10733c87c();
  return;
}



/* Entry: 10733c87c; end: 10733c8a7;  */

void FUN_10733c87c(void)

{
  func_0x0001073456d0();
  FUN_10733c8a8();
  return;
}



/* Entry: 10733c8a8; end: 10733c8bb;  */

void FUN_10733c8a8(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_10733c45c();
    func_0x000107347c48();
    return;
  }
  return;
}



/* Entry: 10733c8bc; end: 10733c8d3;  */

void FUN_10733c8bc(void)

{
  FUN_10733c45c();
  func_0x000107347c48();
  return;
}



/* Entry: 10733c8d4; end: 10733c93b;  */

void FUN_10733c8d4(void)

{
  undefined1 in_ZR;
  
  func_0x0001073455c4();
  if ((bool)in_ZR) {
    FUN_10733c230();
  }
  return;
}



/* Entry: 10733c93c; end: 10733c9ef;  */

void FUN_10733c93c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x21;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107344fb4();
  func_0x0001073466c8();
  FUN_10733ca30(auStack_60,param_2,unaff_x21 + 8,auStack_48);
  func_0x000107345c88();
  func_0x0001073466c8();
  func_0x0001073479ac(auStack_78,param_2,unaff_x21 + 0x58);
  func_0x000107345c88();
  func_0x0001073466c8();
  func_0x0001073479ac(auStack_90,param_2,unaff_x21 + 0xa8);
  func_0x000107345c88();
  func_0x000107347778();
  func_0x000107345db4();
  func_0x0001073467f0(&PTR_FUN_1109a2208);
  func_0x000107345944();
  func_0x000107346154();
  func_0x000107345f54();
  return;
}



/* Entry: 10733c9f0; end: 10733ca2f;  */

void FUN_10733c9f0(void)

{
  func_0x000107345708();
  func_0x000107339e5c();
  return;
}



/* Entry: 10733ca30; end: 10733cabf;  */

void FUN_10733ca30(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 auStack_140 [112];
  
  func_0x00010734479c();
  uVar1 = *(int *)(param_3 + 0x48) == 1;
  if ((bool)uVar1) {
    func_0x0001073446ac();
    if ((bool)uVar1) {
      func_0x000107345ba8();
LAB_10733ca78:
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)();
      return;
    }
  }
  else if (*(int *)(param_3 + 0x48) == 0) {
    func_0x0001073446ac();
    if ((bool)uVar1) {
      func_0x000107346afc();
      goto LAB_10733ca78;
    }
  }
  else {
    func_0x000107346590();
    func_0x0001073465c0();
    func_0x000107345380();
    func_0x000107345728();
    func_0x00010734622c();
    func_0x0001073446ac();
    if ((bool)uVar1) {
      return;
    }
  }
  ___stack_chk_fail();
  func_0x000107345728();
  func_0x00010734622c();
  func_0x000107345604();
  func_0x00010734523c();
  func_0x0001073466c8();
  func_0x0001073451fc();
  func_0x00010734520c(auStack_140);
  FUN_107339f78();
  func_0x00010734736c();
  func_0x0001073470fc();
  func_0x000107346ab8();
  func_0x000107345c88();
  return;
}



/* Entry: 10733cac0; end: 10733cb1f;  */

void FUN_10733cac0(undefined8 param_1)

{
  undefined1 auStack_a0 [88];
  undefined1 auStack_48 [24];
  
  func_0x00010734523c();
  func_0x0001073466c8();
  func_0x0001073451fc();
  func_0x00010734520c(auStack_a0,param_1,auStack_48);
  FUN_107339f78();
  func_0x00010734736c();
  func_0x0001073470fc();
  func_0x000107346ab8();
  func_0x000107345c88();
  return;
}



/* Entry: 10733cb20; end: 10733cb5f;  */

void FUN_10733cb20(void)

{
  func_0x000107345708();
  FUN_10733d100();
  return;
}



/* Entry: 10733cb60; end: 10733cfaf;  */

void FUN_10733cb60(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined1 unaff_w20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_e8 [56];
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  undefined8 uStack_68;
  
  func_0x000107345878();
  func_0x0001073447e0();
  uStack_68 = extraout_x8;
  func_0x0001072d124c(&uStack_120);
  if (*(int *)(unaff_x21 + 0x48) == 0) {
    unaff_x22 = &uStack_120;
LAB_10733cbe0:
    func_0x000107278b70(&uStack_140,unaff_x22);
  }
  else {
    func_0x000107347530();
    if ((bool)in_ZR) goto LAB_10733cbe0;
    func_0x000107346050();
    func_0x000107278b70(auStack_e8,&uStack_120);
    FUN_10733d1e8(&uStack_140);
    func_0x00010726b09c(auStack_e8);
    func_0x000107345e28();
  }
  puVar1 = &uStack_120;
  func_0x00010726b09c();
  if (*(int *)(unaff_x21 + 0x90) == 0) {
    unaff_w20 = 0;
    puVar4 = (undefined8 *)0x0;
  }
  else {
    in_ZR = *(int *)(unaff_x21 + 0x90) == 1;
    if ((bool)in_ZR) {
      puVar4 = *(undefined8 **)(unaff_x21 + 0x58);
      unaff_w20 = (undefined1)*(undefined4 *)(unaff_x21 + 0x60);
    }
    else {
      func_0x000107346050();
      puVar4 = (undefined8 *)(unaff_x21 + 0x58);
      FUN_10733b030();
      puVar1 = puVar4;
      func_0x000107345e28();
    }
  }
  uStack_ac = 0;
  uStack_b0 = 0;
  func_0x000107347bd0();
  uStack_ac = 0;
  uStack_b0 = 0;
  puVar2 = puVar1;
  func_0x000107347bd0();
  func_0x000107289330(&uStack_120);
  if (*(int *)(unaff_x21 + 0x168) == 0) {
    puVar3 = &uStack_120;
LAB_10733ccc0:
    func_0x000107268464(&uStack_150,puVar3);
  }
  else {
    puVar3 = (undefined8 *)(unaff_x21 + 0x128);
    in_ZR = *(int *)(unaff_x21 + 0x168) == 1;
    if ((bool)in_ZR) goto LAB_10733ccc0;
    func_0x000107346050();
    func_0x000107268464(auStack_e8,&uStack_120);
    FUN_10733d2a8(&uStack_150,puVar3);
    func_0x000104c33108(auStack_e8);
    func_0x000107345e28();
  }
  func_0x000104c33108(&uStack_120);
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  if (*(int *)(unaff_x21 + 0x1b8) == 0) {
    puVar3 = &uStack_120;
LAB_10733cd28:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_168,puVar3);
  }
  else {
    puVar3 = (undefined8 *)(unaff_x21 + 0x170);
    in_ZR = *(int *)(unaff_x21 + 0x1b8) == 1;
    if ((bool)in_ZR) goto LAB_10733cd28;
    func_0x000107346050();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e8,&uStack_120)
    ;
    func_0x0001073462bc(&uStack_168,puVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
    func_0x000107345e28();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_120);
  FUN_10733d3f4(&uStack_b0);
  func_0x000107347bb0(auStack_e8);
  func_0x000107346f1c();
  FUN_10733d3f4(auStack_130);
  if (*(int *)(unaff_x21 + 0x278) == 0) {
    puVar5 = auStack_130;
  }
  else {
    puVar5 = (undefined1 *)(unaff_x21 + 0x238);
    in_ZR = *(int *)(unaff_x21 + 0x278) == 1;
    if (!(bool)in_ZR) {
      func_0x000107346050();
      func_0x000107268400(&uStack_120,auStack_130);
      FUN_107339590(&uStack_180,puVar5);
      func_0x000107346b80();
      func_0x000107345e28();
      goto LAB_10733cdb4;
    }
  }
  func_0x000107268400(&uStack_180,puVar5);
LAB_10733cdb4:
  func_0x000104c335c0(auStack_130);
  func_0x00010733d3fc(&uStack_b0);
  puVar3 = &uStack_120;
  func_0x000107347bb0();
  func_0x000107346f1c();
  func_0x00010734797c();
  puVar3[2] = uStack_138;
  puVar3[1] = uStack_140;
  uStack_140 = 0;
  uStack_138 = 0;
  puVar3[3] = puVar4;
  *(undefined1 *)(puVar3 + 4) = unaff_w20;
  *(undefined8 **)((long)puVar3 + 0x24) = puVar1;
  *(undefined8 **)((long)puVar3 + 0x2c) = puVar2;
  puVar3[8] = uStack_148;
  puVar3[7] = uStack_150;
  uStack_150 = 0;
  uStack_148 = 0;
  puVar3[10] = uStack_160;
  puVar3[9] = uStack_168;
  puVar3[0xb] = uStack_158;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_168 = 0;
  func_0x000104c318bc(puVar3 + 0xc,auStack_e8);
  puVar3[0x14] = uStack_178;
  puVar3[0x13] = uStack_180;
  uStack_180 = 0;
  uStack_178 = 0;
  func_0x000104c318bc(puVar3 + 0x15,&uStack_120);
  func_0x000107347f24(&PTR_DAT_1109a2330);
  func_0x0001073460f0();
  func_0x000107346e60();
  func_0x000104c2f714(auStack_e8);
  func_0x000107346154();
  func_0x000104c33108(&uStack_150);
  func_0x00010726b09c(&uStack_140);
  func_0x0001073447cc(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107346258();
  func_0x000104c335c0();
  func_0x000107345e28();
  func_0x000104c335c0(auStack_130);
  func_0x000104c2f714(auStack_e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_168);
  func_0x000104c33108(&uStack_150);
  func_0x00010726b09c(&uStack_140);
  do {
    func_0x000107345604();
  } while( true );
}



/* Entry: 10733cfb0; end: 10733cfd3;  */

void FUN_10733cfb0(void)

{
  func_0x000107344d34();
  FUN_10733cfd4();
  return;
}



/* Entry: 10733cfd4; end: 10733d013;  */

void FUN_10733cfd4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x000107345658();
  FUN_10733d014();
  func_0x0001073463a8();
  if (!(bool)in_ZR) {
    func_0x0001073448fc(&PTR_FUN_1109a2308);
    *(undefined4 *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 10733d014; end: 10733d04b;  */

void FUN_10733d014(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107346090();
  if (!(bool)in_ZR) {
    func_0x000107344d8c((&PTR_FUN_1109a22f0)[extraout_x8]);
  }
  func_0x00010734765c();
  return;
}



/* Entry: 10733d04c; end: 10733d05f;  */

void FUN_10733d04c(void)

{
  return;
}



/* Entry: 10733d060; end: 10733d07f;  */

long FUN_10733d060(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107346d6c();
  FUN_10733d080();
  func_0x000107274b8c();
  func_0x000107266aa8();
  lVar1 = unaff_x19;
  func_0x000107274970();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10733d080; end: 10733d09f;  */

void FUN_10733d080(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000104c33108();
  }
  return;
}



/* Entry: 10733d0a0; end: 10733d0b3;  */

void FUN_10733d0a0(void)

{
  return;
}



/* Entry: 10733d0b4; end: 10733d0d7;  */

void FUN_10733d0b4(void)

{
  func_0x00010734559c();
  func_0x0001073470f0();
  FUN_10733d0d8();
  return;
}



/* Entry: 10733d0d8; end: 10733d0ff;  */

void FUN_10733d0d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 2) == '\x01') {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 10733d100; end: 10733d1e7;  */

long FUN_10733d100(long param_1)

{
  FUN_10732442c(param_1 + 0x280);
  FUN_1073391b0(param_1 + 0x230);
  FUN_10732442c(param_1 + 0x1c0);
  func_0x00010727e9d0(param_1 + 0x168);
  FUN_10733d014(param_1 + 0x120);
  FUN_10733abd8(param_1 + 0xe0);
  FUN_10733abd8(param_1 + 0x98);
  FUN_10733a790(param_1 + 0x50);
  func_0x0001072ca648(param_1);
  return param_1;
}



/* Entry: 10733d1e8; end: 10733d233;  */

void FUN_10733d1e8(void)

{
  undefined1 auStack_48 [24];
  
  func_0x000107346830();
  func_0x0001072f7e88(auStack_48);
  func_0x000107346708();
  FUN_10733d234(auStack_48);
  func_0x00010726b07c(auStack_48);
  return;
}



/* Entry: 10733d234; end: 10733d247;  */

void FUN_10733d234(undefined8 param_1,long param_2,long param_3)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    param_2 = param_3;
  }
  func_0x00010727a6f4(param_1,param_2);
  func_0x000107278b90();
  return;
}



/* Entry: 10733d248; end: 10733d2a7;  */

undefined1 * FUN_10733d248(undefined8 param_1,long param_2,ulong *param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  int extraout_w9;
  ulong unaff_x19;
  undefined1 auStack_b8 [24];
  
  func_0x000107344b40();
  func_0x000107346430();
  if ((bool)in_ZR) {
    unaff_x19 = *(ulong *)(param_2 + 8);
  }
  else if (extraout_w9 == 0) {
    unaff_x19 = *param_3;
  }
  else {
    func_0x000107347ffc();
    func_0x000107345920();
    func_0x000107345bf4();
    func_0x0001073451b4();
  }
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return (undefined1 *)(unaff_x19 & 0xffffffffff);
  }
  ___stack_chk_fail();
  func_0x0001073451b4();
  func_0x000107345604();
  func_0x000107346830();
  FUN_10733d2f4(auStack_b8);
  func_0x000107346708();
  FUN_10733d364(auStack_b8);
  puVar1 = auStack_b8;
  FUN_10733d080(puVar1);
  return puVar1;
}



/* Entry: 10733d2a8; end: 10733d2f3;  */

void FUN_10733d2a8(void)

{
  undefined1 auStack_48 [24];
  
  func_0x000107346830();
  FUN_10733d2f4(auStack_48);
  func_0x000107346708();
  FUN_10733d364(auStack_48);
  FUN_10733d080(auStack_48);
  return;
}



/* Entry: 10733d2f4; end: 10733d363;  */

undefined1 * FUN_10733d2f4(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined1 auStack_a9 [137];
  
  func_0x0001073447e0();
  func_0x0001073476ec();
  func_0x000107346350();
  func_0x000107346ce4();
  if ((bool)in_ZR) {
    func_0x0001073462f0();
    param_2 = auStack_a9;
    func_0x000107775704();
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[0x10] = 0;
  }
  func_0x000107344f10();
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar1 = param_1;
  func_0x000107344f10();
  func_0x000107345604();
  if (puVar1[0x10] == '\0') {
    puVar1 = param_2;
  }
  func_0x0001072752cc(extraout_x8,puVar1);
  func_0x000107268484();
  return param_1;
}



/* Entry: 10733d364; end: 10733d377;  */

void FUN_10733d364(undefined8 param_1,long param_2,long param_3)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    param_2 = param_3;
  }
  func_0x0001072752cc(param_1,param_2);
  func_0x000107268484();
  return;
}



/* Entry: 10733d378; end: 10733d3f3;  */

long FUN_10733d378(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_c0 [144];
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x00010734479c();
  if (*(int *)(param_3 + 0x70) == 0) {
    func_0x0001073446ac();
    if ((bool)in_ZR) {
      func_0x000107346afc();
      goto SUB_104c2fe00;
    }
  }
  else {
    func_0x000107347e9c();
    if ((bool)in_ZR) {
      func_0x0001073446ac();
      if ((bool)in_ZR) {
        func_0x0001073470b8();
        goto SUB_104c2fe00;
      }
    }
    else {
      func_0x000107344da4();
      func_0x000107344f44();
      func_0x000107345e20();
      func_0x000107346168();
      func_0x0001073446ac();
      if ((bool)in_ZR) {
        return param_1;
      }
    }
  }
  ___stack_chk_fail();
  func_0x000107345820();
  func_0x000107346168();
  unaff_x30 = FUN_10733d3f4;
  func_0x000107345604();
  register0x00000008 = (BADSPACEBASE *)auStack_c0;
  unaff_x29 = puVar1;
SUB_104c2fe00:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001000d03a8();
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 10733d3f4; end: 10733d3ff;  */

void FUN_10733d3f4(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 10733d400; end: 10733d41b;  */

void FUN_10733d400(void)

{
  func_0x0001073446c4();
  FUN_107556954();
  return;
}



/* Entry: 10733d41c; end: 10733d443;  */

void FUN_10733d41c(void)

{
  undefined1 in_ZR;
  
  func_0x0001073455c4();
  if ((bool)in_ZR) {
    func_0x0001072ca648();
  }
  return;
}



/* Entry: 10733d444; end: 10733d4a3;  */

void FUN_10733d444(void)

{
  undefined1 in_ZR;
  undefined1 uStack_40;
  
  func_0x0001073446e8();
  func_0x000107344ab4();
  FUN_10733b844();
  func_0x000107346ae4(uStack_40);
  func_0x0001073466bc();
  func_0x000107346784();
  func_0x000107345b64();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107346288();
  func_0x00010733b8e0();
  func_0x000107345b64();
  func_0x000107345604();
  func_0x0001073446c4();
  FUN_107556ba4();
  return;
}



/* Entry: 10733d4a4; end: 10733d4bf;  */

void FUN_10733d4a4(void)

{
  func_0x0001073446c4();
  FUN_107556ba4();
  return;
}



/* Entry: 10733d4c0; end: 10733d4eb;  */

void FUN_10733d4c0(void)

{
  func_0x000107344d34();
  FUN_10733d4ec();
  return;
}



/* Entry: 10733d4ec; end: 10733d52b;  */

void FUN_10733d4ec(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x000107345658();
  FUN_10733d014();
  func_0x0001073463a8();
  if (!(bool)in_ZR) {
    func_0x0001073448fc(&PTR_FUN_1109a23a0);
    *(undefined4 *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 10733d52c; end: 10733d547;  */

void FUN_10733d52c(void)

{
  return;
}



/* Entry: 10733d548; end: 10733d57b;  */

void FUN_10733d548(long param_1)

{
  long unaff_x20;
  
  func_0x000107345658();
  func_0x00010727d6bc();
  FUN_10733d57c(param_1 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 10733d57c; end: 10733d5a7;  */

void FUN_10733d57c(void)

{
  func_0x0001073456d0();
  FUN_10733d5a8();
  return;
}


