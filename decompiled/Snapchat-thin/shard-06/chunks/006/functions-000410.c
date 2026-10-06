/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104bd52a4; end: 104bd52af;  */

void FUN_104bd52a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bd581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bd52b0; end: 104bd52c3;  */

void FUN_104bd52b0(void)

{
  FUN_104bd53ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd52c4; end: 104bd52e3;  */

void FUN_104bd52c4(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x18);
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 104bd52e4; end: 104bd5393;  */

void FUN_104bd52e4(void)

{
  long extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  long lVar1;
  long lStack_40;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000104bd58ac();
  if (lStack_40 == 0) {
    lVar1 = 0;
    uStack_30 = 0;
  }
  else {
    do {
      func_0x000104bd5860();
    } while (extraout_w11 != 0);
    do {
      func_0x000104bd5860();
      uStack_30 = extraout_x8_00;
      lVar1 = extraout_x8;
    } while (extraout_w11_00 != 0);
  }
  func_0x00010529f518(&uStack_30);
  FUN_104bd4e40(&uStack_30);
  if (lVar1 != 0) {
    do {
      func_0x000104bd5940();
    } while (extraout_w10 != 0);
    do {
      func_0x000104bd5940();
    } while (extraout_w10_00 != 0);
  }
  lStack_28 = lVar1;
  func_0x0001052a84fc(&lStack_28);
  FUN_104bd4e40(&lStack_28);
  func_0x000104bd5950();
  func_0x000104bd5984();
  func_0x000104bd58a0();
  func_0x000104bd5958();
  return;
}



/* Entry: 104bd5394; end: 104bd5397;  */

undefined8 * FUN_104bd5394(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e3528;
  func_0x0001003a8c94(param_1 + 3);
  func_0x000104bd53e8(param_1 + 1);
  return param_1;
}



/* Entry: 104bd5398; end: 104bd53ab;  */

void FUN_104bd5398(void)

{
  FUN_104bd53ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd53ac; end: 104bd540b;  */

undefined8 * FUN_104bd53ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e3528;
  func_0x0001003a8c94(param_1 + 3);
  func_0x000104bd53e8(param_1 + 1);
  return param_1;
}



/* Entry: 104bd540c; end: 104bd5417;  */

void FUN_104bd540c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e3448;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bd5418; end: 104bd545f;  */

void FUN_104bd5418(long param_1)

{
  func_0x0001003a81cc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bd5460; end: 104bd5463;  */

void FUN_104bd5460(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e3558;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bd5464; end: 104bd5477;  */

void FUN_104bd5464(void)

{
  func_0x000104bd5480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd5478; end: 104bd548b;  */

void FUN_104bd5478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bd581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bd548c; end: 104bd54af;  */

void FUN_104bd548c(void)

{
  func_0x00010007e5d0();
  FUN_104bd54b0();
  return;
}



/* Entry: 104bd54b0; end: 104bd54bb;  */

void FUN_104bd54b0(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 104bd54bc; end: 104bd54df;  */

void FUN_104bd54bc(long param_1)

{
  func_0x00010007e5d0();
  if (param_1 != 0) {
    func_0x0001003a916c();
  }
  return;
}



/* Entry: 104bd54e0; end: 104bd54fb;  */

void FUN_104bd54e0(void)

{
  return;
}



/* Entry: 104bd54fc; end: 104bd564b;  */

void FUN_104bd54fc(double param_1,long param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  long lVar3;
  code *pcVar4;
  undefined8 extraout_x8;
  long alStack_58 [4];
  undefined8 uStack_38;
  
  func_0x00010090b5cc();
  uStack_38 = extraout_x8;
  if ((bRam00000001136a3740 & 1) == 0) {
    iVar1 = 0x136a3740;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      lVar3 = 0;
      do {
        in_ZR = 1;
        if (lVar3 == 0x1b) goto LAB_104bd560c;
        *(undefined *)((long)alStack_58 + lVar3) = ~(&UNK_10dd5b84f)[lVar3];
        lVar3 = lVar3 + 1;
      } while( true );
    }
  }
  do {
    if ((pcRam00000001136a3738 == (code *)0x0) ||
       (lVar3 = param_2, (*pcRam00000001136a3738)(), lVar3 == 0)) {
LAB_104bd5594:
      lVar3 = 0;
    }
    else {
      pcVar2 = "heapCapacity";
      _JSStringCreateWithUTF8CString("heapCapacity");
      alStack_58[0] = 0;
      func_0x0001002a9f08();
      _JSObjectGetProperty();
      _JSStringRelease(pcVar2);
      if (alStack_58[0] != 0) goto LAB_104bd5594;
      func_0x0001002a9f08();
      _JSValueToNumber();
      if (alStack_58[0] != 0) goto LAB_104bd5594;
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      lVar3 = (long)param_1;
    }
    func_0x00010090b7c4(uStack_38,lVar3);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
LAB_104bd560c:
    pcVar4 = (code *)0xfffffffffffffffe;
    _dlsym(0xfffffffffffffffe,alStack_58);
    pcRam00000001136a3738 = pcVar4;
    ___cxa_guard_release(0x1136a3740);
  } while( true );
}



/* Entry: 104bd564c; end: 104bd566f;  */

void FUN_104bd564c(void)

{
  func_0x00010007e5d0();
  FUN_104bd5670();
  return;
}



/* Entry: 104bd5670; end: 104bd5693;  */

void FUN_104bd5670(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000104bd5894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 104bd5694; end: 104bd56f3;  */

void FUN_104bd5694(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x00010007e5d0();
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + 8);
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
      func_0x000104bd5a04();
    }
  }
  return;
}



/* Entry: 104bd56f4; end: 104bd5717;  */

void FUN_104bd56f4(void)

{
  func_0x00010007e5d0();
  FUN_104bd5718();
  return;
}



/* Entry: 104bd5718; end: 104bd573b;  */

void FUN_104bd5718(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000104bd5894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 104bd573c; end: 104bd579b;  */

undefined8 FUN_104bd573c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000104bd5768(&uStack_28);
  return param_1;
}



/* Entry: 104bd579c; end: 104bd57a3;  */

void FUN_104bd579c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010002b82c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x000104bd4b60();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104bd57a4; end: 104bd57d7;  */

void FUN_104bd57a4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010002b82c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x000104bd4b60();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104bd57d8; end: 104bd57fb;  */

void FUN_104bd57d8(void)

{
  func_0x00010007e5d0();
  FUN_104bd57fc();
  return;
}



/* Entry: 104bd57fc; end: 104bd5a57;  */

void FUN_104bd57fc(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 104bd5a58; end: 104bd89cf;  */

char * FUN_104bd5a58(void)

{
  FUN_104bd8ab4();
  return "account_challenge";
}



/* Entry: 104bd89d0; end: 104bd8ab3;  */

/* WARNING: Possible PIC construction at 0x000104bd8a40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104bd8a44) */
/* WARNING: Removing unreachable block (ram,0x000104bd8a6c) */
/* WARNING: Removing unreachable block (ram,0x000104bd8a5c) */

void FUN_104bd89d0(void)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined1 auStack_28e8 [10416];
  undefined8 uStack_38;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _memcpy(auStack_28e8,&PTR_s_account_challenge_1107e3620,0x28b0);
  uVar1 = 0x48;
  __Znwm();
  func_0x00010b8c0588();
  *extraout_x8 = uVar1;
  return;
}



/* Entry: 104bd8ab4; end: 104bd8ac7;  */

void FUN_104bd8ab4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bd8ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)();
  return;
}



/* Entry: 104bd8ac8; end: 104bd8ba7;  */

