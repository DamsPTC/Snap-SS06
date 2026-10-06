/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10735ef80; end: 10735efff;  */

void FUN_10735ef80(long param_1,undefined2 *param_2)

{
  long lVar1;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  lVar1 = *(long *)(param_1 + 0x18);
  FUN_107356580(auStack_80,*param_2,*(undefined8 *)(param_1 + 8),param_2);
  FUN_107351e54(auStack_a0,lVar1 + 0x3f0,auStack_80,auStack_58);
  func_0x000107360788();
  FUN_10735ceb4();
  func_0x00010731e248(auStack_a0);
  func_0x000107360544();
  return;
}



/* Entry: 10735f000; end: 10735f027;  */

void FUN_10735f000(undefined8 param_1)

{
  func_0x00010736029c();
  func_0x000107360198(param_1,&PTR_DAT_1109a4f98);
  func_0x00010735feb8();
  return;
}



/* Entry: 10735f028; end: 10735f033;  */

undefined ** FUN_10735f028(void)

{
  return &PTR_DAT_1109a4f98;
}



/* Entry: 10735f034; end: 10735f05f;  */

undefined8 * FUN_10735f034(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a4fb8;
  func_0x00010725b1d4(param_1 + 1);
  return param_1;
}



/* Entry: 10735f060; end: 10735f073;  */

void FUN_10735f060(void)

{
  FUN_10735f034();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10735f074; end: 10735f097;  */

long FUN_10735f074(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107360498();
  func_0x00010736005c();
  func_0x000107360908(&PTR_FUN_1109a4fb8);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return unaff_x20;
}



/* Entry: 10735f098; end: 10735f0bb;  */

void FUN_10735f098(long param_1,undefined8 param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c(param_2,param_1 + 8);
  func_0x000107360908(&PTR_FUN_1109a4fb8);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10735f0bc; end: 10735f0fb;  */

void FUN_10735f0bc(int param_1)

{
  long unaff_x19;
  
  func_0x0001073600bc();
  func_0x000107360a48();
  func_0x000107360a70();
  if (param_1 != 0) {
    FUN_107352b40(*(undefined8 *)(unaff_x19 + 0x20));
  }
  func_0x0001073602c8();
  return;
}



/* Entry: 10735f0fc; end: 10735f123;  */

void FUN_10735f0fc(undefined8 param_1)

{
  func_0x00010736029c();
  func_0x000107360198(param_1,&PTR_DAT_1109a5018);
  func_0x00010735feb8();
  return;
}



/* Entry: 10735f124; end: 10735f12f;  */

undefined ** FUN_10735f124(void)

{
  return &PTR_DAT_1109a5018;
}



/* Entry: 10735f130; end: 10735f18b;  */

void FUN_10735f130(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c();
  func_0x000107360908(&PTR_FUN_1109a4fb8);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10735f18c; end: 10735f19f;  */

void FUN_10735f18c(void)

{
  func_0x00010735f160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10735f1a0; end: 10735f1c3;  */

long FUN_10735f1a0(void)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107360370();
  func_0x0001009eba74();
  func_0x000107360908(&PTR_SUB_1109a5038);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  lVar1 = *(long *)(unaff_x20 + 0x28);
  *(long *)(unaff_x19 + 0x30) = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010736000c();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(unaff_x20 + 0x30);
  return unaff_x19;
}



/* Entry: 10735f1c4; end: 10735f1e7;  */

void FUN_10735f1c4(long param_1,undefined8 param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001009eba74(param_2,param_1 + 8);
  func_0x000107360908(&PTR_SUB_1109a5038);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  lVar1 = *(long *)(unaff_x20 + 0x28);
  *(long *)(unaff_x19 + 0x30) = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010736000c();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(unaff_x20 + 0x30);
  return;
}



/* Entry: 10735f1e8; end: 10735f2cb;  */

void FUN_10735f1e8(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_110 [96];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [64];
  undefined1 uStack_58;
  undefined4 uStack_4c;
  undefined1 auStack_48 [24];
  
  func_0x0001009eba74();
  iVar1 = (int)auStack_a8;
  func_0x000107360a48();
  func_0x000107360a70();
  if (iVar1 != 0) {
    FUN_10735f3c8(auStack_110);
    uStack_b0 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
    uStack_4c = *(undefined4 *)(unaff_x19 + 0x38);
    func_0x00010735f350(auStack_48,&uStack_4c,1);
    auStack_98[0] = 0;
    uStack_58 = 0;
    FUN_107357190(uVar2,auStack_48,auStack_98,auStack_110,unaff_x19 + 0x28);
    FUN_10735eeb0(auStack_98);
    func_0x00010731e26c(auStack_48);
    func_0x00010735c754(auStack_110);
  }
  func_0x000107270b00(auStack_a8);
  return;
}



/* Entry: 10735f2cc; end: 10735f2f3;  */

void FUN_10735f2cc(undefined8 param_1)

{
  func_0x00010736029c();
  func_0x000107360198(param_1,&PTR_DAT_1109a5098);
  func_0x00010735feb8();
  return;
}



/* Entry: 10735f2f4; end: 10735f2ff;  */

undefined ** FUN_10735f2f4(void)

{
  return &PTR_DAT_1109a5098;
}



/* Entry: 10735f300; end: 10735f37f;  */

void FUN_10735f300(void)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001009eba74();
  func_0x000107360908(&PTR_SUB_1109a5038);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  lVar1 = *(long *)(unaff_x20 + 0x28);
  *(long *)(unaff_x19 + 0x30) = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010736000c();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(unaff_x20 + 0x30);
  return;
}



/* Entry: 10735f380; end: 10735f3c7;  */

void FUN_10735f380(void)

{
  long in_x3;
  
  func_0x00010736086c();
  if (in_x3 != 0) {
    func_0x00010735ffd4();
    func_0x000105536f6c();
    func_0x0001073600a8();
    func_0x0001009bf9a0();
  }
  func_0x000107360088();
  FUN_10731e304();
  return;
}



/* Entry: 10735f3c8; end: 10735f41b;  */

void FUN_10735f3c8(undefined2 *param_1,undefined2 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010736005c();
  *param_1 = *param_2;
  FUN_10735bd38(param_1 + 4,param_2 + 4);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  FUN_10735f41c(unaff_x20 + 0x38,unaff_x19 + 0x38);
  return;
}



/* Entry: 10735f41c; end: 10735f467;  */

void FUN_10735f41c(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  undefined8 *extraout_x9;
  long extraout_x10;
  long extraout_x11;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107360754();
  if (extraout_x10 != 0) {
    uVar2 = *(ulong *)(extraout_x11 + 8);
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & uVar3 - 1) == 0) {
      uVar2 = uVar3 - 1 & uVar2;
    }
    else if (uVar3 <= uVar2) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar2 / uVar3;
      }
      uVar2 = uVar2 - uVar1 * uVar3;
    }
    *(long *)(extraout_x8 + uVar2 * 8) = param_1 + 0x10;
    *extraout_x9 = 0;
    extraout_x9[1] = 0;
  }
  return;
}



