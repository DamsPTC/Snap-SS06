/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031f7e74; end: 1031f7ea3;  */

/* WARNING: Possible PIC construction at 0x0001031f7e8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031f7e90) */

void FUN_1031f7e74(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 1031f7ea4; end: 1031f7f77;  */

void FUN_1031f7ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_110623598;
  func_0x000107c613fc(&UNK_110623598,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1106235c0;
  func_0x000107c613fc(&UNK_1106235c0,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  func_0x0001000285a8(0x112f4c070,&UNK_10db9c458);
  func_0x000107c613fc();
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x0001000b64ac(FUN_1031f8b70,puVar2);
  return;
}



/* Entry: 1031f7f78; end: 1031f80bb;  */

void FUN_1031f7f78(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c5fadc(param_5,param_6);
    pcStack_68 = FUN_1031f8b80;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    pcStack_78 = FUN_1031f80bc;
    puStack_70 = &UNK_1106235d8;
    ppuVar2 = &puStack_88;
    uStack_60 = param_1;
    func_0x000107c60bc4(ppuVar2);
    uVar1 = uStack_60;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar1);
    func_0x000107c431e0(param_2);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
  }
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 1031f80bc; end: 1031f810b;  */

void FUN_1031f80bc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1031f810c; end: 1031f821b;  */

code * FUN_1031f810c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c406ec();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x0001000285a8(0x112ec01d0,&UNK_10daddbc0);
    lVar2 = unaff_x20;
    func_0x0001000b637c(unaff_x20);
    func_0x000107c61170(unaff_x20);
    puVar3 = &UNK_110623570;
    func_0x000107c613fc(&UNK_110623570,0x30,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    *(undefined8 *)(puVar3 + 0x20) = param_3;
    *(undefined8 *)(puVar3 + 0x28) = param_4;
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    uVar4 = 0x1031f8b08;
    func_0x0001000c0ebc(0x1031f8b08,puVar3);
    func_0x000107c61574(lVar2);
    func_0x000107c61574(puVar3);
    uVar5 = 0x112f4c048;
    func_0x0001000285a8(0x112f4c048,&UNK_10db9c3b8);
    pcVar1 = FUN_1031f84d8;
    func_0x0001000bfde0(FUN_1031f84d8,0,uVar5);
    func_0x000107c61574(uVar4);
    return pcVar1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031f821c);
  (*pcVar1)();
}



/* Entry: 1031f821c; end: 1031f83fb;  */

uint FUN_1031f821c(ulong *param_1,ulong param_2,ulong param_3,long param_4,ulong param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar7 = *param_1;
  uVar2 = uVar7;
  uVar6 = param_2;
  func_0x000107c40674();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5cb4c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  if (uVar2 == param_2 && uVar6 == param_3) {
    func_0x000107c6142c(uVar6);
  }
  else {
    func_0x000107c605b8(uVar2,uVar6,param_2,param_3,0);
    func_0x000107c6142c(uVar6);
    uVar8 = 0;
    if ((uVar2 & 1) == 0) goto LAB_1031f83cc;
  }
  func_0x000107c5d6f0();
  func_0x000107c61180();
  uVar3 = 0;
  func_0x000101681c68();
  uVar2 = uVar7;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar7);
  if (uVar2 >> 0x3e == 0) {
    if (*(long *)((uVar2 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_1031f8318;
LAB_1031f83c0:
    uVar8 = 0;
  }
  else {
    uVar6 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar6 = uVar2;
    }
    func_0x000107c60480();
    if (uVar6 == 0) goto LAB_1031f83c0;
LAB_1031f8318:
    if ((uVar2 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar2 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1031f83fc);
        (*pcVar1)();
      }
      lVar4 = *(long *)(uVar2 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar4 = 0;
      uVar3 = uVar2;
      func_0x000101681cac();
    }
    func_0x000107c6142c(uVar2);
    lVar5 = lVar4;
    func_0x000107c40258();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar5;
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
    uVar2 = uVar3;
    if ((lVar4 == param_4) && (uVar3 == param_5)) {
      uVar8 = 1;
    }
    else {
      func_0x000107c605b8(lVar4,uVar3,param_4,param_5,0);
      uVar8 = (uint)lVar4;
    }
  }
  func_0x000107c6142c(uVar2);
LAB_1031f83cc:
  return uVar8 & 1;
}



/* Entry: 1031f83fc; end: 1031f8457;  */

void FUN_1031f83fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  func_0x000107c5d6f0();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x000101681c68(0);
  uVar3 = uVar1;
  func_0x000107c5fc54(uVar1,uVar2);
  func_0x000107c61170(uVar1);
  *param_1 = uVar3;
  return;
}



/* Entry: 1031f8458; end: 1031f84d7;  */

void FUN_1031f8458(undefined8 *param_1,ulong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *param_2;
  if (uVar4 >> 0x3e == 0) {
    uVar2 = 0;
    if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_1031f849c;
  }
  else {
    uVar3 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar3 = uVar4;
    }
    func_0x000107c60480();
    if (uVar3 == 0) {
      uVar2 = 0;
      goto LAB_1031f849c;
    }
  }
  if ((uVar4 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031f84d8);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(uVar4 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar2 = 0;
    func_0x000101681cac(0,uVar4);
  }
LAB_1031f849c:
  *param_1 = uVar2;
  return;
}



/* Entry: 1031f84d8; end: 1031f8547;  */

void FUN_1031f84d8(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  puVar1 = &UNK_10db9c410;
  func_0x000107c614e0(&UNK_10db9c410);
  uVar2 = *param_2;
  uStack_38 = uVar2;
  func_0x000107c61174();
  func_0x000107c614bc(param_1,&uStack_38,puVar1);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1031f8548; end: 1031f8723;  */

void FUN_1031f8548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  long lStack_68;
  
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 == 0) {
    func_0x0001000285a8(0x112f4c040,&UNK_10db9c3b0);
    func_0x000104886440();
  }
  else {
    lVar1 = lStack_68;
    func_0x000107c614f0(lStack_68);
    uVar2 = param_1;
    FUN_1031f7ea4(param_1,param_2,param_3,param_4,lVar1);
    puVar3 = &UNK_110623488;
    func_0x000107c613fc(&UNK_110623488,0x50,7);
    *(undefined8 *)(puVar3 + 0x10) = param_5;
    *(undefined8 *)(puVar3 + 0x18) = param_6;
    *(undefined8 *)(puVar3 + 0x20) = param_7;
    *(undefined8 *)(puVar3 + 0x28) = param_8;
    *(undefined8 *)(puVar3 + 0x30) = param_1;
    *(undefined8 *)(puVar3 + 0x38) = param_2;
    *(undefined8 *)(puVar3 + 0x40) = param_3;
    *(undefined8 *)(puVar3 + 0x48) = param_4;
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(param_6);
    func_0x000107c61434(param_8);
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    uVar4 = 0x112f4c048;
    func_0x0001000285a8(0x112f4c048,&UNK_10db9c3b8);
    pcVar5 = FUN_1031f87e0;
    func_0x00010068b194(FUN_1031f87e0,puVar3,uVar4);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1106234b0;
    func_0x000107c613fc(&UNK_1106234b0,0x30,7);
    *(undefined8 *)(puVar3 + 0x10) = param_5;
    *(undefined8 *)(puVar3 + 0x18) = param_6;
    *(undefined8 *)(puVar3 + 0x20) = param_7;
    *(undefined8 *)(puVar3 + 0x28) = param_8;
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(param_6);
    func_0x000107c61434(param_8);
    pcVar6 = FUN_1031f88a8;
    func_0x0001000d5158(FUN_1031f88a8,puVar3,&UNK_110623678);
    func_0x000107c61574(pcVar5);
    func_0x000107c61574(puVar3);
    FUN_1031f88b4();
    func_0x0001000c2068();
    func_0x000107c615e8(lStack_68);
    func_0x000107c61574(pcVar6);
  }
  return;
}



/* Entry: 1031f8724; end: 1031f87df;  */

void FUN_1031f8724(long *param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar1;
  undefined8 in_stack_00000000;
  long lStack_48;
  
  lVar1 = *param_1;
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 == 0) {
    func_0x0001000285a8(0x112f4c058,&UNK_10db9c3f8);
    lStack_48 = lVar1;
    func_0x000100854cb0(&lStack_48);
  }
  else {
    FUN_1031f810c(in_x5,in_x6,in_x7,in_stack_00000000);
    func_0x000107c615e8(lStack_48);
    lStack_48 = lVar1;
    func_0x0001006c71a4(&lStack_48);
    func_0x000107c61574(in_x5);
  }
  return;
}



/* Entry: 1031f87e0; end: 1031f880f;  */