long FUN_104bd8ac8(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar1;
  long lVar2;
  long extraout_x8_01;
  undefined8 extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  
  *(undefined8 *)(param_1 + 8) = 0;
  lVar2 = param_1;
  func_0x000104bdb8b4();
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = extraout_x9;
  *(long *)(lVar2 + 0x20) = extraout_x8 + 0x98;
  uVar1 = 0;
  if (*param_2 != 0) {
    do {
      func_0x000104bdb5dc();
      uVar1 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  lVar2 = *param_3;
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x000104bdb760();
      lVar2 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  *(undefined8 *)(param_1 + 0x38) = 0x32aaaba7;
  *(long *)(param_1 + 0x30) = lVar2;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x82) = 0;
  *(undefined8 *)(param_1 + 0x7a) = 0;
  func_0x00010028b0c8(param_1 + 0x90,param_4);
  return param_1;
}



/* Entry: 104bd8ba8; end: 104bd8bff;  */

long FUN_104bd8ba8(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined8 extraout_x9;
  
  lVar1 = param_1;
  func_0x000104bdb8b4();
  *(undefined8 *)(lVar1 + 0x18) = extraout_x9;
  *(long *)(lVar1 + 0x20) = extraout_x8 + 0x98;
  func_0x00010028ad98(lVar1 + 0x90);
  func_0x00010b9a8d98(param_1 + 0x80);
  func_0x00010b9a1f08(param_1 + 0x38);
  FUN_104bd5214(param_1 + 0x30);
  FUN_104bd56f4(param_1 + 0x28);
  func_0x0001003a81d8(param_1 + 8);
  return param_1;
}



/* Entry: 104bd8c00; end: 104bd8c13;  */

long FUN_104bd8c00(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined8 extraout_x9;
  
  lVar1 = param_1;
  func_0x000104bdb8b4();
  *(undefined8 *)(lVar1 + 0x18) = extraout_x9;
  *(long *)(lVar1 + 0x20) = extraout_x8 + 0x98;
  func_0x00010028ad98(lVar1 + 0x90);
  func_0x00010b9a8d98(param_1 + 0x80);
  func_0x00010b9a1f08(param_1 + 0x38);
  FUN_104bd5214(param_1 + 0x30);
  FUN_104bd56f4(param_1 + 0x28);
  func_0x0001003a81d8(param_1 + 8);
  return param_1;
}



/* Entry: 104bd8c14; end: 104bd8c27;  */

void FUN_104bd8c14(void)

{
  FUN_104bd8ba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd8c28; end: 104bd8c3f;  */

void FUN_104bd8c28(long param_1)

{
  FUN_104bd8ba8(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd8c40; end: 104bd8cb7;  */

void FUN_104bd8c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  func_0x00010028b1f0();
  func_0x00010b9a8e18(auStack_50,param_3);
  FUN_104bd8cb8(auStack_40);
  func_0x00010b9a9358(extraout_x8,auStack_40);
  func_0x000104bdb6c0();
  func_0x000104bdb674();
  return;
}



/* Entry: 104bd8cb8; end: 104bd8eaf;  */

void FUN_104bd8cb8(long param_1,long param_2,long *param_3,undefined8 param_4,code *param_5)

{
  long lVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  uStack_48 = 0;
  if (*param_3 != 0) {
    do {
      func_0x000104bdb554();
      uStack_48 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x00010b9a5e5c(auStack_60,param_3);
  lVar1 = param_2 + 0x90;
  FUN_104bdb3d4(lVar1,auStack_60);
  if (lVar1 != 0) {
    func_0x0001003a8364();
    lStack_90 = (long)*(char *)(lVar1 + 0x3f);
    if (lStack_90 < 0) {
      lStack_98 = *(long *)(lVar1 + 0x28);
      lStack_90 = *(long *)(lVar1 + 0x30);
    }
    else {
      lStack_98 = lVar1 + 0x28;
    }
    func_0x0001003a8458(&uStack_70);
    func_0x00010090c1cc(&uStack_48,&uStack_70);
    func_0x0001003a8c94(&uStack_70);
  }
  __ZNSt3__15mutex4lockEv(param_2 + 0x38);
  func_0x00010b9aa7c4(param_1,param_2 + 0x80,&uStack_48);
  if (*(byte *)(param_1 + 8) < 2) {
    func_0x00010b9a8d98(param_1);
    func_0x000104bdb6d8();
    uStack_68 = 0;
    uStack_70 = 0;
    func_0x00010b9a5e5c(&lStack_98,&uStack_48);
    (*param_5)(auStack_80,&lStack_98,param_4);
    func_0x00010b9a9020(&uStack_70,auStack_80);
    func_0x00010b9a8d98(auStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_98);
    __ZNSt3__15mutex4lockEv(param_2 + 0x38);
    func_0x00010b9aa7c4(&lStack_98,param_2 + 0x80,&uStack_48);
    if ((byte)lStack_90 < 2) {
      func_0x00010b9aa8d0(param_2 + 0x80,&uStack_48,&uStack_70);
    }
    func_0x000104bdb754();
    func_0x00010b9a8fa8();
    func_0x000104bdb6f8();
    func_0x000104bdb6d8();
    func_0x00010b9a8d98(&uStack_70);
  }
  else {
    func_0x000104bdb6d8();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  func_0x0001003a8c94(&uStack_48);
  return;
}



/* Entry: 104bd8eb0; end: 104bd8eb7;  */

void FUN_104bd8eb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  func_0x00010028b1f0(param_1 + -0x20);
  func_0x00010b9a8e18(auStack_50,param_3);
  FUN_104bd8cb8(auStack_40);
  func_0x00010b9a9358(extraout_x8,auStack_40);
  func_0x000104bdb6c0();
  func_0x000104bdb674();
  return;
}



/* Entry: 104bd8eb8; end: 104bd8f13;  */

undefined1 *
FUN_104bd8eb8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  func_0x000104bdb698(param_2,param_1,param_1,param_3,param_4,FUN_104bd9764);
  puVar1 = auStack_30;
  func_0x00010b9a9608(puVar1);
  func_0x000104bdb6c0();
  func_0x000104bdb674();
  return puVar1;
}



/* Entry: 104bd8f14; end: 104bd8f1b;  */

undefined1 * FUN_104bd8f14(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  func_0x000104bdb698(param_2,param_1 + -0x20,param_1 + -0x20,param_3,param_4,FUN_104bd9764);
  puVar1 = auStack_30;
  func_0x00010b9a9608(puVar1);
  func_0x000104bdb6c0();
  func_0x000104bdb674();
  return puVar1;
}



/* Entry: 104bd8f1c; end: 104bd8f8f;  */

undefined8 FUN_104bd8f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  
  func_0x000104bdb8a8(param_2,param_2,param_3);
  FUN_104bd8cb8(auStack_40);
  func_0x00010b9aa3b0(auStack_40);
  func_0x000104bdb6c0();
  func_0x000104bdb674();
  return param_1;
}



/* Entry: 104bd8f90; end: 104bd8f97;  */

undefined8 FUN_104bd8f90(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  
  func_0x000104bdb8a8(param_2 + -0x20,param_2 + -0x20,param_3);
  FUN_104bd8cb8(auStack_40);
  func_0x00010b9aa3b0(auStack_40);
  func_0x000104bdb6c0();
  func_0x000104bdb674();
  return param_1;
}



/* Entry: 104bd8f98; end: 104bd8ff3;  */

undefined1 *
FUN_104bd8f98(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  func_0x000104bdb698(param_2,param_1,param_1,param_3,param_4,0x104bd97e0);
  puVar1 = auStack_30;
  func_0x00010b9a9518(puVar1);
  func_0x000104bdb6c0();
  func_0x000104bdb674();
  return puVar1;
}



/* Entry: 104bd8ff4; end: 104bd8ffb;  */

undefined1 * FUN_104bd8ff4(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  func_0x000104bdb698(param_2,param_1 + -0x20,param_1 + -0x20,param_3,param_4,0x104bd97e0);
  puVar1 = auStack_30;
  func_0x00010b9a9518(puVar1);
  func_0x000104bdb6c0();
  func_0x000104bdb674();
  return puVar1;
}



/* Entry: 104bd8ffc; end: 104bd905f;  */

undefined1 *
FUN_104bd8ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  func_0x000104bdb698(param_2,param_1,param_1,param_3,param_4,0x104bd9820);
  puVar1 = auStack_30;
  func_0x00010b9a9588(puVar1);
  func_0x000104bdb6c0();
  func_0x000104bdb674();
  return puVar1;
}



/* Entry: 104bd9060; end: 104bd909b;  */

void FUN_104bd9060(undefined8 *param_1,undefined8 *param_2)

{
  func_0x000104bdb690();
  *param_2 = &PTR_DAT_110d7e488;
  param_2[1] = 1;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[2] = 0;
  *param_1 = param_2;
  return;
}



/* Entry: 104bd909c; end: 104bd910b;  */

void FUN_104bd909c(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  uVar1 = *param_2;
  uVar3 = *param_3;
  *param_3 = 0;
  uVar5 = param_3[2];
  uVar4 = param_3[1];
  *puVar2 = &PTR_DAT_110d7ef28;
  puVar2[1] = 1;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  puVar2[3] = uVar3;
  puVar2[5] = uVar5;
  puVar2[4] = uVar4;
  *param_1 = puVar2;
  func_0x000104bdb888();
  return;
}



/* Entry: 104bd910c; end: 104bd912f;  */

void FUN_104bd910c(long param_1,long param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  uStack_48 = 0;
  if (*param_3 != 0) {
    do {
      func_0x000104bdb554();
      uStack_48 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x00010b9a5e5c(auStack_60,param_3);
  lVar1 = param_2 + 0x90;
  FUN_104bdb3d4(lVar1,auStack_60);
  if (lVar1 != 0) {
    func_0x0001003a8364();
    lStack_90 = (long)*(char *)(lVar1 + 0x3f);
    if (lStack_90 < 0) {
      lStack_98 = *(long *)(lVar1 + 0x28);
      lStack_90 = *(long *)(lVar1 + 0x30);
    }
    else {
      lStack_98 = lVar1 + 0x28;
    }
    func_0x0001003a8458(&uStack_70);
    func_0x00010090c1cc(&uStack_48,&uStack_70);
    func_0x0001003a8c94(&uStack_70);
  }
  __ZNSt3__15mutex4lockEv(param_2 + 0x38);
  func_0x00010b9aa7c4(param_1,param_2 + 0x80,&uStack_48);
  if (*(byte *)(param_1 + 8) < 2) {
    func_0x00010b9a8d98(param_1);
    func_0x000104bdb6d8();
    uStack_68 = 0;
    uStack_70 = 0;
    func_0x00010b9a5e5c(&lStack_98,&uStack_48);
    FUN_104bd9860(auStack_80,&lStack_98,param_4);
    func_0x00010b9a9020(&uStack_70,auStack_80);
    func_0x00010b9a8d98(auStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_98);
    __ZNSt3__15mutex4lockEv(param_2 + 0x38);
    func_0x00010b9aa7c4(&lStack_98,param_2 + 0x80,&uStack_48);
    if ((byte)lStack_90 < 2) {
      func_0x00010b9aa8d0(param_2 + 0x80,&uStack_48,&uStack_70);
    }
    func_0x000104bdb754();
    func_0x00010b9a8fa8();
    func_0x000104bdb6f8();
    func_0x000104bdb6d8();
    func_0x00010b9a8d98(&uStack_70);
  }
  else {
    func_0x000104bdb6d8();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  func_0x0001003a8c94(&uStack_48);
  return;
}



/* Entry: 104bd9130; end: 104bd9473;  */

void FUN_104bd9130(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  ulong uVar2;
  char *pcVar3;
  ulong *puVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  ulong *puStack_58;
  undefined8 uStack_38;
  
  func_0x000104bdb588();
  func_0x000104bd4df4(&lStack_a0);
  if ((param_2 == 0) || (uVar2 = param_2, func_0x00010b9a5818(), (uVar2 & 1) != 0)) {
    FUN_104bd9474("getStringSync",&lStack_a0,param_2,FUN_104bda418);
    func_0x000104bdb730("getBoolSync");
    func_0x000104bdb730("getFloatSync");
    func_0x000104bdb730("getIntSync");
    func_0x000104bdb730("getLongSync");
    pcVar3 = "getBinarySync";
    func_0x000104bdb730();
    if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
      do {
        func_0x000104bdb644();
      } while (extraout_w10 != 0);
    }
    uStack_90 = 0x104bda60c;
    uStack_98 = param_2;
    func_0x000104bdb844();
    uStack_68 = 0x104bda590;
    ppuStack_60 = &PTR_FUN_1107e6028;
    puVar4 = (ulong *)pcVar3;
    func_0x000104bdb6c8();
    if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
      uVar2 = 0x104bda60c;
    }
    else {
      do {
        func_0x000104bdb644();
        uVar2 = uStack_90;
      } while (extraout_w10_00 != 0);
    }
    *puVar4 = param_2;
    puVar4[1] = uVar2;
    puStack_58 = puVar4;
    func_0x00010b9ac22c(pcVar3,&uStack_68);
    puStack_88 = (ulong *)pcVar3;
    func_0x000104bdb780();
    do {
      func_0x000104bdb8c8();
    } while (extraout_w10_01 != 0);
    puStack_80 = (ulong *)pcVar3;
    func_0x00010b9a8ef8(auStack_78,&puStack_80);
    func_0x0001003a83dc(&uStack_68,"clearCache");
    func_0x000104bd9bd4(lStack_a0 + 0x10,&uStack_68);
    func_0x00010b9a9020();
    func_0x0001003a8c94(&uStack_68);
    func_0x00010b9a8d98(auStack_78);
    FUN_104bda388(&puStack_80);
    FUN_104bda3d0(&puStack_88);
    FUN_104bd4978(&uStack_98);
    func_0x000104bdb6e0("getString");
    func_0x000104bdb6e0("getBool");
    func_0x000104bdb6e0("getFloat");
    func_0x000104bdb6e0("getInt");
    func_0x000104bdb6e0("getLong");
    func_0x000104bdb6e0("getBinary");
    func_0x00010b9a8f54(param_1,&lStack_a0);
    func_0x000104bdb6f0();
    FUN_104bd4e40(&lStack_a0);
    func_0x000104bdb4d8(uStack_38);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x00010b9a5890();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104bd93d0);
  (*pcVar1)();
}



/* Entry: 104bd9474; end: 104bd959b;  */

void FUN_104bd9474(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined1 in_ZR;
  long *plVar2;
  char *pcVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  long lStack_200;
  long *plStack_1f8;
  ulong uStack_1f0;
  ulong *puStack_1e8;
  ulong *puStack_1e0;
  undefined1 auStack_1d8 [16];
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  ulong *puStack_1b8;
  undefined8 uStack_198;
  long lStack_190;
  long *plStack_188;
  
  lVar7 = param_3;
  lVar9 = param_4;
  func_0x00010028b0bc();
  func_0x000104bdb5bc();
  if ((lVar7 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
    do {
      func_0x000104bdb644();
    } while (extraout_w10_02 != 0);
  }
  func_0x000104bdb844();
  func_0x000104bdb6c8();
  if ((param_3 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
    do {
      func_0x000104bdb644();
    } while (extraout_w10_03 != 0);
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  func_0x000104bdb820();
  func_0x000104bdb608();
  do {
    func_0x000104bdb8c8();
  } while (extraout_w10_04 != 0);
  func_0x000104bdb7b8();
  func_0x000104bdb7a8();
  func_0x000104bdb82c();
  func_0x00010b9a9020();
  func_0x000104bdb778();
  func_0x000104bdb770();
  func_0x000104bdb7c8();
  func_0x000104bdb7f8();
  func_0x000104bdb6f0();
  func_0x000104bdb4d8(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104bdb778();
    func_0x000104bdb770();
    func_0x000104bdb7c8();
    func_0x000104bdb7f8();
    func_0x000104bdb6f0();
    func_0x000104bdb63c();
    lVar8 = lVar7;
    func_0x00010028b0bc();
    func_0x000104bdb5bc();
    if ((lVar8 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
      do {
        func_0x000104bdb644();
      } while (extraout_w10_05 != 0);
    }
    func_0x000104bdb844();
    plVar5 = param_1;
    func_0x000104bdb6c8();
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
      do {
        func_0x000104bdb644();
      } while (extraout_w10_06 != 0);
    }
    *plVar5 = lVar7;
    plVar5[1] = lVar9;
    func_0x000104bdb820();
    func_0x000104bdb608();
    do {
      func_0x000104bdb8c8();
    } while (extraout_w10_07 != 0);
    func_0x000104bdb7b8();
    func_0x000104bdb7a8();
    func_0x000104bdb82c();
    func_0x00010b9a9020();
    func_0x000104bdb778();
    func_0x000104bdb770();
    func_0x000104bdb7c8();
    func_0x000104bdb7f8();
    func_0x000104bdb6f0();
    func_0x000104bdb4d8(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000104bdb778();
      func_0x000104bdb770();
      func_0x000104bdb7c8();
      func_0x000104bdb7f8();
      func_0x000104bdb6f0();
      func_0x000104bdb63c();
      plVar6 = plVar5 + -3;
      lStack_190 = lVar7;
      plStack_188 = param_1;
      func_0x000104bdb588();
      func_0x000104bd4df4(&lStack_200);
      if ((plVar6 == (long *)0x0) ||
         (plVar2 = plVar6, func_0x00010b9a5818(), ((ulong)plVar2 & 1) != 0)) {
        FUN_104bd9474("getStringSync",&lStack_200,plVar6,FUN_104bda418);
        func_0x000104bdb730("getBoolSync");
        func_0x000104bdb730("getFloatSync");
        func_0x000104bdb730("getIntSync");
        func_0x000104bdb730("getLongSync");
        pcVar3 = "getBinarySync";
        func_0x000104bdb730();
        if ((plVar6 != (long *)0x0) && (plVar5[-1] != 0)) {
          do {
            func_0x000104bdb644();
          } while (extraout_w10 != 0);
        }
        uStack_1f0 = 0x104bda60c;
        plStack_1f8 = plVar6;
        func_0x000104bdb844();
        uStack_1c8 = 0x104bda590;
        ppuStack_1c0 = &PTR_FUN_1107e6028;
        puVar4 = (ulong *)pcVar3;
        func_0x000104bdb6c8();
        if ((plVar6 == (long *)0x0) || (plVar5[-1] == 0)) {
          uVar10 = 0x104bda60c;
        }
        else {
          do {
            func_0x000104bdb644();
            uVar10 = uStack_1f0;
          } while (extraout_w10_00 != 0);
        }
        *puVar4 = (ulong)plVar6;
        puVar4[1] = uVar10;
        puStack_1b8 = puVar4;
        func_0x00010b9ac22c(pcVar3,&uStack_1c8);
        puStack_1e8 = (ulong *)pcVar3;
        func_0x000104bdb780();
        do {
          func_0x000104bdb8c8();
        } while (extraout_w10_01 != 0);
        puStack_1e0 = (ulong *)pcVar3;
        func_0x00010b9a8ef8(auStack_1d8,&puStack_1e0);
        func_0x0001003a83dc(&uStack_1c8,"clearCache");
        func_0x000104bd9bd4(lStack_200 + 0x10,&uStack_1c8);
        func_0x00010b9a9020();
        func_0x0001003a8c94(&uStack_1c8);
        func_0x00010b9a8d98(auStack_1d8);
        FUN_104bda388(&puStack_1e0);
        FUN_104bda3d0(&puStack_1e8);
        FUN_104bd4978(&plStack_1f8);
        func_0x000104bdb6e0("getString");
        func_0x000104bdb6e0("getBool");
        func_0x000104bdb6e0("getFloat");
        func_0x000104bdb6e0("getInt");
        func_0x000104bdb6e0("getLong");
        func_0x000104bdb6e0("getBinary");
        func_0x00010b9a8f54(extraout_x8_01,&lStack_200);
        func_0x000104bdb6f0();
        FUN_104bd4e40(&lStack_200);
        func_0x000104bdb4d8(uStack_198);
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
      }
      func_0x00010b9a5890();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104bd93d0);
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 104bd959c; end: 104bd96c3;  */

void FUN_104bd959c(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined1 in_ZR;
  long *plVar2;
  char *pcVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long lStack_150;
  long *plStack_148;
  ulong uStack_140;
  ulong *puStack_138;
  ulong *puStack_130;
  undefined1 auStack_128 [16];
  undefined8 uStack_118;
  undefined **ppuStack_110;
  ulong *puStack_108;
  undefined8 uStack_e8;
  long lStack_e0;
  long *plStack_d8;
  
  lVar7 = param_3;
  func_0x00010028b0bc();
  func_0x000104bdb5bc();
  if ((lVar7 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
    do {
      func_0x000104bdb644();
    } while (extraout_w10_02 != 0);
  }
  func_0x000104bdb844();
  plVar5 = param_1;
  func_0x000104bdb6c8();
  if ((param_3 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
    do {
      func_0x000104bdb644();
    } while (extraout_w10_03 != 0);
  }
  *plVar5 = param_3;
  plVar5[1] = param_4;
  func_0x000104bdb820();
  func_0x000104bdb608();
  do {
    func_0x000104bdb8c8();
  } while (extraout_w10_04 != 0);
  func_0x000104bdb7b8();
  func_0x000104bdb7a8();
  func_0x000104bdb82c();
  func_0x00010b9a9020();
  func_0x000104bdb778();
  func_0x000104bdb770();
  func_0x000104bdb7c8();
  func_0x000104bdb7f8();
  func_0x000104bdb6f0();
  func_0x000104bdb4d8(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104bdb778();
  func_0x000104bdb770();
  func_0x000104bdb7c8();
  func_0x000104bdb7f8();
  func_0x000104bdb6f0();
  func_0x000104bdb63c();
  plVar6 = plVar5 + -3;
  lStack_e0 = param_3;
  plStack_d8 = param_1;
  func_0x000104bdb588();
  func_0x000104bd4df4(&lStack_150);
  if ((plVar6 == (long *)0x0) || (plVar2 = plVar6, func_0x00010b9a5818(), ((ulong)plVar2 & 1) != 0))
  {
    FUN_104bd9474("getStringSync",&lStack_150,plVar6,FUN_104bda418);
    func_0x000104bdb730("getBoolSync");
    func_0x000104bdb730("getFloatSync");
    func_0x000104bdb730("getIntSync");
    func_0x000104bdb730("getLongSync");
    pcVar3 = "getBinarySync";
    func_0x000104bdb730();
    if ((plVar6 != (long *)0x0) && (plVar5[-1] != 0)) {
      do {
        func_0x000104bdb644();
      } while (extraout_w10 != 0);
    }
    uStack_140 = 0x104bda60c;
    plStack_148 = plVar6;
    func_0x000104bdb844();
    uStack_118 = 0x104bda590;
    ppuStack_110 = &PTR_FUN_1107e6028;
    puVar4 = (ulong *)pcVar3;
    func_0x000104bdb6c8();
    if ((plVar6 == (long *)0x0) || (plVar5[-1] == 0)) {
      uVar8 = 0x104bda60c;
    }
    else {
      do {
        func_0x000104bdb644();
        uVar8 = uStack_140;
      } while (extraout_w10_00 != 0);
    }
    *puVar4 = (ulong)plVar6;
    puVar4[1] = uVar8;
    puStack_108 = puVar4;
    func_0x00010b9ac22c(pcVar3,&uStack_118);
    puStack_138 = (ulong *)pcVar3;
    func_0x000104bdb780();
    do {
      func_0x000104bdb8c8();
    } while (extraout_w10_01 != 0);
    puStack_130 = (ulong *)pcVar3;
    func_0x00010b9a8ef8(auStack_128,&puStack_130);
    func_0x0001003a83dc(&uStack_118,"clearCache");
    func_0x000104bd9bd4(lStack_150 + 0x10,&uStack_118);
    func_0x00010b9a9020();
    func_0x0001003a8c94(&uStack_118);
    func_0x00010b9a8d98(auStack_128);
    FUN_104bda388(&puStack_130);
    FUN_104bda3d0(&puStack_138);
    FUN_104bd4978(&plStack_148);
    func_0x000104bdb6e0("getString");
    func_0x000104bdb6e0("getBool");
    func_0x000104bdb6e0("getFloat");
    func_0x000104bdb6e0("getInt");
    func_0x000104bdb6e0("getLong");
    func_0x000104bdb6e0("getBinary");
    func_0x00010b9a8f54(extraout_x8_00,&lStack_150);
    func_0x000104bdb6f0();
    FUN_104bd4e40(&lStack_150);
    func_0x000104bdb4d8(uStack_e8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x00010b9a5890();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104bd93d0);
  (*pcVar1)();
}



/* Entry: 104bd96c4; end: 104bd96cb;  */

void FUN_104bd96c4(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  ulong uVar2;
  char *pcVar3;
  ulong *puVar4;
  ulong uVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  ulong *puStack_58;
  undefined8 uStack_38;
  
  uVar5 = param_2 - 0x18;
  func_0x000104bdb588();
  func_0x000104bd4df4(&lStack_a0);
  if ((uVar5 == 0) || (uVar2 = uVar5, func_0x00010b9a5818(), (uVar2 & 1) != 0)) {
    FUN_104bd9474("getStringSync",&lStack_a0,uVar5,FUN_104bda418);
    func_0x000104bdb730("getBoolSync");
    func_0x000104bdb730("getFloatSync");
    func_0x000104bdb730("getIntSync");
    func_0x000104bdb730("getLongSync");
    pcVar3 = "getBinarySync";
    func_0x000104bdb730();
    if ((uVar5 != 0) && (*(long *)(param_2 + -8) != 0)) {
      do {
        func_0x000104bdb644();
      } while (extraout_w10 != 0);
    }
    uStack_90 = 0x104bda60c;
    uStack_98 = uVar5;
    func_0x000104bdb844();
    uStack_68 = 0x104bda590;
    ppuStack_60 = &PTR_FUN_1107e6028;
    puVar4 = (ulong *)pcVar3;
    func_0x000104bdb6c8();
    if ((uVar5 == 0) || (*(long *)(param_2 + -8) == 0)) {
      uVar2 = 0x104bda60c;
    }
    else {
      do {
        func_0x000104bdb644();
        uVar2 = uStack_90;
      } while (extraout_w10_00 != 0);
    }
    *puVar4 = uVar5;
    puVar4[1] = uVar2;
    puStack_58 = puVar4;
    func_0x00010b9ac22c(pcVar3,&uStack_68);
    puStack_88 = (ulong *)pcVar3;
    func_0x000104bdb780();
    do {
      func_0x000104bdb8c8();
    } while (extraout_w10_01 != 0);
    puStack_80 = (ulong *)pcVar3;
    func_0x00010b9a8ef8(auStack_78,&puStack_80);
    func_0x0001003a83dc(&uStack_68,"clearCache");
    func_0x000104bd9bd4(lStack_a0 + 0x10,&uStack_68);
    func_0x00010b9a9020();
    func_0x0001003a8c94(&uStack_68);
    func_0x00010b9a8d98(auStack_78);
    FUN_104bda388(&puStack_80);
    FUN_104bda3d0(&puStack_88);
    FUN_104bd4978(&uStack_98);
    func_0x000104bdb6e0("getString");
    func_0x000104bdb6e0("getBool");
    func_0x000104bdb6e0("getFloat");
    func_0x000104bdb6e0("getInt");
    func_0x000104bdb6e0("getLong");
    func_0x000104bdb6e0("getBinary");
    func_0x00010b9a8f54(param_1,&lStack_a0);
    func_0x000104bdb6f0();
    FUN_104bd4e40(&lStack_a0);
    func_0x000104bdb4d8(uStack_38);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x00010b9a5890();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104bd93d0);
  (*pcVar1)();
}



/* Entry: 104bd96cc; end: 104bd9763;  */

void FUN_104bd96cc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000104bdb520();
  func_0x00010b9a9894(auStack_60,param_2);
  func_0x000104bdb754(auStack_48);
  func_0x000100100da0();
  func_0x00010b9a8dd4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  return;
}



/* Entry: 104bd9764; end: 104bd985f;  */

void FUN_104bd9764(undefined8 param_1,undefined1 param_2)

{
  undefined1 *unaff_x19;
  
  func_0x000104bdb520();
  func_0x00010b9a9608();
  func_0x000104bdb754();
  func_0x00010011bfd4();
  *(undefined2 *)(unaff_x19 + 8) = 7;
  *unaff_x19 = param_2;
  return;
}



/* Entry: 104bd9860; end: 104bd9993;  */

void FUN_104bd9860(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [28];
  undefined4 uStack_6c;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a96d0(&lStack_28,param_3);
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_104bd9994(&uStack_40,0,*(long *)(lStack_28 + 0x20),
                *(long *)(lStack_28 + 0x20) + *(long *)(lStack_28 + 0x28));
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  func_0x0001005e774c(&uStack_58,puVar2,uVar1,0,0);
  FUN_104bd9060(&uStack_60);
  func_0x00010b99d848(uStack_60,uStack_58,uStack_50);
  uStack_6c = 3;
  func_0x00010b99daa0(auStack_88,uStack_60);
  FUN_104bd909c(auStack_68,&uStack_6c,auStack_88);
  func_0x00010b9a8f90(param_1,auStack_68);
  FUN_104bdb38c(auStack_68);
  func_0x000104bdb888();
  FUN_104bdb344(&uStack_60);
  func_0x000100100fec(&uStack_58);
  func_0x000100100fec(&uStack_40);
  FUN_104bdb38c(&lStack_28);
  return;
}



/* Entry: 104bd9994; end: 104bd999b;  */

long FUN_104bd9994(long *param_1,long param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined1 *extraout_x8;
  undefined1 *extraout_x8_00;
  long lVar5;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar4 = param_4 - (long)param_3;
  if (0 < lVar4) {
    plVar3 = param_1 + 2;
    lVar5 = param_1[1];
    if (*plVar3 - lVar5 < lVar4) {
      plVar2 = param_1;
      func_0x0001001e7ae4(param_1,(lVar4 - *param_1) + lVar5);
      lVar5 = *param_1;
      plStack_68 = (long *)0x0;
      plStack_48 = plVar3;
      if (plVar2 != (long *)0x0) {
        func_0x00010002b988();
        plStack_68 = plVar3;
      }
      puStack_60 = (undefined1 *)((long)plStack_68 + (param_2 - lVar5));
      lStack_50 = (long)plStack_68 + (long)plVar2;
      puStack_58 = puStack_60 + lVar4;
      puVar1 = puStack_60;
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar1 = *param_3;
        puVar1 = puVar1 + 1;
        param_3 = param_3 + 1;
      }
      FUN_104bd9b18(param_1,&plStack_68,param_2);
      func_0x000104bdb890();
    }
    else {
      lVar5 = lVar5 - param_2;
      if (lVar4 - lVar5 == 0 || lVar4 < lVar5) {
        FUN_104bdb8d8();
        puVar1 = extraout_x8_00;
        for (; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar1 = *param_3;
          puVar1 = puVar1 + 1;
          param_3 = param_3 + 1;
        }
      }
      else {
        func_0x00010029a9bc(param_1,param_3 + lVar5,param_4,lVar4 - lVar5);
        if (0 < lVar5) {
          FUN_104bdb8d8();
          puVar1 = extraout_x8;
          for (; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar1 = *param_3;
            puVar1 = puVar1 + 1;
            param_3 = param_3 + 1;
          }
        }
      }
    }
  }
  return param_2;
}



/* Entry: 104bd999c; end: 104bd9ad7;  */

long FUN_104bd999c(long *param_1,long param_2,undefined1 *param_3,undefined8 param_4,long param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *extraout_x8;
  undefined1 *extraout_x8_00;
  long lVar4;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  if (0 < param_5) {
    plVar3 = param_1 + 2;
    lVar4 = param_1[1];
    if (*plVar3 - lVar4 < param_5) {
      plVar2 = param_1;
      func_0x0001001e7ae4(param_1,(param_5 - *param_1) + lVar4);
      lVar4 = *param_1;
      plStack_68 = (long *)0x0;
      plStack_48 = plVar3;
      if (plVar2 != (long *)0x0) {
        func_0x00010002b988();
        plStack_68 = plVar3;
      }
      puStack_60 = (undefined1 *)((long)plStack_68 + (param_2 - lVar4));
      lStack_50 = (long)plStack_68 + (long)plVar2;
      puStack_58 = puStack_60 + param_5;
      puVar1 = puStack_60;
      for (; param_5 != 0; param_5 = param_5 + -1) {
        *puVar1 = *param_3;
        puVar1 = puVar1 + 1;
        param_3 = param_3 + 1;
      }
      FUN_104bd9b18(param_1,&plStack_68,param_2);
      func_0x000104bdb890();
    }
    else {
      lVar4 = lVar4 - param_2;
      if (param_5 - lVar4 == 0 || param_5 < lVar4) {
        FUN_104bdb8d8();
        puVar1 = extraout_x8_00;
        for (; param_5 != 0; param_5 = param_5 + -1) {
          *puVar1 = *param_3;
          puVar1 = puVar1 + 1;
          param_3 = param_3 + 1;
        }
      }
      else {
        func_0x00010029a9bc(param_1,param_3 + lVar4,param_4,param_5 - lVar4);
        if (0 < lVar4) {
          FUN_104bdb8d8();
          puVar1 = extraout_x8;
          for (; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar1 = *param_3;
            puVar1 = puVar1 + 1;
            param_3 = param_3 + 1;
          }
        }
      }
    }
  }
  return param_2;
}



/* Entry: 104bd9ad8; end: 104bd9b17;  */

void FUN_104bd9ad8(long param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  puVar3 = puVar1;
  for (puVar2 = (undefined1 *)(param_2 + ((long)puVar1 - (long)param_4)); puVar2 < param_3;
      puVar2 = puVar2 + 1) {
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar3;
  if (puVar1 != param_4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)((long)puVar1 - ((long)puVar1 - (long)param_4));
    return;
  }
  return;
}



/* Entry: 104bd9b18; end: 104bd9bbf;  */

undefined8 FUN_104bd9b18(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  lVar3 = param_3;
  func_0x00010028b1f0();
  uVar1 = *(undefined8 *)(param_2 + 8);
  _memcpy(*(undefined8 *)(param_2 + 0x10),param_3,*(long *)(param_1 + 8) - lVar3);
  lVar2 = *unaff_x21;
  lVar3 = unaff_x20[1];
  unaff_x20[2] = unaff_x20[2] + (unaff_x21[1] - param_3);
  unaff_x21[1] = param_3;
  lVar3 = lVar3 + (lVar2 - param_3);
  _memcpy(lVar3,lVar2,param_3 - lVar2);
  unaff_x20[1] = lVar3;
  lVar3 = *unaff_x21;
  unaff_x21[1] = lVar3;
  *unaff_x21 = unaff_x20[1];
  unaff_x20[1] = lVar3;
  lVar3 = unaff_x21[1];
  unaff_x21[1] = unaff_x20[2];
  unaff_x20[2] = lVar3;
  lVar3 = unaff_x21[2];
  unaff_x21[2] = unaff_x20[3];
  unaff_x20[3] = lVar3;
  *unaff_x20 = unaff_x20[1];
  return uVar1;
}



/* Entry: 104bd9bc0; end: 104bd9bfb;  */

long FUN_104bd9bc0(void)

{
  undefined1 auStack_38 [8];
  long lStack_30;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  FUN_104bd47e8("vector");
  uStack_18 = 0x104bd9bd4;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_104bd9cd4(auStack_38);
  return lStack_30 + 8;
}



/* Entry: 104bd9bfc; end: 104bd9c63;  */

void FUN_104bd9bfc(void)

{
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  
  func_0x000104bdb70c();
  if ((*(byte *)(*(long *)(unaff_x20 + 0x18) + 8) & 1) == 0) {
    func_0x000104bdb800();
  }
  else {
    func_0x000104bdb87c();
    func_0x000104bdb858();
    (*(code *)unaff_x21[1])(*unaff_x21,auStack_38,auStack_48);
    func_0x000104bdb6f8();
  }
  func_0x000104bdb7f0();
  return;
}



/* Entry: 104bd9c64; end: 104bd9c83;  */

void FUN_104bd9c64(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_104bd4978();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bd9c84; end: 104bd9c87;  */

void FUN_104bd9c84(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 104bd9c88; end: 104bd9cd3;  */

void FUN_104bd9c88(undefined8 *param_1,long param_2)

{
  int extraout_w11;
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_1107e6008;
  func_0x000104bdb6c8();
  if ((*plVar1 != 0) && (*(long *)(*plVar1 + 0x10) != 0)) {
    do {
      func_0x000104bdb760();
    } while (extraout_w11 != 0);
  }
  func_0x000104bdb810();
  return;
}



/* Entry: 104bd9cd4; end: 104bd9d63;  */

void FUN_104bd9cd4(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  uVar5 = (uint)param_3;
  plVar2 = param_2;
  FUN_104bd9d64();
  plVar3 = plVar2;
  func_0x000104bdb754();
  func_0x000104bd9d88();
  uVar4 = (undefined1)uVar5;
  if ((uVar5 & 1) != 0) {
    puVar6 = (undefined8 *)(param_2[1] + (long)plVar3 * 0x18);
    *puVar6 = *param_3;
    *param_3 = 0;
    *(undefined2 *)(puVar6 + 2) = 0;
    puVar6[1] = 0;
    *(byte *)(*param_2 + (long)plVar3) = (byte)plVar2 & 0x7f;
    func_0x000104bdb6a8();
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar3;
  param_1[1] = lVar1 + (long)plVar3 * 0x18;
  *(undefined1 *)(param_1 + 2) = uVar4;
  return;
}



/* Entry: 104bd9d64; end: 104bd9e5f;  */

void FUN_104bd9d64(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x000104bd9e48(&lStack_18);
  return;
}



/* Entry: 104bd9e60; end: 104bd9ed7;  */

void FUN_104bd9e60(long *param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  func_0x00010028b0bc();
  FUN_104bd9ed8();
  lVar2 = unaff_x19[5];
  lVar1 = *unaff_x19;
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + (long)param_1) == -2) {
      lVar2 = 0;
    }
    else {
      func_0x000104bd9f24();
      param_1 = unaff_x19;
      FUN_104bd9ed8();
      lVar1 = *unaff_x19;
      lVar2 = unaff_x19[5];
    }
  }
  unaff_x19[2] = unaff_x19[2] + 1;
  unaff_x19[5] = lVar2 - (ulong)(*(char *)(lVar1 + (long)param_1) == -0x80);
  return;
}



/* Entry: 104bd9ed8; end: 104bd9f53;  */

ulong FUN_104bd9ed8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_2 = param_2 >> 7;
  while( true ) {
    param_2 = param_2 & param_1[3];
    uVar1 = *(ulong *)(*param_1 + param_2) & ~*(ulong *)(*param_1 + param_2) << 7 &
            0x8080808080808080;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_2 = lVar2 + param_2;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_2 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[3];
}



/* Entry: 104bd9f54; end: 104bda1eb;  */

void FUN_104bd9f54(long *param_1,long param_2)

{
  long lVar1;
  long **pplVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plStack_58;
  
  lVar1 = *param_1;
  lVar4 = param_1[1];
  lVar5 = param_1[3];
  FUN_104bda1ec();
  param_1[3] = param_2;
  for (lVar6 = 0; lVar5 != lVar6; lVar6 = lVar6 + 1) {
    if (-1 < *(char *)(lVar1 + lVar6)) {
      pplVar2 = &plStack_58;
      plStack_58 = param_1 + 5;
      FUN_104bda2a0(pplVar2,lVar4);
      plVar3 = param_1;
      FUN_104bd9ed8(param_1,pplVar2);
      *(byte *)(*param_1 + (long)plVar3) = (byte)pplVar2 & 0x7f;
      func_0x000104bdb6a8();
      FUN_104bda2c0(param_1 + 5,param_1[1] + (long)plVar3 * 0x18,lVar4);
    }
    lVar4 = lVar4 + 0x18;
  }
  if (lVar5 != 0) {
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 104bda1ec; end: 104bda25f;  */

void FUN_104bda1ec(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = (param_2 & 0xfffffffffffffff8) + 0x10;
  plVar2 = param_1 + 5;
  FUN_104bda260(plVar2,lVar1 + param_2 * 0x18);
  *param_1 = (long)plVar2;
  param_1[1] = (long)plVar2 + lVar1;
  _memset();
  *(undefined1 *)(*param_1 + param_2) = 0xff;
  lVar1 = 6;
  if (param_2 != 7) {
    lVar1 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar1 - param_1[2];
  return;
}



/* Entry: 104bda260; end: 104bda29f;  */

void FUN_104bda260(undefined8 param_1,long param_2)

{
  undefined1 uStack_11;
  
  func_0x000104bda284(&uStack_11,param_2 + 7U >> 3);
  return;
}



/* Entry: 104bda2a0; end: 104bda2a7;  */

void FUN_104bda2a0(undefined8 param_1,long param_2)

{
  func_0x000104bdb700(param_1,param_2,param_2 + 8);
  return;
}



/* Entry: 104bda2a8; end: 104bda2bf;  */

void FUN_104bda2a8(void)

{
  func_0x000104bdb700();
  return;
}



/* Entry: 104bda2c0; end: 104bda33f;  */

undefined8 FUN_104bda2c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 unaff_x19;
  
  func_0x000104bda2ec(param_2,param_3);
  func_0x00010b9a8d98(param_3 + 8);
  func_0x00010007e5d0(param_3);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 104bda340; end: 104bda387;  */

void FUN_104bda340(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  for (lVar1 = 0; param_2 + 1 != lVar1; lVar1 = lVar1 + 8) {
    uVar2 = *(ulong *)((long)param_1 + lVar1) & 0x8080808080808080;
    *(ulong *)((long)param_1 + lVar1) =
         (uVar2 - (uVar2 >> 7) ^ 0xffffffffffffffff) & 0xfefefefefefefefe;
  }
  *(undefined8 *)((undefined1 *)((long)param_1 + param_2) + 1) = *param_1;
  *(undefined1 *)((long)param_1 + param_2) = 0xff;
  return;
}



/* Entry: 104bda388; end: 104bda3ab;  */

void FUN_104bda388(void)

{
  func_0x0001003adc0c();
  FUN_104bda3ac();
  return;
}



/* Entry: 104bda3ac; end: 104bda3cf;  */

void FUN_104bda3ac(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000104bdb638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 104bda3d0; end: 104bda3f3;  */

void FUN_104bda3d0(void)

{
  func_0x0001003adc0c();
  FUN_104bda3f4();
  return;
}



/* Entry: 104bda3f4; end: 104bda417;  */

void FUN_104bda3f4(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000104bdb638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 104bda418; end: 104bda497;  */

void FUN_104bda418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  long *unaff_x21;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010028b1f0();
  func_0x00010b9a9358(auStack_40,param_3);
  (**(code **)(*unaff_x21 + 0x30))(auStack_38);
  func_0x00010b9a8e18(extraout_x8,auStack_38);
  func_0x0001003a8c94(auStack_38);
  func_0x0001003a8c94(auStack_40);
  return;
}



/* Entry: 104bda498; end: 104bda583;  */

void FUN_104bda498(undefined1 param_1)

{
  long extraout_x8;
  undefined1 *unaff_x21;
  
  func_0x000104bdb67c();
  func_0x00010b9a9608();
  func_0x000104bdb89c();
  func_0x000104bdb870(*(undefined8 *)(extraout_x8 + 0x38));
  *(undefined2 *)(unaff_x21 + 8) = 7;
  *unaff_x21 = param_1;
  return;
}



/* Entry: 104bda584; end: 104bda59b;  */

void FUN_104bda584(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bda58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}



/* Entry: 104bda59c; end: 104bda5bb;  */

void FUN_104bda59c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_104bd4978();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bda5bc; end: 104bda5bf;  */

void FUN_104bda5bc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 104bda5c0; end: 104bda663;  */

void FUN_104bda5c0(undefined8 *param_1,long param_2)

{
  int extraout_w11;
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_1107e6028;
  func_0x000104bdb6c8();
  if ((*plVar1 != 0) && (*(long *)(*plVar1 + 0x10) != 0)) {
    do {
      func_0x000104bdb760();
    } while (extraout_w11 != 0);
  }
  func_0x000104bdb810();
  return;
}



/* Entry: 104bda664; end: 104bda6f3;  */

void FUN_104bda664(void)

{
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  
  func_0x000104bdb70c();
  if ((*(byte *)(*(long *)(unaff_x20 + 0x18) + 8) & 1) == 0) {
    func_0x000104bdb800();
  }
  else {
    func_0x000104bdb87c();
    func_0x000104bdb858();
    func_0x00010b9ac080(auStack_50);
    (*(code *)unaff_x21[1])(*unaff_x21,auStack_38,auStack_48,auStack_50);
    func_0x000104bdb800();
    FUN_104bda388(auStack_50);
    func_0x000104bdb6f8();
  }
  func_0x000104bdb7f0();
  return;
}



/* Entry: 104bda6f4; end: 104bda713;  */

void FUN_104bda6f4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_104bd4978();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bda714; end: 104bda717;  */

void FUN_104bda714(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 104bda718; end: 104bda763;  */

void FUN_104bda718(undefined8 *param_1,long param_2)

{
  int extraout_w11;
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_1107e6048;
  func_0x000104bdb6c8();
  if ((*plVar1 != 0) && (*(long *)(*plVar1 + 0x10) != 0)) {
    do {
      func_0x000104bdb760();
    } while (extraout_w11 != 0);
  }
  func_0x000104bdb810();
  return;
}



/* Entry: 104bda764; end: 104bda833;  */

undefined1 * FUN_104bda764(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long *unaff_x20;
  undefined1 auStack_90 [32];
  long lStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_38;
  
  puVar1 = auStack_90;
  func_0x000104bdb4b4();
  if (extraout_x8 != 0) {
    do {
      func_0x000104bdb554();
    } while (extraout_w11 != 0);
  }
  func_0x000104bdb50c();
  lStack_70 = 0;
  if (*unaff_x20 != 0) {
    do {
      func_0x000104bdb5dc();
      lStack_70 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  pcStack_68 = FUN_104bda858;
  ppuStack_60 = &PTR_FUN_1107e6068;
  func_0x000104bdb690();
  func_0x000104bdb654();
  if (extraout_x8_01 != 0) {
    do {
      func_0x000104bdb554();
    } while (extraout_w11_01 != 0);
  }
  func_0x000104bdb4fc();
  if (lStack_70 != 0) {
    do {
      func_0x000104bdb5dc();
    } while (extraout_w11_02 != 0);
  }
  func_0x000104bdb53c();
  func_0x000104bdb5fc();
  func_0x000104bdb4ec();
  FUN_104bda834();
  func_0x000104bdb4d8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104bdb4ec();
    FUN_104bda834(auStack_90);
    func_0x000104bdb63c();
    func_0x000104bdb624();
    func_0x000104bdb6e8();
    func_0x000104bdb6d0();
    return puVar1;
  }
  return puVar1;
}



/* Entry: 104bda834; end: 104bda857;  */

void FUN_104bda834(void)

{
  func_0x000104bdb624();
  func_0x000104bdb6e8();
  func_0x000104bdb6d0();
  return;
}



/* Entry: 104bda858; end: 104bda90f;  */

void FUN_104bda858(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 *extraout_x8;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined **ppuStack_b0;
  byte bStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  plVar1 = &lStack_70;
  func_0x000104bdb588();
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  uVar4 = puVar6[4];
  plVar5 = (long *)*puVar6;
  func_0x00010b9a9358(&lStack_70,puVar6 + 2);
  (**(code **)(*plVar5 + 0x30))(auStack_68,plVar5,puVar6 + 1,&lStack_70);
  uVar2 = SUB81(auStack_68,0);
  func_0x00010b9a8e18(auStack_60);
  puVar3 = auStack_60;
  func_0x000104bdb59c(auStack_50);
  FUN_104bda910(auStack_50);
  func_0x000104bdb6c0();
  func_0x0001003a8c94(auStack_68);
  func_0x0001003a8c94();
  func_0x000104bdb4d8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104bdb724();
  func_0x0001003a8c94();
  func_0x000104bdb63c();
  pcStack_78 = FUN_104bda910;
  bStack_a8 = 1;
  ppuStack_b0 = &PTR_DAT_110d7e6e0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_e8 = CONCAT71(uStack_e8._1_7_,uVar2);
  pppuStack_d0 = &ppuStack_b0;
  uStack_c8 = 0;
  puStack_e0 = puVar3;
  uStack_d8 = param_4;
  plStack_90 = plVar5;
  uStack_88 = uVar4;
  puStack_80 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar1 + 0x20))(auStack_c0);
  if ((bStack_a8 & 1) == 0) {
    func_0x00010b9a0084(&uStack_e8,&ppuStack_b0);
    *extraout_x8 = 2;
    extraout_x8[1] = uStack_e8;
    uStack_e8 = 0;
    FUN_104bda93c(&uStack_e8);
  }
  else {
    func_0x000104bf351c(extraout_x8,auStack_c0);
  }
  func_0x00010b9a8d98(auStack_c0);
  func_0x00010b9a01e4(&ppuStack_b0);
  return;
}



/* Entry: 104bda910; end: 104bda93b;  */

void FUN_104bda910(undefined8 *param_1,long *param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined **ppuStack_40;
  byte bStack_38;
  undefined1 uStack_30;
  undefined1 uStack_28;
  
  bStack_38 = 1;
  ppuStack_40 = &PTR_DAT_110d7e6e0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_78 = CONCAT71(uStack_78._1_7_,param_3);
  pppuStack_60 = &ppuStack_40;
  uStack_58 = 0;
  uStack_70 = param_4;
  uStack_68 = param_5;
  (**(code **)(*param_2 + 0x20))(auStack_50,param_2,&uStack_78);
  if ((bStack_38 & 1) == 0) {
    func_0x00010b9a0084(&uStack_78,&ppuStack_40);
    *param_1 = 2;
    param_1[1] = uStack_78;
    uStack_78 = 0;
    FUN_104bda93c(&uStack_78);
  }
  else {
    func_0x000104bf351c(param_1,auStack_50);
  }
  func_0x00010b9a8d98(auStack_50);
  func_0x00010b9a01e4(&ppuStack_40);
  return;
}



/* Entry: 104bda93c; end: 104bda95f;  */

void FUN_104bda93c(void)

{
  func_0x0001003adc0c();
  FUN_104bda960();
  return;
}



/* Entry: 104bda960; end: 104bda983;  */

void FUN_104bda960(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000104bdb638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 104bda984; end: 104bda9a3;  */

void FUN_104bda984(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_104bda834();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bda9a4; end: 104bda9a7;  */

void FUN_104bda9a4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 104bda9a8; end: 104bda9ff;  */

void FUN_104bda9a8(void)

{
  long extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x21;
  
  func_0x000104bdb7e4();
  func_0x000104bdb618(&PTR_FUN_1107e6068);
  func_0x000104bdb664();
  if (extraout_x8 != 0) {
    do {
      func_0x000104bdb554();
    } while (extraout_w11 != 0);
  }
  func_0x000104bdb4fc();
  if (*(long *)(unaff_x21 + 0x20) != 0) {
    do {
      func_0x000104bdb5dc();
    } while (extraout_w11_00 != 0);
  }
  func_0x000104bdb7d8();
  return;
}



/* Entry: 104bdaa00; end: 104bdaacf;  */

undefined1 * FUN_104bdaa00(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long *unaff_x20;
  undefined1 auStack_90 [32];
  long lStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_38;
  
  puVar1 = auStack_90;
  func_0x000104bdb4b4();
  if (extraout_x8 != 0) {
    do {
      func_0x000104bdb554();
    } while (extraout_w11 != 0);
  }
  func_0x000104bdb50c();
  lStack_70 = 0;
  if (*unaff_x20 != 0) {
    do {
      func_0x000104bdb5dc();
      lStack_70 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  pcStack_68 = FUN_104bdaaf4;
  ppuStack_60 = &PTR_FUN_1107e6088;
  func_0x000104bdb690();
  func_0x000104bdb654();
  if (extraout_x8_01 != 0) {
    do {
      func_0x000104bdb554();
    } while (extraout_w11_01 != 0);
  }
  func_0x000104bdb4fc();
  if (lStack_70 != 0) {
    do {
      func_0x000104bdb5dc();
    } while (extraout_w11_02 != 0);
  }
  func_0x000104bdb53c();
  func_0x000104bdb5fc();
  func_0x000104bdb4ec();
  FUN_104bdaad0();
  func_0x000104bdb4d8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104bdb4ec();
    FUN_104bdaad0(auStack_90);
    func_0x000104bdb63c();
    func_0x000104bdb624();
    func_0x000104bdb6e8();
    func_0x000104bdb6d0();
    return puVar1;
  }
  return puVar1;
}



/* Entry: 104bdaad0; end: 104bdaaf3;  */

void FUN_104bdaad0(void)

{
  func_0x000104bdb624();
  func_0x000104bdb6e8();
  func_0x000104bdb6d0();
  return;
}


