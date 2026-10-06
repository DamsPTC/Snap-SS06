/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100fad8e4; end: 100fad923;  */

void FUN_100fad8e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d511e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d917e24;
  func_0x000107c61520(&UNK_10d917e24,&UNK_110372110);
  puRam0000000112d511e0 = puVar1;
  return;
}



/* Entry: 100fad924; end: 100fad933;  */

void FUN_100fad924(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 100fad934; end: 100fada4f;  */

undefined1  [16] FUN_100fad934(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x2f);
  func_0x000107c5fb78(0xd000000000000019,0x800000010ef1d820);
  uVar2 = 0x112d511e8;
  uStack_48 = param_1;
  func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
  func_0x000107c603d0(&uStack_48,&uStack_40,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0xd000000000000011,0x800000010ef1d840);
  uStack_48 = param_2;
  func_0x000107c61434(param_2);
  uVar2 = 0x112d511f0;
  func_0x0001000285a8(0x112d511f0,&UNK_10d917eb0);
  func_0x000107c5fb18(&uStack_48,uVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 100fada50; end: 100fada73;  */

undefined1  [16] FUN_100fada50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x2f);
  func_0x000107c5fb78(0xd000000000000019,0x800000010ef1d820);
  uVar4 = 0x112d511e8;
  uStack_48 = uVar1;
  func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
  func_0x000107c603d0(&uStack_48,&uStack_40,uVar4,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0xd000000000000011,0x800000010ef1d840);
  uStack_48 = uVar2;
  func_0x000107c61434(uVar2);
  uVar4 = 0x112d511f0;
  func_0x0001000285a8(0x112d511f0,&UNK_10d917eb0);
  func_0x000107c5fb18(&uStack_48,uVar4);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  auVar3._8_8_ = uStack_38;
  auVar3._0_8_ = uStack_40;
  return auVar3;
}



/* Entry: 100fada74; end: 100fadab3;  */

undefined8 FUN_100fada74(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100fadab4; end: 100fadaff;  */

undefined8 * FUN_100fadab4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 100fadb00; end: 100fadbd3;  */

void FUN_100fadb00(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x0001000285a8(0x112d51388,&UNK_10d918040);
  puVar1 = &UNK_1103723c0;
  func_0x000107c613fc(&UNK_1103723c0,0x20,7);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  func_0x000107c6157c(uVar2);
  func_0x0001048897a0(uVar4,1,0,0x100fb1554,puVar1);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  func_0x000107c61574(puVar1);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fadbd4;
                    /* WARNING: Could not recover jumptable at 0x000100fadbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100faafdc();
  return;
}



/* Entry: 100fadbd4; end: 100fadc27;  */

void FUN_100fadbd4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  *(undefined1 *)(lVar1 + 0x48) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fadc28,0,0);
  return;
}



/* Entry: 100fadc28; end: 100fadcdb;  */

void FUN_100fadc28(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x48) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x40);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar3);
    FUN_100fb15b0(uVar4,1,PTR__swift_bridgeObjectRelease_11034f258);
    uVar3 = 0;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x000100fadcd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 100fadcdc; end: 100fadcf7;  */

void FUN_100fadcdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fadcf8,0,0);
  return;
}



/* Entry: 100fadcf8; end: 100faddcb;  */

void FUN_100fadcf8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x0001000285a8(0x112d51380,&UNK_10d918030);
  puVar1 = &UNK_110372398;
  func_0x000107c613fc(&UNK_110372398,0x20,7);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  func_0x000107c6157c(uVar2);
  func_0x0001048897a0(uVar4,1,0,0x100fb1548,puVar1);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  func_0x000107c61574(puVar1);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100faddcc;
                    /* WARNING: Could not recover jumptable at 0x000100faddc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100fab0fc();
  return;
}



/* Entry: 100faddcc; end: 100fade1f;  */

void FUN_100faddcc(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  *(undefined1 *)(lVar1 + 0x48) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fade20,0,0);
  return;
}



/* Entry: 100fade20; end: 100faded3;  */

void FUN_100fade20(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x48) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x40);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar3);
    FUN_100fb15b0(uVar4,1,PTR__swift_unknownObjectRelease_11034f530);
    uVar3 = 0;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x000100faded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 100faded4; end: 100fadeef;  */

void FUN_100faded4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fadef0,0,0);
  return;
}



/* Entry: 100fadef0; end: 100fadfc3;  */