/* Entry: 10735f468; end: 10735f4bb;  */

long FUN_10735f468(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x00010736064c(*(undefined8 *)(param_2 + 0x18));
    func_0x000107360204();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10735f4bc; end: 10735f4db;  */

void FUN_10735f4bc(void)

{
  func_0x000107360c18();
  FUN_107357168();
  return;
}



/* Entry: 10735f4dc; end: 10735f4ef;  */

void FUN_10735f4dc(void)

{
  FUN_10735f4bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10735f4f0; end: 10735f527;  */

undefined8 FUN_10735f4f0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x48;
  __Znwm(0x48);
  FUN_10735f614();
  return uVar1;
}



/* Entry: 10735f528; end: 10735f54b;  */

void FUN_10735f528(long param_1,undefined8 param_2)

{
  func_0x000107360c18(param_2,param_1 + 8);
  FUN_10735707c();
  return;
}



/* Entry: 10735f54c; end: 10735f5df;  */

void FUN_10735f54c(long param_1)

{
  uint uVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [96];
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined4 uStack_24;
  
  uVar1 = *(byte *)(param_1 + 9) + 1;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  FUN_10736c7e8(auStack_88,(ulong)*(byte *)(param_1 + 8) | ((ulong)uVar1 & 0xff) << 8,&uStack_a0,
                param_1 + 0x10);
  uStack_28 = *(undefined1 *)(param_1 + 8);
  uStack_27 = (undefined1)uVar1;
  uStack_24 = 1;
  FUN_10735f634(param_1 + 0x28,auStack_88);
  func_0x00010735c754(auStack_88);
  func_0x00010735c6e4(&uStack_a0);
  return;
}



/* Entry: 10735f5e0; end: 10735f607;  */

void FUN_10735f5e0(undefined8 param_1)

{
  func_0x00010736029c();
  func_0x000107360198(param_1,&PTR_DAT_1109a5118);
  func_0x00010735feb8();
  return;
}



/* Entry: 10735f608; end: 10735f613;  */

undefined ** FUN_10735f608(void)

{
  return &PTR_DAT_1109a5118;
}



/* Entry: 10735f614; end: 10735f633;  */

void FUN_10735f614(void)

{
  func_0x000107360c18();
  FUN_10735707c();
  return;
}



/* Entry: 10735f634; end: 10735f653;  */

void FUN_10735f634(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010735f644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x0001073601f8();
  func_0x000107279f14();
  return;
}



/* Entry: 10735f654; end: 10735f677;  */

void FUN_10735f654(void)

{
  func_0x0001073601f8();
  func_0x000107279f14();
  return;
}



/* Entry: 10735f678; end: 10735f67b;  */

void FUN_10735f678(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a5138;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10735f67c; end: 10735f68f;  */

void FUN_10735f67c(void)

{
  func_0x00010735f69c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10735f690; end: 10735f6a7;  */

long FUN_10735f690(long param_1)

{
  long unaff_x19;
  
  func_0x000107360884(param_1 + 0x18);
  func_0x0001001148fc();
  func_0x00010735d338(unaff_x19 + 0x18);
  func_0x00010735fffc();
  func_0x00010735c830();
  return unaff_x19;
}



/* Entry: 10735f6a8; end: 10735f6d3;  */

undefined8 * FUN_10735f6a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a5188;
  FUN_107357bfc(param_1 + 1);
  return param_1;
}



/* Entry: 10735f6d4; end: 10735f6e7;  */

void FUN_10735f6d4(void)

{
  FUN_10735f6a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10735f6e8; end: 10735f71b;  */

undefined8 FUN_10735f6e8(undefined8 param_1)

{
  func_0x000107360488();
  FUN_10735f9b8();
  return param_1;
}



/* Entry: 10735f71c; end: 10735f73f;  */

undefined8 * FUN_10735f71c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a5188;
  FUN_10735ca10(param_2 + 1);
  func_0x000107277f30(param_2 + 4,param_1 + 0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_2 + 6,param_1 + 0x30);
  FUN_10735d84c(param_2 + 9,param_1 + 0x48);
  return param_2;
}



/* Entry: 10735f740; end: 10735f983;  */

void FUN_10735f740(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  long *unaff_x19;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 uStack_1e9;
  undefined1 auStack_1e8 [16];
  undefined8 *puStack_1d8;
  undefined1 auStack_1d0 [56];
  undefined1 uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined1 uStack_180;
  undefined1 auStack_170 [64];
  undefined1 auStack_130 [56];
  undefined1 auStack_f8 [56];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [64];
  undefined1 uStack_28;
  undefined1 uStack_18;
  undefined8 uStack_10;
  
  func_0x000107360c98();
  func_0x00010736005c();
  func_0x00010735fda8();
  plVar1 = *(long **)(param_1 + 0x10);
  uStack_10 = extraout_x8;
  for (plVar6 = *(long **)(param_1 + 8); bVar3 = plVar6 == plVar1, plVar7 = (long *)(param_1 + 0x58)
      , !bVar3; plVar6 = plVar6 + 2) {
    while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
      lVar5 = *plVar6;
      func_0x000107296b84(auStack_1e8,1);
      puVar2 = puStack_1d8;
      puStack_1d8[1] = 0;
      puStack_1d8[2] = 0;
      *puStack_1d8 = &PTR_DAT_110998a58;
      auStack_1d0[0] = 0;
      uStack_198 = 0;
      puStack_1d8[5] = 0;
      puStack_1d8[4] = 0;
      puStack_1d8[7] = 0;
      puStack_1d8[6] = 0;
      *(undefined4 *)(puStack_1d8 + 8) = 0x3f800000;
      puStack_1d8[3] = &PTR_DAT_110998aa8;
      lVar4 = lVar5;
      func_0x000107297740(lVar5,&uStack_1e9);
      puStack_190 = (undefined8 *)CONCAT71(puStack_190._1_7_,(char)lVar4);
      func_0x0001072977b8(&puStack_188,lVar5 + 0x20);
      func_0x000107269bac(auStack_170,lVar5 + 0x30);
      func_0x000104c2fe00(auStack_130,plVar7 + 3);
      func_0x000104c2fe00(auStack_f8,plVar7 + 10);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      func_0x000107263b58(auStack_a8,auStack_1d0);
      func_0x00010726236c(auStack_68,lVar5 + 0x30);
      uStack_28 = 0;
      uStack_18 = 0;
      func_0x000107297044(puVar2 + 9,&puStack_190);
      func_0x0001072977f4(&puStack_190);
      func_0x00010724b3d8(auStack_1d0);
      puStack_1f8 = puStack_1d8;
      puStack_1d8 = (undefined8 *)0x0;
      puStack_200 = puStack_1f8 + 3;
      func_0x000107297fb8(auStack_1e8);
      puStack_188 = puStack_1f8;
      puStack_190 = puStack_200;
      if (puStack_1f8 != (undefined8 *)0x0) {
        do {
          func_0x00010736000c();
        } while (extraout_w10 != 0);
      }
      uStack_180 = 1;
      (**(code **)(*unaff_x19 + 0x110))();
      func_0x00010736055c();
      func_0x0001072792b8(&puStack_200);
    }
  }
  func_0x00010735fd20(uStack_10);
  if (!bVar3) {
    ___stack_chk_fail();
    func_0x000107360890();
    func_0x0001072977d0(&uStack_c0);
    func_0x000104c2f714(auStack_f8);
    func_0x000104c2f714(auStack_130);
    func_0x000104c319e0(auStack_170);
    func_0x0001072972e4(&puStack_188);
    func_0x0001072978a8();
    func_0x00010724b3d8(auStack_1d0);
    func_0x000107360930();
    func_0x000107297fb8(auStack_1e8);
    func_0x00010736001c();
    func_0x00010736029c();
    func_0x000107360198();
    func_0x00010735feb8();
    return;
  }
  return;
}



/* Entry: 10735f984; end: 10735f9ab;  */

void FUN_10735f984(undefined8 param_1)

{
  func_0x00010736029c();
  func_0x000107360198(param_1,&PTR_DAT_1109a51e8);
  func_0x00010735feb8();
  return;
}



/* Entry: 10735f9ac; end: 10735f9b7;  */

undefined ** FUN_10735f9ac(void)

{
  return &PTR_DAT_1109a51e8;
}



/* Entry: 10735f9b8; end: 10735fa47;  */

undefined8 * FUN_10735f9b8(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_FUN_1109a5188;
  FUN_10735ca10(param_1 + 1);
  func_0x000107277f30(param_1 + 4,param_2 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 6,param_2 + 0x28);
  FUN_10735d84c(param_1 + 9,param_2 + 0x40);
  return param_1;
}



/* Entry: 10735fa48; end: 10735fa73;  */

undefined8 * FUN_10735fa48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a5208;
  FUN_107357d24(param_1 + 1);
  return param_1;
}