void FUN_1031f87e0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1031f8724(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1031f8810; end: 1031f88a7;  */

void FUN_1031f8810(ushort *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    uVar4 = 2;
  }
  else {
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000107c3f3a8();
    func_0x000107c5fadc(param_5,param_6);
    lVar3 = lVar1;
    func_0x000107c4a388();
    func_0x000107c61170(param_5);
    func_0x000107c61170(lVar1);
    uVar4 = 0x100;
    if ((int)lVar3 == 0) {
      uVar4 = 0;
    }
    uVar4 = uVar4 | (ushort)lVar2;
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1031f88a8; end: 1031f88b3;  */

void FUN_1031f88a8(ushort *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *param_2;
  if (lVar2 == 0) {
    uVar6 = 2;
  }
  else {
    func_0x000107c61174(lVar2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
    lVar3 = lVar2;
    func_0x000107c3f3a8();
    func_0x000107c5fadc(uVar4,uVar1);
    lVar5 = lVar2;
    func_0x000107c4a388();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar2);
    uVar6 = 0x100;
    if ((int)lVar5 == 0) {
      uVar6 = 0;
    }
    uVar6 = uVar6 | (ushort)lVar3;
  }
  *param_1 = uVar6;
  return;
}



/* Entry: 1031f88b4; end: 1031f88f3;  */

void FUN_1031f88b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c050 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9c460;
  func_0x000107c61520(&UNK_10db9c460,&UNK_110623678);
  puRam0000000112f4c050 = puVar1;
  return;
}



/* Entry: 1031f88f4; end: 1031f88ff;  */

void FUN_1031f88f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  code *pcVar10;
  undefined8 *unaff_x20;
  long lStack_68;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 == 0) {
    func_0x0001000285a8(0x112f4c040,&UNK_10db9c3b0);
    func_0x000104886440();
  }
  else {
    lVar5 = lStack_68;
    func_0x000107c614f0(lStack_68);
    uVar6 = param_1;
    FUN_1031f7ea4(param_1,param_2,param_3,param_4,lVar5);
    puVar7 = &UNK_110623488;
    func_0x000107c613fc(&UNK_110623488,0x50,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar1;
    *(undefined8 *)(puVar7 + 0x18) = uVar3;
    *(undefined8 *)(puVar7 + 0x20) = uVar2;
    *(undefined8 *)(puVar7 + 0x28) = uVar4;
    *(undefined8 *)(puVar7 + 0x30) = param_1;
    *(undefined8 *)(puVar7 + 0x38) = param_2;
    *(undefined8 *)(puVar7 + 0x40) = param_3;
    *(undefined8 *)(puVar7 + 0x48) = param_4;
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(uVar3);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    uVar8 = 0x112f4c048;
    func_0x0001000285a8(0x112f4c048,&UNK_10db9c3b8);
    pcVar9 = FUN_1031f87e0;
    func_0x00010068b194(FUN_1031f87e0,puVar7,uVar8);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(puVar7);
    puVar7 = &UNK_1106234b0;
    func_0x000107c613fc(&UNK_1106234b0,0x30,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar1;
    *(undefined8 *)(puVar7 + 0x18) = uVar3;
    *(undefined8 *)(puVar7 + 0x20) = uVar2;
    *(undefined8 *)(puVar7 + 0x28) = uVar4;
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(uVar3);
    func_0x000107c61434(uVar4);
    pcVar10 = FUN_1031f88a8;
    func_0x0001000d5158(FUN_1031f88a8,puVar7,&UNK_110623678);
    func_0x000107c61574(pcVar9);
    func_0x000107c61574(puVar7);
    FUN_1031f88b4();
    func_0x0001000c2068();
    func_0x000107c615e8(lStack_68);
    func_0x000107c61574(pcVar10);
  }
  return;
}



/* Entry: 1031f8900; end: 1031f895b;  */

long FUN_1031f8900(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1031f895c; end: 1031f8a23;  */

undefined8 * FUN_1031f895c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1031f8a24; end: 1031f8a6f;  */

undefined8 * FUN_1031f8a24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1031f8a70; end: 1031f8b1f;  */

int FUN_1031f8a70(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031f8b20; end: 1031f8b6f;  */

void FUN_1031f8b20(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4c060 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4c068;
  func_0x00010002969c(0x112f4c068,&UNK_10db9c408);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f4c060 = puVar2;
  return;
}



/* Entry: 1031f8b70; end: 1031f8b7f;  */

void FUN_1031f8b70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0,uVar5,uVar2,*(undefined8 *)(unaff_x20 + 0x10));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c5fadc(uVar4,uVar1);
    func_0x000107c5fadc(uVar5,uVar2);
    pcStack_68 = FUN_1031f8b80;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    pcStack_78 = FUN_1031f80bc;
    puStack_70 = &UNK_1106235d8;
    ppuVar6 = &puStack_88;
    uStack_60 = param_1;
    func_0x000107c60bc4(ppuVar6);
    uVar1 = uStack_60;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar1);
    func_0x000107c431e0(lVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
  }
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 1031f8b80; end: 1031f8ba3;  */

void FUN_1031f8b80(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100087f6c(&uStack_18);
  return;
}



/* Entry: 1031f8ba4; end: 1031f8d87;  */

void FUN_1031f8ba4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1031f8d88; end: 1031f8f03;  */

undefined1  [16] FUN_1031f8d88(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f130f70);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031f8e38);
  (*pcVar1)();
}



/* Entry: 1031f8f04; end: 1031f8f13;  */

void FUN_1031f8f04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031f8f14; end: 1031f8f33;  */

void FUN_1031f8f14(void)

{
  func_0x000107c61168(&PTR_PTR_112f4c0b8);
  return;
}



/* Entry: 1031f8f34; end: 1031f9103;  */

void FUN_1031f8f34(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  FUN_1031f8f14();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f130fe0);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
    func_0x000107c4253c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c45b00();
    func_0x000107c61170(puVar1);
  }
  puRam0000000113807120 = puVar3;
  return;
}



/* Entry: 1031f9104; end: 1031f91a7;  */

void FUN_1031f9104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110623758;
  func_0x000107c613fc(&UNK_110623758,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1031f91a8,puVar1);
  return;
}



/* Entry: 1031f91a8; end: 1031f93eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031f91a8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 in_x3;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  lVar1 = lStack_68;
  func_0x000107c3f84c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c40bb0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4a440();
      if ((int)lVar2 != 0) {
        func_0x0001000285a8(0x112f4c120,&UNK_10db9c568);
        func_0x000100083b20(&lStack_68);
        lVar2 = lStack_68;
        lVar3 = lStack_68;
        func_0x000107c5b128();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        lVar4 = lVar3;
        func_0x0001000bda74();
        func_0x000107c61170(lVar3);
        func_0x0001000285a8(0x112df90c8,&UNK_10d9c9ad0);
        func_0x000100083b20(&lStack_68);
        lVar2 = lStack_68;
        lVar3 = lStack_68;
        func_0x000107c4a7c8();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
        func_0x0001000bda74();
        func_0x000107c61170(lVar3);
        func_0x000107c6157c(lVar4);
        func_0x000100083b20(&lStack_68);
        uVar5 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
        func_0x000107c61174();
        func_0x000107c61170(lStack_68);
        func_0x000107c6157c(lVar2);
        lVar3 = lVar4;
        lVar8 = lVar2;
        FUN_1031f9718();
        param_1[3] = &UNK_1106239c8;
        lVar6 = lVar3;
        FUN_1031f93fc();
        param_1[4] = lVar6;
        puVar7 = &UNK_1106237a0;
        func_0x000107c613fc(&UNK_1106237a0,0x30,7);
        *param_1 = puVar7;
        func_0x000107c61574(lVar4);
        func_0x000107c61574(lVar2);
        func_0x000107c61170(lVar1);
        *(long *)(puVar7 + 0x10) = lVar3;
        *(undefined8 *)(puVar7 + 0x18) = uVar5;
        *(long *)(puVar7 + 0x20) = lVar8;
        *(undefined8 *)(puVar7 + 0x28) = in_x3;
        return;
      }
      func_0x000107c61170(lVar1);
    }
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1031f93ec; end: 1031f93fb;  */

undefined1  [16] FUN_1031f93ec(void)

{
  return ZEXT816(0x110623780);
}



/* Entry: 1031f93fc; end: 1031f943b;  */

void FUN_1031f93fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9c678;
  func_0x000107c61520(&DAT_10db9c678,&UNK_1106239c8);
  puRam0000000112f4c128 = puVar1;
  return;
}



/* Entry: 1031f943c; end: 1031f94db;  */

code * FUN_1031f943c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 unaff_x20;
  
  func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
  func_0x000107c4a7e8();
  func_0x000107c61180();
  uVar1 = unaff_x20;
  func_0x0001000b637c();
  func_0x000107c61170(unaff_x20);
  uVar2 = 0x112f4c130;
  func_0x0001000285a8(0x112f4c130,&UNK_10db9c660);
  pcVar3 = FUN_1031f94dc;
  func_0x0001000bfde0(FUN_1031f94dc,0,uVar2);
  func_0x000107c61574(uVar1);
  return pcVar3;
}



/* Entry: 1031f94dc; end: 1031f9603;  */