void FUN_100fadef0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x0001000285a8(0x112d51330,&UNK_10d917fe8);
  puVar1 = &UNK_110372370;
  func_0x000107c613fc(&UNK_110372370,0x20,7);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  func_0x000107c6157c(uVar2);
  func_0x0001048897a0(uVar4,1,0,0x100fb166c,puVar1);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  func_0x000107c61574(puVar1);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fadfc4;
                    /* WARNING: Could not recover jumptable at 0x000100fadfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100fab46c();
  return;
}



/* Entry: 100fadfc4; end: 100fae017;  */

void FUN_100fadfc4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  *(undefined1 *)(lVar1 + 0x48) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb1654,0,0);
  return;
}



/* Entry: 100fae018; end: 100fae033;  */

void FUN_100fae018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fae034,0,0);
  return;
}



/* Entry: 100fae034; end: 100fae107;  */

void FUN_100fae034(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x0001000285a8(0x112d51390,&UNK_10d918058);
  puVar1 = &UNK_1103723e8;
  func_0x000107c613fc(&UNK_1103723e8,0x20,7);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  func_0x000107c6157c(uVar2);
  func_0x0001048897a0(uVar4,1,0,FUN_100fb15c4,puVar1);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  func_0x000107c61574(puVar1);
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fae108;
                    /* WARNING: Could not recover jumptable at 0x000100fae104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100faba0c();
  return;
}



/* Entry: 100fae108; end: 100fae15b;  */

void FUN_100fae108(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  *(undefined8 *)(lVar1 + 0x48) = param_2;
  *(undefined2 *)(lVar1 + 0x50) = param_3;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fae15c,0,0);
  return;
}



/* Entry: 100fae15c; end: 100fae22f;  */

void FUN_100fae15c(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined1 uVar6;
  undefined8 uVar7;
  
  if (*(char *)(unaff_x22 + 0x51) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x40);
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar1 = *(undefined2 *)(unaff_x22 + 0x50);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar7);
    uVar6 = 1;
    FUN_100fb1600(uVar4,uVar5,uVar1,1);
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar6 = *(undefined1 *)(unaff_x22 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x000100fae22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar5,uVar6);
  return;
}



/* Entry: 100fae230; end: 100fae2bb;  */

void FUN_100fae230(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 100fae2bc; end: 100fae2db;  */

void FUN_100fae2bc(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0xc0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fae2dc,0,0);
  return;
}



/* Entry: 100fae2dc; end: 100fae4bb;  */

void FUN_100fae2dc(void)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  
  bVar1 = *(byte *)(unaff_x22 + 0xc0);
  lVar6 = *(long *)(unaff_x22 + 0x58);
  if (bVar1 < 2) {
    lVar7 = 0x112d50c78;
    if (bVar1 == 0) {
      FUN_100fb09d4(0x112d50c78,&PTR_PTR_1126b25c0,0x112d51338,&UNK_10d917ff0);
      func_0x000107c613fc();
      *(long *)(unaff_x22 + 0x70) = lVar7;
      *(undefined8 *)(lVar7 + 0x18) = 3;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      plVar2 = (long *)0x60;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x78) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_100fae4bc;
      lVar7 = *(long *)(unaff_x22 + 0x68);
      plVar2[2] = lVar7;
      plVar3 = (long *)0x80;
      func_0x000107c615b8();
      plVar2[3] = (long)plVar3;
      *plVar3 = (long)plVar2;
      plVar3[1] = (long)FUN_100fae770;
      plVar3[7] = lVar6;
      plVar3[8] = lVar7;
      pcVar5 = FUN_100faf468;
    }
    else {
      FUN_100fb09d4(0x112d50c78,&PTR_PTR_1126b25c0,0x112d51338,&UNK_10d917ff0);
      func_0x000107c613fc();
      *(long *)(unaff_x22 + 0x88) = lVar7;
      *(undefined8 *)(lVar7 + 0x18) = 3;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      plVar2 = (long *)0x60;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x90) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = 0x100fae520;
      lVar7 = *(long *)(unaff_x22 + 0x68);
      plVar2[2] = lVar7;
      plVar3 = (long *)0x80;
      func_0x000107c615b8();
      plVar2[3] = (long)plVar3;
      *plVar3 = (long)plVar2;
      plVar3[1] = (long)FUN_100faeb60;
      plVar3[7] = lVar6;
      plVar3[8] = lVar7;
      pcVar5 = FUN_100faf6fc;
    }
  }
  else if (bVar1 == 2) {
    plVar2 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100fae584;
    lVar8 = *(long *)(unaff_x22 + 0x68);
    plVar2[4] = lVar8;
    lVar7 = 0x112d453c8;
    func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
    uVar4 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar2[5] = uVar4;
    plVar3 = (long *)0xa0;
    func_0x000107c615b8();
    plVar2[6] = (long)plVar3;
    *plVar3 = (long)plVar2;
    plVar3[1] = (long)FUN_100faede4;
    plVar3[6] = lVar6;
    plVar3[7] = lVar8;
    pcVar5 = FUN_100faf8a8;
  }
  else {
    lVar7 = 0x112d50c78;
    FUN_100fb09d4(0x112d50c78,&PTR_PTR_1126b25c0,0x112d51338,&UNK_10d917ff0);
    func_0x000107c613fc();
    *(long *)(unaff_x22 + 0xa8) = lVar7;
    *(undefined8 *)(lVar7 + 0x18) = 3;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    plVar2 = (long *)0x90;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100fae5cc;
    lVar7 = *(long *)(unaff_x22 + 0x68);
    plVar2[0xd] = *(long *)(unaff_x22 + 0x60);
    plVar2[0xe] = lVar7;
    plVar2[0xc] = lVar6;
    pcVar5 = FUN_100faf148;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar5,0,0);
  return;
}