/* Entry: 10735fa74; end: 10735fa87;  */

void FUN_10735fa74(void)

{
  FUN_10735fa48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10735fa88; end: 10735fabb;  */

undefined8 FUN_10735fa88(undefined8 param_1)

{
  func_0x000107360a88();
  FUN_10735fbd0();
  return param_1;
}



/* Entry: 10735fabc; end: 10735fadf;  */

void FUN_10735fabc(long param_1,undefined8 param_2)

{
  func_0x0001009eba74(param_2,param_1 + 8);
  func_0x0001073607b8();
  FUN_10735d84c();
  FUN_10735cc04();
  return;
}



/* Entry: 10735fae0; end: 10735fb9b;  */

void FUN_10735fae0(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *plVar1;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  func_0x00010736005c();
  func_0x00010735fda8();
  param_1 = param_1 + 0x30;
  uStack_38 = extraout_x8;
  FUN_10735cd68();
  lStack_88 = param_1;
  uStack_80 = param_2;
  while (plVar1 = (long *)(unaff_x20 + 0x18), lStack_88 != 0) {
    while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
      func_0x00010729807c(auStack_78,plVar1 + 10);
      (**(code **)(*unaff_x19 + 0xa0))();
      func_0x00010724b3d8(auStack_78);
    }
    FUN_10735ce00(&lStack_88);
  }
  func_0x00010735fd20(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010736001c();
  func_0x00010736029c();
  func_0x000107360198();
  func_0x00010735feb8();
  return;
}



/* Entry: 10735fb9c; end: 10735fbc3;  */

void FUN_10735fb9c(undefined8 param_1)

{
  func_0x00010736029c();
  func_0x000107360198(param_1,&PTR_DAT_1109a5268);
  func_0x00010735feb8();
  return;
}



/* Entry: 10735fbc4; end: 10735fbcf;  */

undefined ** FUN_10735fbc4(void)

{
  return &PTR_DAT_1109a5268;
}



/* Entry: 10735fbd0; end: 10735fc13;  */

void FUN_10735fbd0(void)

{
  func_0x0001009eba74();
  func_0x0001073607b8();
  FUN_10735d84c();
  FUN_10735cc04();
  return;
}



/* Entry: 10735fc14; end: 10735fc3f;  */

void FUN_10735fc14(void)

{
  int extraout_w8;
  undefined8 *unaff_x19;
  
  func_0x000107360444();
  if (extraout_w8 == 1) {
    __ZNSt3__15mutex6unlockEv(*unaff_x19);
  }
  return;
}



/* Entry: 10735fc40; end: 107360cdf;  */

long FUN_10735fc40(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = param_1[1];
  if ((uVar5 != 0) && (param_1[3] != 0)) {
    uVar6 = (ulong)param_2;
    uVar7 = uVar5 - 1;
    uVar4 = (uint)uVar5;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = (ulong)(uVar4 - 1 & param_2);
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = param_2 / uVar4;
        }
        uVar8 = (ulong)(param_2 - uVar1 * uVar4);
      }
    }
    plVar3 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar9 = plVar3[1];
        if (uVar9 != uVar6) break;
        if (*(uint *)(plVar3 + 2) == param_2) {
          return (long)plVar3;
        }
      }
      if ((uVar5 & uVar7) == 0) {
        uVar9 = uVar9 & uVar7;
      }
      else if (uVar5 <= uVar9) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar9 / uVar5;
        }
        uVar9 = uVar9 - uVar2 * uVar5;
      }
    } while (uVar9 == uVar8);
  }
  return 0;
}