void FUN_1031f94dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar6 = *param_2;
  *param_1 = 0;
  puVar3 = &UNK_110623870;
  func_0x000107c613fc(&UNK_110623870,0x18,7);
  *(undefined8 **)(puVar3 + 0x10) = param_1;
  puVar4 = &UNK_110623898;
  func_0x000107c613fc(&UNK_110623898,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1031f96d4;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_50 = FUN_1031f96dc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101379b3c;
  puStack_58 = &UNK_1106238b0;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(uVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x86,0x13,0x21,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031f9604);
  (*pcVar2)();
}



/* Entry: 1031f9604; end: 1031f96d3;  */

void FUN_1031f9604(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  iVar1 = (int)&uStack_60;
  if (param_1 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    lStack_28 = 0;
    uStack_30 = 0;
  }
  else {
    func_0x000107c43638();
    func_0x000107c61180();
    if (param_1 == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      lStack_48 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x000107c60234(&uStack_60);
      func_0x000107c615e8(param_1);
    }
    uStack_38 = uStack_58;
    uStack_40 = uStack_60;
    lStack_28 = lStack_48;
    uStack_30 = uStack_50;
    if (lStack_48 != 0) {
      uVar2 = 0x112f4c138;
      func_0x0001000285a8(0x112f4c138,&UNK_10db9c570);
      func_0x000107c6147c(&uStack_60,&uStack_40,PTR___sypN_11034f1a8 + 8,uVar2,6);
      uVar2 = uStack_60;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      goto LAB_1031f96b8;
    }
  }
  func_0x00010006e7f4(&uStack_40);
  uVar2 = 0;
LAB_1031f96b8:
  uVar3 = *param_2;
  *param_2 = uVar2;
  func_0x000107c615e8(uVar3);
  return;
}



/* Entry: 1031f96d4; end: 1031f96db;  */

void FUN_1031f96d4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x10);
  iVar1 = (int)&uStack_60;
  if (param_1 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    lStack_28 = 0;
    uStack_30 = 0;
  }
  else {
    func_0x000107c43638();
    func_0x000107c61180();
    if (param_1 == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      lStack_48 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x000107c60234(&uStack_60);
      func_0x000107c615e8(param_1);
    }
    uStack_38 = uStack_58;
    uStack_40 = uStack_60;
    lStack_28 = lStack_48;
    uStack_30 = uStack_50;
    if (lStack_48 != 0) {
      uVar2 = 0x112f4c138;
      func_0x0001000285a8(0x112f4c138,&UNK_10db9c570);
      func_0x000107c6147c(&uStack_60,&uStack_40,PTR___sypN_11034f1a8 + 8,uVar2,6);
      uVar2 = uStack_60;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      goto LAB_1031f96b8;
    }
  }
  func_0x00010006e7f4(&uStack_40);
  uVar2 = 0;
LAB_1031f96b8:
  uVar3 = *puVar4;
  *puVar4 = uVar2;
  func_0x000107c615e8(uVar3);
  return;
}



/* Entry: 1031f96dc; end: 1031f96fb;  */

void FUN_1031f96dc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031f96fc; end: 1031f9717;  */

void FUN_1031f96fc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1031f9718; end: 1031f9a27;  */

undefined8 FUN_1031f9718(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  (**(code **)(lVar4 + 0x68))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1
            );
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8(PTR_PTR_1126ae790);
  uVar3 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f131000);
  func_0x000107c5f800();
  func_0x000107c470d0(puVar2);
  func_0x000107c61170(uVar3);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return param_1;
}



/* Entry: 1031f9a28; end: 1031f9a3f;  */

undefined * FUN_1031f9a28(void)

{
  return PTR_s_storyParams_1126743e0;
}



/* Entry: 1031f9a40; end: 1031f9ae7;  */

void FUN_1031f9a40(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_148 [88];
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
  
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_58 = param_2[7];
  uStack_60 = param_2[6];
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  uStack_68 = param_2[5];
  uStack_70 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_48 = param_2[9];
  uStack_50 = param_2[8];
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_40 = param_2[10];
  uStack_a0 = param_2[10];
  FUN_1031f4780(&uStack_90,auStack_148);
  func_0x000107c614bc(param_1,&uStack_f0,param_3);
  FUN_1031fa4c0(&uStack_f0,0x112f4bf28,&UNK_10db9c720);
  return;
}



/* Entry: 1031f9ae8; end: 1031f9aef;  */

void FUN_1031f9ae8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_148 [88];
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
  
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_58 = param_2[7];
  uStack_60 = param_2[6];
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  uStack_68 = param_2[5];
  uStack_70 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_48 = param_2[9];
  uStack_50 = param_2[8];
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_40 = param_2[10];
  uStack_a0 = param_2[10];
  FUN_1031f4780(&uStack_90,auStack_148);
  func_0x000107c614bc(param_1,&uStack_f0);
  FUN_1031fa4c0(&uStack_f0,0x112f4bf28,&UNK_10db9c720);
  return;
}



/* Entry: 1031f9af0; end: 1031f9bdb;  */

void FUN_1031f9af0(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lStack_48;
  
  uVar5 = *param_1;
  uVar2 = param_1[1];
  uVar1 = uVar5 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 != 0) && (func_0x0001000d224c(&lStack_48), lStack_48 != 0)) {
    lVar3 = lStack_48;
    func_0x000107c614f0(lStack_48);
    puVar4 = PTR_PTR_1126cbde0;
    func_0x000107c610f8(PTR_PTR_1126cbde0);
    func_0x000107c5fadc(uVar5,uVar2);
    func_0x000107c48c7c(puVar4);
    func_0x000107c61170(uVar5);
    FUN_1031f943c(puVar4,lVar3);
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(puVar4);
    return;
  }
  func_0x0001000285a8(0x112f4c1a0,&UNK_10db9c718);
  lStack_48 = 0;
  func_0x000100854cb0(&lStack_48);
  return;
}



/* Entry: 1031f9bdc; end: 1031f9be7;  */

void FUN_1031f9bdc(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  long lStack_48;
  
  uVar5 = *param_1;
  uVar2 = param_1[1];
  uVar1 = uVar5 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 != 0) &&
     (func_0x0001000d224c(&lStack_48,param_1,*(undefined8 *)(unaff_x20 + 0x10),
                          *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                          *(undefined8 *)(unaff_x20 + 0x28)), lStack_48 != 0)) {
    lVar3 = lStack_48;
    func_0x000107c614f0(lStack_48);
    puVar4 = PTR_PTR_1126cbde0;
    func_0x000107c610f8(PTR_PTR_1126cbde0);
    func_0x000107c5fadc(uVar5,uVar2);
    func_0x000107c48c7c(puVar4);
    func_0x000107c61170(uVar5);
    FUN_1031f943c(puVar4,lVar3);
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(puVar4);
    return;
  }
  func_0x0001000285a8(0x112f4c1a0,&UNK_10db9c718);
  lStack_48 = 0;
  func_0x000100854cb0(&lStack_48);
  return;
}



/* Entry: 1031f9be8; end: 1031f9daf;  */

undefined8 *** FUN_1031f9be8(long *param_1)

{
  undefined8 **ppuVar1;
  code *pcVar2;
  long lVar3;
  undefined8 ***pppuVar4;
  undefined *puVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  undefined8 **ppuStack_48;
  
  lVar8 = *param_1;
  if (lVar8 == 0) {
    func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
    pppuVar6 = (undefined8 ***)PTR_PTR_1126af5d0;
    func_0x000107c61168();
    func_0x000107c42d78();
    func_0x000107c61180();
    pppuVar7 = &ppuStack_48;
    ppuStack_48 = pppuVar6;
    func_0x000100854cb0(pppuVar7);
    goto LAB_1031f9d8c;
  }
  pppuVar6 = (undefined8 ***)PTR_PTR_1126bc960;
  func_0x000107c61168(PTR_PTR_1126bc960);
  func_0x000107c615f0(lVar8);
  func_0x000107c5d864(pppuVar6);
  func_0x000107c61180();
  func_0x0001000d224c(&ppuStack_48);
  ppuVar1 = ppuStack_48;
  if ((undefined8 ***)ppuStack_48 == (undefined8 ***)0x0) {
LAB_1031f9cb4:
    pppuVar4 = (undefined8 ***)PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar5 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c42d78();
    func_0x000107c61180();
    func_0x000107c4a8a4(pppuVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
  }
  else {
    lVar3 = lVar8;
    func_0x000107c5cae8();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031f9db0);
      (*pcVar2)();
    }
    pppuVar7 = (undefined8 ***)ppuVar1;
    func_0x000107c5ded4();
    func_0x000107c61180();
    func_0x000107c615e8(ppuVar1);
    func_0x000107c61170(lVar3);
    pppuVar4 = pppuVar7;
    func_0x000107c4da04();
    func_0x000107c61180();
    func_0x000107c615e8(pppuVar7);
    if (pppuVar4 == (undefined8 ***)0x0) goto LAB_1031f9cb4;
  }
  func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
  pppuVar7 = pppuVar4;
  func_0x0001000b637c(pppuVar4);
  func_0x000107c61170(pppuVar4);
  func_0x000107c615e8(lVar8);
LAB_1031f9d8c:
  func_0x000107c61170(pppuVar6);
  return pppuVar7;
}



/* Entry: 1031f9db0; end: 1031f9deb;  */