/* Entry: 100fae4bc; end: 100fae583;  */

void FUN_100fae4bc(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  *(long *)(lVar2 + 0x20) = unaff_x20;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100fae630;
  }
  else {
    pcVar1 = FUN_100fae678;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fae584; end: 100fae5cb;  */

void FUN_100fae584(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x000100fae5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fae5cc; end: 100fae62f;  */

void FUN_100fae5cc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x40) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x48) = param_1;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    uVar1 = 0x100fae660;
  }
  else {
    uVar1 = 0x100fae6e8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 100fae630; end: 100fae677;  */

void FUN_100fae630(void)

{
  long unaff_x22;
  
  *(undefined8 *)(*(long *)(unaff_x22 + 0x70) + 0x20) = *(undefined8 *)(unaff_x22 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000100fae644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fae678; end: 100fae71f;  */

void FUN_100fae678(void)

{
  long unaff_x22;
  
  *(undefined8 *)(*(long *)(unaff_x22 + 0x70) + 0x10) = 0;
  func_0x000107c61574();
                    /* WARNING: Could not recover jumptable at 0x000100fae6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fae720; end: 100fae76f;  */

void FUN_100fae720(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = unaff_x20;
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fae770;
  plVar1[7] = param_1;
  plVar1[8] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100faf468,0,0);
  return;
}



/* Entry: 100fae770; end: 100fae7cf;  */

void FUN_100fae770(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x18));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100fae7d0;
  }
  else {
    pcVar1 = FUN_100faeaac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fae7d0; end: 100fae84b;  */

void FUN_100fae7d0(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar1 = 0;
  FUN_100fb1614(0,0x112d512e8,&PTR_PTR_1126b25b8);
  FUN_100fabd00();
  *(long *)(unaff_x22 + 0x30) = lVar1;
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fae84c;
  lVar3 = *(long *)(unaff_x22 + 0x20);
  lVar4 = *(long *)(unaff_x22 + 0x10);
  plVar2[6] = lVar1;
  plVar2[7] = lVar4;
  plVar2[5] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb0014,0,0);
  return;
}



/* Entry: 100fae84c; end: 100fae8a7;  */

void FUN_100fae84c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100fae8a8;
  }
  else {
    pcVar1 = FUN_100fae978;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fae8a8; end: 100fae90b;  */

void FUN_100fae8a8(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x20);
  FUN_100fb0288();
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fae90c;
  lVar3 = *(long *)(unaff_x22 + 0x20);
  lVar4 = *(long *)(unaff_x22 + 0x10);
  plVar2[6] = lVar1;
  plVar2[7] = lVar4;
  plVar2[5] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb040c,0,0);
  return;
}



/* Entry: 100fae90c; end: 100fae977;  */