/* Entry: 107360ce0; end: 107360d7f;  */

undefined8 *
FUN_107360ce0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_1109a52a8;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  param_1[6] = param_4[1];
  param_1[5] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  param_1[7] = param_5;
  FUN_107361704(param_1 + 8,param_6);
  func_0x00010726ed14(param_1 + 0xc);
  param_1[0xe] = param_1;
  return param_1;
}



/* Entry: 107360d80; end: 107360e47;  */

/* WARNING: Possible PIC construction at 0x000107361098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107361148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010736109c) */
/* WARNING: Removing unreachable block (ram,0x00010736114c) */
/* WARNING: Removing unreachable block (ram,0x0001073611d4) */
/* WARNING: Removing unreachable block (ram,0x0001073611e4) */
/* WARNING: Removing unreachable block (ram,0x0001073611e0) */

undefined8 *
FUN_107360d80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 uVar9;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  undefined1 auStack_1110 [8];
  undefined8 *puStack_1108;
  undefined1 auStack_1100 [56];
  undefined1 auStack_10c8 [504];
  undefined1 auStack_ed0 [592];
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined1 auStack_c58 [56];
  undefined1 auStack_c20 [504];
  undefined1 auStack_a28 [600];
  undefined1 auStack_7d0 [24];
  undefined8 *puStack_7b8;
  undefined1 auStack_7b0 [32];
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  long lStack_778;
  undefined1 auStack_770 [504];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [568];
  undefined1 auStack_328 [32];
  undefined1 auStack_308 [504];
  undefined1 auStack_110 [56];
  undefined8 uStack_d8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  puVar8 = &uStack_80;
  func_0x0001073620bc();
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  uStack_78 = param_4[1];
  uStack_80 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  pppuStack_30 = appuStack_48;
  appuStack_48[0] = &PTR_FUN_1109a52e0;
  puVar7 = &uStack_70;
  uStack_28 = extraout_x8;
  FUN_107360ce0();
  FUN_1073616c0(appuStack_48);
  func_0x000107362114();
  func_0x0001072aa2e8(&uStack_70);
  func_0x0001072aa2c4();
  func_0x000107362084(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_1073616c0(appuStack_48);
  func_0x000107362114();
  func_0x0001072aa2e8(&uStack_70);
  puVar6 = &uStack_60;
  func_0x0001072aa2c4();
  func_0x0001073620e4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001073620bc();
  uStack_1118 = puVar7[1];
  uStack_1120 = *puVar7;
  uStack_d8 = extraout_x8_01;
  if (puVar7[1] != 0) {
    do {
      func_0x000107362098();
    } while (extraout_w10 != 0);
  }
  if ((long *)puVar6[0xb] != (long *)0x0) {
    (**(code **)(*(long *)puVar6[0xb] + 0x30))(extraout_x8_00);
    puVar7 = &uStack_1120;
    func_0x00010725b6e0();
    uVar4 = *(char *)((long)puVar8 + 600) == '\x01';
    if ((bool)uVar4) {
      func_0x00010736210c();
      func_0x000104c2fe00(auStack_110,puVar8);
      func_0x00010736210c();
      func_0x0001072d488c(auStack_308,(undefined1 *)((long)puVar8 + 0x38));
      func_0x00010736210c();
      FUN_107361754(auStack_328,(undefined1 *)((long)puVar8 + 0x230));
      func_0x00010736210c();
      uVar2 = *(undefined1 *)((long)puVar8 + 0x250);
      uVar9 = puVar6[5];
      lVar1 = puVar6[6];
      if (lVar1 != 0) {
        do {
          func_0x000107362098();
        } while (extraout_w10_00 != 0);
      }
      FUN_107361754(auStack_7b0,auStack_328);
      uStack_788 = extraout_x8_00[1];
      uStack_790 = *extraout_x8_00;
      if (extraout_x8_00[1] != 0) {
        do {
          func_0x000107362098();
        } while (extraout_w10_01 != 0);
      }
      uStack_780 = uVar9;
      lStack_778 = lVar1;
      if (lVar1 != 0) {
        do {
          func_0x000107362098();
        } while (extraout_w10_02 != 0);
      }
      func_0x0001072d488c(auStack_770,auStack_308);
      func_0x000107361300(auStack_578,puVar6 + 0xc);
      FUN_107361354(auStack_560,auStack_7b0);
      FUN_1073611f0(auStack_7b0);
      uVar9 = puVar6[1];
      auStack_1110[0] = uVar2;
      puStack_1108 = puVar6;
      func_0x000104c2fe00(auStack_1100,auStack_110);
      func_0x0001072d488c(auStack_10c8,auStack_308);
      FUN_107361228(auStack_ed0,auStack_578);
      func_0x000107361300(&uStack_c80,puVar6 + 0xc);
      FUN_1073613ec(&uStack_c68,auStack_1110);
      puStack_7b8 = (undefined8 *)0x0;
      puVar7 = (undefined8 *)0x4b0;
      __Znwm();
      *puVar7 = &PTR_SUB_1109a5370;
      puVar7[2] = uStack_c78;
      puVar7[1] = uStack_c80;
      uStack_c80 = 0;
      uStack_c78 = 0;
      puVar7[3] = uStack_c70;
      puVar7[5] = uStack_c60;
      puVar7[4] = uStack_c68;
      func_0x000104c318bc(puVar7 + 6,auStack_c58);
      func_0x0001072d62a0(puVar7 + 0xd,auStack_c20);
      FUN_10736197c(puVar7 + 0x4c,auStack_a28);
      puStack_7b8 = puVar7;
      func_0x0001072b2bd8(uVar9,auStack_7d0,0);
      func_0x0001006393ec(auStack_7d0);
      FUN_107361264(&uStack_c80);
      func_0x00010736128c(auStack_1110);
      func_0x0001073612c0(auStack_578);
      func_0x000107362114();
    }
    else {
      func_0x000107362084(uStack_d8);
      if ((bool)uVar4) {
        return puVar7;
      }
      ___stack_chk_fail();
      func_0x0001006393ec(auStack_7d0);
      FUN_107361264(&uStack_c80);
      func_0x00010736128c(auStack_1110);
      func_0x0001073612c0(auStack_578);
      func_0x000107362114();
    }
    puVar5 = auStack_328;
    func_0x000107344e80();
    if ((bool)uVar4) {
      uVar9 = 0x20;
    }
    else {
      if (puVar5 == (undefined1 *)0x0) {
        return extraout_x8_00;
      }
      uVar9 = 0x28;
    }
    func_0x000107344d70(uVar9);
    return extraout_x8_00;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1073610e0);
  (*pcVar3)();
}