void FUN_1031f9db0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031f9dec; end: 1031f9df7;  */

undefined8 *** FUN_1031f9dec(long *param_1)

{
  undefined8 **ppuVar1;
  code *pcVar2;
  long lVar3;
  undefined8 ***pppuVar4;
  undefined *puVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  long unaff_x20;
  undefined8 **ppuStack_48;
  
  lVar8 = *param_1;
  if (lVar8 == 0) {
    func_0x0001000285a8(0x112d63f00,&UNK_10d929700,*(undefined8 *)(unaff_x20 + 0x18),
                        *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
    pppuVar6 = (undefined8 ***)PTR_PTR_1126af5d0;
    func_0x000107c61168();
    func_0x000107c42d78();
    func_0x000107c61180();
    pppuVar7 = &ppuStack_48;
    ppuStack_48 = pppuVar6;
    func_0x000100854cb0(pppuVar7);
    goto LAB_1031f9d8c;
  }
  pppuVar6 = (undefined8 ***)PTR_PTR_1126bc960;
  func_0x000107c61168(PTR_PTR_1126bc960,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615f0(lVar8);
  func_0x000107c5d864(pppuVar6);
  func_0x000107c61180();
  func_0x0001000d224c(&ppuStack_48);
  ppuVar1 = ppuStack_48;
  if ((undefined8 ***)ppuStack_48 == (undefined8 ***)0x0) {
LAB_1031f9cb4:
    pppuVar4 = (undefined8 ***)PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar5 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c42d78();
    func_0x000107c61180();
    func_0x000107c4a8a4(pppuVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
  }
  else {
    lVar3 = lVar8;
    func_0x000107c5cae8();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031f9db0);
      (*pcVar2)();
    }
    pppuVar7 = (undefined8 ***)ppuVar1;
    func_0x000107c5ded4();
    func_0x000107c61180();
    func_0x000107c615e8(ppuVar1);
    func_0x000107c61170(lVar3);
    pppuVar4 = pppuVar7;
    func_0x000107c4da04();
    func_0x000107c61180();
    func_0x000107c615e8(pppuVar7);
    if (pppuVar4 == (undefined8 ***)0x0) goto LAB_1031f9cb4;
  }
  func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
  pppuVar7 = pppuVar4;
  func_0x0001000b637c(pppuVar4);
  func_0x000107c61170(pppuVar4);
  func_0x000107c615e8(lVar8);
LAB_1031f9d8c:
  func_0x000107c61170(pppuVar6);
  return pppuVar7;
}



/* Entry: 1031f9df8; end: 1031fa0a3;  */

void FUN_1031f9df8(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcStack_2f0;
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
  undefined8 uStack_24f;
  code *pcStack_240;
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_19f;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
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
  undefined8 uStack_c8;
  undefined8 uStack_b7;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  
  uVar8 = *param_2;
  pcStack_68 = (code *)0x0;
  puVar2 = &UNK_1106239f8;
  func_0x000107c613fc(&UNK_1106239f8,0x18,7);
  *(code ***)(puVar2 + 0x10) = &pcStack_68;
  puVar3 = &UNK_110623a20;
  puVar7 = (undefined *)0x20;
  func_0x000107c613fc(&UNK_110623a20,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x1031fa448;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  pcStack_170 = FUN_1031fa450;
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0x42000000;
  puStack_180 = &UNK_101ac64d4;
  puStack_178 = &UNK_110623a38;
  ppuVar4 = &puStack_190;
  puStack_168 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar6 = puStack_168;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar6);
  func_0x000107c4c754(uVar8);
  func_0x000107c60bd0(ppuVar4);
  if (pcStack_68 == (code *)0x0) {
    func_0x0001031fa48c(&puStack_190);
  }
  else {
    pcVar1 = pcStack_68;
    func_0x000107c61174();
    pcVar5 = pcVar1;
    FUN_1031fa500();
    pcStack_2f0 = pcVar1;
    func_0x0001031e60f0(&pcStack_2f0);
    uStack_1b8 = uStack_268;
    uStack_1c0 = uStack_270;
    uStack_1b0 = uStack_260;
    uStack_19f = uStack_24f;
    uStack_1f8 = uStack_2a8;
    uStack_200 = uStack_2b0;
    uStack_1e8 = uStack_298;
    uStack_1f0 = uStack_2a0;
    uStack_1d8 = uStack_288;
    uStack_1e0 = uStack_290;
    uStack_1c8 = uStack_278;
    uStack_1d0 = uStack_280;
    uStack_238 = uStack_2e8;
    pcStack_240 = pcStack_2f0;
    uStack_228 = uStack_2d8;
    uStack_230 = uStack_2e0;
    uStack_218 = uStack_2c8;
    uStack_220 = uStack_2d0;
    uStack_208 = uStack_2b8;
    uStack_210 = uStack_2c0;
    func_0x0001031e6100(&pcStack_240);
    uStack_e0 = uStack_1c8;
    uStack_e8 = uStack_1d0;
    uStack_d0 = uStack_1b8;
    uStack_d8 = uStack_1c0;
    uStack_c8 = uStack_1b0;
    uStack_b7 = uStack_19f;
    uStack_120 = uStack_208;
    uStack_128 = uStack_210;
    uStack_110 = uStack_1f8;
    uStack_118 = uStack_200;
    uStack_100 = uStack_1e8;
    uStack_108 = uStack_1f0;
    uStack_f0 = uStack_1d8;
    uStack_f8 = uStack_1e0;
    uStack_150 = uStack_238;
    pcStack_158 = pcStack_240;
    uStack_140 = uStack_228;
    uStack_148 = uStack_230;
    uStack_130 = uStack_218;
    uStack_138 = uStack_220;
    puVar6 = PTR_PTR_1126b5b00;
    func_0x000107c61168();
    func_0x000107c61174(pcVar1);
    func_0x000107c4de40();
    func_0x000107c61180();
    func_0x000107c61170(pcVar1);
    puStack_190 = (undefined *)0x0;
    uStack_188 = 0;
    puStack_180 = (undefined *)0x6563634174616863;
    puStack_178 = (undefined *)0xed000079726f7373;
    uStack_a0 = 1;
    uStack_a8 = 0;
    uStack_160 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0x300;
    uStack_78 = 0;
    uStack_70 = 1;
    pcStack_170 = pcVar5;
    puStack_168 = puVar7;
    puStack_98 = puVar6;
    func_0x0001031fa4bc(&puStack_190);
  }
  func_0x000107c610b4(param_1,&puStack_190,0x128);
  pcVar1 = pcStack_68;
  func_0x000107c61574(puVar2);
  func_0x000107c61170(pcVar1);
  puVar2 = puVar3;
  func_0x000107c61544(puVar3,"",0x6e,0x50,0x25,1);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031fa0a4);
  (*pcVar1)();
}



/* Entry: 1031fa0a4; end: 1031fa103;  */

/* WARNING: Possible PIC construction at 0x0001031fa0e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031fa0e4) */

void FUN_1031fa0a4(long param_1,long *param_2)