void FUN_100fae90c(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x58) = param_1;
    pcVar1 = FUN_100fae9f0;
  }
  else {
    pcVar1 = FUN_100faea34;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fae978; end: 100fae9ef;  */

void FUN_100fae978(void)

{
  ulong uVar1;
  ulong *puVar2;
  long unaff_x22;
  
  puVar2 = *(ulong **)(unaff_x22 + 0x30);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c61170();
  uVar1 = *(ulong *)(unaff_x22 + 0x40);
  FUN_100facde4();
  func_0x000107c613f8(&UNK_110372230,puVar2,0,0);
  *puVar2 = uVar1 | 0x4000000000000000;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100fae9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fae9f0; end: 100faea33;  */

void FUN_100fae9f0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100faea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 100faea34; end: 100faeaab;  */

void FUN_100faea34(void)

{
  ulong uVar1;
  ulong *puVar2;
  long unaff_x22;
  
  puVar2 = *(ulong **)(unaff_x22 + 0x30);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c61170();
  uVar1 = *(ulong *)(unaff_x22 + 0x50);
  FUN_100facde4();
  func_0x000107c613f8(&UNK_110372230,puVar2,0,0);
  *puVar2 = uVar1 | 0x4000000000000000;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100faeaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100faeaac; end: 100faeb0f;  */

void FUN_100faeaac(ulong *param_1)

{
  ulong uVar1;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x28);
  FUN_100facde4();
  func_0x000107c613f8(&UNK_110372230,param_1,0,0);
  *param_1 = uVar1 | 0x4000000000000000;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100faeb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100faeb10; end: 100faeb5f;  */

void FUN_100faeb10(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = unaff_x20;
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100faeb60;
  plVar1[7] = param_1;
  plVar1[8] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100faf6fc,0,0);
  return;
}



/* Entry: 100faeb60; end: 100faebbf;  */

void FUN_100faeb60(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x18));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100faebc0;
  }
  else {
    pcVar1 = (code *)0x100fb1670;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100faebc0; end: 100faec3b;  */

void FUN_100faebc0(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar1 = 0;
  FUN_100fb1614(0,0x112d512e8,&PTR_PTR_1126b25b8);
  FUN_100fabd00();
  *(long *)(unaff_x22 + 0x30) = lVar1;
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100faec3c;
  lVar3 = *(long *)(unaff_x22 + 0x20);
  lVar4 = *(long *)(unaff_x22 + 0x10);
  plVar2[6] = lVar1;
  plVar2[7] = lVar4;
  plVar2[5] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb0014,0,0);
  return;
}



/* Entry: 100faec3c; end: 100faec97;  */

void FUN_100faec3c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100faec98;
  }
  else {
    pcVar1 = (code *)0x100fb1664;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100faec98; end: 100faecfb;  */

void FUN_100faec98(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x20);
  FUN_100fb0288();
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100faecfc;
  lVar3 = *(long *)(unaff_x22 + 0x20);
  lVar4 = *(long *)(unaff_x22 + 0x10);
  plVar2[6] = lVar1;
  plVar2[7] = lVar4;
  plVar2[5] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb040c,0,0);
  return;
}



/* Entry: 100faecfc; end: 100faed67;  */

void FUN_100faecfc(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x58) = param_1;
    uVar1 = 0x100fb1660;
  }
  else {
    uVar1 = 0x100fb1668;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 100faed68; end: 100faede3;  */

void FUN_100faed68(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x20) = unaff_x20;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100faede4;
  plVar3[6] = param_1;
  plVar3[7] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100faf8a8,0,0);
  return;
}



/* Entry: 100faede4; end: 100faee43;  */

void FUN_100faede4(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x38) = param_1;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100faee44;
  }
  else {
    pcVar1 = FUN_100faf030;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100faee44; end: 100faef83;  */

void FUN_100faee44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x38);
  lVar4 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar2,1,1,lVar4);
  puVar5 = &UNK_1103722f8;
  func_0x000107c613fc(&UNK_1103722f8,0x18,7);
  *(undefined **)(unaff_x22 + 0x48) = puVar5;
  func_0x000107c61644(puVar5 + 0x10,uVar1);
  plVar6 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar6;
  lVar4 = 0x112d51310;
  func_0x0001000285a8(0x112d51310,&UNK_10d917fc0);
  lVar7 = 0;
  FUN_100fb1614(0,0x112d50c78,&PTR_PTR_1126b25c0);
  lVar8 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar9 = lVar8;
  func_0x000100fb1198();
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100faef84;
  puVar3 = PTR___ss5ErrorWS_11034ee10;
  lVar10 = *(long *)(unaff_x22 + 0x28);
  plVar6[0x16] = unaff_x22 + 0x10;
  plVar6[0x17] = unaff_x22 + 0x18;
  plVar6[0x14] = lVar9;
  plVar6[0x15] = (long)puVar3;
  plVar6[0x12] = lVar7;
  plVar6[0x13] = lVar8;
  plVar6[0x10] = (long)puVar5;
  plVar6[0x11] = lVar4;
  plVar6[0xe] = lVar10;
  plVar6[0xf] = (long)&UNK_10d917fb8;
  lVar4 = *(long *)(lVar8 + -8);
  plVar6[0x18] = lVar4;
  uVar11 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x19] = uVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488ea3c,0,0);
  return;
}



