/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1019ed004; end: 1019ed053;  */

undefined8 FUN_1019ed004(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1019ed054; end: 1019ed097;  */

undefined1  [16] FUN_1019ed054(void)

{
  return ZEXT816(0x11042a268);
}



/* Entry: 1019ed098; end: 1019ed0bf;  */

void FUN_1019ed098(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019ed0c0; end: 1019ed117;  */

undefined8 FUN_1019ed0c0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1019ed118; end: 1019ed15b;  */

void FUN_1019ed118(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1019ed15c; end: 1019ed177;  */

void FUN_1019ed15c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1019ed178; end: 1019ed223;  */

void FUN_1019ed178(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1019ed224; end: 1019ed2f7;  */

void FUN_1019ed224(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long unaff_x20;
  
  iVar4 = (int)*(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c40244();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  lVar3 = *(long *)(unaff_x20 + 0x60);
  func_0x0001000a8868(unaff_x20 + 0x40,uVar2);
  lVar1 = 0x20;
  if (iVar4 != 2) {
    lVar1 = 0x28;
  }
  (**(code **)(lVar3 + lVar1))(uVar2,lVar3);
  return;
}



/* Entry: 1019ed2f8; end: 1019ed483;  */

/* WARNING: Possible PIC construction at 0x0001019ee100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019ee0fc) */
/* WARNING: Removing unreachable block (ram,0x0001019ed464) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */

void FUN_1019ed2f8(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  
  func_0x000100b65f90();
  if ((*(long *)(unaff_x20 + 0xd8) != 0) && (*(byte *)(unaff_x20 + 0xa8) != param_2)) {
    uVar4 = 0;
    if (*(long *)(unaff_x20 + 200) != 0) {
      func_0x000107c498f8();
      uVar4 = *(undefined8 *)(unaff_x20 + 200);
    }
    *(undefined8 *)(unaff_x20 + 200) = 0;
    func_0x000107c61170(uVar4);
    *(byte *)(unaff_x20 + 0xa8) = param_2;
    if ((*(char *)(unaff_x20 + 0xb8) != '\x01') && (*(long *)(unaff_x20 + 0xb0) == 0)) {
      if (1 < param_2) {
        func_0x000100b65f90();
        uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
        lVar2 = *(long *)(unaff_x20 + 0x60);
        func_0x0001000a8868(unaff_x20 + 0x40,uVar4);
        (**(code **)(lVar2 + 0x38))(uVar4,lVar2);
        uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
        lVar2 = *(long *)(unaff_x20 + 0x60);
        func_0x0001000a8868(unaff_x20 + 0x40,uVar4);
        (**(code **)(lVar2 + 0x30))(uVar4,lVar2);
        uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
        lVar2 = *(long *)(unaff_x20 + 0x30);
        func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
        (**(code **)(lVar2 + 0x48))(param_1,uVar4,uVar1,lVar2);
        return;
      }
      if (param_2 != 0) {
        func_0x000100b65f90();
        func_0x000100b65f90();
        uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
        lVar2 = *(long *)(unaff_x20 + 0x60);
        func_0x0001000a8868(unaff_x20 + 0x40,uVar4);
        (**(code **)(lVar2 + 0x38))(uVar4,lVar2);
        uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
        lVar2 = *(long *)(unaff_x20 + 0x60);
        func_0x0001000a8868(unaff_x20 + 0x40,uVar4);
        (**(code **)(lVar2 + 0x30))(uVar4,lVar2);
        uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
        lVar2 = *(long *)(unaff_x20 + 0x30);
        func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
        (**(code **)(lVar2 + 0x48))(param_1,uVar4,uVar1,lVar2);
        if (*(long *)(unaff_x20 + 200) != 0) {
          func_0x000107c498f8();
        }
        uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
        lVar2 = *(long *)(unaff_x20 + 0x60);
        func_0x0001000a8868(unaff_x20 + 0x40,uVar4);
        (**(code **)(lVar2 + 0x10))(uVar4,lVar2);
        puVar5 = &UNK_11042a4e0;
        func_0x000107c613fc(&UNK_11042a4e0,0x18,7);
        func_0x000107c61644(puVar5 + 0x10,unaff_x20);
        pcStack_68 = FUN_1019eea64;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_100fef460;
        puStack_70 = &UNK_11042a570;
        ppuVar6 = &puStack_88;
        puStack_60 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        puVar7 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
        func_0x000107c61168();
        func_0x000107c6157c(puVar5);
        func_0x000107c5ca5c(param_1);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar6);
        puVar3 = puStack_60;
        func_0x000107c61574(puVar5);
        func_0x000107c61574(puVar3);
        puVar5 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
        func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
        func_0x000107c4c190();
        func_0x000107c61180();
        func_0x000107c3d8e0();
        func_0x000107c61170(puVar5);
        uVar4 = *(undefined8 *)(unaff_x20 + 200);
        *(undefined **)(unaff_x20 + 200) = puVar7;
        func_0x000107c61170(uVar4);
        return;
      }
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar2 = *(long *)(unaff_x20 + 0x30);
    func_0x0001000a8868(unaff_x20 + 0x10,uVar4);
    (**(code **)(lVar2 + 0x50))(uVar4,lVar2);
  }
  return;
}



/* Entry: 1019ed484; end: 1019ed86f;  */

void FUN_1019ed484(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  func_0x00010006c804();
  if (*(long *)(unaff_x20 + 0xd8) == 0) {
    *(undefined8 *)(unaff_x20 + 0xd8) = param_1;
    *(undefined8 *)(unaff_x20 + 0xe0) = param_2;
    func_0x000107c6157c(param_2);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar3 = puVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar2);
    uVar4 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010efc8380);
    func_0x000107c2c4c0(0x400000000000,puVar3,uVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x68);
    uVar4 = uVar10;
    func_0x000107c419f0();
    func_0x000107c61180();
    puVar2 = &UNK_11042a4e0;
    puVar5 = puVar2;
    func_0x000107c613fc(&UNK_11042a4e0,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_1019ee940;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100c1de60;
    puStack_88 = &UNK_11042a4f8;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_78);
    uVar7 = uVar4;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
    *(undefined8 *)(unaff_x20 + 0x70) = uVar7;
    func_0x000107c61170(uVar4);
    func_0x000107c41b80();
    func_0x000107c61180();
    puVar5 = puVar2;
    func_0x000107c613fc(&UNK_11042a4e0,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    pcStack_80 = FUN_1019ee97c;
    puStack_a0 = puVar3;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100c1de60;
    puStack_88 = &UNK_11042a520;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_78);
    uVar4 = uVar10;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar10);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
    *(undefined8 *)(unaff_x20 + 0x78) = uVar4;
    func_0x000107c61170(uVar7);
    plVar8 = *(long **)(unaff_x20 + 0x28);
    lVar1 = *(long *)(unaff_x20 + 0x30);
    func_0x0001000a8868(unaff_x20 + 0x10,plVar8);
    (**(code **)(lVar1 + 0x38))(plVar8,lVar1);
    puVar3 = puVar2;
    func_0x000107c613fc(&UNK_11042a4e0,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcVar9 = FUN_1019ee99c;
    puVar5 = puVar3;
    (**(code **)(*plVar8 + 0x60))();
    func_0x000107c61574(plVar8);
    func_0x000107c61574(puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x90);
    *(code **)(unaff_x20 + 0x90) = pcVar9;
    *(undefined **)(unaff_x20 + 0x98) = puVar5;
    func_0x000107c615e8(uVar4);
    plVar8 = *(long **)(unaff_x20 + 0x28);
    lVar1 = *(long *)(unaff_x20 + 0x30);
    func_0x0001000a8868(unaff_x20 + 0x10,plVar8);
    (**(code **)(lVar1 + 0x20))(plVar8,lVar1);
    puVar3 = puVar2;
    func_0x000107c613fc(&UNK_11042a4e0,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    uVar4 = 0x1019ee9a4;
    puVar5 = puVar3;
    (**(code **)(*plVar8 + 0x60))();
    func_0x000107c61574(plVar8);
    func_0x000107c61574(puVar3);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x80);
    *(undefined8 *)(unaff_x20 + 0x80) = uVar4;
    *(undefined **)(unaff_x20 + 0x88) = puVar5;
    func_0x000107c615e8(uVar7);
    func_0x000107c613fc(&UNK_11042a4e0,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar3 = &UNK_11042a558;
    func_0x000107c613fc(&UNK_11042a558,0x20,7);
    *(undefined **)(puVar3 + 0x10) = &UNK_10d9b3ff0;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    uVar4 = 0x22;
    func_0x0001009548b0(0x22,0,0x3c,4,0,0,&UNK_10d9b4000,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar4);
  }
  func_0x000100070bfc();
  return;
}



/* Entry: 1019ed870; end: 1019ed887;  */

void FUN_1019ed870(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ed888,0,0);
  return;
}



/* Entry: 1019ed888; end: 1019ed8bb;  */

void FUN_1019ed888(void)

{
  long unaff_x22;
  
  FUN_1019ed8bc(0);
                    /* WARNING: Could not recover jumptable at 0x0001019ed8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019ed8bc; end: 1019edaeb;  */

/* WARNING: Removing unreachable block (ram,0x0001019eda40) */

void FUN_1019ed8bc(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_70 [16];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010006c804();
  if ((*(long *)(unaff_x20 + 0xd8) == 0) ||
     ((*(char *)(unaff_x20 + 0xb8) != '\x01' && (*(long *)(unaff_x20 + 0xb0) == param_2))))
  goto LAB_1019ed97c;
  *(long *)(unaff_x20 + 0xb0) = param_2;
  *(undefined1 *)(unaff_x20 + 0xb8) = 0;
  if (param_2 == 0) {
    if (*(char *)(unaff_x20 + 0xa8) == '\x03') {
      func_0x000100b65f90();
      uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
      lVar2 = *(long *)(unaff_x20 + 0x60);
      func_0x0001000a8868(unaff_x20 + 0x40,uVar3);
      (**(code **)(lVar2 + 0x38))(uVar3,lVar2);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
      lVar2 = *(long *)(unaff_x20 + 0x60);
      func_0x0001000a8868(unaff_x20 + 0x40,uVar3);
      (**(code **)(lVar2 + 0x30))(uVar3,lVar2);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
      lVar2 = *(long *)(unaff_x20 + 0x30);
      func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
      (**(code **)(lVar2 + 0x48))(param_1,uVar3,uVar1,lVar2);
      goto LAB_1019ed97c;
    }
    lVar4 = *(long *)(unaff_x20 + 0xc0);
    if (lVar4 != 0) {
      func_0x000107c61174();
      func_0x000107c5eea0((long)puVar7 - extraout_x12);
      lVar5 = lVar4;
      func_0x000107c5ca64(lVar4);
      func_0x000107c61180();
      func_0x000107c5ee94(puVar7);
      func_0x000107c61170(lVar5);
      func_0x000107c5ee68(puVar7);
      pcVar6 = *(code **)(lVar8 + 8);
      (*pcVar6)(puVar7,lVar2);
      (*pcVar6)((long)puVar7 - extraout_x12,lVar2);
      if (param_1 <= 60.0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 1;
      }
      FUN_1019ed2f8(uVar3);
      func_0x000107c61170(lVar4);
      goto LAB_1019ed97c;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  FUN_1019ed2f8(uVar3);
LAB_1019ed97c:
  func_0x000100070bfc();
  return;
}



/* Entry: 1019edaec; end: 1019edb03;  */

void FUN_1019edaec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019edb04,0,0);
  return;
}



/* Entry: 1019edb04; end: 1019edb37;  */

void FUN_1019edb04(void)

{
  long unaff_x22;
  
  FUN_1019ed8bc(2);
                    /* WARNING: Could not recover jumptable at 0x0001019edb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019edb38; end: 1019edc67;  */

void FUN_1019edb38(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long alStack_70 [2];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0;
  func_0x0001019f3ea0();
  lVar7 = *(long *)(lVar1 + -8);
  lVar5 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = -(lVar5 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1019eeb14(param_1,auStack_60 + lVar1);
    uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
    uVar6 = uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff);
    puVar2 = &UNK_11042a5a8;
    func_0x000107c613fc(&UNK_11042a5a8,uVar6 + lVar5,uVar4 | 7);
    *(long *)(puVar2 + 0x10) = param_2;
    func_0x000101489670(auStack_60 + lVar1,puVar2 + uVar6);
    func_0x000107c6157c(param_2);
    *(undefined **)((long)alStack_70 + lVar1) = PTR___sytN_11034f1b0 + 8;
    uVar3 = 0x22;
    func_0x0001009548b0(0x22,0,0x3c,4,0,0,&UNK_10d9b4020,puVar2);
    func_0x000107c61574(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 1019edc68; end: 1019edc7f;  */

void FUN_1019edc68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019edc80,0,0);
  return;
}



/* Entry: 1019edc80; end: 1019edcaf;  */

void FUN_1019edc80(void)

{
  long unaff_x22;
  
  FUN_1019edcb0(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001019edcac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019edcb0; end: 1019ede9b;  */

void FUN_1019edcb0(double param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  double dVar8;
  
  lVar2 = 0;
  func_0x0001019f3ea0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar6 = (undefined8 *)(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x00010006c804();
  pcVar7 = *(code **)(unaff_x20 + 0xd8);
  if (pcVar7 != (code *)0x0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0xe0);
    func_0x000107c6157c(uVar4);
    (*pcVar7)(param_2);
    FUN_1019ee930(pcVar7,uVar4);
    if (((*(char *)(unaff_x20 + 0xb8) == '\x01') || (*(long *)(unaff_x20 + 0xb0) != 0)) ||
       (*(char *)(unaff_x20 + 0xd0) != '\x01')) {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
      lVar2 = *(long *)(unaff_x20 + 0x30);
      func_0x0001000a8868(unaff_x20 + 0x10,uVar4);
      (**(code **)(lVar2 + 0x50))(uVar4,lVar2);
    }
    else {
      FUN_1019eeb14(param_2,puVar6);
      puVar3 = puVar6;
      func_0x000107c614c4(puVar6,lVar2);
      if ((int)puVar3 == 0) {
        uVar4 = *puVar6;
        uVar5 = *(undefined8 *)(unaff_x20 + 0xc0);
        *(undefined8 *)(unaff_x20 + 0xc0) = uVar4;
        func_0x000107c61174();
        func_0x000107c61170(uVar5);
        bVar1 = *(byte *)(unaff_x20 + 0xa8);
        if (bVar1 < 2) {
          if (bVar1 == 0) {
            uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
            lVar2 = *(long *)(unaff_x20 + 0x30);
            func_0x0001000a8868(unaff_x20 + 0x10,uVar5);
            (**(code **)(lVar2 + 0x50))(uVar5,lVar2);
          }
          else {
            func_0x000107c44f00(uVar4);
            dVar8 = param_1;
            FUN_1019ed224();
            if ((param_1 < dVar8) || ((*(byte *)(unaff_x20 + 0xd0) & 1) == 0)) {
              FUN_1019ed2f8(2);
            }
          }
        }
        else if (bVar1 == 2) {
          uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
          lVar2 = *(long *)(unaff_x20 + 0x30);
          func_0x0001000a8868(unaff_x20 + 0x10,uVar5);
          (**(code **)(lVar2 + 0x50))(uVar5,lVar2);
          FUN_1019ee254();
        }
        func_0x000107c61170(uVar4);
      }
      else {
        FUN_1019eebd4(puVar6);
      }
    }
  }
  func_0x000100070bfc();
  return;
}



/* Entry: 1019ede9c; end: 1019edf07;  */

void FUN_1019ede9c(uint5 *param_1,long param_2)

{
  uint5 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  if (((ulong)uVar1 & 0xff00000000) != 0x200000000) {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      *(byte *)(param_2 + 0xd0) = (byte)(uVar1 >> 0x20) & 1;
      func_0x000107c61574();
    }
  }
  return;
}



/* Entry: 1019edf08; end: 1019edf73;  */

void FUN_1019edf08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019edf74,uVar1,uVar2);
  return;
}



/* Entry: 1019edf74; end: 1019ee00b;  */

void FUN_1019edf74(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c3dfc0();
    func_0x000107c61170(puVar2);
    FUN_1019ed8bc(puVar3);
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001019ee008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019ee00c; end: 1019ee047;  */

void FUN_1019ee00c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001019ee044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1019ee048; end: 1019ee253;  */

/* WARNING: Removing unreachable block (ram,0x0001019ee0fc) */

void FUN_1019ee048(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  
  func_0x000100b65f90();
  func_0x000100b65f90();
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
  lVar2 = *(long *)(unaff_x20 + 0x60);
  func_0x0001000a8868(unaff_x20 + 0x40,uVar7);
  (**(code **)(lVar2 + 0x38))(uVar7,lVar2);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
  lVar2 = *(long *)(unaff_x20 + 0x60);
  func_0x0001000a8868(unaff_x20 + 0x40,uVar7);
  (**(code **)(lVar2 + 0x30))(uVar7,lVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
  (**(code **)(lVar2 + 0x48))(param_1,uVar7,uVar1,lVar2);
  if (*(long *)(unaff_x20 + 200) != 0) {
    func_0x000107c498f8();
  }
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
  lVar2 = *(long *)(unaff_x20 + 0x60);
  func_0x0001000a8868(unaff_x20 + 0x40,uVar7);
  (**(code **)(lVar2 + 0x10))(uVar7,lVar2);
  puVar4 = &UNK_11042a4e0;
  func_0x000107c613fc(&UNK_11042a4e0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcStack_68 = FUN_1019eea64;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_100fef460;
  puStack_70 = &UNK_11042a570;
  ppuVar5 = &puStack_88;
  puStack_60 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168();
  func_0x000107c6157c(puVar4);
  func_0x000107c5ca5c(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar3 = puStack_60;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  func_0x000107c4c190();
  func_0x000107c61180();
  func_0x000107c3d8e0();
  func_0x000107c61170(puVar4);
  uVar7 = *(undefined8 *)(unaff_x20 + 200);
  *(undefined **)(unaff_x20 + 200) = puVar6;
  func_0x000107c61170(uVar7);
  return;
}



/* Entry: 1019ee254; end: 1019ee3bf;  */

void FUN_1019ee254(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000100b65f90();
  if (*(long *)(unaff_x20 + 200) == 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x58);
    lVar1 = *(long *)(unaff_x20 + 0x60);
    func_0x0001000a8868(unaff_x20 + 0x40,uVar6);
    (**(code **)(lVar1 + 0x18))(uVar6,lVar1);
    puVar3 = &UNK_11042a4e0;
    func_0x000107c613fc(&UNK_11042a4e0,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_50 = FUN_1019eec10;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100fef460;
    puStack_58 = &UNK_11042a5c0;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x000107c61168();
    func_0x000107c6157c(puVar3);
    func_0x000107c5ca5c(param_1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    puVar2 = puStack_48;
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    func_0x000107c4c190();
    func_0x000107c61180();
    func_0x000107c3d8e0();
    func_0x000107c61170(puVar3);
    uVar6 = *(undefined8 *)(unaff_x20 + 200);
    *(undefined **)(unaff_x20 + 200) = puVar5;
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 1019ee3c0; end: 1019ee3d7;  */

void FUN_1019ee3c0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ee3d8,0,0);
  return;
}



/* Entry: 1019ee3d8; end: 1019ee437;  */

void FUN_1019ee3d8(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x00010006c804();
  if (*(char *)(lVar1 + 0xa8) == '\x01') {
    FUN_1019ed2f8(2);
  }
  func_0x000100070bfc();
                    /* WARNING: Could not recover jumptable at 0x0001019ee434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019ee438; end: 1019ee4d3;  */

void FUN_1019ee438(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c6157c();
    uVar1 = 0x22;
    func_0x0001009548b0(0x22,0,0x3c,4,0,0,param_3,param_2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61578(param_2,2);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 1019ee4d4; end: 1019ee4eb;  */

void FUN_1019ee4d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ee4ec,0,0);
  return;
}



/* Entry: 1019ee4ec; end: 1019ee51b;  */

void FUN_1019ee4ec(void)

{
  long unaff_x22;
  
  FUN_1019ee51c();
                    /* WARNING: Could not recover jumptable at 0x0001019ee518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019ee51c; end: 1019ee62f;  */

/* WARNING: Removing unreachable block (ram,0x0001019ee604) */

void FUN_1019ee51c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x00010006c804();
  if ((*(long *)(unaff_x20 + 0xd8) != 0) && (*(char *)(unaff_x20 + 0xa8) == '\x02')) {
    uVar3 = 0;
    if (*(long *)(unaff_x20 + 200) != 0) {
      func_0x000107c498f8();
      uVar3 = *(undefined8 *)(unaff_x20 + 200);
    }
    *(undefined8 *)(unaff_x20 + 200) = 0;
    func_0x000107c61170(uVar3);
    func_0x000100b65f90();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
    lVar2 = *(long *)(unaff_x20 + 0x60);
    func_0x0001000a8868(unaff_x20 + 0x40,uVar3);
    (**(code **)(lVar2 + 0x38))(uVar3,lVar2);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
    lVar2 = *(long *)(unaff_x20 + 0x60);
    func_0x0001000a8868(unaff_x20 + 0x40,uVar3);
    (**(code **)(lVar2 + 0x30))(uVar3,lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar2 = *(long *)(unaff_x20 + 0x30);
    func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
    (**(code **)(lVar2 + 0x48))(param_1,uVar3,uVar1,lVar2);
  }
  func_0x000100070bfc();
  return;
}



/* Entry: 1019ee630; end: 1019ee6e3;  */

void FUN_1019ee630(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x0001000834e4(unaff_x20 + 0x40);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  FUN_1019ee930(*(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 1019ee6e4; end: 1019ee84b;  */

int FUN_1019ee6e4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1019ee760;
        goto LAB_1019ee744;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1019ee744:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1019ee760:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1019ee84c; end: 1019ee88b;  */

void FUN_1019ee84c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de8d58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b3fb0;
  func_0x000107c61520(&UNK_10d9b3fb0,&UNK_11042a4a0);
  puRam0000000112de8d58 = puVar1;
  return;
}



/* Entry: 1019ee88c; end: 1019ee8cb;  */

void FUN_1019ee88c(void)

{
  func_0x0001019ed284();
  return;
}



/* Entry: 1019ee8cc; end: 1019ee92f;  */

void FUN_1019ee8cc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar4 = *unaff_x20;
  func_0x00010006c804();
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  lVar2 = *(long *)(lVar4 + 0x30);
  func_0x0001000a8868(lVar4 + 0x10,uVar1);
  (**(code **)(lVar2 + 0x50))(uVar1,lVar2);
  uVar1 = *(undefined8 *)(lVar4 + 0xd8);
  uVar3 = *(undefined8 *)(lVar4 + 0xe0);
  *(undefined8 *)(lVar4 + 0xd8) = 0;
  *(undefined8 *)(lVar4 + 0xe0) = 0;
  FUN_1019ee930(uVar1,uVar3);
  func_0x000100070bfc();
  return;
}



/* Entry: 1019ee930; end: 1019ee93f;  */

void FUN_1019ee930(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1019ee940; end: 1019ee95f;  */

void FUN_1019ee940(void)

{
  FUN_1019ee438();
  return;
}



/* Entry: 1019ee960; end: 1019ee97b;  */

void FUN_1019ee960(long param_1,long param_2)

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



/* Entry: 1019ee97c; end: 1019ee99b;  */

void FUN_1019ee97c(void)

{
  FUN_1019ee438();
  return;
}



/* Entry: 1019ee99c; end: 1019ee9ab;  */

void FUN_1019ee99c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long alStack_70 [2];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar2 = 0;
  func_0x0001019f3ea0();
  lVar8 = *(long *)(lVar2 + -8);
  lVar6 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = -(lVar6 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_1019eeb14(param_1,auStack_60 + lVar1);
    uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
    uVar7 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
    puVar3 = &UNK_11042a5a8;
    func_0x000107c613fc(&UNK_11042a5a8,uVar7 + lVar6,uVar5 | 7);
    *(long *)(puVar3 + 0x10) = lVar2;
    func_0x000101489670(auStack_60 + lVar1,puVar3 + uVar7);
    func_0x000107c6157c(lVar2);
    *(undefined **)((long)alStack_70 + lVar1) = PTR___sytN_11034f1b0 + 8;
    uVar4 = 0x22;
    func_0x0001009548b0(0x22,0,0x3c,4,0,0,&UNK_10d9b4020,puVar3);
    func_0x000107c61574(lVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 1019ee9ac; end: 1019ee9f3;  */

void FUN_1019ee9ac(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1019eed48;
  plVar3[5] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[6] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019edf74,lVar1,lVar2);
  return;
}



/* Entry: 1019ee9f4; end: 1019eea63;  */

void FUN_1019ee9f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1019eed44;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1019eea64; end: 1019eea83;  */

void FUN_1019eea64(void)

{
  FUN_1019ee438();
  return;
}



/* Entry: 1019eea84; end: 1019eead7;  */

void FUN_1019eea84(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1019eead8;
  plVar1[2] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ee3d8,0,0);
  return;
}



/* Entry: 1019eead8; end: 1019eeb13;  */

void FUN_1019eead8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001019eeb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1019eeb14; end: 1019eeb57;  */

undefined8 FUN_1019eeb14(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001019f3ea0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1019eeb58; end: 1019eebd3;  */

void FUN_1019eeb58(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = 0;
  func_0x0001019f3ea0();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1019eed4c;
  plVar2[2] = lVar1;
  plVar2[3] = unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019edc80,0,0);
  return;
}



/* Entry: 1019eebd4; end: 1019eec0f;  */

undefined8 FUN_1019eebd4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001019f3ea0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1019eec10; end: 1019eec2f;  */

void FUN_1019eec10(void)

{
  FUN_1019ee438();
  return;
}



/* Entry: 1019eec30; end: 1019eec83;  */

void FUN_1019eec30(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1019eed50;
  plVar1[2] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ee4ec,0,0);
  return;
}



/* Entry: 1019eec84; end: 1019eecd7;  */

void FUN_1019eec84(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1019eed54;
  plVar1[2] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019edb04,0,0);
  return;
}



/* Entry: 1019eecd8; end: 1019eed2b;  */

void FUN_1019eecd8(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1019eed58;
  plVar1[2] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ed888,0,0);
  return;
}



/* Entry: 1019eed2c; end: 1019eed5b;  */

void FUN_1019eed2c(long param_1,long param_2)

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



/* Entry: 1019eed5c; end: 1019eedeb;  */

uint FUN_1019eed5c(void)

{
  undefined8 uVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = (uint)*(byte *)(unaff_x20 + 0x20);
  if (*(byte *)(unaff_x20 + 0x20) == 2) {
    func_0x00010006c804();
    uVar2 = (uint)*(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd00000000000002e;
    func_0x000107c5fadc(0xd00000000000002e,0x800000010efc84d0);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    func_0x000100070bfc();
    *(char *)(unaff_x20 + 0x20) = (char)uVar2;
  }
  return uVar2 & 1;
}



/* Entry: 1019eedec; end: 1019eee23;  */

long FUN_1019eedec(void)

{
  long lVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    lVar1 = unaff_x20;
    FUN_1019eee24();
    *(long *)(unaff_x20 + 0x28) = lVar1;
    *(undefined1 *)(unaff_x20 + 0x30) = 0;
    return lVar1;
  }
  return *(long *)(unaff_x20 + 0x28);
}



/* Entry: 1019eee24; end: 1019eeeb3;  */

undefined8 FUN_1019eee24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  func_0x00010006c804();
  iVar3 = (int)*(undefined8 *)(param_1 + 0x10);
  uVar2 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010efc83d0);
  func_0x000107c4980c();
  func_0x000107c61170(uVar2);
  uVar2 = 4;
  if (iVar3 != 2) {
    uVar2 = 1;
  }
  uVar1 = 2;
  if (iVar3 != 3) {
    uVar1 = uVar2;
  }
  func_0x000100070bfc();
  return uVar1;
}



/* Entry: 1019eeeb4; end: 1019eeeeb;  */

undefined8 FUN_1019eeeb4(undefined8 param_1)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    FUN_1019eeeec();
    *(undefined8 *)(unaff_x20 + 0x38) = param_1;
    *(undefined1 *)(unaff_x20 + 0x40) = 0;
    return param_1;
  }
  return *(undefined8 *)(unaff_x20 + 0x38);
}



/* Entry: 1019eeeec; end: 1019ef23b;  */

undefined8 FUN_1019eeeec(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  func_0x00010006c804();
  iVar3 = (int)*(undefined8 *)(param_1 + 0x10);
  uVar1 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010efc83a0);
  func_0x000107c4980c();
  func_0x000107c61170(uVar1);
  puVar2 = (undefined8 *)PTR__kCLLocationAccuracyBest_110349b70;
  if (iVar3 - 1U < 4) {
    puVar2 = (undefined8 *)(&PTR__kCLLocationAccuracyBestForNavigation_11042a668)[iVar3 - 1U];
  }
  uVar1 = *puVar2;
  func_0x000100070bfc();
  return uVar1;
}



/* Entry: 1019ef23c; end: 1019ef31f;  */

uint FUN_1019ef23c(uint param_1)

{
  FUN_1019eed5c();
  return param_1 & 1;
}



/* Entry: 1019ef320; end: 1019ef3d7; -[_TtC37NextGenLocationServicesImplementation27LocationProviderFactoryImpl makeUserLocationProviderWithUserPermissionsManager:] */

void FUN_1019ef320(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  
  FUN_1019efa30(param_1 + 0x10,auStack_68);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = 0;
  FUN_1019f1ea4(0);
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(uVar5);
  func_0x000107c615f0(uVar1);
  func_0x000107c6157c(uVar2);
  puVar4 = auStack_68;
  FUN_1019ef434(puVar4,param_3,uVar2,uVar5,uVar1,uVar3);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(uVar5);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1019ef3d8; end: 1019ef433;  */

void FUN_1019ef3d8(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019ef434; end: 1019efa2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1019ef434(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long extraout_x8;
  long lVar12;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_98;
  long lStack_90;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  lVar2 = param_6;
  uStack_e0 = param_4;
  uStack_d8 = param_5;
  func_0x000107c614f0();
  lVar3 = 0;
  lStack_e8 = lVar2;
  func_0x000107c5f804();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  uVar4 = 0;
  func_0x0001003ca5dc();
  lVar2 = _DAT_112de9030;
  ppuStack_68 = &PTR_DAT_11042a628;
  puVar5 = PTR_PTR_1126a8450;
  auStack_88[0] = param_3;
  uStack_70 = uVar4;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_6 + lVar2) = puVar5;
  *(undefined1 *)(param_6 + _DAT_112de9038) = 1;
  lVar2 = _DAT_112de9040;
  puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000285a8(0x112de8ef8,&UNK_10d9b4120);
  func_0x000107c613fc();
  ppuVar6 = &puStack_d0;
  func_0x00010006c248();
  *(undefined ***)(param_6 + lVar2) = ppuVar6;
  lVar2 = _DAT_112de9048;
  puStack_d0 = (undefined *)0x0;
  func_0x0001000285a8(0x112de8f00,&UNK_10d9b4128);
  func_0x000107c613fc();
  ppuVar6 = &puStack_d0;
  func_0x00010006c248();
  *(undefined ***)(param_6 + lVar2) = ppuVar6;
  lVar2 = _DAT_112de9050;
  puStack_d0 = (undefined *)CONCAT35(puStack_d0._5_3_,0x200000000);
  func_0x0001000285a8(0x112de8f08,&UNK_10d9b4130);
  func_0x000107c613fc();
  ppuVar6 = &puStack_d0;
  func_0x00010006c248();
  *(undefined ***)(param_6 + lVar2) = ppuVar6;
  lVar2 = _DAT_112de9058;
  puStack_d0 = (undefined *)0x0;
  func_0x0001000285a8(0x112da2528,&UNK_10d946a58);
  func_0x000107c613fc();
  ppuVar6 = &puStack_d0;
  func_0x00010006c248();
  *(undefined ***)(param_6 + lVar2) = ppuVar6;
  lVar2 = _DAT_112de9060;
  puStack_d0 = (undefined *)0x0;
  func_0x0001000285a8(0x112de8f10,&UNK_10d9b4140);
  func_0x000107c613fc();
  ppuVar6 = &puStack_d0;
  func_0x00010006c248();
  *(undefined ***)(param_6 + lVar2) = ppuVar6;
  lVar2 = _DAT_112de9068;
  puVar5 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_6 + lVar2) = puVar5;
  lVar2 = _DAT_112de9070;
  puVar5 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_6 + lVar2) = puVar5;
  lVar2 = _DAT_112de9078;
  uVar4 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(param_6 + lVar2) = uVar4;
  *(undefined8 *)(param_6 + _DAT_112de9080) = 0;
  puVar1 = (undefined8 *)(param_6 + _DAT_112de9088);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_6 + _DAT_112de9090);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  lVar2 = _DAT_112de9098;
  (**(code **)(lVar12 + 0x68))
            (auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar3);
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efc8500);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar12 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  *(undefined **)(param_6 + lVar2) = puVar5;
  FUN_1019efa30(param_1,param_6 + _DAT_112de9008);
  *(undefined **)(param_6 + _DAT_112de9010) = param_2;
  FUN_1019efa30(auStack_88,param_6 + _DAT_112de9018);
  uVar11 = uStack_d8;
  uVar4 = uStack_e0;
  *(undefined8 *)(param_6 + _DAT_112de9020) = uStack_e0;
  *(undefined8 *)(param_6 + _DAT_112de9028) = uStack_d8;
  puVar5 = PTR_s_init_1125d9248;
  lStack_90 = lStack_e8;
  lStack_98 = param_6;
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(uVar4);
  func_0x000107c615f0(uVar11);
  plVar7 = &lStack_98;
  func_0x000107c61154(plVar7,puVar5);
  uVar4 = *(undefined8 *)((long)plVar7 + _DAT_112de9048);
  puStack_c0 = param_2;
  func_0x000107c61174();
  func_0x000107c6157c(uVar4);
  func_0x000100075034(FUN_1019efa74,&puStack_d0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar4);
  puVar8 = param_2;
  func_0x000107c3e488();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar8 == (undefined *)0x0) {
    pcStack_b0 = FUN_1019f0514;
    puStack_a8 = (undefined *)0x0;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1010ca3e8;
    puStack_b8 = &UNK_11042a6e0;
    ppuVar6 = &puStack_d0;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c43188(param_2);
    func_0x000107c60bd0(ppuVar6);
  }
  func_0x000107c4e640();
  func_0x000107c61180();
  puVar8 = &UNK_11042a6a0;
  puVar9 = puVar8;
  func_0x000107c613fc(&UNK_11042a6a0,0x18,7);
  func_0x000107c61614(puVar9 + 0x10,plVar7);
  pcStack_b0 = FUN_1019efa8c;
  puStack_d0 = puVar5;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_10103b94c;
  puStack_b8 = &UNK_11042a6b8;
  ppuVar6 = &puStack_d0;
  puStack_a8 = puVar9;
  func_0x000107c60bc4(ppuVar6);
  puVar5 = puStack_a8;
  func_0x000107c61174();
  func_0x000107c61574(puVar5);
  puVar5 = param_2;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(param_2);
  uVar4 = *(undefined8 *)((long)plVar7 + _DAT_112de9080);
  *(undefined **)((long)plVar7 + _DAT_112de9080) = puVar5;
  func_0x000107c61170(uVar4);
  plVar10 = *(long **)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,plVar10);
  (**(code **)(lVar2 + 0x20))(plVar10,lVar2);
  func_0x000107c613fc(&UNK_11042a6a0,0x18,7);
  func_0x000107c61614(puVar8 + 0x10,plVar7);
  func_0x000107c61170(plVar7);
  uVar4 = 0x1019efab0;
  puVar5 = puVar8;
  (**(code **)(*plVar10 + 0x60))();
  func_0x000107c61574(plVar10);
  func_0x000107c61574(puVar8);
  puVar1 = (undefined8 *)((long)plVar7 + _DAT_112de9088);
  uVar11 = *puVar1;
  *puVar1 = uVar4;
  puVar1[1] = puVar5;
  func_0x000107c615e8(uVar11);
  FUN_1019f06fc();
  func_0x000107c61170(plVar7);
  func_0x0001000834e4(auStack_88);
  func_0x0001000834e4(param_1);
  return plVar7;
}