{
  if (param_1 == 0) {
    param_1 = *param_2;
    *param_2 = 0;
  }
  else {
    func_0x000107c45130();
    func_0x000107c61180();
    func_0x000107c45034();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031fa104; end: 1031fa10f;  */

code * FUN_1031fa104(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 *unaff_x20;
  undefined *apuStack_60 [2];
  
  uVar1 = *unaff_x20;
  uVar6 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar7 = unaff_x20[3];
  puVar3 = &UNK_10db9c580;
  func_0x000107c614e0();
  puVar4 = &UNK_10db9c5a0;
  apuStack_60[0] = puVar3;
  func_0x000107c614e0(&UNK_10db9c5a0,apuStack_60);
  pcVar5 = FUN_1031f9ae8;
  func_0x0001000d5158(FUN_1031f9ae8,puVar4,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar4);
  puVar4 = PTR___sSSSQsWP_11034da98;
  func_0x0001000c2068(PTR___sSSSQsWP_11034da98);
  func_0x000107c61574(pcVar5);
  puVar3 = &UNK_110623908;
  func_0x000107c613fc(&UNK_110623908,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar2;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  func_0x000107c6157c(uVar1);
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  func_0x000107c61174();
  uVar8 = 0x112f4c130;
  func_0x0001000285a8(0x112f4c130,&UNK_10db9c660);
  pcVar5 = FUN_1031f9bdc;
  func_0x00010068b194(FUN_1031f9bdc,puVar3,uVar8);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar3);
  uVar9 = uVar7;
  func_0x000100471e0c(uVar7,0);
  func_0x000107c61574(pcVar5);
  puVar3 = &UNK_110623930;
  func_0x000107c613fc(&UNK_110623930,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar2;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar6);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(uVar7);
  uVar8 = 0x112d657e8;
  func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
  pcVar5 = FUN_1031f9dec;
  func_0x00010068b194(FUN_1031f9dec,puVar3,uVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar3);
  uVar8 = 0x112f4c140;
  func_0x0001000285a8(0x112f4c140,&UNK_10db9c670);
  pcVar10 = FUN_1031f9df8;
  func_0x0001000bfde0(FUN_1031f9df8,0,uVar8);
  func_0x000107c61574(pcVar5);
  return pcVar10;
}



/* Entry: 1031fa110; end: 1031fa133;  */

void FUN_1031fa110(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1031fa134();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1031fa134; end: 1031fa173;  */

void FUN_1031fa134(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9c6a0;
  func_0x000107c61520(&DAT_10db9c6a0,&UNK_1106239c8);
  puRam0000000112f4c148 = puVar1;
  return;
}



/* Entry: 1031fa174; end: 1031fa177;  */

void FUN_1031fa174(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4c150 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4c158;
  func_0x00010002969c(0x112f4c158,&UNK_10db9c698);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4c150 = puVar2;
  return;
}



/* Entry: 1031fa178; end: 1031fa1c7;  */

void FUN_1031fa178(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4c150 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4c158;
  func_0x00010002969c(0x112f4c158,&UNK_10db9c698);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4c150 = puVar2;
  return;
}



/* Entry: 1031fa1c8; end: 1031fa1df;  */

undefined ** FUN_1031fa1c8(void)

{
  return &PTR_DAT_11062dbb8;
}



/* Entry: 1031fa1e0; end: 1031fa217;  */

undefined * FUN_1031fa1e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  FUN_1031f93fc();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 1031fa218; end: 1031fa27b;  */

long FUN_1031fa218(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1031fa27c; end: 1031fa35b;  */

undefined8 * FUN_1031fa27c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c6157c();
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar3);
  return param_1;
}



/* Entry: 1031fa35c; end: 1031fa3af;  */

undefined8 * FUN_1031fa35c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1031fa3b0; end: 1031fa44f;  */

int FUN_1031fa3b0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031fa450; end: 1031fa46f;  */

void FUN_1031fa450(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031fa470; end: 1031fa4bf;  */

void FUN_1031fa470(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1031fa4c0; end: 1031fa4ff;  */

undefined8 FUN_1031fa4c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1031fa500; end: 1031fa5cf;  */

undefined1  [16] FUN_1031fa500(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x735f615f646e6573;
  func_0x000107c5fadc(0x735f615f646e6573,0xee0072656b636974);
  uVar3 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f131030);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031fa5d0);
  (*pcVar1)();
}



/* Entry: 1031fa5d0; end: 1031fa657;  */

void FUN_1031fa5d0(undefined8 param_1)

{
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1031fa61c,param_1);
  return;
}



/* Entry: 1031fa658; end: 1031fa667;  */

undefined1  [16] FUN_1031fa658(void)

{
  return ZEXT816(0x110623b40);
}



/* Entry: 1031fa668; end: 1031fa6a7;  */

void FUN_1031fa668(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c1a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9c7b8;
  func_0x000107c61520(&DAT_10db9c7b8,&UNK_110623c38);
  puRam0000000112f4c1a8 = puVar1;
  return;
}



/* Entry: 1031fa6a8; end: 1031fa6cf;  */

void FUN_1031fa6a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x000103b93f50();
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 1031fa6d0; end: 1031fa753;  */

long FUN_1031fa6d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  lVar3 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar4 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  *(undefined ***)(lVar3 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
  return lVar3;
}



/* Entry: 1031fa754; end: 1031fa7eb;  */

void FUN_1031fa754(byte *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  lVar1 = param_2[1];
  uVar5 = param_2[2];
  puVar2 = &UNK_10db9c878;
  func_0x000107c614e0(&UNK_10db9c878);
  if (lVar1 == 0) {
    func_0x000107c61574();
    bVar4 = 0;
  }
  else {
    func_0x000107c61434(lVar1);
    FUN_1031fac54(uVar3,lVar1,uVar5,puVar2);
    bVar4 = (byte)uVar3;
    func_0x000107c61574(puVar2);
    func_0x000107c6142c(lVar1);
  }
  *param_1 = bVar4 & 1;
  return;
}



/* Entry: 1031fa7ec; end: 1031fa94b;  */

void FUN_1031fa7ec(undefined8 param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_177;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
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
  undefined8 uStack_8f;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*param_2 == '\x01') {
    func_0x0001000d224c(&uStack_168);
    uVar1 = uStack_168;
    func_0x000107c4a49c();
    func_0x000107c615e8();
    if ((int)uVar1 != 0) {
      FUN_1031fad70();
      func_0x0001031e60c4(&uStack_218);
      uStack_b8 = uStack_1a0;
      uStack_c0 = uStack_1a8;
      uStack_a8 = uStack_190;
      uStack_b0 = uStack_198;
      uStack_a0 = uStack_188;
      uStack_8f = uStack_177;
      uStack_f8 = uStack_1e0;
      uStack_100 = uStack_1e8;
      uStack_e8 = uStack_1d0;
      uStack_f0 = uStack_1d8;
      uStack_d8 = uStack_1c0;
      uStack_e0 = uStack_1c8;
      uStack_c8 = uStack_1b0;
      uStack_d0 = uStack_1b8;
      uStack_128 = uStack_210;
      uStack_130 = uStack_218;
      uStack_118 = uStack_200;
      uStack_120 = uStack_208;
      uStack_108 = uStack_1f0;
      uStack_110 = uStack_1f8;
      puVar2 = PTR_PTR_1126b5b00;
      func_0x000107c61168();
      func_0x000107c5b328();
      func_0x000107c61180();
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0xd000000000000010;
      uStack_150 = 0x800000010f131060;
      uStack_78 = 3;
      uStack_80 = 0;
      uStack_138 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0x300;
      uStack_50 = 0;
      uStack_48 = 2;
      uStack_140 = param_3;
      puStack_70 = puVar2;
      FUN_1031fad60(&uStack_168);
      goto LAB_1031fa924;
    }
  }
  func_0x0001031fac24(&uStack_168);
LAB_1031fa924:
  func_0x000107c610b4(param_1,&uStack_168,0x128);
  return;
}



/* Entry: 1031fa94c; end: 1031fa953;  */

void FUN_1031fa94c(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_177;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
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
  undefined8 uStack_8f;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*param_2 == '\x01') {
    func_0x0001000d224c(&uStack_168);
    uVar1 = uStack_168;
    func_0x000107c4a49c();
    func_0x000107c615e8();
    if ((int)uVar1 != 0) {
      FUN_1031fad70();
      func_0x0001031e60c4(&uStack_218);
      uStack_b8 = uStack_1a0;
      uStack_c0 = uStack_1a8;
      uStack_a8 = uStack_190;
      uStack_b0 = uStack_198;
      uStack_a0 = uStack_188;
      uStack_8f = uStack_177;
      uStack_f8 = uStack_1e0;
      uStack_100 = uStack_1e8;
      uStack_e8 = uStack_1d0;
      uStack_f0 = uStack_1d8;
      uStack_d8 = uStack_1c0;
      uStack_e0 = uStack_1c8;
      uStack_c8 = uStack_1b0;
      uStack_d0 = uStack_1b8;
      uStack_128 = uStack_210;
      uStack_130 = uStack_218;
      uStack_118 = uStack_200;
      uStack_120 = uStack_208;
      uStack_108 = uStack_1f0;
      uStack_110 = uStack_1f8;
      puVar2 = PTR_PTR_1126b5b00;
      func_0x000107c61168();
      func_0x000107c5b328();
      func_0x000107c61180();
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0xd000000000000010;
      uStack_150 = 0x800000010f131060;
      uStack_78 = 3;
      uStack_80 = 0;
      uStack_138 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0x300;
      uStack_50 = 0;
      uStack_48 = 2;
      puStack_70 = puVar2;
      FUN_1031fad60(&uStack_168);
      goto LAB_1031fa924;
    }
  }
  func_0x0001031fac24(&uStack_168);
LAB_1031fa924:
  func_0x000107c610b4(param_1,&uStack_168,0x128);
  return;
}



/* Entry: 1031fa954; end: 1031fa9ff;  */

undefined8 FUN_1031fa954(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  
  uVar5 = *unaff_x20;
  pcVar1 = FUN_1031fa754;
  func_0x0001000bfde0(param_1,FUN_1031fa754,0,PTR___sSbN_11034dd40);
  puVar2 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(pcVar1);
  func_0x000107c6157c(uVar5);
  uVar3 = 0x112f4c1b0;
  func_0x0001000285a8(0x112f4c1b0,&UNK_10db9c7a0);
  uVar4 = 0x1031fad6c;
  func_0x0001000bfde0(0x1031fad6c,uVar5,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar5);
  return uVar4;
}



/* Entry: 1031faa00; end: 1031faa23;  */

void FUN_1031faa00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1031faa24();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1031faa24; end: 1031faa63;  */

void FUN_1031faa24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c1b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9c7e0;
  func_0x000107c61520(&DAT_10db9c7e0,&UNK_110623c38);
  puRam0000000112f4c1b8 = puVar1;
  return;
}



/* Entry: 1031faa64; end: 1031faa67;  */

void FUN_1031faa64(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4c1c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4c1c8;
  func_0x00010002969c(0x112f4c1c8,&UNK_10db9c7d8);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4c1c0 = puVar2;
  return;
}