/* Entry: 100faef84; end: 100faf02f;  */

void FUN_100faef84(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x50));
  if (unaff_x20 != 0) {
    func_0x000107c61574(*(undefined8 *)(lVar4 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100faf0a4,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x48);
  uVar2 = *(undefined8 *)(lVar4 + 0x38);
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  func_0x0001000abe54(uVar5);
  func_0x000107c61574(uVar1);
  func_0x000107c6142c(uVar2);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100faf02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1);
  return;
}



/* Entry: 100faf030; end: 100faf0a3;  */

void FUN_100faf030(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  FUN_100facde4();
  func_0x000107c613f8(&UNK_110372230,param_1,0,0);
  *param_1 = uVar1 | 0x8000000000000000;
  func_0x000107c61654();
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100faf0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100faf0a4; end: 100faf12b;  */

void FUN_100faf0a4(void)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar2 = *(ulong **)(unaff_x22 + 0x38);
  func_0x0001000abe54(*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c6142c();
  uVar1 = *(ulong *)(unaff_x22 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  FUN_100facde4();
  func_0x000107c613f8(&UNK_110372230,puVar2,0,0);
  *puVar2 = uVar1 | 0x8000000000000000;
  func_0x000107c61654();
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100faf128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100faf12c; end: 100faf147;  */

void FUN_100faf12c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100faf148,0,0);
  return;
}



/* Entry: 100faf148; end: 100faf1e7;  */

void FUN_100faf148(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x70) + 0x30);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100faf1a0;
  plVar1[5] = unaff_x22 + 0x38;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100faf1e8; end: 100faf26b;  */

void FUN_100faf1e8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100faf26c;
                    /* WARNING: Could not recover jumptable at 0x000100faf268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (plVar4,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x60),
             *(undefined8 *)(unaff_x22 + 0x68),uVar2,lVar3);
  return;
}



/* Entry: 100faf26c; end: 100faf2c7;  */

void FUN_100faf26c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100faf2c8;
  }
  else {
    pcVar1 = FUN_100faf338;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100faf2c8; end: 100faf337;  */

void FUN_100faf2c8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  (**(code **)(lVar1 + 8))(uVar2,lVar1);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100faf334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 100faf338; end: 100faf39f;  */

void FUN_100faf338(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  puVar1 = (undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000834e4();
  FUN_100facde4();
  func_0x000107c613f8(&UNK_110372230,puVar1,0,0);
  *puVar1 = uVar2;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100faf39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100faf3a0; end: 100faf407;  */

void FUN_100faf3a0(long param_1,undefined1 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100faf408;
  plVar1[0xc] = param_3;
  plVar1[0xd] = lVar2;
  *(undefined1 *)(plVar1 + 0x18) = param_2;
  plVar1[0xb] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fae2dc,0,0);
  return;
}



/* Entry: 100faf408; end: 100faf44f;  */

void FUN_100faf408(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100faf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100faf450; end: 100faf467;  */

void FUN_100faf450(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100faf468,0,0);
  return;
}



/* Entry: 100faf468; end: 100faf507;  */

void FUN_100faf468(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x40) + 0x20);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100faf4c0;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100faf508; end: 100faf587;  */

void FUN_100faf508(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100faf588;
                    /* WARNING: Could not recover jumptable at 0x000100faf584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x38),uVar2,lVar3);
  return;
}



/* Entry: 100faf588; end: 100faf5fb;  */

void FUN_100faf588(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x58) = param_1;
  *(undefined8 *)(lVar2 + 0x60) = param_2;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0x70) = param_3;
    pcVar1 = FUN_100faf5fc;
  }
  else {
    pcVar1 = FUN_100faf670;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100faf5fc; end: 100faf66f;  */

void FUN_100faf5fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  cVar3 = *(char *)(unaff_x22 + 0x70);
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (cVar3 == '\x01') {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar4 = uVar2;
    func_0x000107c61174(uVar2);
    func_0x000100fad11c(uVar1,uVar2,1);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  }
                    /* WARNING: Could not recover jumptable at 0x000100faf66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 100faf670; end: 100faf6e3;  */

void FUN_100faf670(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  puVar1 = (undefined8 *)(unaff_x22 + 0x10);
  func_0x0001000834e4();
  FUN_100fac758();
  func_0x000107c613f8(&UNK_1103721a0,puVar1,0,0);
  *puVar1 = uVar2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 1;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100faf6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100faf6e4; end: 100faf6fb;  */

void FUN_100faf6e4(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100faf6fc,0,0);
  return;
}



/* Entry: 100faf6fc; end: 100faf79b;  */

void FUN_100faf6fc(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x40) + 0x20);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100faf754;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100faf79c; end: 100faf81b;  */