/* Entry: 1019efa30; end: 1019efa73;  */

long FUN_1019efa30(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1019efa74; end: 1019efa8b;  */

void FUN_1019efa74(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001019f04e4(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1019efa8c; end: 1019efabf;  */

void FUN_1019efa8c(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_11042a920;
  func_0x000107c613fc(&UNK_11042a920,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1019f3358;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  pcStack_50 = FUN_1019f3360;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10103b938;
  puStack_58 = &UNK_11042a938;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c600(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574();
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x9f,0x6d,0x30,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019f062c);
  (*pcVar1)();
}



/* Entry: 1019efac0; end: 1019efb5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019efac0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112de8f18);
  pcVar4 = (code *)*puVar1;
  if (pcVar4 == (code *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = puVar1[1];
    func_0x000107c6157c(uVar3);
    (*pcVar4)();
    func_0x00010058d43c(pcVar4,uVar3);
    uVar3 = *puVar1;
  }
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x00010058d43c(uVar3,uVar2);
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1019efb5c; end: 1019efc07; -[_TtC37NextGenLocationServicesImplementation24LocationProviderObserver dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019efb5c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112de8f18);
  pcVar5 = (code *)*puVar1;
  if (pcVar5 == (code *)0x0) {
    func_0x000107c61174(param_1);
    uVar4 = 0;
  }
  else {
    uVar4 = puVar1[1];
    func_0x000107c61174(param_1);
    func_0x000100b64c10(pcVar5,uVar4);
    (*pcVar5)();
    func_0x00010058d43c(pcVar5,uVar4);
    uVar4 = *puVar1;
  }
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x00010058d43c(uVar4,uVar3);
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1019efc08; end: 1019efc1b; -[_TtC37NextGenLocationServicesImplementation24LocationProviderObserver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019efc08(long param_1)

{
  if (*(long *)(param_1 + _DAT_112de8f18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112de8f18))[1]);
    return;
  }
  return;
}



/* Entry: 1019efc1c; end: 1019efc9f; -[_TtC37NextGenLocationServicesImplementation24LocationProviderObserver unobserve] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019efc1c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112de8f18);
  pcVar4 = (code *)*puVar1;
  if (pcVar4 == (code *)0x0) {
    func_0x000107c61174(param_1);
    uVar3 = 0;
  }
  else {
    uVar3 = puVar1[1];
    func_0x000107c61174(param_1);
    func_0x000100b64c10(pcVar4,uVar3);
    (*pcVar4)();
    func_0x00010058d43c(pcVar4,uVar3);
    uVar3 = *puVar1;
  }
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x00010058d43c(uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1019efca0; end: 1019efceb; -[_TtC37NextGenLocationServicesImplementation24LocationProviderObserver init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019efca0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112de8f18);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1019efcec; end: 1019efd0b;  */

void FUN_1019efcec(void)

{
  func_0x000107c61168(&PTR_PTR_1127f0740);
  return;
}



/* Entry: 1019efd0c; end: 1019efd33;  */

void FUN_1019efd0c(code *param_1,undefined8 param_2,undefined8 param_3)

{
  (*param_1)(param_3);
  return;
}



/* Entry: 1019efd34; end: 1019efe73;  */

void FUN_1019efd34(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = 0;
  func_0x0001019f3ea0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = (undefined8 *)((long)&uStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1019eeb14(param_2,puVar3);
  puVar2 = puVar3;
  func_0x000107c614c4(puVar3,lVar1);
  if ((int)puVar2 != 0) {
    FUN_1019eebd4(puVar3);
    return;
  }
  uVar4 = *puVar3;
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    func_0x000107c61170(uVar4);
    return;
  }
  func_0x000107c44f00(uVar4);
  if (*(long *)(param_3 + 0x10) == 0) {
    if (100.0 <= param_1) goto LAB_1019efe50;
  }
  else if ((param_1 == INFINITY) || (NAN(param_1))) goto LAB_1019efe50;
  if (*(long *)(param_3 + 0x30) != 0) {
    func_0x000107c498f8();
  }
  FUN_1019eff8c(uVar4);
LAB_1019efe50:
  func_0x000107c61170(uVar4);
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 1019efe74; end: 1019efefb;  */

void FUN_1019efe74(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar3 = *(long *)(param_2 + 0x38);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x40);
    lVar1 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar1,lVar4);
    func_0x000107c615e8(lVar3);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
  }
  *(long *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  func_0x000107c615e8(uVar2);
  FUN_1019eff8c(0);
  return;
}



/* Entry: 1019efefc; end: 1019eff8b;  */

void FUN_1019efefc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar7 = *(long *)(unaff_x20 + 0x38);
  if (lVar7 == 0) {
    uVar1 = 0;
  }
  else {
    lVar8 = *(long *)(unaff_x20 + 0x40);
    lVar2 = lVar7;
    func_0x000107c614f0(lVar7);
    pcVar11 = *(code **)(lVar8 + 8);
    func_0x000107c615f0(lVar7);
    (*pcVar11)(lVar2,lVar8);
    func_0x000107c615e8(lVar7);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  }
  *(long *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  func_0x000107c615e8(uVar1);
  lVar7 = 0;
  func_0x000107c5f7fc();
  lVar12 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  if (lVar10 != 0) {
    uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar3 = &UNK_11042a718;
    lStack_b0 = extraout_x12;
    lStack_a8 = lVar12;
    lStack_a0 = lVar2;
    func_0x000107c613fc(&UNK_11042a718,0x28,7);
    *(long *)(puVar3 + 0x10) = lVar10;
    *(undefined8 *)(puVar3 + 0x18) = uVar13;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    pcStack_70 = FUN_1019f022c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_11042a730;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x0001019f0270(lVar10,uVar13);
    func_0x0001019f0270(lVar10,uVar13);
    uVar5 = 0;
    func_0x000107c61174(0);
    func_0x000107c5f808(lVar8);
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar1 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar6 = uVar1;
    func_0x0001001c7f30();
    func_0x000107c60264(puVar9,&puStack_98,uVar1,uVar6,lVar7,uVar5);
    func_0x000107c5ffe8(0,lVar8,puVar9,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    func_0x0001019f0280(lVar10,uVar13);
    (**(code **)(lStack_a8 + 8))(puVar9,lVar7);
    (**(code **)(lStack_b0 + 8))(lVar8,lStack_a0);
    func_0x000107c61574(puStack_68);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    *(long *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    func_0x0001019f0280(uVar1,uVar6);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1019eff8c; end: 1019f01a7;  */

void FUN_1019eff8c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar7 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  if (lVar9 != 0) {
    uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar3 = &UNK_11042a718;
    lStack_b0 = extraout_x12;
    lStack_a8 = lVar10;
    lStack_a0 = lVar2;
    func_0x000107c613fc(&UNK_11042a718,0x28,7);
    *(long *)(puVar3 + 0x10) = lVar9;
    *(undefined8 *)(puVar3 + 0x18) = uVar11;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    pcStack_70 = FUN_1019f022c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_11042a730;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x0001019f0270(lVar9,uVar11);
    func_0x0001019f0270(lVar9,uVar11);
    func_0x000107c61174(param_1);
    func_0x000107c5f808(lVar8);
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar6 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar5 = uVar6;
    func_0x0001001c7f30();
    func_0x000107c60264(puVar7,&puStack_98,uVar6,uVar5,lVar1,param_1);
    func_0x000107c5ffe8(0,lVar8,puVar7,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    func_0x0001019f0280(lVar9,uVar11);
    (**(code **)(lStack_a8 + 8))(puVar7,lVar1);
    (**(code **)(lStack_b0 + 8))(lVar8,lStack_a0);
    func_0x000107c61574(puStack_68);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    *(long *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    func_0x0001019f0280(uVar6,uVar5);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 1019f01a8; end: 1019f01cf; -[_TtC37NextGenLocationServicesImplementation18RequestWithTimeout timerFired] */

void FUN_1019f01a8(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_1019efefc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1019f01d0; end: 1019f022b;  */

void FUN_1019f01d0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001019f0280(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019f022c; end: 1019f0253;  */

void FUN_1019f022c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1019f0254; end: 1019f028f;  */

void FUN_1019f0254(long param_1,long param_2)

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



/* Entry: 1019f0290; end: 1019f041b;  */

undefined8 FUN_1019f0290(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined8 unaff_x20;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffff80 + -extraout_x8;
  uVar10 = *param_1;
  uVar11 = param_1[1];
  uVar12 = param_1[2];
  lVar3 = 0;
  FUN_1019f4920();
  lVar2 = lVar3;
  func_0x000107c5ee70((long)*(int *)(lVar3 + 0x18));
  func_0x0001009f0578((long)param_1 + (long)*(int *)(lVar3 + 0x1c),puVar8);
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar4 + -8);
  puVar5 = puVar8;
  (**(code **)(lVar9 + 0x30))(puVar8,1,lVar4);
  puVar7 = (undefined1 *)0x0;
  if ((int)puVar5 != 1) {
    func_0x000107c5ee70();
    (**(code **)(lVar9 + 8))(puVar8,lVar4);
    puVar7 = puVar5;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x20));
  if (puVar1[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar1;
    func_0x000107c5fadc(uVar6);
  }
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c461c8(uVar10,uVar11,uVar12);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar6);
  FUN_1019f041c(param_1);
  return unaff_x20;
}



/* Entry: 1019f041c; end: 1019f0457;  */

undefined8 FUN_1019f041c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1019f4920();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1019f0458; end: 1019f0467; -[_TtC37NextGenLocationServicesImplementation20UserLocationProvider isNextGen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1019f0458(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112de9038);
}



/* Entry: 1019f0468; end: 1019f0477; -[_TtC37NextGenLocationServicesImplementation20UserLocationProvider setIsNextGen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f0468(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112de9038) = param_3;
  return;
}



/* Entry: 1019f0478; end: 1019f0483; -[_TtC37NextGenLocationServicesImplementation20UserLocationProvider location] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f0478(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112de9058);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&uStack_28);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 1019f0484; end: 1019f048f; -[_TtC37NextGenLocationServicesImplementation20UserLocationProvider heading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f0484(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112de9060);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&uStack_28);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 1019f0490; end: 1019f0513;  */

void FUN_1019f0490(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + *param_3);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&uStack_28);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 1019f0514; end: 1019f0517;  */

void FUN_1019f0514(void)

{
  return;
}



/* Entry: 1019f0518; end: 1019f062b;  */

void FUN_1019f0518(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_11042a920;
  func_0x000107c613fc(&UNK_11042a920,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1019f3358;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcStack_50 = FUN_1019f3360;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10103b938;
  puStack_58 = &UNK_11042a938;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c600(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x9f,0x6d,0x30,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019f062c);
  (*pcVar1)();
}



/* Entry: 1019f062c; end: 1019f06fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f062c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112de9048);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
    uStack_50 = param_1;
    func_0x000100075034(FUN_1019f3380,auStack_60,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1019f06fc();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1019f06fc; end: 1019f0aeb;  */

/* WARNING: Removing unreachable block (ram,0x0001019f07c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f06fc(void)

{
  long lVar1;
  int iVar2;
  char cVar3;
  undefined **ppuVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined **ppuStack_80;
  undefined1 auStack_78 [24];
  undefined8 *puVar9;
  
  func_0x00010006c804();
  lVar11 = *(long *)(unaff_x20 + _DAT_112de9010);
  lVar6 = lVar11;
  func_0x000107c3e488();
  if (lVar6 != 0) {
    func_0x000107c49ff4();
    if ((int)lVar11 == 0) {
      lVar6 = unaff_x20 + _DAT_112de9090;
      func_0x000107c61428(lVar6,auStack_78,0,0);
      if (*(long *)(lVar6 + 0x18) != 0) {
        func_0x0001019f31bc(lVar6,&uStack_a0);
        func_0x0001000a8868(&uStack_a0,lStack_88);
        (*(code *)ppuStack_80[3])(lStack_88,ppuStack_80);
        func_0x0001000834e4(&uStack_a0);
      }
      ppuStack_80 = (undefined **)0x0;
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
      func_0x000107c61428(lVar6,auStack_b8,0x21,0);
      func_0x0001019f311c(&uStack_a0,lVar6);
      func_0x000107c614a8(auStack_b8);
      lVar6 = unaff_x20 + _DAT_112de9008;
      uVar12 = *(undefined8 *)(lVar6 + 0x18);
      lVar11 = *(long *)(lVar6 + 0x20);
      func_0x0001000a8868(lVar6,uVar12);
      (**(code **)(lVar11 + 0x80))(uVar12,lVar11);
    }
    else {
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112de9050);
      func_0x000107c6157c(uVar12);
      func_0x0001000c74f0(&uStack_a0);
      func_0x000107c61574(uVar12);
      cVar3 = uStack_a0._4_1_;
      iVar2 = (int)uStack_a0;
      lVar6 = unaff_x20 + _DAT_112de9008;
      uVar12 = *(undefined8 *)(lVar6 + 0x18);
      lVar11 = *(long *)(lVar6 + 0x20);
      func_0x0001000a8868(lVar6,uVar12);
      if ((cVar3 == '\x02') || (iVar2 != 3)) {
        (**(code **)(lVar11 + 0x80))(uVar12,lVar11);
      }
      else {
        (**(code **)(lVar11 + 0x78))(uVar12,lVar11);
      }
      lVar6 = unaff_x20 + _DAT_112de9090;
      func_0x000107c61428(lVar6,auStack_78,0,0);
      func_0x0001019f316c(lVar6,&uStack_a0);
      lVar8 = lStack_88;
      func_0x0001019f30dc(&uStack_a0,0x112de90d8,&UNK_10d9b41f0);
      lVar1 = _DAT_112de9018;
      lVar11 = _DAT_112de9008;
      if (lVar8 == 0) {
        uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112de9020);
        uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112de9028);
        lVar7 = 0;
        func_0x0001019ee6c4();
        lVar8 = lVar7;
        func_0x000107c613fc();
        func_0x00010006a340(0);
        *(undefined8 *)(lVar8 + 0x78) = 0;
        *(undefined8 *)(lVar8 + 0x70) = 0;
        *(undefined8 *)(lVar8 + 0x88) = 0;
        *(undefined8 *)(lVar8 + 0x80) = 0;
        *(undefined8 *)(lVar8 + 0x98) = 0;
        *(undefined8 *)(lVar8 + 0x90) = 0;
        func_0x000107c613fc();
        func_0x000107c615f0(uVar15);
        uVar12 = uVar14;
        func_0x000107c615f0();
        func_0x00010006a360();
        *(undefined8 *)(lVar8 + 0xa0) = uVar12;
        *(undefined1 *)(lVar8 + 0xa8) = 0;
        *(undefined8 *)(lVar8 + 0xb0) = 0;
        *(undefined1 *)(lVar8 + 0xb8) = 1;
        *(undefined8 *)(lVar8 + 0xc0) = 0;
        *(undefined8 *)(lVar8 + 200) = 0;
        *(undefined1 *)(lVar8 + 0xd0) = 1;
        *(undefined8 *)(lVar8 + 0xd8) = 0;
        *(undefined8 *)(lVar8 + 0xe0) = 0;
        *(undefined1 *)(lVar8 + 0xe8) = 0;
        func_0x0001019f31bc(unaff_x20 + lVar11,lVar8 + 0x10);
        *(undefined8 *)(lVar8 + 0x38) = uVar15;
        func_0x0001019f31bc(unaff_x20 + lVar1,lVar8 + 0x40);
        *(undefined8 *)(lVar8 + 0x68) = uVar14;
        ppuStack_80 = &PTR_DAT_11042a4b0;
        uStack_a0 = lVar8;
        lStack_88 = lVar7;
        func_0x000107c61428(lVar6,auStack_b8,0x21,0);
        func_0x0001019f311c(&uStack_a0,lVar6);
        func_0x000107c614a8(auStack_b8);
        if (*(long *)(lVar6 + 0x18) != 0) {
          func_0x0001019f31bc(lVar6,&uStack_a0);
          ppuVar4 = ppuStack_80;
          lVar11 = lStack_88;
          puVar9 = &uStack_a0;
          func_0x0001000a8868(puVar9,lStack_88);
          uVar5 = (uint)puVar9;
          FUN_1019f14e0();
          (*(code *)ppuVar4[1])(uVar5 & 1,lVar11,ppuVar4);
          func_0x0001000834e4(&uStack_a0);
          if (*(long *)(lVar6 + 0x18) != 0) {
            func_0x0001019f31bc(lVar6,&uStack_a0);
            ppuVar4 = ppuStack_80;
            lVar6 = lStack_88;
            func_0x0001000a8868(&uStack_a0,lStack_88);
            puVar10 = &UNK_11042a880;
            func_0x000107c613fc(&UNK_11042a880,0x18,7);
            func_0x000107c61614(puVar10 + 0x10);
            pcVar13 = (code *)ppuVar4[2];
            func_0x000107c6157c(puVar10);
            (*pcVar13)(FUN_1019f3200,puVar10,lVar6,ppuVar4);
            func_0x000107c61578(puVar10,2);
            func_0x0001000834e4(&uStack_a0);
          }
        }
      }
    }
  }
  func_0x000100070bfc();
  return;
}



/* Entry: 1019f0aec; end: 1019f0c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f0aec(undefined5 *param_1,long param_2)

{
  undefined5 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar3 = param_2 + 0x10;
  func_0x000107c61618();
  puVar2 = PTR___sytN_11034f1b0;
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112de9050);
    func_0x000107c6157c(uVar4);
    func_0x000107c61170(lVar3);
    uStack_6c = (undefined1)((uint5)uVar1 >> 0x20);
    uStack_70 = (undefined4)uVar1;
    func_0x000100075034(FUN_1019f3344,auStack_80,puVar2 + 8);
    func_0x000107c61574(uVar4);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
  lVar3 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    FUN_1019f06fc();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_98,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar4 = *(undefined8 *)(param_2 + _DAT_112de9040);
    lStack_a0 = param_2;
    func_0x000107c6157c(uVar4);
    func_0x000100075034(0x1019f33d4,auStack_b0,puVar2 + 8);
    func_0x000107c61574(uVar4);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1019f0c34; end: 1019f0c43; -[_TtC37NextGenLocationServicesImplementation20UserLocationProvider locationUpdateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f0c34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112de9068));
  return;
}



/* Entry: 1019f0c44; end: 1019f0c53; -[_TtC37NextGenLocationServicesImplementation20UserLocationProvider visitObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f0c44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112de9070));
  return;
}



/* Entry: 1019f0c54; end: 1019f0f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1019f0c54(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long extraout_x12;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_110 [8];
  undefined1 *puStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar4 + -8);
  lVar13 = *(long *)(lVar10 + 0x40);
  lStack_100 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_108 = auStack_110 + -(lVar13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)(auStack_110 + -(lVar13 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar4 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  puVar7 = PTR___sSSN_11034da80;
  uStack_f0 = 0x65727574616546;
  uStack_e8 = 0xe700000000000000;
  func_0x000107c602d4(lVar4 + 0x20,&uStack_f0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar6 = param_1;
  func_0x000107c3e35c();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(lVar6 + _DAT_11309aa88);
  uVar2 = ((undefined8 *)(lVar6 + _DAT_11309aa88))[1];
  func_0x000107c61434(uVar2);
  func_0x000107c61170(lVar6);
  *(undefined **)(lVar4 + 0x60) = puVar7;
  *(undefined8 *)(lVar4 + 0x48) = uVar5;
  *(undefined8 *)(lVar4 + 0x50) = uVar2;
  lVar6 = lVar4;
  func_0x000100dfa3f0(lVar4);
  func_0x000107c61588(lVar4);
  FUN_1019f30dc(lVar4 + 0x20,0x112d377a0,&UNK_10d9016e0);
  lVar4 = lVar6;
  func_0x000107c5f9dc(lVar6,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar6);
  uVar5 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc8560);
  func_0x000107c2c4c0(0x400000000000,lVar4,uVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar5);
  lVar4 = _DAT_112de9040;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112de9040);
  func_0x000107c6157c(uVar5);
  puVar7 = PTR___sytN_11034f1b0;
  func_0x000100075034(FUN_1019f3064,&uStack_f0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar5);
  func_0x000107c5eea0(lVar14);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c6157c(uVar5);
  func_0x000100075034(0x1019f307c,&uStack_f0,puVar7 + 8);
  func_0x000107c61574(uVar5);
  lVar6 = 0;
  FUN_1019efcec();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar7 = &UNK_11042a880;
  func_0x000107c613fc(&UNK_11042a880,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  lVar4 = lStack_100;
  puVar3 = puStack_108;
  pcVar12 = *(code **)(lVar10 + 0x20);
  (*pcVar12)(puStack_108,lVar14,lStack_100);
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar11 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
  puVar8 = &UNK_11042a8a8;
  func_0x000107c613fc(&UNK_11042a8a8,uVar11 + lVar13,uVar9 | 7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(long *)(puVar8 + 0x18) = param_1;
  (*pcVar12)(puVar8 + uVar11,puVar3,lVar4);
  puVar1 = (undefined8 *)(lVar6 + _DAT_112de8f18);
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0x1019f3094;
  puVar1[1] = puVar8;
  func_0x000107c6157c(puVar7);
  func_0x000107c61174(param_1);
  func_0x00010058d43c(uVar5,uVar2);
  func_0x000107c61574(puVar7);
  return lVar6;
}



/* Entry: 1019f0f78; end: 1019f1003;  */

void FUN_1019f0f78(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  FUN_1019f2104();
  uVar2 = *param_1;
  uVar3 = uVar2 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar3 + 0x10);
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_1019f2174(uVar2,uVar1 + 1,1);
    uVar3 = uVar2 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar3 + uVar1 * 8 + 0x20) = param_2;
  *param_1 = uVar2;
  func_0x000107c61174(param_2);
  return;
}



/* Entry: 1019f1004; end: 1019f131f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f1004(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 auStack_120 [2];
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 auStack_90 [32];
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)auStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + 0x10,auStack_90,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar4 = 0x112d39140;
    func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
    func_0x000107c61534();
    uVar10 = 1;
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    puVar2 = PTR___sSSN_11034da80;
    uStack_110 = 0x65727574616546;
    uStack_108 = 0xe700000000000000;
    auStack_120[0] = param_3;
    func_0x000107c602d4(lVar4 + 0x20,&uStack_110,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    lVar5 = param_2;
    func_0x000107c3e35c();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(lVar5 + _DAT_11309aa88);
    uVar1 = ((undefined8 *)(lVar5 + _DAT_11309aa88))[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61170(lVar5);
    *(undefined **)(lVar4 + 0x60) = puVar2;
    *(undefined8 *)(lVar4 + 0x48) = uVar6;
    *(undefined8 *)(lVar4 + 0x50) = uVar1;
    lVar5 = lVar4;
    func_0x000100dfa3f0(lVar4);
    func_0x000107c61588(lVar4);
    FUN_1019f30dc(lVar4 + 0x20,0x112d377a0,&UNK_10d9016e0);
    lVar4 = lVar5;
    func_0x000107c5f9dc(lVar5,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar5);
    uVar6 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010efc8580);
    func_0x000107c2c4c0(0x400000000000,lVar4,uVar6);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar6);
    lVar4 = _DAT_112de9040;
    uVar6 = *(undefined8 *)(param_1 + _DAT_112de9040);
    lStack_100 = param_2;
    func_0x000107c6157c(uVar6);
    puVar2 = PTR___sytN_11034f1b0;
    func_0x000100075034(0x1019f30c4,&uStack_110,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar6);
    func_0x000107c5eea0(lVar8);
    func_0x000107c5ee68(auStack_120[0]);
    (**(code **)(lVar9 + 8))(lVar8,lVar3);
    uVar7 = *(undefined8 *)(param_1 + _DAT_112de9030);
    func_0x000107c61174(uVar7);
    func_0x000107c3e35c();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(param_2 + _DAT_11309aa88);
    uVar1 = ((undefined8 *)(param_2 + _DAT_11309aa88))[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x0001055fc3a8(uVar10,uVar7,uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    uVar6 = *(undefined8 *)(param_1 + lVar4);
    lStack_100 = param_1;
    func_0x000107c6157c(uVar6);
    func_0x000100075034(0x1019f33c0,&uStack_110,puVar2 + 8);
    func_0x000107c61574(uVar6);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1019f1320; end: 1019f13bb;  */

void FUN_1019f1320(ulong *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x000107c61174(param_2);
  puVar2 = param_1;
  FUN_1019f2624(param_1,param_2);
  func_0x000107c61170(param_2);
  uVar4 = *param_1;
  if (uVar4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar3 = uVar4;
    }
    func_0x000107c60480();
  }
  if ((long)puVar2 <= (long)uVar3) {
    FUN_1019f2980(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019f13bc);
  (*pcVar1)();
}



/* Entry: 1019f13bc; end: 1019f1417; -[_TtC37NextGenLocationServicesImplementation20UserLocationProvider requestActiveLocationUpdatesWithRequest:] */

void FUN_1019f13bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1019f0c54(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