/* Entry: 1031faa68; end: 1031faab7;  */

void FUN_1031faa68(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4c1c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4c1c8;
  func_0x00010002969c(0x112f4c1c8,&UNK_10db9c7d8);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4c1c0 = puVar2;
  return;
}



/* Entry: 1031faab8; end: 1031faacf;  */

undefined ** FUN_1031faab8(void)

{
  return &PTR_DAT_110623bf8;
}



/* Entry: 1031faad0; end: 1031fab07;  */

undefined * FUN_1031faad0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  FUN_1031fa668();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 1031fab08; end: 1031fab1f;  */

undefined1  [16] FUN_1031fab08(void)

{
  return ZEXT816(0x110623c38);
}



/* Entry: 1031fab20; end: 1031fab8f;  */

undefined8 * FUN_1031fab20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1031fab90; end: 1031fac53;  */

int FUN_1031fab90(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031fac54; end: 1031fad5f;  */

undefined1 FUN_1031fac54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_90;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c614bc(&uStack_50,&uStack_40,param_4);
  uStack_70 = uStack_50;
  uStack_68 = uStack_48;
  func_0x000107c61434(uStack_48);
  puVar2 = &uStack_70;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_3 == 0) {
    func_0x000107c6142c(uStack_48);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(auStack_90,param_3);
    func_0x000107c615e8(param_3);
    func_0x000107c6142c(uStack_48);
    func_0x000100102924(auStack_90,&uStack_70);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_90,&uStack_70,uVar3,PTR___sSbN_11034dd40,6);
  if (iVar1 == 0) {
    auStack_90[0] = 2;
  }
  return auStack_90[0];
}



/* Entry: 1031fad60; end: 1031fad6f;  */

void FUN_1031fad60(void)

{
  return;
}



/* Entry: 1031fad70; end: 1031faebb;  */

undefined1  [16] FUN_1031fad70(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x735f6f745f646461;
  func_0x000107c5fadc(0x735f6f745f646461,0xec00000079726f74);
  uVar3 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f131080);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031fae3c);
  (*pcVar1)();
}



/* Entry: 1031faebc; end: 1031fafbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031faebc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_70;
  undefined1 uStack_68;
  
  func_0x000100083b20(&lStack_70);
  lVar3 = lStack_70;
  func_0x000100083b20(&lStack_70);
  lVar1 = lStack_70;
  uVar5 = *(undefined8 *)(lStack_70 + _DAT_112fc2060);
  func_0x000107c6157c(uVar5);
  func_0x000107c61170(lVar1);
  func_0x0001000d224c(&lStack_70);
  lVar1 = lStack_70;
  lVar2 = lStack_70;
  func_0x000107c5ad98(lStack_70,param_3,lVar3,uStack_68);
  func_0x000107c615e8(lVar1);
  if ((int)lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    func_0x000107c61574(uVar5);
    puVar4 = (undefined *)0x0;
    uVar5 = 0;
  }
  else {
    func_0x0001000d224c(&lStack_70);
    lVar3 = lStack_70;
    func_0x000107c4a518();
    func_0x000107c615e8(lStack_70);
    func_0x000107c61574();
    FUN_1031fafcc();
    *(char *)param_1 = (char)lVar3;
    puVar4 = &UNK_110623fa8;
  }
  param_1[3] = puVar4;
  param_1[4] = uVar5;
  return;
}



/* Entry: 1031fafbc; end: 1031fafcb;  */

undefined1  [16] FUN_1031fafbc(void)

{
  return ZEXT816(0x110623dc8);
}



/* Entry: 1031fafcc; end: 1031fb00b;  */

void FUN_1031fafcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c210 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9c958;
  func_0x000107c61520(&DAT_10db9c958,&UNK_110623fa8);
  puRam0000000112f4c210 = puVar1;
  return;
}



/* Entry: 1031fb00c; end: 1031fb1bb;  */