/* Entry: 107360e48; end: 1073611d7;  */

/* WARNING: Possible PIC construction at 0x000107361098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107361148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010736109c) */
/* WARNING: Removing unreachable block (ram,0x00010736114c) */
/* WARNING: Removing unreachable block (ram,0x0001073611d4) */
/* WARNING: Removing unreachable block (ram,0x0001073611e4) */
/* WARNING: Removing unreachable block (ram,0x0001073611e0) */

undefined8 * FUN_107360e48(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 uVar7;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined1 auStack_1090 [8];
  long lStack_1088;
  undefined1 auStack_1080 [56];
  undefined1 auStack_1048 [504];
  undefined1 auStack_e50 [592];
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined1 auStack_bd8 [56];
  undefined1 auStack_ba0 [504];
  undefined1 auStack_9a8 [600];
  undefined1 auStack_750 [24];
  undefined8 *puStack_738;
  undefined1 auStack_730 [32];
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  long lStack_6f8;
  undefined1 auStack_6f0 [504];
  undefined1 auStack_4f8 [24];
  undefined1 auStack_4e0 [568];
  undefined1 auStack_2a8 [32];
  undefined1 auStack_288 [504];
  undefined1 auStack_90 [56];
  undefined8 uStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001073620bc();
  uStack_1098 = param_3[1];
  uStack_10a0 = *param_3;
  uStack_58 = extraout_x8_00;
  if (param_3[1] != 0) {
    do {
      func_0x000107362098();
    } while (extraout_w10 != 0);
  }
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x30))(extraout_x8);
    puVar6 = &uStack_10a0;
    func_0x00010725b6e0();
    uVar4 = *(char *)(param_4 + 600) == '\x01';
    if ((bool)uVar4) {
      func_0x00010736210c();
      func_0x000104c2fe00(auStack_90,param_4);
      func_0x00010736210c();
      func_0x0001072d488c(auStack_288,param_4 + 0x38);
      func_0x00010736210c();
      FUN_107361754(auStack_2a8,param_4 + 0x230);
      func_0x00010736210c();
      uVar2 = *(undefined1 *)(param_4 + 0x250);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      lVar1 = *(long *)(param_1 + 0x30);
      if (lVar1 != 0) {
        do {
          func_0x000107362098();
        } while (extraout_w10_00 != 0);
      }
      FUN_107361754(auStack_730,auStack_2a8);
      uStack_708 = extraout_x8[1];
      uStack_710 = *extraout_x8;
      if (extraout_x8[1] != 0) {
        do {
          func_0x000107362098();
        } while (extraout_w10_01 != 0);
      }
      uStack_700 = uVar7;
      lStack_6f8 = lVar1;
      if (lVar1 != 0) {
        do {
          func_0x000107362098();
        } while (extraout_w10_02 != 0);
      }
      func_0x0001072d488c(auStack_6f0,auStack_288);
      func_0x000107361300(auStack_4f8,param_1 + 0x60);
      FUN_107361354(auStack_4e0,auStack_730);
      FUN_1073611f0(auStack_730);
      uVar7 = *(undefined8 *)(param_1 + 8);
      auStack_1090[0] = uVar2;
      lStack_1088 = param_1;
      func_0x000104c2fe00(auStack_1080,auStack_90);
      func_0x0001072d488c(auStack_1048,auStack_288);
      FUN_107361228(auStack_e50,auStack_4f8);
      func_0x000107361300(&uStack_c00,param_1 + 0x60);
      FUN_1073613ec(&uStack_be8,auStack_1090);
      puStack_738 = (undefined8 *)0x0;
      puVar6 = (undefined8 *)0x4b0;
      __Znwm();
      *puVar6 = &PTR_SUB_1109a5370;
      puVar6[2] = uStack_bf8;
      puVar6[1] = uStack_c00;
      uStack_c00 = 0;
      uStack_bf8 = 0;
      puVar6[3] = uStack_bf0;
      puVar6[5] = uStack_be0;
      puVar6[4] = uStack_be8;
      func_0x000104c318bc(puVar6 + 6,auStack_bd8);
      func_0x0001072d62a0(puVar6 + 0xd,auStack_ba0);
      FUN_10736197c(puVar6 + 0x4c,auStack_9a8);
      puStack_738 = puVar6;
      func_0x0001072b2bd8(uVar7,auStack_750,0);
      func_0x0001006393ec(auStack_750);
      FUN_107361264(&uStack_c00);
      func_0x00010736128c(auStack_1090);
      func_0x0001073612c0(auStack_4f8);
      func_0x000107362114();
    }
    else {
      func_0x000107362084(uStack_58);
      if ((bool)uVar4) {
        return puVar6;
      }
      ___stack_chk_fail();
      func_0x0001006393ec(auStack_750);
      FUN_107361264(&uStack_c00);
      func_0x00010736128c(auStack_1090);
      func_0x0001073612c0(auStack_4f8);
      func_0x000107362114();
    }
    puVar5 = auStack_2a8;
    func_0x000107344e80();
    if ((bool)uVar4) {
      uVar7 = 0x20;
    }
    else {
      if (puVar5 == (undefined1 *)0x0) {
        return extraout_x8;
      }
      uVar7 = 0x28;
    }
    func_0x000107344d70(uVar7);
    return extraout_x8;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1073610e0);
  (*pcVar3)();
}