void FUN_100faf79c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100faf81c;
                    /* WARNING: Could not recover jumptable at 0x000100faf818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x38),uVar2,lVar3);
  return;
}



/* Entry: 100faf81c; end: 100faf88f;  */

void FUN_100faf81c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x58) = param_1;
  *(undefined8 *)(lVar2 + 0x60) = param_2;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0x70) = param_3;
    uVar1 = 0x100fb165c;
  }
  else {
    uVar1 = 0x100fb1658;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 100faf890; end: 100faf8a7;  */

void FUN_100faf890(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100faf8a8,0,0);
  return;
}



/* Entry: 100faf8a8; end: 100faf947;  */

void FUN_100faf8a8(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x38) + 0x40);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100faf900;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100faf948; end: 100fafa03;  */

void FUN_100faf948(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x38);
  puVar2 = &UNK_110372320;
  func_0x000107c613fc(&UNK_110372320,0x20,7);
  *(undefined **)(unaff_x22 + 0x50) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  plVar3 = (long *)0x50;
  func_0x000107c6157c(uVar5);
  func_0x000107c615f0(uVar1);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fafa04;
                    /* WARNING: Could not recover jumptable at 0x000100fafa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100faded4(uVar4,FUN_100fb11e8,puVar2);
  return;
}



/* Entry: 100fafa04; end: 100fafa5b;  */

void FUN_100fafa04(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(lVar2 + 0x60) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fafa5c,0,0);
  return;
}



/* Entry: 100fafa5c; end: 100fafb53;  */

void FUN_100fafa5c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x22;
  
  uVar7 = *(ulong *)(unaff_x22 + 0x60);
  if (uVar7 != 0) {
    if (uVar7 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar7;
      if (-1 < (long)uVar7) {
        uVar1 = uVar7 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    if (uVar1 != 0) {
      func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000100fafab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar7);
      return;
    }
    func_0x000107c6142c(uVar7);
  }
  plVar8 = *(long **)(*(long *)(unaff_x22 + 0x38) + 0x18);
  uVar2 = 0;
  FUN_100fb1614(0,0x112d51320,&PTR_PTR_1126b24d8);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  plVar5 = plVar3;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x70) = plVar5;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fafb54;
  plVar3[0xb] = (long)plVar5;
  plVar3[0xc] = unaff_x22 + 0x28;
  plVar3[9] = unaff_x22 + 0x20;
  plVar3[10] = (long)&UNK_1107a6f08;
  plVar3[8] = unaff_x22 + 0x18;
  lVar6 = *plVar8;
  plVar3[0xd] = (long)&PTR_FUN_1107a6e88;
  lVar4 = 0x10;
  _swift_task_alloc();
  plVar3[0xe] = lVar4;
  lVar4 = *(long *)(lVar6 + 0x50);
  plVar3[0xf] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x10] = lVar4;
  uVar7 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x11] = uVar7;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar3[0x12] = (long)plVar5;
  *plVar5 = (long)plVar3;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar7;
  plVar5[6] = (long)plVar8;
  lVar6 = *(long *)(*plVar8 + 0x50);
  plVar5[7] = lVar6;
  lVar4 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar5[9] = lVar4;
  uVar7 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar7;
  lVar4 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar4;
  uVar7 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100fafb54; end: 100fafbab;  */

void FUN_100fafb54(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x68));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100fafbac;
  }
  else {
    pcVar1 = FUN_100fafdb4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fafbac; end: 100fafc63;  */

void FUN_100fafbac(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar3;
  puVar1 = &UNK_110372348;
  func_0x000107c613fc(&UNK_110372348,0x20,7);
  *(undefined **)(unaff_x22 + 0x80) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  plVar2 = (long *)0x50;
  func_0x000107c615f0(uVar4);
  func_0x000107c61174(uVar3);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fafc64;
                    /* WARNING: Could not recover jumptable at 0x000100fafc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100faded4(*(undefined8 *)(unaff_x22 + 0x48),0x100fb11f0,puVar1);
  return;
}



/* Entry: 100fafc64; end: 100fafcbb;  */

void FUN_100fafc64(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x80);
  *(undefined8 *)(lVar2 + 0x90) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fafcbc,0,0);
  return;
}



/* Entry: 100fafcbc; end: 100fafdb3;  */