long FUN_1031fb00c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_c0 [16];
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
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 10;
  *(undefined8 *)(lVar1 + 0x10) = 5;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar2 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar3 = *unaff_x20;
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uVar3 = 0x112f4b528;
  func_0x0001000285a8(0x112f4b528,&UNK_10db9ab20);
  *(undefined8 *)(lVar1 + 0x60) = uVar3;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[5];
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  uVar3 = 0x112f4b530;
  func_0x0001000285a8(0x112f4b530,&UNK_10db9ab28);
  *(undefined8 *)(lVar1 + 0x88) = uVar3;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[6];
  uStack_98 = unaff_x20[9];
  uStack_a0 = unaff_x20[8];
  *(undefined8 *)(lVar1 + 0x78) = unaff_x20[7];
  *(undefined8 *)(lVar1 + 0x70) = uVar3;
  uVar3 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar1 + 0xb0) = uVar3;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  *(undefined8 *)(lVar1 + 0xa0) = unaff_x20[9];
  *(undefined8 *)(lVar1 + 0x98) = uVar3;
  *(undefined8 *)(lVar1 + 0xd8) = uVar2;
  *(undefined ***)(lVar1 + 0xe0) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 200) = uStack_a8;
  *(undefined8 *)(lVar1 + 0xc0) = uStack_b0;
  FUN_1031fbee0(&uStack_70,auStack_c0,0x112f4b520,&UNK_10db9b280);
  FUN_1031fbee0(&uStack_80,auStack_c0,0x112f4b528,&UNK_10db9ab20);
  FUN_1031fbee0(&uStack_90,auStack_c0,0x112f4b530,&UNK_10db9ab28);
  FUN_1031fbee0(&uStack_a0,auStack_c0,0x112f4b538,&UNK_10db9ab30);
  FUN_1031fbee0(&uStack_b0,auStack_c0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 1031fb1bc; end: 1031fb1ff;  */

void FUN_1031fb1bc(undefined8 *param_1)

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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1031fbe00(&uStack_80);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[9] = uStack_38;
  param_1[8] = uStack_40;
  param_1[0xb] = uStack_28;
  param_1[10] = uStack_30;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1031fb200; end: 1031fb203;  */

long FUN_1031fb200(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_c0 [16];
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
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 10;
  *(undefined8 *)(lVar1 + 0x10) = 5;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar2 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar3 = *unaff_x20;
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uVar3 = 0x112f4b528;
  func_0x0001000285a8(0x112f4b528,&UNK_10db9ab20);
  *(undefined8 *)(lVar1 + 0x60) = uVar3;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[5];
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  uVar3 = 0x112f4b530;
  func_0x0001000285a8(0x112f4b530,&UNK_10db9ab28);
  *(undefined8 *)(lVar1 + 0x88) = uVar3;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[6];
  uStack_98 = unaff_x20[9];
  uStack_a0 = unaff_x20[8];
  *(undefined8 *)(lVar1 + 0x78) = unaff_x20[7];
  *(undefined8 *)(lVar1 + 0x70) = uVar3;
  uVar3 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar1 + 0xb0) = uVar3;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  *(undefined8 *)(lVar1 + 0xa0) = unaff_x20[9];
  *(undefined8 *)(lVar1 + 0x98) = uVar3;
  *(undefined8 *)(lVar1 + 0xd8) = uVar2;
  *(undefined ***)(lVar1 + 0xe0) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 200) = uStack_a8;
  *(undefined8 *)(lVar1 + 0xc0) = uStack_b0;
  FUN_1031fbee0(&uStack_70,auStack_c0,0x112f4b520,&UNK_10db9b280);
  FUN_1031fbee0(&uStack_80,auStack_c0,0x112f4b528,&UNK_10db9ab20);
  FUN_1031fbee0(&uStack_90,auStack_c0,0x112f4b530,&UNK_10db9ab28);
  FUN_1031fbee0(&uStack_a0,auStack_c0,0x112f4b538,&UNK_10db9ab30);
  FUN_1031fbee0(&uStack_b0,auStack_c0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 1031fb204; end: 1031fb897;  */

undefined8 FUN_1031fb204(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uStack_258;
  long lStack_250;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
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
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  long lStack_a8;
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
  
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_c0 = param_1[0xc];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  puVar2 = &UNK_10db9ca10;
  func_0x000107c614e0(&UNK_10db9ca10);
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  lStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  if (lStack_a8 == 0) {
    func_0x000107c61574();
    return 0;
  }
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_180 = uStack_1e0;
  uStack_178 = uStack_1d8;
  uStack_170 = uStack_1d0;
  uStack_168 = uStack_1c8;
  uStack_160 = uStack_1c0;
  uStack_158 = uStack_1b8;
  uStack_150 = uStack_1b0;
  uStack_148 = uStack_1a8;
  uStack_140 = uStack_1a0;
  uStack_138 = uStack_198;
  uStack_130 = uStack_190;
  uStack_128 = uStack_188;
  func_0x0001031fbf28(&uStack_1e0,&puStack_240);
  puVar3 = &uStack_180;
  FUN_1031fbcdc(puVar3,&uStack_120,puVar2);
  func_0x000107c61574(puVar2);
  func_0x0001031fbf5c(&uStack_b0);
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  puVar4 = puVar3;
  func_0x000107c42e84();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  uStack_258 = 0;
  lStack_250 = 0;
  puVar2 = &UNK_110623ff8;
  func_0x000107c613fc(&UNK_110623ff8,0x18,7);
  *(undefined8 **)(puVar2 + 0x10) = &uStack_258;
  puVar5 = &UNK_110624020;
  func_0x000107c613fc(&UNK_110624020,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1031fc4ac;
  *(undefined **)(puVar5 + 0x18) = puVar2;
  uStack_220 = 0x1031fc4dc;
  puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_238 = 0x42000000;
  puStack_230 = &UNK_1013c53f4;
  puStack_228 = &UNK_110624038;
  ppuVar6 = &puStack_240;
  puStack_218 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_218);
  func_0x000107c4c6a4(puVar4);
  func_0x000107c60bd0(ppuVar6);
  if (lStack_250 != 0) {
    puVar5 = &UNK_10db9ca30;
    func_0x000107c614e0(&UNK_10db9ca30);
    func_0x0001031fbf28(&uStack_1e0,&puStack_240);
    puVar3 = &uStack_180;
    FUN_1031fbbbc(puVar3,&uStack_120,puVar5);
    func_0x0001031fbf5c(&uStack_b0);
    func_0x000107c61574(puVar5);
    if (((ulong)puVar3 & 1) == 0) {
      puVar5 = &UNK_10db9ca50;
      func_0x000107c614e0(&UNK_10db9ca50);
      func_0x0001031fbf28(&uStack_1e0,&puStack_240);
      puVar3 = &uStack_180;
      FUN_1031fbbbc(puVar3,&uStack_120,puVar5);
      func_0x0001031fbf5c(&uStack_b0);
      func_0x000107c61574(puVar5);
      if (((ulong)puVar3 & 1) == 0) {
        puVar5 = &UNK_10db9ca10;
        func_0x000107c614e0(&UNK_10db9ca10);
        func_0x0001031fbf28(&uStack_1e0,&puStack_240);
        puVar3 = &uStack_180;
        FUN_1031fbcdc(puVar3,&uStack_120,puVar5);
        func_0x0001031fbf5c(&uStack_b0);
        func_0x000107c61574(puVar5);
        if (puVar3 != (undefined8 *)0x0) {
          puVar7 = puVar3;
          func_0x000107c4ab80();
          func_0x000107c61170(puVar3);
          if ((puVar7 == (undefined8 *)0x14) || (puVar7 == (undefined8 *)0xf)) {
            if ((param_2 & 1) == 0) {
              puVar5 = &UNK_10db9ca70;
              func_0x000107c614e0(&UNK_10db9ca70);
              func_0x0001031fbf28(&uStack_1e0,&puStack_240);
              puVar3 = &uStack_180;
              FUN_1031fbbbc(puVar3,&uStack_120,puVar5);
              func_0x0001031fbf5c(&uStack_b0);
              func_0x000107c61574(puVar5);
              if (((uint)puVar3 & 0xff) == 2) goto LAB_1031fb5bc;
            }
            else {
              puVar5 = &UNK_10db9ca10;
              func_0x000107c614e0(&UNK_10db9ca10);
              func_0x0001031fbf28(&uStack_1e0,&puStack_240);
              puVar3 = &uStack_180;
              FUN_1031fbcdc(puVar3,&uStack_120,puVar5);
              func_0x0001031fbf5c(&uStack_b0);
              func_0x000107c61574(puVar5);
              if (puVar3 == (undefined8 *)0x0) goto LAB_1031fb440;
              puVar7 = puVar3;
              func_0x000107c40110();
              func_0x000107c61180();
              func_0x000107c61170(puVar3);
              puVar3 = puVar7;
              func_0x000107c4a37c();
              func_0x000107c61170(puVar7);
            }
            if (((ulong)puVar3 & 1) == 0) goto LAB_1031fb440;
          }
        }
LAB_1031fb5bc:
        puVar5 = &UNK_10db9c8f8;
        func_0x000107c614e0(&UNK_10db9c8f8);
        func_0x0001031fbf28(&uStack_1e0,&puStack_240);
        puVar3 = &uStack_120;
        FUN_1031fba9c(&uStack_180,puVar3,puVar5);
        func_0x0001031fbf5c(&uStack_b0);
        func_0x000107c61574(puVar5);
        if (puVar3 == (undefined8 *)0x0) {
          func_0x000107c61170(puVar4);
          uVar8 = 0;
        }
        else {
          func_0x000107c6142c(puVar3);
          puVar5 = &UNK_10db9c920;
          func_0x000107c614e0(&UNK_10db9c920);
          func_0x0001031fbf28(&uStack_1e0,&puStack_240);
          puVar3 = &uStack_180;
          FUN_1031fb96c(puVar3,&uStack_120,puVar5);
          func_0x0001031fbf5c(&uStack_b0);
          func_0x000107c61574(puVar5);
          func_0x000107c61170(puVar4);
          uVar8 = 0;
          if (puVar3 != (undefined8 *)0x0) {
            func_0x000107c615e8(puVar3);
            uVar8 = 1;
          }
        }
        lVar1 = lStack_250;
        func_0x000107c61574(puVar2);
        func_0x000107c6142c(lVar1);
        return uVar8;
      }
    }
  }
LAB_1031fb440:
  func_0x000107c61170(puVar4);
  lVar1 = lStack_250;
  func_0x000107c61574(puVar2);
  func_0x000107c6142c(lVar1);
  return 0;
}



/* Entry: 1031fb898; end: 1031fb96b;  */

undefined8 FUN_1031fb898(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *unaff_x20;
  
  uVar1 = *unaff_x20;
  puVar2 = &UNK_110623fd0;
  func_0x000107c613fc(&UNK_110623fd0,0x11,7);
  puVar2[0x10] = uVar1;
  uVar3 = 0x1031fc558;
  func_0x0001000c0ebc(0x1031fc558,puVar2);
  func_0x000107c61574(puVar2);
  uVar4 = 0x112f4b548;
  func_0x0001000285a8(0x112f4b548,&UNK_10db9ab40);
  uVar5 = 0x1031fb68c;
  func_0x0001000bfde0(0x1031fb68c,0,uVar4);
  func_0x000107c61574(uVar3);
  return uVar5;
}



/* Entry: 1031fb96c; end: 1031fba9b;  */

undefined8 FUN_1031fb96c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_e0 [4];
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
  
  iVar1 = (int)auStack_e0;
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_1[9];
  uStack_50 = param_1[8];
  uStack_38 = param_1[0xb];
  uStack_40 = param_1[10];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  lVar5 = *(long *)(param_2 + 0x60);
  func_0x000107c614bc(&uStack_a0,&uStack_90,param_3);
  uStack_c0 = uStack_a0;
  uStack_b8 = uStack_98;
  func_0x000107c61434(uStack_98);
  puVar2 = &uStack_c0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(uStack_98);
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c60234(auStack_e0,lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c6142c(uStack_98);
    func_0x000100102924(auStack_e0,&uStack_c0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0x112d7a598;
  func_0x0001000285a8(0x112d7a598,&UNK_10d939e10);
  func_0x000107c6147c(auStack_e0,&uStack_c0,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_e0[0] = 0;
  }
  return auStack_e0[0];
}



/* Entry: 1031fba9c; end: 1031fbbbb;  */

undefined1  [16] FUN_1031fba9c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  
  iVar1 = (int)&uStack_e0;
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_1[9];
  uStack_50 = param_1[8];
  uStack_38 = param_1[0xb];
  uStack_40 = param_1[10];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  lVar4 = *(long *)(param_2 + 0x60);
  func_0x000107c614bc(&uStack_a0,&uStack_90,param_3);
  uStack_c0 = uStack_a0;
  uStack_b8 = uStack_98;
  func_0x000107c61434(uStack_98);
  puVar2 = &uStack_c0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_98);
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c60234(&uStack_e0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_98);
    func_0x000100102924(&uStack_e0,&uStack_c0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(&uStack_e0,&uStack_c0,uVar3,PTR___sSSN_11034da80,6);
  if (iVar1 == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
  }
  auVar5._8_8_ = uStack_d8;
  auVar5._0_8_ = uStack_e0;
  return auVar5;
}



/* Entry: 1031fbbbc; end: 1031fbcdb;  */

undefined1 FUN_1031fbbbc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_e0 [32];
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
  
  iVar1 = (int)auStack_e0;
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_1[9];
  uStack_50 = param_1[8];
  uStack_38 = param_1[0xb];
  uStack_40 = param_1[10];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  lVar4 = *(long *)(param_2 + 0x60);
  func_0x000107c614bc(&uStack_a0,&uStack_90,param_3);
  uStack_c0 = uStack_a0;
  uStack_b8 = uStack_98;
  func_0x000107c61434(uStack_98);
  puVar2 = &uStack_c0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_98);
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c60234(auStack_e0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_98);
    func_0x000100102924(auStack_e0,&uStack_c0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_e0,&uStack_c0,uVar3,PTR___sSbN_11034dd40,6);
  if (iVar1 == 0) {
    auStack_e0[0] = 2;
  }
  return auStack_e0[0];
}