/* Entry: 1073611d8; end: 1073611ef;  */

long FUN_1073611d8(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  long unaff_x19;
  
  if ((*(byte *)(param_1 + 600) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  func_0x00010724b374(param_1 + 0x40);
  func_0x00010724bd74(param_1 + 0x30);
  func_0x00010726ee94(param_1 + 0x20);
  func_0x000107344e80();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return unaff_x19;
    }
    uVar1 = 0x28;
  }
  func_0x000107344d70(uVar1);
  return unaff_x19;
}



/* Entry: 1073611f0; end: 107361227;  */

undefined8 FUN_1073611f0(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 unaff_x19;
  
  func_0x00010724b374(param_1 + 0x40);
  func_0x00010724bd74(param_1 + 0x30);
  func_0x00010726ee94(param_1 + 0x20);
  func_0x000107344e80();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return unaff_x19;
    }
    uVar1 = 0x28;
  }
  func_0x000107344d70(uVar1);
  return unaff_x19;
}



/* Entry: 107361228; end: 107361263;  */

void FUN_107361228(long param_1)

{
  long unaff_x20;
  
  func_0x000107362168();
  FUN_10736144c();
  FUN_107361354(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 107361264; end: 1073612e7;  */

undefined8 FUN_107361264(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010736128c(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1073612e8; end: 1073612eb;  */

undefined8 * FUN_1073612e8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1109a52a8;
  plVar1 = param_1 + 0xc;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(plVar1);
  func_0x0001072508cc(plVar1);
  FUN_1073616c0(param_1 + 8);
  func_0x00010724bd74(param_1 + 5);
  func_0x0001072aa2e8(param_1 + 3);
  func_0x0001072aa2c4(param_1 + 1);
  return param_1;
}



/* Entry: 1073612ec; end: 107361353;  */

void FUN_1073612ec(void)

{
  FUN_10736147c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107361354; end: 1073613eb;  */

long FUN_107361354(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  lVar2 = param_1;
  FUN_107361754();
  lVar1 = *(long *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x000107362098();
    } while (extraout_w10 != 0);
  }
  lVar2 = *(long *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107362098();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001072d488c(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



/* Entry: 1073613ec; end: 10736144b;  */

void FUN_1073613ec(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107362168();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  func_0x000104c2fe00(param_1 + 2,param_2 + 2);
  func_0x0001072d488c(unaff_x19 + 0x48,unaff_x20 + 0x48);
  FUN_107361228(unaff_x19 + 0x240,unaff_x20 + 0x240);
  return;
}



/* Entry: 10736144c; end: 10736147b;  */

void FUN_10736144c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107362098();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 10736147c; end: 1073614e3;  */

undefined8 * FUN_10736147c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1109a52a8;
  plVar1 = param_1 + 0xc;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(plVar1);
  func_0x0001072508cc(plVar1);
  FUN_1073616c0(param_1 + 8);
  func_0x00010724bd74(param_1 + 5);
  func_0x0001072aa2e8(param_1 + 3);
  func_0x0001072aa2c4(param_1 + 1);
  return param_1;
}



/* Entry: 1073614e4; end: 1073614eb;  */

void FUN_1073614e4(void)

{
  return;
}



/* Entry: 1073614ec; end: 10736150f;  */

void FUN_1073614ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_1109a52e0;
  return;
}



/* Entry: 107361510; end: 10736152f;  */

void FUN_107361510(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a52e0;
  return;
}



/* Entry: 107361530; end: 10736168b;  */

void FUN_107361530(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  func_0x0001073620bc();
  uVar1 = *param_4;
  lVar2 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  uStack_b0 = uVar1;
  lStack_a8 = lVar2;
  uStack_58 = extraout_x8;
  func_0x0001072ab0e0(auStack_70,1);
  puVar3 = puStack_60;
  puStack_60[1] = 0;
  puStack_60[2] = 0;
  *puStack_60 = &PTR_DAT_11099a248;
  uStack_80 = uVar1;
  lStack_78 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107362098();
    } while (extraout_w10 != 0);
  }
  FUN_1073af27c(&uStack_a0,0,0);
  uStack_88 = uStack_98;
  uStack_90 = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  FUN_107352640(puVar3 + 3,param_3,&uStack_80,param_5,param_6,&uStack_90);
  func_0x00010724b8b8(&uStack_90);
  func_0x00010724b8b8(&uStack_a0);
  func_0x00010725b6e0(&uStack_80);
  puVar4 = puStack_60;
  puStack_60 = (undefined8 *)0x0;
  *param_1 = (long)(puVar4 + 3);
  param_1[1] = (long)puVar4;
  func_0x0001072ab160(auStack_70);
  func_0x00010725b6e0();
  func_0x000107362084(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010724b8b8(&uStack_90);
    func_0x00010724b8b8(&uStack_a0);
    func_0x00010725b6e0(&uStack_80);
    __ZNSt3__119__shared_weak_countD2Ev(puVar3);
    func_0x0001072ab160(auStack_70);
    func_0x00010725b6e0(&uStack_b0);
    func_0x0001073620e4();
    func_0x00010736213c();
    func_0x000107362104();
    func_0x0001073620cc();
    return;
  }
  return;
}



/* Entry: 10736168c; end: 1073616b3;  */

void FUN_10736168c(undefined8 param_1)

{
  func_0x00010736213c();
  func_0x000107362104(param_1,&PTR_DAT_1109a5350);
  func_0x0001073620cc();
  return;
}



/* Entry: 1073616b4; end: 1073616bf;  */

undefined ** FUN_1073616b4(void)

{
  return &PTR_DAT_1109a5350;
}



/* Entry: 1073616c0; end: 107361703;  */

long * FUN_1073616c0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 107361704; end: 107361753;  */

long FUN_107361704(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x000107362154();
    (*extraout_x8)();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 107361754; end: 1073617d3;  */

long FUN_107361754(long param_1,long *param_2)

{
  long *plVar1;
  code *extraout_x8;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    func_0x000107362154();
    (*extraout_x8)();
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 1073617d4; end: 1073617e7;  */

void FUN_1073617d4(void)

{
  func_0x0001073617a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073617e8; end: 10736181f;  */

undefined8 FUN_1073617e8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x4b0;
  __Znwm(0x4b0);
  FUN_1073619e0();
  return uVar1;
}



/* Entry: 107361820; end: 107361843;  */

void FUN_107361820(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  func_0x000107362168(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_1109a5370;
  FUN_10736144c(param_2 + 1);
  FUN_1073613ec(param_2 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 107361844; end: 107361947;  */

void FUN_107361844(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  long *plVar3;
  undefined1 auStack_2b8 [16];
  undefined1 auStack_2a8 [592];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001073620bc();
  uStack_38 = extraout_x8;
  FUN_107361a34(auStack_2b8,param_1 + 8);
  iVar1 = (int)param_1 + 8;
  func_0x000107361ab8();
  if ((iVar1 != 0) && (in_ZR = *(char *)(param_1 + 0x20) == '\x01', (bool)in_ZR)) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x28) + 0x18);
    FUN_107361228(auStack_2a8,param_1 + 0x260);
    uStack_40 = 0;
    uVar2 = 600;
    __Znwm();
    func_0x00010736211c();
    FUN_10736197c();
    uStack_40 = uVar2;
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1 + 0x30,param_1 + 0x68,auStack_58,0);
    func_0x0001072d52dc(auStack_58);
    func_0x0001073612c0(auStack_2a8);
  }
  func_0x000107270b00();
  func_0x000107362084(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072d52dc(auStack_58);
  func_0x0001073612c0(auStack_2a8);
  func_0x000107270b00(auStack_2b8);
  func_0x0001073620e4();
  func_0x00010736213c();
  func_0x000107362104();
  func_0x0001073620cc();
  return;
}



/* Entry: 107361948; end: 10736196f;  */

void FUN_107361948(undefined8 param_1)

{
  func_0x00010736213c();
  func_0x000107362104(param_1,&PTR_DAT_1109a5550);
  func_0x0001073620cc();
  return;
}



/* Entry: 107361970; end: 10736197b;  */

undefined ** FUN_107361970(void)

{
  return &PTR_DAT_1109a5550;
}



/* Entry: 10736197c; end: 1073619df;  */

undefined8 * FUN_10736197c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  FUN_107326040(param_1 + 3,param_2 + 3);
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_2[7] = 0;
  param_2[8] = 0;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  param_2[9] = 0;
  param_2[10] = 0;
  func_0x0001072d62a0(param_1 + 0xb,param_2 + 0xb);
  return param_1;
}



/* Entry: 1073619e0; end: 107361a33;  */

void FUN_1073619e0(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000107362168();
  *param_1 = &PTR_SUB_1109a5370;
  FUN_10736144c(param_1 + 1);
  FUN_1073613ec(param_1 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 107361a34; end: 107361b2b;  */

void FUN_107361a34(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_107361aac;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_107361aac:
  func_0x0001072508cc(pplVar3);
  return;
}



/* Entry: 107361b2c; end: 107361b3f;  */

void FUN_107361b2c(void)

{
  func_0x000107361b08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107361b40; end: 107361b77;  */

undefined8 FUN_107361b40(void)

{
  undefined8 uVar1;
  
  uVar1 = 600;
  __Znwm(600);
  FUN_107361d98();
  return uVar1;
}



/* Entry: 107361b78; end: 107361b9b;  */

undefined8 FUN_107361b78(long param_1,undefined8 param_2)

{
  func_0x00010736211c(param_2,param_1 + 8);
  FUN_107361228();
  return param_2;
}



/* Entry: 107361b9c; end: 107361d63;  */

void FUN_107361b9c(void)

{
  bool bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  long unaff_x19;
  undefined1 auStack_380 [16];
  undefined1 auStack_370 [112];
  undefined1 uStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [504];
  undefined1 auStack_e8 [24];
  undefined1 auStack_c8 [120];
  char cStack_50;
  undefined8 uStack_48;
  
  func_0x000107362168();
  func_0x0001073620bc();
  uStack_48 = extraout_x8;
  FUN_107361a34(auStack_380,unaff_x19 + 8);
  iVar3 = (int)unaff_x19 + 8;
  func_0x000107361ab8();
  if (iVar3 != 0) {
    if (*(long **)(unaff_x19 + 0x38) == (long *)0x0) goto LAB_107361d04;
    (**(code **)(**(long **)(unaff_x19 + 0x38) + 0x30))(auStack_c8);
    in_ZR = cStack_50 == '\x01';
    bVar1 = !(bool)in_ZR;
    if (bVar1) {
      uStack_2f8 = 0;
    }
    else {
      plVar4 = *(long **)(unaff_x19 + 0x40);
      (**(code **)(*plVar4 + 0x20))(plVar4,auStack_c8);
      uStack_2f8 = SUB84(plVar4,0);
    }
    plVar4 = *(long **)(unaff_x19 + 0x40);
    uStack_2f4 = CONCAT31(uStack_2f4._1_3_,!bVar1);
    uStack_2e8 = *(undefined8 *)(unaff_x19 + 0x58);
    uStack_2f0 = *(undefined8 *)(unaff_x19 + 0x50);
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      do {
        func_0x000107362098();
      } while (extraout_w10 != 0);
    }
    func_0x0001072d488c(auStack_2e0,unaff_x19 + 0x60);
    puVar5 = (undefined8 *)0x218;
    __Znwm();
    func_0x00010736212c();
    *puVar5 = extraout_x8_00;
    puVar5[1] = CONCAT44(uStack_2f4,uStack_2f8);
    puVar5[3] = uStack_2e8;
    puVar5[2] = uStack_2f0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x0001072d62a0(puVar5 + 4,auStack_2e0);
    auStack_370[0] = 0;
    uStack_300 = 0;
    (**(code **)(*plVar4 + 0xa0))(plVar4,auStack_e8,auStack_370);
    FUN_10731d77c(auStack_370);
    func_0x00010731e7f8(auStack_e8);
    func_0x000107361dbc(&uStack_2f8);
    FUN_107362064(auStack_c8);
  }
  func_0x000107270b00(auStack_380);
  func_0x000107362084(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_107361d04:
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107361d0c);
  (*pcVar2)();
}



/* Entry: 107361d64; end: 107361d8b;  */

void FUN_107361d64(undefined8 param_1)

{
  func_0x00010736213c();
  func_0x000107362104(param_1,&PTR_DAT_1109a5540);
  func_0x0001073620cc();
  return;
}



/* Entry: 107361d8c; end: 107361d97;  */

undefined ** FUN_107361d8c(void)

{
  return &PTR_DAT_1109a5540;
}



/* Entry: 107361d98; end: 107361e0b;  */

undefined8 FUN_107361d98(undefined8 param_1)

{
  func_0x00010736211c();
  FUN_107361228();
  return param_1;
}



/* Entry: 107361e0c; end: 107361e1f;  */

void FUN_107361e0c(void)

{
  func_0x000107361de8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107361e20; end: 107361e57;  */

undefined8 FUN_107361e20(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x218;
  __Znwm(0x218);
  FUN_107361f64();
  return uVar1;
}



/* Entry: 107361e58; end: 107361e7b;  */

void FUN_107361e58(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  func_0x00010736212c();
  *param_2 = extraout_x8;
  param_2[1] = *puVar1;
  lVar2 = puVar1[2];
  uVar3 = puVar1[1];
  param_2[3] = puVar1[2];
  param_2[2] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107362098();
    } while (extraout_w10 != 0);
  }
  func_0x0001072d488c(unaff_x19 + 0x20,puVar1 + 3);
  return;
}



/* Entry: 107361e7c; end: 107361f2f;  */

void FUN_107361e7c(long param_1,long param_2)

{
  int iVar1;
  undefined1 in_ZR;
  int *piVar2;
  undefined8 extraout_x8;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x0001073620bc();
  uStack_28 = extraout_x8;
  if (*(int *)(param_2 + 0x78) == 0) {
    in_ZR = false;
    if (*(char *)(param_1 + 0xc) == '\x01') {
      in_ZR = false;
      if (*(long *)(param_2 + 0x10) - (long)*(int **)(param_2 + 8) == 4) {
        iVar1 = **(int **)(param_2 + 8);
        piVar2 = (int *)(param_1 + 8);
        FUN_107361fc8();
        in_ZR = iVar1 == *piVar2;
        if ((bool)in_ZR) goto LAB_107361f08;
      }
    }
    pppuStack_30 = appuStack_48;
    appuStack_48[0] = &PTR_FUN_1109a54c0;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x80))
              (*(long **)(param_1 + 0x10),param_1 + 0x20,appuStack_48);
    func_0x0001006393ec();
  }
LAB_107361f08:
  func_0x000107362084(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001006393ec(appuStack_48);
  func_0x0001073620e4();
  func_0x00010736213c();
  func_0x000107362104();
  func_0x0001073620cc();
  return;
}



/* Entry: 107361f30; end: 107361f57;  */

void FUN_107361f30(undefined8 param_1)

{
  func_0x00010736213c();
  func_0x000107362104(param_1,&PTR_DAT_1109a5530);
  func_0x0001073620cc();
  return;
}



/* Entry: 107361f58; end: 107361f63;  */

undefined ** FUN_107361f58(void)

{
  return &PTR_DAT_1109a5530;
}



/* Entry: 107361f64; end: 107361fc7;  */

void FUN_107361f64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar2;
  
  func_0x00010736212c();
  *param_1 = extraout_x8;
  param_1[1] = *param_2;
  lVar1 = param_2[2];
  uVar2 = param_2[1];
  param_1[3] = param_2[2];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107362098();
    } while (extraout_w10 != 0);
  }
  func_0x0001072d488c(unaff_x19 + 0x20,param_2 + 3);
  return;
}



/* Entry: 107361fc8; end: 107361fdf;  */

void FUN_107361fc8(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  return;
}



/* Entry: 107361fe0; end: 107361fe7;  */

void FUN_107361fe0(void)

{
  return;
}