void FUN_100fafcbc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0x90);
  if (puVar3 != (undefined8 *)0x0) {
    if ((ulong)puVar3 >> 0x3e == 0) {
      puVar1 = (undefined8 *)((undefined8 *)((ulong)puVar3 & 0xffffffffffffff8))[2];
    }
    else {
      puVar1 = puVar3;
      if (-1 < (long)puVar3) {
        puVar1 = (undefined8 *)((ulong)puVar3 & 0xffffffffffffff8);
      }
      func_0x000107c60480();
    }
    if (puVar1 != (undefined8 *)0x0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x78));
      func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100fafd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(puVar3);
      return;
    }
    func_0x000107c6142c();
    param_1 = puVar3;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  FUN_100fad8e4();
  func_0x000107c613f8(&UNK_110372110,param_1,0,0);
  *param_1 = uVar5;
  param_1[1] = 0;
  func_0x000107c61654();
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100fafdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fafdb4; end: 100fafe17;  */

void FUN_100fafdb4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar3;
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100fafe14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fafe18; end: 100fafe37;  */

void FUN_100fafe18(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  uVar1 = *param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fafe38,0,0);
  return;
}



/* Entry: 100fafe38; end: 100faff0b;  */

void FUN_100fafe38(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  puVar2 = (undefined8 *)(lVar5 + 0x10);
  func_0x000107c61648();
  *(undefined8 **)(unaff_x22 + 0x48) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    plVar3 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100faff0c;
    lVar5 = *(long *)(unaff_x22 + 0x40);
    plVar3[2] = (long)puVar2;
    plVar1 = (long *)0x80;
    func_0x000107c615b8();
    plVar3[3] = (long)plVar1;
    *plVar1 = (long)plVar3;
    plVar1[1] = (long)FUN_100faeb60;
    plVar1[7] = lVar5;
    plVar1[8] = (long)puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100faf6fc,0,0);
    return;
  }
  FUN_100facde4();
  puVar4 = &UNK_110372230;
  func_0x000107c613f8(&UNK_110372230,puVar2,0,0);
  *puVar2 = 0xc000000000000000;
  func_0x000107c61654();
  **(undefined8 **)(unaff_x22 + 0x38) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x000100faff08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100faff0c; end: 100faff77;  */

void FUN_100faff0c(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x60) = param_1;
    pcVar1 = FUN_100faff78;
  }
  else {
    pcVar1 = FUN_100faffb8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100faff78; end: 100faffb7;  */

void FUN_100faff78(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000100faffb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100faffb8; end: 100fafff7;  */

void FUN_100faffb8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  **(undefined8 **)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000100fafff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fafff8; end: 100fb0013;  */

void FUN_100fafff8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb0014,0,0);
  return;
}



/* Entry: 100fb0014; end: 100fb00ab;  */

void FUN_100fb0014(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x38) + 0x10);
  uVar1 = 0x112d51300;
  func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x48) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fb00ac;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x20;
  plVar2[9] = unaff_x22 + 0x18;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x10;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_FUN_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100fb00ac; end: 100fb0103;  */