/* Entry: 1031fbcdc; end: 1031fbdff;  */

undefined8 FUN_1031fbcdc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_e0 [4];
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
  
  iVar1 = (int)auStack_e0;
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_1[9];
  uStack_50 = param_1[8];
  uStack_38 = param_1[0xb];
  uStack_40 = param_1[10];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  lVar5 = *(long *)(param_2 + 0x60);
  func_0x000107c614bc(&uStack_a0,&uStack_90,param_3);
  uStack_c0 = uStack_a0;
  uStack_b8 = uStack_98;
  func_0x000107c61434(uStack_98);
  puVar2 = &uStack_c0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(uStack_98);
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c60234(auStack_e0,lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c6142c(uStack_98);
    func_0x000100102924(auStack_e0,&uStack_c0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  func_0x0001013c5ec8(0);
  func_0x000107c6147c(auStack_e0,&uStack_c0,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_e0[0] = 0;
  }
  return auStack_e0[0];
}



/* Entry: 1031fbe00; end: 1031fbedf;  */

void FUN_1031fbe00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0df18;
  func_0x000107c5faec();
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0df38;
  uVar9 = param_3;
  func_0x000107c5faec();
  ppuVar5 = &PTR____CFConstantStringClassReference_110f0c078;
  uVar10 = uVar9;
  func_0x000107c5faec();
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0c038;
  uVar11 = uVar10;
  func_0x000107c5faec();
  ppuVar7 = &PTR____CFConstantStringClassReference_110dcab38;
  uVar12 = uVar11;
  func_0x000107c5faec();
  ppuVar8 = ppuVar7;
  FUN_1031fc628();
  puVar1 = *ppuVar8;
  puVar2 = ppuVar8[1];
  *param_1 = ppuVar3;
  param_1[1] = param_3;
  param_1[2] = ppuVar4;
  param_1[3] = uVar9;
  param_1[4] = ppuVar5;
  param_1[5] = uVar10;
  param_1[6] = ppuVar6;
  param_1[7] = uVar11;
  param_1[8] = ppuVar7;
  param_1[9] = uVar12;
  param_1[10] = puVar1;
  param_1[0xb] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 1031fbee0; end: 1031fbfa3;  */

undefined8 FUN_1031fbee0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1031fbfa4; end: 1031fbfab;  */

undefined8 FUN_1031fbfa4(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_258;
  long lStack_250;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
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
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  long lStack_a8;
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
  
  bVar1 = *(byte *)(unaff_x20 + 0x10);
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_c0 = param_1[0xc];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  puVar3 = &UNK_10db9ca10;
  func_0x000107c614e0(&UNK_10db9ca10);
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  lStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  if (lStack_a8 == 0) {
    func_0x000107c61574();
    return 0;
  }
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_180 = uStack_1e0;
  uStack_178 = uStack_1d8;
  uStack_170 = uStack_1d0;
  uStack_168 = uStack_1c8;
  uStack_160 = uStack_1c0;
  uStack_158 = uStack_1b8;
  uStack_150 = uStack_1b0;
  uStack_148 = uStack_1a8;
  uStack_140 = uStack_1a0;
  uStack_138 = uStack_198;
  uStack_130 = uStack_190;
  uStack_128 = uStack_188;
  func_0x0001031fbf28(&uStack_1e0,&puStack_240);
  puVar4 = &uStack_180;
  FUN_1031fbcdc(puVar4,&uStack_120,puVar3);
  func_0x000107c61574(puVar3);
  func_0x0001031fbf5c(&uStack_b0);
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  puVar5 = puVar4;
  func_0x000107c42e84();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar5 == (undefined8 *)0x0) {
    return 0;
  }
  uStack_258 = 0;
  lStack_250 = 0;
  puVar3 = &UNK_110623ff8;
  func_0x000107c613fc(&UNK_110623ff8,0x18,7);
  *(undefined8 **)(puVar3 + 0x10) = &uStack_258;
  puVar6 = &UNK_110624020;
  func_0x000107c613fc(&UNK_110624020,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_1031fc4ac;
  *(undefined **)(puVar6 + 0x18) = puVar3;
  uStack_220 = 0x1031fc4dc;
  puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_238 = 0x42000000;
  puStack_230 = &UNK_1013c53f4;
  puStack_228 = &UNK_110624038;
  ppuVar7 = &puStack_240;
  puStack_218 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_218);
  func_0x000107c4c6a4(puVar5);
  func_0x000107c60bd0(ppuVar7);
  if (lStack_250 != 0) {
    puVar6 = &UNK_10db9ca30;
    func_0x000107c614e0(&UNK_10db9ca30);
    func_0x0001031fbf28(&uStack_1e0,&puStack_240);
    puVar4 = &uStack_180;
    FUN_1031fbbbc(puVar4,&uStack_120,puVar6);
    func_0x0001031fbf5c(&uStack_b0);
    func_0x000107c61574(puVar6);
    if (((ulong)puVar4 & 1) == 0) {
      puVar6 = &UNK_10db9ca50;
      func_0x000107c614e0(&UNK_10db9ca50);
      func_0x0001031fbf28(&uStack_1e0,&puStack_240);
      puVar4 = &uStack_180;
      FUN_1031fbbbc(puVar4,&uStack_120,puVar6);
      func_0x0001031fbf5c(&uStack_b0);
      func_0x000107c61574(puVar6);
      if (((ulong)puVar4 & 1) == 0) {
        puVar6 = &UNK_10db9ca10;
        func_0x000107c614e0(&UNK_10db9ca10);
        func_0x0001031fbf28(&uStack_1e0,&puStack_240);
        puVar4 = &uStack_180;
        FUN_1031fbcdc(puVar4,&uStack_120,puVar6);
        func_0x0001031fbf5c(&uStack_b0);
        func_0x000107c61574(puVar6);
        if (puVar4 != (undefined8 *)0x0) {
          puVar8 = puVar4;
          func_0x000107c4ab80();
          func_0x000107c61170(puVar4);
          if ((puVar8 == (undefined8 *)0x14) || (puVar8 == (undefined8 *)0xf)) {
            if ((bVar1 & 1) == 0) {
              puVar6 = &UNK_10db9ca70;
              func_0x000107c614e0(&UNK_10db9ca70);
              func_0x0001031fbf28(&uStack_1e0,&puStack_240);
              puVar4 = &uStack_180;
              FUN_1031fbbbc(puVar4,&uStack_120,puVar6);
              func_0x0001031fbf5c(&uStack_b0);
              func_0x000107c61574(puVar6);
              if (((uint)puVar4 & 0xff) == 2) goto LAB_1031fb5bc;
            }
            else {
              puVar6 = &UNK_10db9ca10;
              func_0x000107c614e0(&UNK_10db9ca10);
              func_0x0001031fbf28(&uStack_1e0,&puStack_240);
              puVar4 = &uStack_180;
              FUN_1031fbcdc(puVar4,&uStack_120,puVar6);
              func_0x0001031fbf5c(&uStack_b0);
              func_0x000107c61574(puVar6);
              if (puVar4 == (undefined8 *)0x0) goto LAB_1031fb440;
              puVar8 = puVar4;
              func_0x000107c40110();
              func_0x000107c61180();
              func_0x000107c61170(puVar4);
              puVar4 = puVar8;
              func_0x000107c4a37c();
              func_0x000107c61170(puVar8);
            }
            if (((ulong)puVar4 & 1) == 0) goto LAB_1031fb440;
          }
        }
LAB_1031fb5bc:
        puVar6 = &UNK_10db9c8f8;
        func_0x000107c614e0(&UNK_10db9c8f8);
        func_0x0001031fbf28(&uStack_1e0,&puStack_240);
        puVar4 = &uStack_120;
        FUN_1031fba9c(&uStack_180,puVar4,puVar6);
        func_0x0001031fbf5c(&uStack_b0);
        func_0x000107c61574(puVar6);
        if (puVar4 == (undefined8 *)0x0) {
          func_0x000107c61170(puVar5);
          uVar9 = 0;
        }
        else {
          func_0x000107c6142c(puVar4);
          puVar6 = &UNK_10db9c920;
          func_0x000107c614e0(&UNK_10db9c920);
          func_0x0001031fbf28(&uStack_1e0,&puStack_240);
          puVar4 = &uStack_180;
          FUN_1031fb96c(puVar4,&uStack_120,puVar6);
          func_0x0001031fbf5c(&uStack_b0);
          func_0x000107c61574(puVar6);
          func_0x000107c61170(puVar5);
          uVar9 = 0;
          if (puVar4 != (undefined8 *)0x0) {
            func_0x000107c615e8(puVar4);
            uVar9 = 1;
          }
        }
        lVar2 = lStack_250;
        func_0x000107c61574(puVar3);
        func_0x000107c6142c(lVar2);
        return uVar9;
      }
    }
  }
LAB_1031fb440:
  func_0x000107c61170(puVar5);
  lVar2 = lStack_250;
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(lVar2);
  return 0;
}


