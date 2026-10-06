/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080f49dc; end: 1080f49ff;  */

void FUN_1080f49dc(void)

{
  return;
}



/* Entry: 1080f4a00; end: 1080f4a2b;  */

void FUN_1080f4a00(long param_1)

{
  func_0x0001080f68f0();
  if (param_1 == 0) {
    return;
  }
  func_0x0001080f6dc0();
  func_0x0001080f6e80();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080f4a2c; end: 1080f4a4f;  */

void FUN_1080f4a2c(void)

{
  return;
}



/* Entry: 1080f4a50; end: 1080f4ba7;  */

void FUN_1080f4a50(long param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  undefined8 *unaff_x20;
  ulong unaff_x22;
  long lVar3;
  long lVar4;
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [3];
  
  func_0x0001080f6d48();
  func_0x0001080f6ea0();
  if (param_1 == 0) {
    func_0x0001080f6aa4();
  }
  else {
    func_0x0001080f6d80();
    if (((bool)in_ZR && unaff_x22 != 0) && (*(long *)(unaff_x22 + 0x10) == 4)) {
      if (*(char *)(unaff_x22 + 0x20) == '\t') {
        lVar4 = *(long *)(unaff_x22 + 0x18);
      }
      else {
        lVar4 = 0;
      }
      if (*(char *)(unaff_x22 + 0x30) == '\t') {
        lVar3 = *(long *)(unaff_x22 + 0x28);
      }
      else {
        lVar3 = 0;
      }
      func_0x00010b9a9518(unaff_x22 + 0x38);
      func_0x0001080f6e10();
      if ((lVar4 != 0) && (lVar3 != 0)) {
        func_0x0001080f6b08();
        lVar1 = lVar4 + 0x18;
        for (lVar4 = *(long *)(lVar4 + 0x10) << 4; lVar4 != 0; lVar4 = lVar4 + -0x10) {
          func_0x00010b9a9588(lVar1);
          func_0x0001080f6c30();
          lVar1 = lVar1 + 0x10;
        }
        func_0x0001080f6c1c();
        lVar4 = lVar3 + 0x18;
        for (lVar3 = *(long *)(lVar3 + 0x10) << 4; lVar3 != 0; lVar3 = lVar3 + -0x10) {
          func_0x00010b9a92f0(lVar4);
          func_0x0001080f6c08();
          lVar4 = lVar4 + 0x10;
        }
        if ((unaff_x22 & 1) == 0) {
          func_0x00010811f760(param_1,auStack_80,auStack_68);
        }
        else {
          func_0x00010811f7c0();
        }
        func_0x0001080f6aa4();
        FUN_1080f3394(auStack_80);
        FUN_1080f33d8(auStack_68);
        goto LAB_1080f4acc;
      }
      puVar2 = &UNK_10f47ab99;
    }
    else {
      puVar2 = &UNK_10f47ab86;
    }
    func_0x00010b99f5f8(auStack_68,puVar2);
    *unaff_x20 = 2;
    unaff_x20[1] = auStack_68[0];
  }
LAB_1080f4acc:
  func_0x0001080f6e78();
  func_0x0001080f6a54();
  return;
}



/* Entry: 1080f4ba8; end: 1080f4bcb;  */

void FUN_1080f4ba8(void)

{
  return;
}



/* Entry: 1080f4bcc; end: 1080f4c0f;  */

void FUN_1080f4bcc(long param_1)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x0001080f68f0();
  if (param_1 == 0) {
    return;
  }
  func_0x0001080f6bc0();
  FUN_10811f760();
  FUN_1080f33d8(auStack_50);
  FUN_1080f3394(auStack_38);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080f4c10; end: 1080f4c33;  */

void FUN_1080f4c10(void)

{
  return;
}



/* Entry: 1080f4c34; end: 1080f4d7b;  */

void FUN_1080f4c34(void)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined8 extraout_x8_00;
  long lVar5;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_50;
  char cStack_48;
  byte bStack_47;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar3 = &lStack_50;
  func_0x00010b9a8f04();
  func_0x0001080f6b50();
  if (plVar3 != (long *)0x0) {
    FUN_1080f62ac(&lStack_40,*(undefined8 *)((long)plVar3 + 0x158));
    lVar5 = lStack_40;
    if (lStack_40 == 0) {
      func_0x0001080f6300(&uStack_38);
      func_0x0001080f6354(&lStack_40,&uStack_38);
      func_0x0001080f64c4(uStack_38);
      if (lStack_40 == 0) {
        uStack_38 = 0;
        lVar5 = 0;
      }
      else {
        do {
          func_0x0001080f6784();
          uStack_38 = extraout_x8;
          lVar5 = lStack_40;
        } while (extraout_w11 != 0);
      }
      func_0x0001080f6d04();
      func_0x0001080f64e8(uStack_38);
    }
    uVar4 = 0;
    if (((cStack_48 == '\n') && ((bStack_47 & 1) != 0)) && (uVar4 = 0, lStack_50 != 0)) {
      do {
        func_0x0001080f6784();
        uVar4 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    uStack_38 = uVar4;
    FUN_1080f650c(lVar5,&uStack_38);
    func_0x000104bdb3b0(uStack_38);
    if ((*(long *)(lStack_40 + 0x40) == 0) && (*(char *)(lStack_40 + 0x33) == -1)) {
      uStack_38 = 0;
      func_0x0001080f6d04();
      func_0x0001080f64e8(uStack_38);
    }
    else {
      func_0x00010811f4a4(plVar3);
    }
    plVar3 = (long *)(lStack_40 + 8);
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      func_0x0001080f6c94();
    }
  }
  func_0x0001080f68b4();
  func_0x0001078bee50();
  func_0x0001080f6980();
  return;
}



/* Entry: 1080f4d7c; end: 1080f4d9f;  */

void FUN_1080f4d7c(void)

{
  return;
}



/* Entry: 1080f4da0; end: 1080f4e97;  */

void FUN_1080f4da0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 extraout_x8;
  long lVar4;
  int extraout_w11;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x0001080f68f0();
  if (param_1 != 0) {
    FUN_1080f62ac(&lStack_30,*(undefined8 *)(param_1 + 0x158));
    lVar4 = lStack_30;
    if (lStack_30 == 0) {
      func_0x0001080f6300(&uStack_28);
      func_0x0001080f6354(&lStack_30,&uStack_28);
      func_0x0001080f64c4(uStack_28);
      if (lStack_30 == 0) {
        uStack_28 = 0;
        lVar4 = 0;
      }
      else {
        do {
          func_0x0001080f6784();
          uStack_28 = extraout_x8;
          lVar4 = lStack_30;
        } while (extraout_w11 != 0);
      }
      func_0x0001080f6d2c();
      func_0x0001080f64e8(uStack_28);
    }
    uStack_28 = 0;
    FUN_1080f650c(lVar4,&uStack_28);
    func_0x000104bdb3b0(uStack_28);
    if ((*(long *)(lStack_30 + 0x40) == 0) && (*(char *)(lStack_30 + 0x33) == -1)) {
      uStack_28 = 0;
      func_0x0001080f6d2c();
      func_0x0001080f64e8(uStack_28);
    }
    else {
      func_0x00010811f4a4(param_1);
    }
    plVar1 = (long *)(lStack_30 + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      func_0x0001080f6c7c();
    }
  }
  if (param_1 == 0) {
    return;
  }
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080f4e98; end: 1080f4ebb;  */

void FUN_1080f4e98(void)

{
  return;
}



/* Entry: 1080f4ebc; end: 1080f4fb3;  */

void FUN_1080f4ebc(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *extraout_x8;
  long lVar4;
  int extraout_w11;
  double unaff_d8;
  long *plStack_50;
  long lStack_48;
  
  func_0x0001080f6890();
  if (param_1 != (long *)0x0) {
    plVar3 = &lStack_48;
    FUN_1080f62ac(plVar3,param_1[0x2b]);
    lVar4 = lStack_48;
    if (lStack_48 == 0) {
      func_0x0001080f6300(&plStack_50);
      func_0x0001080f6de4();
      func_0x0001080f64c4();
      plVar3 = plStack_50;
      if (lStack_48 == 0) {
        plStack_50 = (long *)0x0;
        lVar4 = 0;
      }
      else {
        do {
          func_0x0001080f6784();
          plStack_50 = extraout_x8;
          lVar4 = lStack_48;
        } while (extraout_w11 != 0);
      }
      func_0x0001080f6d04();
      func_0x0001080f6cac();
    }
    *(int *)(lVar4 + 0x30) = (int)((float)unaff_d8 * 255.0) << 0x18;
    if ((*(long *)(lVar4 + 0x40) == 0) && ((int)((float)unaff_d8 * 255.0) == 0xff)) {
      plStack_50 = (long *)0x0;
      func_0x0001080f6d04();
      func_0x0001080f6cac();
      param_1 = plVar3;
    }
    else {
      func_0x00010811f4a4();
    }
    plVar3 = (long *)(lVar4 + 8);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      func_0x0001080f6c94();
    }
  }
  func_0x0001080f68b4();
  if (param_1 == (long *)0x0) {
    return;
  }
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080f4fb4; end: 1080f4fd7;  */

void FUN_1080f4fb4(void)

{
  return;
}



/* Entry: 1080f4fd8; end: 1080f509f;  */

void FUN_1080f4fd8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 extraout_x8;
  long lVar4;
  int extraout_w11;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x0001080f68f0();
  if (param_1 != 0) {
    FUN_1080f62ac(&lStack_28,*(undefined8 *)(param_1 + 0x158));
    lVar4 = lStack_28;
    if (lStack_28 == 0) {
      func_0x0001080f6300(&uStack_30);
      func_0x0001080f6de4();
      func_0x0001080f64c4(uStack_30);
      if (lStack_28 == 0) {
        uStack_30 = 0;
        lVar4 = 0;
      }
      else {
        do {
          func_0x0001080f6784();
          uStack_30 = extraout_x8;
          lVar4 = lStack_28;
        } while (extraout_w11 != 0);
      }
      func_0x0001080f6d2c();
      func_0x0001080f6cac();
    }
    *(undefined4 *)(lVar4 + 0x30) = 0xff000000;
    if (*(long *)(lVar4 + 0x40) == 0) {
      uStack_30 = 0;
      func_0x0001080f6d2c();
      func_0x0001080f6cac();
    }
    else {
      func_0x00010811f4a4(param_1);
    }
    plVar1 = (long *)(lVar4 + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      func_0x0001080f6c7c();
    }
  }
  if (param_1 == 0) {
    return;
  }
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080f50a0; end: 1080f50c3;  */

void FUN_1080f50a0(void)

{
  return;
}



/* Entry: 1080f50c4; end: 1080f521b;  */

void FUN_1080f50c4(long param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  undefined8 *unaff_x20;
  ulong unaff_x22;
  long lVar3;
  long lVar4;
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [3];
  
  func_0x0001080f6d48();
  func_0x0001080f6ea0();
  if (param_1 == 0) {
    func_0x0001080f6aa4();
  }
  else {
    func_0x0001080f6d80();
    if (((bool)in_ZR && unaff_x22 != 0) && (*(long *)(unaff_x22 + 0x10) == 4)) {
      if (*(char *)(unaff_x22 + 0x20) == '\t') {
        lVar4 = *(long *)(unaff_x22 + 0x18);
      }
      else {
        lVar4 = 0;
      }
      if (*(char *)(unaff_x22 + 0x30) == '\t') {
        lVar3 = *(long *)(unaff_x22 + 0x28);
      }
      else {
        lVar3 = 0;
      }
      func_0x00010b9a9518(unaff_x22 + 0x38);
      func_0x0001080f6e10();
      if ((lVar4 != 0) && (lVar3 != 0)) {
        func_0x0001080f6b08();
        lVar1 = lVar4 + 0x18;
        for (lVar4 = *(long *)(lVar4 + 0x10) << 4; lVar4 != 0; lVar4 = lVar4 + -0x10) {
          func_0x00010b9a9588(lVar1);
          func_0x0001080f6c30();
          lVar1 = lVar1 + 0x10;
        }
        func_0x0001080f6c1c();
        lVar4 = lVar3 + 0x18;
        for (lVar3 = *(long *)(lVar3 + 0x10) << 4; lVar3 != 0; lVar3 = lVar3 + -0x10) {
          func_0x00010b9a92f0(lVar4);
          func_0x0001080f6c08();
          lVar4 = lVar4 + 0x10;
        }
        if ((unaff_x22 & 1) == 0) {
          func_0x00010811f828(param_1,auStack_80,auStack_68);
        }
        else {
          func_0x00010811f888();
        }
        func_0x0001080f6aa4();
        FUN_1080f3394(auStack_80);
        FUN_1080f33d8(auStack_68);
        goto LAB_1080f5140;
      }
      puVar2 = &UNK_10f47ab99;
    }
    else {
      puVar2 = &UNK_10f47ab86;
    }
    func_0x00010b99f5f8(auStack_68,puVar2);
    *unaff_x20 = 2;
    unaff_x20[1] = auStack_68[0];
  }
LAB_1080f5140:
  func_0x0001080f6e78();
  func_0x0001080f6a54();
  return;
}



/* Entry: 1080f521c; end: 1080f523f;  */

void FUN_1080f521c(void)

{
  return;
}



/* Entry: 1080f5240; end: 1080f5283;  */

void FUN_1080f5240(long param_1)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x0001080f68f0();
  if (param_1 == 0) {
    return;
  }
  func_0x0001080f6bc0();
  func_0x00010811f828();
  FUN_1080f33d8(auStack_50);
  FUN_1080f3394(auStack_38);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080f5284; end: 1080f52a7;  */

void FUN_1080f5284(void)

{
  return;
}



/* Entry: 1080f52a8; end: 1080f52e3;  */

void FUN_1080f52a8(long param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *param_2;
  func_0x0001080f68f0();
  if (param_1 != 0) {
    FUN_10811fa54(param_1,uVar1);
  }
  func_0x0001080f68b4();
  if (param_1 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080f52e4; end: 1080f5307;  */

void FUN_1080f52e4(void)

{
  return;
}



/* Entry: 1080f5308; end: 1080f5347;  */

void FUN_1080f5308(long *param_1)

{
  long *plVar1;
  
  func_0x0001080f68f0();
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))(param_1);
  FUN_10811fa54(param_1,plVar1);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080f5348; end: 1080f536b;  */

void FUN_1080f5348(void)

{
  return;
}



/* Entry: 1080f536c; end: 1080f5397;  */

void FUN_1080f536c(long param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *param_2;
  func_0x0001080f68f0();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x1d2) = uVar1;
  }
  func_0x0001080f6974();
  if (param_1 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080f5398; end: 1080f53bb;  */

void FUN_1080f5398(void)

{
  return;
}



/* Entry: 1080f53bc; end: 1080f53db;  */

void FUN_1080f53bc(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x0001080f68f0();
  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1d2) = 1;
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = *(undefined8 *)(param_1 + 8);
  func_0x0001003a90c4(&uStack_20);
  return;
}



/* Entry: 1080f53dc; end: 1080f53ff;  */

void FUN_1080f53dc(void)

{
  return;
}



/* Entry: 1080f5400; end: 1080f5433;  */

void FUN_1080f5400(long *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *param_1;
  bVar1 = *param_2;
  FUN_1080e5de0();
  if ((lVar2 != 0) && ((bVar1 & 1) != 0)) {
    *(undefined1 *)(lVar2 + 0x1d2) = 0;
  }
  func_0x0001080f6974();
  if (lVar2 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080f5434; end: 1080f5457;  */

void FUN_1080f5434(void)

{
  return;
}



/* Entry: 1080f5458; end: 1080f546b;  */

void FUN_1080f5458(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x0001080f68f0();
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080f546c; end: 1080f548f;  */

void FUN_1080f546c(void)

{
  return;
}



/* Entry: 1080f5490; end: 1080f54ff;  */

void FUN_1080f5490(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long lVar4;
  int extraout_w10;
  long *plVar5;
  long unaff_x22;
  undefined8 in_stack_00000038;
  
  func_0x0001080f6efc();
  func_0x0001080f66e0();
  plVar5 = (long *)*param_2;
  if (plVar5 != (long *)0x0) {
    do {
      func_0x0001080f67e4();
    } while (extraout_w10 != 0);
  }
  func_0x0001080f68f0();
  if (param_1 != 0) {
    func_0x0001080f6e58();
    func_0x0001080f6918();
    func_0x0001080f6ba4(unaff_x22 + 0xa0);
    func_0x0001080f6660();
  }
  func_0x0001080f69e8();
  func_0x0001080f660c(in_stack_00000038);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    return;
  }
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104bdb638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080f5500; end: 1080f5523;  */

void FUN_1080f5500(void)

{
  return;
}



/* Entry: 1080f5524; end: 1080f557f;  */

void FUN_1080f5524(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  
  func_0x0001080f6728();
  func_0x0001080f68f0();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x0001080f6d24();
    func_0x0001080f6840();
    func_0x0001080f6ba4(lVar1 + 0xa0);
    func_0x0001080f6830();
    func_0x0001080f6b88();
  }
  func_0x0001080f660c(extraout_x8);
  if ((bool)in_ZR) {
    if (param_1 != 0) {
      func_0x0001003a90c4(&stack0xffffffffffffffe0);
      return;
    }
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1080f5580; end: 1080f55a3;  */

void FUN_1080f5580(void)

{
  return;
}



/* Entry: 1080f55a4; end: 1080f5613;  */

void FUN_1080f55a4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long lVar4;
  int extraout_w10;
  long *plVar5;
  long unaff_x22;
  undefined8 in_stack_00000038;
  
  func_0x0001080f6efc();
  func_0x0001080f66e0();
  plVar5 = (long *)*param_2;
  if (plVar5 != (long *)0x0) {
    do {
      func_0x0001080f67e4();
    } while (extraout_w10 != 0);
  }
  func_0x0001080f68f0();
  if (param_1 != 0) {
    func_0x0001080f6e58();
    func_0x0001080f6918();
    func_0x0001080f6ba4(unaff_x22 + 0xd0);
    func_0x0001080f6660();
  }
  func_0x0001080f69e8();
  func_0x0001080f660c(in_stack_00000038);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    return;
  }
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104bdb638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080f5614; end: 1080f5637;  */

void FUN_1080f5614(void)

{
  return;
}



/* Entry: 1080f5638; end: 1080f5693;  */

void FUN_1080f5638(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  
  func_0x0001080f6728();
  func_0x0001080f68f0();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x0001080f6d24();
    func_0x0001080f6840();
    func_0x0001080f6ba4(lVar1 + 0xd0);
    func_0x0001080f6830();
    func_0x0001080f6b88();
  }
  func_0x0001080f660c(extraout_x8);
  if ((bool)in_ZR) {
    if (param_1 != 0) {
      func_0x0001003a90c4(&stack0xffffffffffffffe0);
      return;
    }
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1080f5694; end: 1080f56b7;  */

void FUN_1080f5694(void)

{
  return;
}



/* Entry: 1080f56b8; end: 1080f5727;  */

void FUN_1080f56b8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long lVar4;
  int extraout_w10;
  long *plVar5;
  long unaff_x22;
  undefined8 in_stack_00000038;
  
  func_0x0001080f6efc();
  func_0x0001080f66e0();
  plVar5 = (long *)*param_2;
  if (plVar5 != (long *)0x0) {
    do {
      func_0x0001080f67e4();
    } while (extraout_w10 != 0);
  }
  func_0x0001080f68f0();
  if (param_1 != 0) {
    func_0x0001080f6e58();
    func_0x0001080f6918();
    func_0x0001080f6ba4(unaff_x22 + 0x100);
    func_0x0001080f6660();
  }
  func_0x0001080f69e8();
  func_0x0001080f660c(in_stack_00000038);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    return;
  }
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104bdb638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080f5728; end: 1080f574b;  */

void FUN_1080f5728(void)

{
  return;
}



/* Entry: 1080f574c; end: 1080f57a7;  */

void FUN_1080f574c(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  
  func_0x0001080f6728();
  func_0x0001080f68f0();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x0001080f6d24();
    func_0x0001080f6840();
    func_0x0001080f6ba4(lVar1 + 0x100);
    func_0x0001080f6830();
    func_0x0001080f6b88();
  }
  func_0x0001080f660c(extraout_x8);
  if ((bool)in_ZR) {
    if (param_1 != 0) {
      func_0x0001003a90c4(&stack0xffffffffffffffe0);
      return;
    }
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1080f57a8; end: 1080f57cb;  */

void FUN_1080f57a8(void)

{
  return;
}



/* Entry: 1080f57cc; end: 1080f5807;  */

void FUN_1080f57cc(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  long *plVar5;
  
  plVar5 = (long *)*param_2;
  if (plVar5 != (long *)0x0) {
    do {
      func_0x0001080f67e4();
    } while (extraout_w10 != 0);
  }
  func_0x0001080f68f0();
  func_0x0001080f6aa4();
  func_0x0001078bee50();
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104bdb638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080f5808; end: 1080f582b;  */

void FUN_1080f5808(void)

{
  return;
}



/* Entry: 1080f582c; end: 1080f583f;  */

void FUN_1080f582c(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x0001080f68f0();
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080f5840; end: 1080f5863;  */

void FUN_1080f5840(void)

{
  return;
}



/* Entry: 1080f5864; end: 1080f595f;  */

void FUN_1080f5864(double param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long in_stack_00000008;
  char in_stack_00000010;
  
  func_0x0001080f6f38();
  func_0x0001080f6810();
  func_0x0001080f6b50();
  if (param_2 != 0) {
    if ((in_stack_00000010 != '\t' || in_stack_00000008 == 0) ||
       (*(long *)(in_stack_00000008 + 0x10) != 5)) {
      func_0x0001080f6ccc();
      func_0x0001080f6ad4();
      goto LAB_1080f5950;
    }
    fVar1 = 0.0;
    if (*(char *)(in_stack_00000008 + 0x20) == '\x06') {
      func_0x00010b9a92f0(in_stack_00000008 + 0x18);
      fVar1 = (float)param_1;
    }
    fVar2 = fVar1;
    if (*(char *)(in_stack_00000008 + 0x30) == '\x06') {
      func_0x00010b9a92f0(in_stack_00000008 + 0x28);
      fVar2 = (float)param_1;
    }
    fVar3 = fVar1;
    if (*(char *)(in_stack_00000008 + 0x40) == '\x06') {
      func_0x00010b9a92f0(in_stack_00000008 + 0x38);
      fVar3 = (float)param_1;
    }
    fVar4 = fVar1;
    if (*(char *)(in_stack_00000008 + 0x50) == '\x06') {
      func_0x00010b9a92f0(in_stack_00000008 + 0x48);
      fVar4 = (float)param_1;
    }
    if (*(char *)(in_stack_00000008 + 0x60) == '\x06') {
      func_0x00010b9a92f0(in_stack_00000008 + 0x58);
      fVar1 = (float)param_1;
    }
    *(float *)(param_2 + 0xe0) = fVar2;
    *(float *)(param_2 + 0xe4) = fVar3;
    *(float *)(param_2 + 0xe8) = fVar4;
    *(float *)(param_2 + 0xec) = fVar1;
  }
  func_0x0001080f6974();
LAB_1080f5950:
  func_0x0001080f6b58();
  func_0x0001080f6a54();
  return;
}



/* Entry: 1080f5960; end: 1080f5983;  */

void FUN_1080f5960(void)

{
  return;
}



/* Entry: 1080f5984; end: 1080f599f;  */

void FUN_1080f5984(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x0001080f68f0();
  if (param_1 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = *(undefined8 *)(param_1 + 8);
  func_0x0001003a90c4(&uStack_20);
  return;
}



/* Entry: 1080f59a0; end: 1080f59c3;  */

void FUN_1080f59a0(void)

{
  return;
}



/* Entry: 1080f59c4; end: 1080f5a17;  */

void FUN_1080f59c4(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = (ulong)*(uint *)(param_2 + 0x20);
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x10);
  plVar1 = (long *)(param_1 + ((long)*(ulong *)(param_2 + 0x18) >> 1));
  if ((*(ulong *)(param_2 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
  func_0x00010810c208(uVar2,*(undefined4 *)(param_2 + 0x24));
                    /* WARNING: Could not recover jumptable at 0x0001080f5a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,uVar2 & 0xffffffff);
  return;
}



/* Entry: 1080f5a18; end: 1080f5a33;  */

void FUN_1080f5a18(void)

{
  return;
}



/* Entry: 1080f5a34; end: 1080f5abb;  */

void FUN_1080f5a34(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  
  puVar3 = *(ulong **)(param_2 + 0x10);
  uStack_38 = puVar3[3];
  uStack_40 = puVar3[2];
  uStack_30 = puVar3[4];
  uStack_58 = puVar3[6];
  uStack_60 = puVar3[5];
  uStack_50 = puVar3[7];
  func_0x00010810c2e0(&uStack_78,&uStack_40,&uStack_60,param_1 + 0xc0);
  pcVar2 = (code *)*puVar3;
  plVar1 = (long *)(param_1 + ((long)puVar3[1] >> 1));
  if ((puVar3[1] & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  uStack_38 = uStack_70;
  uStack_40 = uStack_78;
  uStack_30 = uStack_68;
  (*pcVar2)(plVar1,&uStack_40);
  return;
}



/* Entry: 1080f5abc; end: 1080f5acf;  */

void FUN_1080f5abc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080f5ad0; end: 1080f5b03;  */

void FUN_1080f5ad0(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 unaff_x21;
  
  func_0x0001080f6a48();
  *param_1 = &PTR_FUN_110a21a70;
  func_0x0001080f6ca4();
  func_0x0001080f6cec();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  return;
}



/* Entry: 1080f5b04; end: 1080f5b4b;  */

void FUN_1080f5b04(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  
  puVar3 = *(ulong **)(param_2 + 0x10);
  pcVar2 = (code *)*puVar3;
  plVar1 = (long *)(param_1 + ((long)puVar3[1] >> 1));
  if ((puVar3[1] & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  uStack_28 = puVar3[6];
  uStack_30 = puVar3[5];
  uStack_20 = puVar3[7];
  (*pcVar2)(plVar1,&uStack_30);
  return;
}



/* Entry: 1080f5b4c; end: 1080f5b5f;  */

void FUN_1080f5b4c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080f5b60; end: 1080f5b93;  */

void FUN_1080f5b60(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 unaff_x21;
  
  func_0x0001080f6a48();
  *param_1 = &PTR_FUN_110a21a90;
  func_0x0001080f6ca4();
  func_0x0001080f6cec();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  return;
}



/* Entry: 1080f5b94; end: 1080f5c9f;  */

void FUN_1080f5b94(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,ulong param_6,code *param_7,ulong param_8)

{
  undefined1 in_ZR;
  code *pcVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x21;
  double dVar2;
  undefined8 uStack_58;
  
  dVar2 = param_1;
  func_0x0001080f6ee4();
  func_0x0001080f66e0();
  func_0x0001080f6dd8();
  if (*unaff_x21 == 0) {
    pcVar1 = UNRECOVERED_JUMPTABLE + ((long)param_8 >> 1);
    UNRECOVERED_JUMPTABLE = param_7;
    if ((param_8 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pcVar1 + ((ulong)param_7 & 0xffffffff));
    }
    func_0x0001080f660c(uStack_58);
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001080f5c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_2);
      return;
    }
  }
  else {
    if ((param_6 & 1) != 0) {
      param_5 = *(code **)(*(long *)(UNRECOVERED_JUMPTABLE + ((long)param_6 >> 1)) +
                          ((ulong)param_5 & 0xffffffff));
    }
    (*param_5)();
    pcVar1 = (code *)*unaff_x21;
    FUN_1080e5550(param_1);
    func_0x0001080f6830();
    func_0x0001080f660c(uStack_58);
    dVar2 = param_1;
    if ((bool)in_ZR) {
      return;
    }
  }
  ___stack_chk_fail();
  UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE + 0x10);
  if ((*(ulong *)(UNRECOVERED_JUMPTABLE + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 =
         *(code **)(*(long *)(pcVar1 + ((long)*(ulong *)(UNRECOVERED_JUMPTABLE + 0x18) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE_00 & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001080f5ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)
            ((float)((double)*(float *)(UNRECOVERED_JUMPTABLE + 0x20) +
                    dVar2 * (double)(*(float *)(UNRECOVERED_JUMPTABLE + 0x24) -
                                    *(float *)(UNRECOVERED_JUMPTABLE + 0x20))));
  return;
}



/* Entry: 1080f5ca0; end: 1080f5ceb;  */

void FUN_1080f5ca0(double param_1,long param_2,long param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0x10);
  if ((*(ulong *)(param_3 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(*(long *)(param_2 + ((long)*(ulong *)(param_3 + 0x18) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001080f5ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((float)((double)*(float *)(param_3 + 0x20) +
                    param_1 * (double)(*(float *)(param_3 + 0x24) - *(float *)(param_3 + 0x20))));
  return;
}



/* Entry: 1080f5cec; end: 1080f5d1f;  */

void FUN_1080f5cec(undefined8 param_1,int param_2,undefined8 param_3,long param_4)

{
  if (param_2 == *(int *)(*(long *)(param_4 + 0x10) + 8)) {
    func_0x0001080f6820();
    func_0x0001080f6a1c();
    func_0x0001080f6980();
  }
  return;
}



/* Entry: 1080f5d20; end: 1080f5d3f;  */

void FUN_1080f5d20(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104bda388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080f5d40; end: 1080f5d43;  */

void FUN_1080f5d40(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080f5d44; end: 1080f5ddf;  */

void FUN_1080f5d44(undefined8 *param_1)

{
  int extraout_w11;
  long *unaff_x20;
  
  func_0x0001080f6a48();
  *param_1 = &PTR_FUN_110a21ad0;
  func_0x0001080f6d58();
  if (*unaff_x20 != 0) {
    do {
      func_0x0001080f6784();
    } while (extraout_w11 != 0);
  }
  func_0x0001080f6ed0();
  return;
}



/* Entry: 1080f5de0; end: 1080f5dff;  */

void FUN_1080f5de0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104bda388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080f5e00; end: 1080f5e03;  */

void FUN_1080f5e00(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080f5e04; end: 1080f5e3f;  */

void FUN_1080f5e04(void)

{
  int extraout_w11;
  long *unaff_x20;
  
  func_0x0001080f6a48();
  func_0x0001080f67f4(&PTR_FUN_110a21af0);
  if (*unaff_x20 != 0) {
    do {
      func_0x0001080f6784();
    } while (extraout_w11 != 0);
  }
  func_0x0001080f6b38();
  return;
}



/* Entry: 1080f5e40; end: 1080f5e63;  */

void FUN_1080f5e40(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080f69cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080f5e64; end: 1080f5ef3;  */

void FUN_1080f5e64(void)

{
  func_0x0001080f66a0();
  return;
}



/* Entry: 1080f5ef4; end: 1080f5f13;  */

void FUN_1080f5ef4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104bda388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080f5f14; end: 1080f5f17;  */

void FUN_1080f5f14(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080f5f18; end: 1080f5f87;  */

void FUN_1080f5f18(void)

{
  int extraout_w11;
  long *unaff_x20;
  
  func_0x0001080f6a48();
  func_0x0001080f67f4(&PTR_FUN_110a21b10);
  if (*unaff_x20 != 0) {
    do {
      func_0x0001080f6784();
    } while (extraout_w11 != 0);
  }
  func_0x0001080f6b38();
  return;
}



/* Entry: 1080f5f88; end: 1080f5fa7;  */

void FUN_1080f5f88(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104bda388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080f5fa8; end: 1080f5fab;  */

void FUN_1080f5fa8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080f5fac; end: 1080f6047;  */

void FUN_1080f5fac(undefined8 *param_1)

{
  int extraout_w11;
  long *unaff_x20;
  
  func_0x0001080f6a48();
  *param_1 = &PTR_FUN_110a21b30;
  func_0x0001080f6d58();
  if (*unaff_x20 != 0) {
    do {
      func_0x0001080f6784();
    } while (extraout_w11 != 0);
  }
  func_0x0001080f6ed0();
  return;
}



/* Entry: 1080f6048; end: 1080f6067;  */

void FUN_1080f6048(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104bda388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080f6068; end: 1080f606b;  */

void FUN_1080f6068(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080f606c; end: 1080f6137;  */

void FUN_1080f606c(void)

{
  int extraout_w11;
  long *unaff_x20;
  
  func_0x0001080f6a48();
  func_0x0001080f67f4(&PTR_FUN_110a21b50);
  if (*unaff_x20 != 0) {
    do {
      func_0x0001080f6784();
    } while (extraout_w11 != 0);
  }
  func_0x0001080f6b38();
  return;
}



/* Entry: 1080f6138; end: 1080f6157;  */

void FUN_1080f6138(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104bda388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080f6158; end: 1080f615b;  */

void FUN_1080f6158(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080f615c; end: 1080f6227;  */

void FUN_1080f615c(void)

{
  int extraout_w11;
  long *unaff_x20;
  
  func_0x0001080f6a48();
  func_0x0001080f67f4(&PTR_FUN_110a21b70);
  if (*unaff_x20 != 0) {
    do {
      func_0x0001080f6784();
    } while (extraout_w11 != 0);
  }
  func_0x0001080f6b38();
  return;
}



/* Entry: 1080f6228; end: 1080f6247;  */

void FUN_1080f6228(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104bda388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080f6248; end: 1080f624b;  */

void FUN_1080f6248(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080f624c; end: 1080f6287;  */

void FUN_1080f624c(void)

{
  int extraout_w11;
  long *unaff_x20;
  
  func_0x0001080f6a48();
  func_0x0001080f67f4(&PTR_FUN_110a21b90);
  if (*unaff_x20 != 0) {
    do {
      func_0x0001080f6784();
    } while (extraout_w11 != 0);
  }
  func_0x0001080f6b38();
  return;
}



/* Entry: 1080f6288; end: 1080f62ab;  */

void FUN_1080f6288(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080f69cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080f62ac; end: 1080f638b;  */

void FUN_1080f62ac(long *param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x0001080f6a40(param_2,&PTR_DAT_110a21c10,&PTR_DAT_110a21bb0);
    if (param_2 != 0) {
      do {
        func_0x0001080f67e4();
      } while (extraout_w10 != 0);
    }
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1080f638c; end: 1080f638f;  */

undefined8 * FUN_1080f638c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a21bd8;
  func_0x000104bdb38c(param_1 + 8);
  *param_1 = &PTR_FUN_110a25698;
  FUN_10837ca38(param_1 + 4);
  return param_1;
}



/* Entry: 1080f6390; end: 1080f63a3;  */

void FUN_1080f6390(void)

{
  FUN_1080f6458();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080f63a4; end: 1080f6457;  */

void FUN_1080f63a4(undefined8 *param_1,long param_2)

{
  float *pfVar1;
  float *unaff_x19;
  long unaff_x21;
  undefined8 uVar2;
  undefined8 auStack_40 [2];
  
  if (*(long *)(param_2 + 0x40) == 0) {
    *param_1 = 0;
    return;
  }
  func_0x0001080f6ee4();
  pfVar1 = unaff_x19;
  FUN_1080f6488();
  if ((int)pfVar1 == 0) {
    if (*(char *)(unaff_x21 + 0x48) != '\x01') goto LAB_1080f6438;
  }
  else {
    uVar2 = *(undefined8 *)unaff_x19;
    *(undefined8 *)(unaff_x21 + 0x54) = *(undefined8 *)(unaff_x19 + 2);
    *(undefined8 *)(unaff_x21 + 0x4c) = uVar2;
  }
  *(undefined1 *)(unaff_x21 + 0x48) = 0;
  func_0x000108108d5c(auStack_40,(double)(unaff_x19[2] - *unaff_x19),
                      (double)(unaff_x19[3] - unaff_x19[1]),*(long *)(unaff_x21 + 0x40) + 0x18);
  FUN_108123914();
  FUN_10837ca5c(auStack_40[0]);
LAB_1080f6438:
  FUN_1081239d0(param_1);
  return;
}



/* Entry: 1080f6458; end: 1080f6487;  */

undefined8 * FUN_1080f6458(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a21bd8;
  func_0x000104bdb38c(param_1 + 8);
  *param_1 = &PTR_FUN_110a25698;
  FUN_10837ca38(param_1 + 4);
  return param_1;
}



/* Entry: 1080f6488; end: 1080f650b;  */

bool FUN_1080f6488(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (uVar2 == 4) break;
    uVar1 = uVar2 + 1;
  } while (ABS(*(float *)(param_1 + uVar2 * 4) - *(float *)(param_2 + uVar2 * 4)) <= 0.0001);
  return uVar2 < 4;
}



/* Entry: 1080f650c; end: 1080f6577;  */

void FUN_1080f650c(long param_1)

{
  func_0x0001080f6534(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 1080f6578; end: 1080f6f4f;  */

void FUN_1080f6578(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080f6f50; end: 1080f7033;  */

undefined8 * FUN_1080f6f50(undefined8 *param_1,undefined8 param_2,undefined1 param_3,long *param_4)

{
  long lVar1;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar2;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_28;
  
  lStack_28 = 0;
  if (*param_4 != 0) {
    do {
      func_0x0001080f87cc();
      lStack_28 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_1080fd008(param_1,param_2,&UNK_10f47ac82,&UNK_10f47ac94,&lStack_28,0);
  func_0x0001080ed580(lStack_28);
  *param_1 = &PTR_FUN_110a21c58;
  func_0x0001080f6ffc(&lStack_28);
  if (lStack_28 == 0) {
    uVar2 = 0;
    lVar1 = 0;
  }
  else {
    do {
      func_0x0001080f87cc();
      lVar1 = lStack_28;
      uVar2 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  param_1[7] = uVar2;
  FUN_1080f79d4(lVar1);
  *(undefined1 *)(param_1 + 8) = param_3;
  return param_1;
}



/* Entry: 1080f7034; end: 1080f77f7;  */

void FUN_1080f7034(long *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar6;
  long lVar7;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar4 = (undefined8 *)0x270;
  __Znwm();
  plVar6 = puVar4 + 1;
  *plVar6 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a21d58;
  puVar1 = puVar4 + 3;
  func_0x00010812597c(puVar1,param_2 + 0x10);
  if ((puVar4[5] == 0) || (*(long *)(puVar4[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_50 = puVar1;
    puStack_48 = puVar4;
    func_0x0001003a8180(puVar4 + 4,&puStack_50);
    func_0x0001003a824c(&puStack_50);
  }
  (**(code **)(puVar4[3] + 0x20))(puVar1);
  func_0x0001081266cc(puVar4 + 0x49,param_2 + 0x38);
  if (*(char *)(param_2 + 0x40) == '\x01') {
    lVar7 = *(long *)(param_2 + 0x10);
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    func_0x0001080f888c();
    *puVar5 = &PTR_DAT_110a25750;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(lVar7 + 0x40);
    do {
      func_0x0001080f87f0();
    } while (extraout_w10 != 0);
    func_0x0001080f8808();
    func_0x0001080f7a58(puStack_50);
    func_0x0001080f7a34(param_2);
  }
  else {
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    func_0x0001080f888c();
    *puVar5 = &PTR_DAT_110a258e0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    do {
      func_0x0001080f87f0();
    } while (extraout_w10_00 != 0);
    func_0x0001080f8808();
    func_0x0001080f7a58(puStack_50);
    func_0x0001080f7a7c(param_2);
  }
  if (puVar4[5] != 0) {
    do {
      func_0x0001080f884c();
    } while (extraout_w10_01 != 0);
  }
  *param_1 = (long)puVar1;
  func_0x0001080f7a28(puVar1);
  return;
}



/* Entry: 1080f77f8; end: 1080f77fb;  */

undefined8 * FUN_1080f77f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a21c58;
  func_0x0001080f7840(param_1 + 7);
  *param_1 = &PTR_DAT_110a22c48;
  func_0x0001080fd160(param_1 + 5);
  func_0x000107475310(param_1 + 2);
  return param_1;
}



/* Entry: 1080f77fc; end: 1080f780f;  */

void FUN_1080f77fc(void)

{
  FUN_1080f7810();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080f7810; end: 1080f7863;  */

undefined8 * FUN_1080f7810(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a21c58;
  func_0x0001080f7840(param_1 + 7);
  *param_1 = &PTR_DAT_110a22c48;
  func_0x0001080fd160(param_1 + 5);
  func_0x000107475310(param_1 + 2);
  return param_1;
}



/* Entry: 1080f7864; end: 1080f788f;  */

void FUN_1080f7864(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080f8764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}