void FUN_100fb00ac(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x40));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100fb0104;
  }
  else {
    pcVar1 = FUN_100fb0230;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fb0104; end: 100fb019f;  */

void FUN_100fb0104(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x50) = lVar6;
  lVar3 = lVar6;
  func_0x000107c614f0();
  lVar4 = 0;
  FUN_100fb1614(0,0x112d51308,&PTR_PTR_1126b1378);
  func_0x000100fabdec();
  *(long *)(unaff_x22 + 0x58) = lVar4;
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100fb01a0;
  lVar1 = *(long *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  plVar5[6] = lVar3;
  plVar5[7] = lVar6;
  plVar5[4] = lVar1;
  plVar5[5] = lVar4;
  plVar5[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fabec0,0,0);
  return;
}



/* Entry: 100fb01a0; end: 100fb0223;  */

void FUN_100fb01a0(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar4;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x58);
  uVar4 = *(undefined8 *)(lVar3 + 0x50);
  *(long *)(lVar3 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x60));
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar4);
  if (unaff_x20 == 0) {
    func_0x000107c6142c(param_1);
    pcVar2 = FUN_100fb0224;
  }
  else {
    pcVar2 = FUN_100fb027c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 100fb0224; end: 100fb022f;  */

void FUN_100fb0224(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100fb022c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb0230; end: 100fb027b;  */

void FUN_100fb0230(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000100fb0278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb027c; end: 100fb0287;  */

void FUN_100fb027c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100fb0284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb0288; end: 100fb03ef;  */

undefined8 FUN_100fb0288(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_68;
  
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    func_0x000107c4ca10();
    func_0x000107c61180();
    if (param_1 != 0) {
      uStack_68 = 0;
      uVar3 = 0;
      FUN_100fb1614(0,0x112d512f8,&PTR_PTR_1126b25d8);
      func_0x000107c5fc50(param_1,&uStack_68,uVar3);
      func_0x000107c61170(param_1);
      uVar1 = uStack_68;
      if (uStack_68 != 0) {
        uVar8 = uStack_68 & 0xffffffffffffff8;
        if (uStack_68 >> 0x3e == 0) {
          uVar6 = *(ulong *)(uVar8 + 0x10);
        }
        else {
          uVar6 = uStack_68;
          if (-1 < (long)uStack_68) {
            uVar6 = uVar8;
          }
          func_0x000107c60480();
        }
        uVar7 = 0;
        while (uVar6 != uVar7) {
          if ((uVar1 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar8 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb03dc);
              (*pcVar2)();
            }
            uVar4 = *(ulong *)(uVar1 + uVar7 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar4 = uVar7;
            FUN_100fb0f20(uVar7,uVar1,&PTR_PTR_1126b25d8,0x112d512f8);
          }
          if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb039c);
            (*pcVar2)();
          }
          uVar5 = uVar4;
          func_0x000107c4ca5c();
          func_0x000107c61170(uVar4);
          uVar7 = uVar7 + 1;
          if ((int)uVar5 == 2) {
            func_0x000107c6142c(uVar1);
            return 10;
          }
        }
        func_0x000107c6142c(uVar1);
      }
    }
  }
  return 5;
}



/* Entry: 100fb03f0; end: 100fb040b;  */

void FUN_100fb03f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb040c,0,0);
  return;
}



/* Entry: 100fb040c; end: 100fb04a3;  */

void FUN_100fb040c(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x38) + 0x28);
  uVar1 = 0x112d512f0;
  func_0x0001000285a8(0x112d512f0,&UNK_10da03ae0);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x48) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fb04a4;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x20;
  plVar2[9] = unaff_x22 + 0x18;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x10;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_FUN_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100fb04a4; end: 100fb054b;  */

void FUN_100fb04a4(void)

{
  long *plVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x40));
  if (unaff_x20 == 0) {
    lVar3 = *(long *)(lVar4 + 0x10);
    *(long *)(lVar4 + 0x50) = lVar3;
    func_0x000107c614f0(lVar3);
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(lVar4 + 0x58) = plVar1;
    *plVar1 = lVar5;
    plVar1[1] = (long)FUN_100fb054c;
    lVar5 = *(long *)(lVar4 + 0x28);
    plVar1[7] = *(long *)(lVar4 + 0x30);
    plVar1[8] = lVar3;
    plVar1[6] = lVar5;
    pcVar2 = FUN_100faac74;
  }
  else {
    pcVar2 = FUN_100fb0610;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 100fb054c; end: 100fb05bf;  */

void FUN_100fb054c(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x50);
  *(long *)(lVar3 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x58));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x68) = param_1;
    pcVar2 = FUN_100fb05c0;
  }
  else {
    pcVar2 = FUN_100fb06a0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 100fb05c0; end: 100fb060f;  */

void FUN_100fb05c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = uVar2;
  func_0x000107c5b198(uVar2);
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100fb060c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 100fb0610; end: 100fb069f;  */

void FUN_100fb0610(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1 = (undefined8 *)&UNK_1107a6f08;
  func_0x000107c613f8(&UNK_1107a6f08,puVar2,0,0);
  *puVar2 = uVar3;
  puVar2 = puVar1;
  FUN_100fac758();
  func_0x000107c613f8(&UNK_1103721a0,puVar2,0,0);
  *puVar2 = puVar1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined1 *)(puVar2 + 4) = 4;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100fb069c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb06a0; end: 100fb070b;  */

void FUN_100fb06a0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  FUN_100fac758();
  func_0x000107c613f8(&UNK_1103721a0,param_1,0,0);
  *param_1 = uVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 4;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100fb0708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb070c; end: 100fb083b;  */

void FUN_100fb070c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c430f8();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    if (lVar1 != 0) {
      uVar2 = 0x112d508c0;
      func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
      lVar3 = lVar1;
      func_0x000107c5fc54(lVar1,uVar2);
      func_0x000107c61170(lVar1);
      goto LAB_100fb0794;
    }
  }
  lVar3 = 0;
LAB_100fb0794:
  *param_1 = lVar3;
  return;
}


