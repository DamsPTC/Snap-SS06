/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd416d4; end: 10bd41707;  */

undefined8 FUN_10bd416d4(void)

{
  undefined1 in_ZR;
  undefined8 unaff_x20;
  
  func_0x00010bd45624();
  if ((bool)in_ZR) {
    func_0x00010bd44fcc();
    unaff_x20 = 0xffffffff;
  }
  else {
    _connect();
    func_0x00010bd44f1c();
  }
  return unaff_x20;
}



/* Entry: 10bd41708; end: 10bd418c3;  */

undefined8 *
FUN_10bd41708(undefined8 *param_1,undefined8 param_2,uint param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int extraout_w10;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_110d9e008;
  param_1[1] = 0;
  *(bool *)(param_1 + 5) =
       (param_3 == 1 || (param_3 & 0xffff0001) == 0xa5100000) ||
       (param_3 & 0xffff0004) == 0xa5100000;
  FUN_10bd43b1c(param_1 + 6,(param_3 & 0xffff0001) != 0xa5100000);
  param_1[0x17] = 0;
  _pthread_cond_init(param_1 + 0x11,0);
  func_0x000107c3a92c();
  func_0x000107c3a934();
  param_1[0x1e] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = param_5;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(uint *)((long)param_1 + 0x10c) = param_3;
  param_1[0x22] = 0;
  if (param_4 != 0) {
    do {
      func_0x00010bd45440();
    } while (extraout_w10 != 0);
    FUN_10bd43b6c(auStack_60);
    lVar1 = 0x10;
    __Znwm();
    *(undefined1 *)(lVar1 + 8) = 0;
    plVar2 = (long *)0x10;
    __Znwm();
    *plVar2 = (long)&PTR_FUN_110d9e2e0;
    plVar2[1] = (long)param_1;
    lVar3 = lVar1;
    _pthread_create(lVar1,0,FUN_10bd410e0,plVar2);
    if ((int)lVar3 != 0) {
      (**(code **)(*plVar2 + 8))(plVar2);
      func_0x00010bd45148();
      func_0x000107c2a670(auStack_58,lVar3);
      func_0x000107c3a934();
    }
    param_1[0x22] = lVar1;
    FUN_10bd43bb4(auStack_60);
  }
  return param_1;
}



/* Entry: 10bd418c4; end: 10bd4194b;  */

undefined8 * FUN_10bd418c4(undefined8 *param_1)

{
  undefined1 auStack_30 [16];
  
  *param_1 = &PTR_FUN_110d9e008;
  if (param_1[0x22] != 0) {
    func_0x00010bd45008();
    *(undefined1 *)((long)param_1 + 0x109) = 1;
    func_0x00010bd451d4();
    FUN_10bd4194c();
    func_0x00010894f1d0(auStack_30);
    FUN_10bd410ac(param_1[0x22]);
    if (param_1[0x22] != 0) {
      FUN_10bd4107c();
    }
    __ZdlPv();
    func_0x00010bd450c0();
  }
  func_0x00010894f514(param_1 + 0x1f);
  FUN_10bd43bf0(param_1 + 0x11);
  FUN_10bd43b48(param_1 + 7);
  return param_1;
}



/* Entry: 10bd4194c; end: 10bd4199f;  */

void FUN_10bd4194c(long param_1)

{
  *(undefined1 *)(param_1 + 0x108) = 1;
  func_0x00010bd41de8(param_1 + 0x80);
  if (((*(byte *)(param_1 + 0xe8) & 1) == 0) && (*(long **)(param_1 + 0xc0) != (long *)0x0)) {
    *(undefined1 *)(param_1 + 0xe8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bd41994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xc0) + 8))();
    return;
  }
  return;
}



/* Entry: 10bd419a0; end: 10bd419a3;  */

undefined8 * FUN_10bd419a0(undefined8 *param_1)

{
  undefined1 auStack_30 [16];
  
  *param_1 = &PTR_FUN_110d9e008;
  if (param_1[0x22] != 0) {
    func_0x00010bd45008();
    *(undefined1 *)((long)param_1 + 0x109) = 1;
    func_0x00010bd451d4();
    FUN_10bd4194c();
    func_0x00010894f1d0(auStack_30);
    FUN_10bd410ac(param_1[0x22]);
    if (param_1[0x22] != 0) {
      FUN_10bd4107c();
    }
    __ZdlPv();
    func_0x00010bd450c0();
  }
  func_0x00010894f514(param_1 + 0x1f);
  FUN_10bd43bf0(param_1 + 0x11);
  FUN_10bd43b48(param_1 + 7);
  return param_1;
}



/* Entry: 10bd419a4; end: 10bd419b7;  */

void FUN_10bd419a4(void)

{
  FUN_10bd418c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd419b8; end: 10bd41a63;  */

void FUN_10bd419b8(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010bd45008();
  *(undefined1 *)(param_1 + 0x109) = 1;
  if (*(long *)(param_1 + 0x110) != 0) {
    func_0x00010bd451d4();
    FUN_10bd4194c();
  }
  func_0x00010894f1d0(auStack_40);
  if (*(long *)(param_1 + 0x110) != 0) {
    FUN_10bd410ac();
    if (*(long *)(param_1 + 0x110) != 0) {
      FUN_10bd4107c();
    }
    __ZdlPv();
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  while (lVar1 = *(long *)(param_1 + 0xf8), lVar1 != 0) {
    func_0x00010894f550(param_1 + 0xf8);
    if (lVar1 != param_1 + 0xd0) {
      func_0x00010894ef90(lVar1);
    }
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  func_0x00010bd450c0();
  return;
}



/* Entry: 10bd41a64; end: 10bd41ab3;  */

void FUN_10bd41a64(long param_1)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010bd451a0();
  uVar1 = param_1 + 0x80;
  FUN_10bd41dcc();
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (((*(byte *)(unaff_x20 + 0xe8) & 1) == 0) && (*(long *)(unaff_x20 + 0xc0) != 0)) {
    *(undefined1 *)(unaff_x20 + 0xe8) = 1;
    func_0x00010bd4556c();
  }
  if (*(char *)(unaff_x19 + 1) == '\x01') {
    func_0x00010894f4fc(*unaff_x19);
    *(undefined1 *)(unaff_x19 + 1) = 0;
  }
  return;
}



/* Entry: 10bd41ab4; end: 10bd41c37;  */

undefined8 FUN_10bd41ab4(long param_1)

{
  long unaff_x19;
  long *unaff_x22;
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x00010bd45470();
  while( true ) {
    while( true ) {
      if ((*(byte *)(param_1 + 0x108) & 1) != 0) {
        return 0;
      }
      lVar1 = *(long *)(param_1 + 0xf8);
      if (lVar1 != 0) break;
      if (*(char *)(*unaff_x22 + 0x48) == '\x01') {
        uVar2 = *(ulong *)(param_1 + 0xb8) & 0xfffffffffffffffe;
        while (*(ulong *)(param_1 + 0xb8) = uVar2, (uVar2 & 1) == 0) {
          *(ulong *)(param_1 + 0xb8) = uVar2 + 2;
          _pthread_cond_wait(param_1 + 0x88,*unaff_x22 + 8);
          uVar2 = *(long *)(param_1 + 0xb8) - 2;
        }
      }
      else {
        _pause();
      }
    }
    func_0x00010894f550(param_1 + 0xf8);
    lVar3 = *(long *)(param_1 + 0xf8);
    if (lVar1 != param_1 + 0xd0) break;
    *(bool *)(param_1 + 0xe8) = lVar3 != 0;
    if ((lVar3 == 0) || ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
      func_0x00010bd452ec();
    }
    else if (*(char *)(*unaff_x22 + 0x48) == '\x01') {
      uVar2 = *(ulong *)(param_1 + 0xb8);
      *(ulong *)(param_1 + 0xb8) = uVar2 | 1;
      func_0x00010bd452ec();
      if (1 < uVar2) {
        _pthread_cond_signal(param_1 + 0x88);
      }
    }
    func_0x00010bd45618();
    (**(code **)**(undefined8 **)(param_1 + 0xc0))
              (*(undefined8 **)(param_1 + 0xc0),-(ulong)(lVar3 == 0),unaff_x19 + 0x60);
    func_0x00010bd45384();
  }
  if ((lVar3 == 0) || ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    func_0x00010bd452ec();
  }
  else {
    func_0x00010bd45518();
  }
  func_0x00010bd45618();
  func_0x00010bd452b4(*(undefined8 *)(lVar1 + 8));
  FUN_10bd41d68();
  func_0x00010bd4537c();
  return 1;
}



/* Entry: 10bd41c38; end: 10bd41c5f;  */

void FUN_10bd41c38(long *param_1,long *param_2)

{
  long *plVar1;
  
  if (*param_2 != 0) {
    plVar1 = param_1;
    if ((long *)param_1[1] != (long *)0x0) {
      plVar1 = (long *)param_1[1];
    }
    *plVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}



/* Entry: 10bd41c60; end: 10bd41c9b;  */

void FUN_10bd41c60(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x00010bd454d0();
  for (; (plVar1 != (long *)0x0 && ((long *)*plVar1 != param_1)); plVar1 = (long *)plVar1[2]) {
  }
  return;
}



/* Entry: 10bd41c9c; end: 10bd41cd7;  */

bool FUN_10bd41c9c(long param_1)

{
  FUN_10bd41c60();
  return param_1 != 0;
}



/* Entry: 10bd41cd8; end: 10bd41d67;  */

void FUN_10bd41cd8(long param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  puVar1 = auStack_40;
  if (*(int *)(param_1 + 0x50) == 1) {
    *(undefined4 *)(param_1 + 0x50) = 2;
    __ZNSt13exception_ptrC1ERKS_(auStack_40,param_1 + 0x58);
    FUN_10bd3fcec(auStack_38,auStack_40);
    FUN_10bd43cbc(auStack_28,auStack_38);
    func_0x00010bd455ec();
    __ZNSt13exception_ptrD1Ev(auStack_28);
    FUN_10bd43fcc(auStack_38);
  }
  else {
    if (*(int *)(param_1 + 0x50) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x50) = 1;
    __ZSt17current_exceptionv(auStack_28);
    func_0x00010bd455ec();
    puVar1 = auStack_28;
  }
  __ZNSt13exception_ptrD1Ev(puVar1);
  return;
}



/* Entry: 10bd41d68; end: 10bd41dcb;  */

void FUN_10bd41d68(long param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(int *)(param_1 + 0x50) < 1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  __ZNSt13exception_ptrC1ERKS_(auStack_28,param_1 + 0x58);
  __ZNSt13exception_ptrC1ERKS_(auStack_30,auStack_28);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd41db8);
  (*pcVar1)();
}



/* Entry: 10bd41dcc; end: 10bd41e03;  */

bool FUN_10bd41dcc(long param_1,long *param_2)

{
  ulong uVar1;
  
  if (*(char *)(*param_2 + 0x48) == '\x01') {
    uVar1 = *(ulong *)(param_1 + 0x38);
    *(ulong *)(param_1 + 0x38) = uVar1 | 1;
    if (1 < uVar1) {
      func_0x00010894f1d0(param_2);
      _pthread_cond_signal(param_1 + 8);
    }
    return 1 < uVar1;
  }
  return false;
}



/* Entry: 10bd41e04; end: 10bd41e2b;  */

void FUN_10bd41e04(long param_1)

{
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010bd451a0();
  func_0x00010bd41040(param_1 + 8);
  *(undefined8 *)(unaff_x20 + 0x48) = unaff_x19;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  return;
}



/* Entry: 10bd41e2c; end: 10bd41e6f;  */

undefined8 FUN_10bd41e2c(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if ((param_1[1] == 0 || param_1[1] != param_2[1]) &&
     (((uVar1 = *param_1, uVar1 == 0 || (*param_2 == 0)) ||
      (func_0x000107c27934(), (uVar1 & 1) == 0)))) {
    return 0;
  }
  return 1;
}



/* Entry: 10bd41e70; end: 10bd41f6f;  */

long FUN_10bd41e70(long param_1,undefined8 param_2,code *param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x19;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  long lStack_50;
  undefined1 uStack_48;
  
  func_0x00010bd452a0();
  lStack_50 = param_1 + 8;
  _pthread_mutex_lock();
  uStack_48 = 1;
  plVar1 = (long *)(unaff_x19 + 0x50);
  plVar3 = plVar1;
  while (lVar4 = *plVar3, lVar4 != 0) {
    uVar2 = lVar4 + 8;
    func_0x00010bd455cc();
    if ((uVar2 & 1) != 0) goto LAB_10bd41f2c;
    plVar3 = (long *)(lVar4 + 0x20);
  }
  FUN_10bd41f70(&lStack_50);
  (*param_3)();
  uVar5 = *unaff_x20;
  *(undefined8 *)(param_4 + 0x10) = unaff_x20[1];
  *(undefined8 *)(param_4 + 8) = uVar5;
  func_0x00010bd41fa0(&lStack_50);
  plVar3 = plVar1;
  do {
    lVar4 = *plVar3;
    if (lVar4 == 0) {
      *(long *)(param_4 + 0x20) = *plVar1;
      *plVar1 = param_4;
      lVar4 = param_4;
LAB_10bd41f2c:
      FUN_10bd4421c(&lStack_50);
      return lVar4;
    }
    uVar2 = lVar4 + 8;
    func_0x00010bd455cc();
    if ((uVar2 & 1) != 0) {
      if (param_4 != 0) {
        func_0x00010bd44fe4();
      }
      goto LAB_10bd41f2c;
    }
    plVar3 = (long *)(lVar4 + 0x20);
  } while( true );
}



/* Entry: 10bd41f70; end: 10bd41fcf;  */

void FUN_10bd41f70(long param_1)

{
  long unaff_x19;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010bd45498();
    _pthread_mutex_unlock();
    *(undefined1 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10bd41fd0; end: 10bd420d3;  */

void FUN_10bd41fd0(long param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **appuStack_50 [2];
  undefined **ppuStack_40;
  undefined1 uStack_38;
  
  if (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x18)) {
    ppuStack_40 = (undefined **)(param_1 + 8);
    _pthread_mutex_lock();
    uStack_38 = 1;
    plVar1 = (long *)(param_1 + 0x50);
    plVar4 = plVar1;
    do {
      lVar5 = *plVar4;
      if (lVar5 == 0) {
        uVar6 = *param_2;
        *(undefined8 *)(param_3 + 0x10) = param_2[1];
        *(undefined8 *)(param_3 + 8) = uVar6;
        *(long *)(param_3 + 0x20) = *plVar1;
        *plVar1 = param_3;
        FUN_10bd4421c(&ppuStack_40);
        return;
      }
      iVar3 = (int)lVar5 + 8;
      func_0x00010bd455cc();
      plVar4 = (long *)(lVar5 + 0x20);
    } while (iVar3 == 0);
    __ZNSt11logic_errorC2EPKc(appuStack_50,&UNK_10f836c3d);
    appuStack_50[0] = &PTR_DAT_110d9df30;
    func_0x00010bdb43a0(appuStack_50);
  }
  else {
    __ZNSt11logic_errorC2EPKc(&ppuStack_40,&UNK_10f836c55);
    ppuStack_40 = &PTR_FUN_110d9df58;
    func_0x00010bdb4374(&ppuStack_40);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10bd420a8);
  (*pcVar2)();
}



/* Entry: 10bd420d4; end: 10bd420db;  */

void FUN_10bd420d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt11logic_errorD2Ev_110346150)();
  return;
}



/* Entry: 10bd420dc; end: 10bd4217b;  */

void FUN_10bd420dc(long param_1,ulong param_2)

{
  if ((param_2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      func_0x00010bd45148();
    }
    else if (*(long *)(param_1 + 0x10) == 1) {
      func_0x00010bd453e8();
    }
    func_0x00010bd453f4(param_1,0);
    func_0x000107c2a670();
    func_0x00010bd4527c();
  }
  else {
    ___error();
    func_0x000107c3a92c();
    func_0x00010bd4527c();
  }
  return;
}



/* Entry: 10bd4217c; end: 10bd422db;  */

undefined8
FUN_10bd4217c(undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 param_4,int *param_5,
             long param_6,long param_7)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if ((int)param_1 == -1) {
    uVar2 = 9;
  }
  else {
    iVar3 = (int)param_3;
    iVar4 = (int)param_4;
    if (iVar3 != -0x5af00000 || iVar4 != 2) {
      if (iVar3 != -0x5af00000 || iVar4 != 1) {
        if ((iVar3 == 0xffff) && (iVar4 == 0x80)) {
          *param_2 = *param_2 | 8;
        }
        uVar2 = param_1;
        _setsockopt(param_1,param_3,param_4,param_5,param_6);
        func_0x00010bd44f30();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if (iVar3 != 0xffff || iVar4 != 4) {
          return uVar2;
        }
        if ((*param_2 >> 5 & 1) != 0) {
          _setsockopt(param_1,0xffff,0x200,param_5,param_6);
          return 0;
        }
        return uVar2;
      }
      if (param_6 == 4) {
        bVar1 = 0;
        if (*param_5 != 0) {
          bVar1 = 4;
        }
        *param_2 = *param_2 & 0xfb | bVar1;
        if (*(long *)(param_7 + 0x10) == 0) {
          func_0x00010bd45148();
        }
        else if (*(long *)(param_7 + 0x10) == 1) {
          func_0x00010bd453e8();
        }
        func_0x00010bd4516c();
        return 0;
      }
    }
    uVar2 = 0x16;
  }
  func_0x00010894f248(param_7,uVar2);
  return 0xffffffff;
}



/* Entry: 10bd422dc; end: 10bd42353;  */

uint FUN_10bd422dc(int param_1,byte *param_2,int param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  uint unaff_w22;
  
  if (param_1 == -1) {
    func_0x00010bd45138(param_4);
    uVar2 = 0;
  }
  else {
    func_0x00010bd451e0();
    func_0x00010bd4539c();
    uVar2 = ~unaff_w22 >> 0x1f;
    if (-1 < (int)unaff_w22) {
      bVar1 = *param_2 | 1;
      if (param_3 == 0) {
        bVar1 = *param_2 & 0xfc;
      }
      *param_2 = bVar1;
    }
  }
  return uVar2;
}



/* Entry: 10bd42354; end: 10bd42537;  */

undefined8 FUN_10bd42354(int param_1)

{
  undefined8 unaff_x20;
  
  if (param_1 == -1) {
    func_0x00010bd44fcc();
    unaff_x20 = 0xffffffff;
  }
  else {
    _shutdown();
    func_0x00010bd44f1c();
  }
  return unaff_x20;
}



/* Entry: 10bd42538; end: 10bd425fb;  */

/* WARNING: Removing unreachable block (ram,0x00010bd4259c) */

bool FUN_10bd42538(int param_1,long param_2)

{
  int *piVar1;
  int aiStack_38 [2];
  
  aiStack_38[1] = 4;
  piVar1 = aiStack_38;
  aiStack_38[0] = param_1;
  _poll(piVar1,1,0);
  if (((int)piVar1 != 0) && (func_0x00010bd452f4(), param_1 == 0)) {
    if (*(long *)(param_2 + 0x10) == 0) {
      func_0x00010bd45148();
    }
    else if (*(long *)(param_2 + 0x10) == 1) {
      func_0x00010bd453e8();
    }
    func_0x00010bd4516c();
  }
  return (int)piVar1 != 0;
}



/* Entry: 10bd425fc; end: 10bd4261f;  */

void FUN_10bd425fc(void)

{
  _recv();
  func_0x00010bd45030();
  return;
}



/* Entry: 10bd42620; end: 10bd426cf;  */

undefined8
FUN_10bd42620(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
             undefined8 param_6,ulong *param_7)

{
  ulong uVar1;
  
  func_0x00010bd45684();
  do {
    uVar1 = param_1;
    FUN_10bd425fc(param_1,param_2,param_3,param_4,param_6);
    if ((param_5 != 0) && (uVar1 == 0)) {
      func_0x00010bd3fd3c(param_6,2);
      return 1;
    }
    if (-1 < (long)uVar1) {
      *param_7 = uVar1;
      return 1;
    }
    func_0x00010bd45064();
    func_0x00010bd44fd8();
  } while ((uVar1 & 1) != 0);
  uVar1 = 0;
  func_0x00010bd44f74();
  func_0x00010bd44fd8();
  if ((uVar1 & 1) == 0) {
    func_0x00010bd44f64();
    func_0x00010bd45140();
    if ((uVar1 & 1) == 0) {
      *param_7 = 0;
      return 1;
    }
  }
  return 0;
}



/* Entry: 10bd426d0; end: 10bd4275f;  */

void FUN_10bd426d0(void)

{
  func_0x00010bd45118();
  func_0x00010bd42704();
  func_0x00010bd45030();
  return;
}



/* Entry: 10bd42760; end: 10bd42803;  */

undefined8
FUN_10bd42760(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong *param_8)

{
  ulong uVar1;
  
  func_0x00010bd45684();
  do {
    uVar1 = param_1;
    FUN_10bd426d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    if (-1 < (long)uVar1) {
      *param_8 = uVar1;
      return 1;
    }
    func_0x00010bd45064();
    func_0x00010bd44fd8();
  } while ((uVar1 & 1) != 0);
  uVar1 = 0;
  func_0x00010bd44f74();
  func_0x00010bd44fd8();
  if ((uVar1 & 1) == 0) {
    func_0x00010bd44f64();
    func_0x00010bd45140();
    if ((uVar1 & 1) == 0) {
      *param_8 = 0;
      return 1;
    }
  }
  return 0;
}



/* Entry: 10bd42804; end: 10bd42827;  */

void FUN_10bd42804(void)

{
  _send();
  func_0x00010bd45030();
  return;
}



/* Entry: 10bd42828; end: 10bd4288f;  */

undefined8 FUN_10bd42828(undefined8 param_1,ulong param_2)

{
  undefined1 in_ZR;
  
  func_0x00010bd45624();
  if ((bool)in_ZR) {
    func_0x00010bd44fcc();
    param_1 = 0xffffffff;
  }
  else {
    func_0x00010bd454c4();
    func_0x00010bd45598();
    if (((param_2 & 1) != 0) && ((int)param_1 == 0)) {
      func_0x00010894f248();
    }
  }
  return param_1;
}



/* Entry: 10bd42890; end: 10bd429f7;  */

void FUN_10bd42890(long param_1,uint param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  if ((int)param_1 == -1) {
    func_0x00010bd44fcc();
  }
  else if (((param_2 >> 4 & 1) == 0) || (param_4 != 0)) {
    do {
      lVar2 = param_1;
      FUN_10bd42804(param_1,param_3,param_4,param_5,param_6);
      if (-1 < lVar2) {
        return;
      }
      if ((param_2 & 1) != 0) {
        return;
      }
      puVar1 = auStack_58;
      func_0x00010bd44f74();
      func_0x00010bd45298();
      if ((int)puVar1 != 0) {
        func_0x00010bd44f64();
        func_0x00010bd451d4();
        FUN_10bd3fd6c();
        if (((ulong)puVar1 & 1) != 0) {
          return;
        }
      }
      lVar2 = param_1;
      func_0x00010bd453d8();
    } while (-1 < (int)lVar2);
  }
  else {
    if (*(long *)(param_6 + 0x10) == 0) {
      func_0x00010bd45148();
    }
    else if (*(long *)(param_6 + 0x10) == 1) {
      func_0x00010bd453e8();
    }
    func_0x00010bd4516c();
  }
  return;
}



/* Entry: 10bd429f8; end: 10bd42a1b;  */

void FUN_10bd429f8(void)

{
  _sendto();
  func_0x00010bd45030();
  return;
}



/* Entry: 10bd42a1c; end: 10bd42ad7;  */

void FUN_10bd42a1c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 *puVar2;
  
  func_0x00010bd45684();
  if ((int)param_1 == -1) {
    func_0x00010bd44fcc();
  }
  else {
    do {
      lVar1 = param_1;
      FUN_10bd429f8(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
      if (-1 < lVar1) {
        return;
      }
      if ((param_2 & 1) != 0) {
        return;
      }
      puVar2 = &stack0x00000018;
      func_0x00010bd44f74();
      func_0x00010bd45298();
      if ((int)puVar2 != 0) {
        func_0x00010bd44f64();
        func_0x00010bd451d4();
        FUN_10bd3fd6c();
        if (((ulong)puVar2 & 1) != 0) {
          return;
        }
      }
      lVar1 = param_1;
      func_0x00010bd453d8();
    } while (-1 < (int)lVar1);
  }
  return;
}



/* Entry: 10bd42ad8; end: 10bd42b77;  */

void FUN_10bd42ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)*param_6;
  _getsockopt(param_2,param_3,param_4,param_5,&uStack_24);
  func_0x00010bd4548c();
  return;
}



/* Entry: 10bd42b78; end: 10bd42c97;  */

undefined4 * FUN_10bd42b78(undefined4 *param_1)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  undefined4 *puVar2;
  long in_x4;
  undefined4 *in_x5;
  undefined8 extraout_x8;
  undefined4 *unaff_x19;
  char *unaff_x22;
  undefined8 uStack_60;
  undefined6 uStack_58;
  undefined2 uStack_52;
  undefined6 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010bd45470();
  func_0x00010bd44fa0();
  uStack_48 = extraout_x8;
  FUN_10bd42c98();
  puVar1 = param_1;
  _inet_ntop();
  puVar2 = in_x5;
  FUN_10bd420dc(in_x5,1);
  if ((puVar1 == (undefined4 *)0x0) &&
     (puVar2 = in_x5, func_0x000107c2a678(), ((ulong)puVar2 & 1) == 0)) {
    func_0x00010894f248(in_x5,0x16);
    puVar2 = in_x5;
  }
  if (((in_x4 == 0) || (in_ZR = (int)param_1 == 0x1e, !(bool)in_ZR)) ||
     (puVar1 == (undefined4 *)0x0)) goto LAB_10bd42c7c;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_52 = 0;
  uStack_60 = 0x25;
  if (*unaff_x22 == -2) {
    in_ZR = unaff_x22[1] == -0x41;
    if (unaff_x22[1] < -0x40) goto LAB_10bd42c44;
LAB_10bd42c58:
    _sprintf((ulong)&uStack_60 | 1,&UNK_10f836ced);
  }
  else {
    in_ZR = 0;
    if ((*unaff_x22 != -1) || (in_ZR = (unaff_x22[1] & 0xfU) == 2, !(bool)in_ZR))
    goto LAB_10bd42c58;
LAB_10bd42c44:
    _if_indextoname(in_x4,(ulong)&uStack_60 | 1);
    if (in_x4 == 0) goto LAB_10bd42c58;
  }
  _strcat();
  puVar2 = unaff_x19;
LAB_10bd42c7c:
  func_0x00010bd44f08(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    ___error();
    *puVar2 = 0;
    return puVar2;
  }
  return puVar1;
}



/* Entry: 10bd42c98; end: 10bd42caf;  */

void FUN_10bd42c98(undefined4 *param_1)

{
  ___error();
  *param_1 = 0;
  return;
}



/* Entry: 10bd42cb0; end: 10bd42e2f;  */

undefined8
FUN_10bd42cb0(undefined8 param_1,undefined1 *param_2,char *param_3,ulong *param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  undefined1 auStack_a8 [64];
  undefined8 uStack_68;
  
  func_0x00010bd44fa0();
  uStack_68 = extraout_x8;
  FUN_10bd42c98();
  iVar6 = (int)param_1;
  if (iVar6 == 0x1e) {
    puVar3 = param_2;
    _strchr(param_2,0x25);
    if (puVar3 == (undefined1 *)0x0) goto LAB_10bd42d28;
    lVar7 = (long)puVar3 - (long)param_2;
    uVar1 = lVar7 == 0x40;
    if (0x3f < lVar7) {
      func_0x00010bd45584();
      param_1 = 0;
      goto LAB_10bd42dfc;
    }
    _memcpy(auStack_a8,param_2,lVar7);
    bVar8 = false;
    auStack_a8[lVar7] = 0;
    param_2 = auStack_a8;
    puVar4 = puVar3;
  }
  else {
    puVar3 = (undefined1 *)0x0;
LAB_10bd42d28:
    bVar8 = true;
    puVar4 = puVar3;
  }
  _inet_pton(param_1,param_2,param_3);
  puVar3 = param_5;
  FUN_10bd420dc(param_5,1);
  iVar5 = (int)param_1;
  if ((iVar5 < 1) && (func_0x000107c2a678(), puVar3 = param_5, ((ulong)param_5 & 1) == 0)) {
    func_0x00010bd45584();
    puVar3 = param_5;
  }
  uVar1 = iVar6 == 0x1e;
  if ((((!(bool)uVar1) || (param_4 == (ulong *)0x0)) || (uVar1 = iVar5 == 1, iVar5 < 1)) ||
     (*param_4 = 0, bVar8)) goto LAB_10bd42dfc;
  if (*param_3 == -2) {
    uVar1 = param_3[1] == -0x41;
    if (param_3[1] < -0x40) goto LAB_10bd42dd8;
  }
  else {
    uVar1 = 0;
    if ((*param_3 == -1) && (uVar1 = (param_3[1] & 0xfU) == 2, (bool)uVar1)) {
LAB_10bd42dd8:
      puVar3 = puVar4 + 1;
      _if_nametoindex();
      *param_4 = (ulong)puVar3 & 0xffffffff;
      if ((int)puVar3 != 0) goto LAB_10bd42dfc;
    }
  }
  puVar3 = puVar4 + 1;
  _atoi();
  *param_4 = (long)(int)puVar3;
LAB_10bd42dfc:
  func_0x00010bd44f08(uStack_68);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010bd454d0();
    uVar2 = 0;
    if (puVar3 != (undefined1 *)0x0) {
      uVar2 = *(undefined8 *)(puVar3 + 8);
    }
    return uVar2;
  }
  return param_1;
}



/* Entry: 10bd42e30; end: 10bd42e4b;  */

void FUN_10bd42e30(void)

{
  func_0x00010bd454d0();
  return;
}



/* Entry: 10bd42e4c; end: 10bd42e87;  */

void FUN_10bd42e4c(undefined8 param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [40];
  
  func_0x0001089698dc(auStack_48,param_1);
  FUN_10bd42e88(auStack_48);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd42e74);
  (*pcVar1)();
}



/* Entry: 10bd42e88; end: 10bd42eaf;  */

void FUN_10bd42e88(undefined8 param_1)

{
  code *pcVar1;
  undefined8 unaff_x20;
  undefined1 auStack_68 [40];
  
  func_0x00010bd45560();
  FUN_10bd445ec();
  func_0x00010bd45230();
  func_0x00010bd450a0();
  func_0x00010bd450fc();
  FUN_10bd43e9c(auStack_68,param_1,unaff_x20);
  FUN_10bd42e88(auStack_68);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd42edc);
  (*pcVar1)();
}



/* Entry: 10bd42eb0; end: 10bd42eef;  */

void FUN_10bd42eb0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_48 [40];
  
  FUN_10bd43e9c(auStack_48,param_1,param_2);
  FUN_10bd42e88(auStack_48);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd42edc);
  (*pcVar1)();
}



/* Entry: 10bd42ef0; end: 10bd42f1b;  */

undefined8 * FUN_10bd42ef0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9e038;
  FUN_10bd43f08(param_1 + 2);
  return param_1;
}



/* Entry: 10bd42f1c; end: 10bd42f23;  */

undefined8 * FUN_10bd42f1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9e220;
  FUN_10bd43f48(param_1 + 3);
  return param_1;
}



/* Entry: 10bd42f24; end: 10bd42f37;  */

void FUN_10bd42f24(void)

{
  FUN_10bd42ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd42f38; end: 10bd42fff;  */

bool FUN_10bd42f38(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  if ((param_3[4] == 0) && (param_3 != *(undefined8 **)(param_1 + 0x10))) {
    plVar4 = (long *)(param_1 + 0x18);
    param_3[2] = *(long *)(param_1 + 0x20) - *plVar4 >> 4;
    uStack_40 = *param_2;
    puStack_38 = param_3;
    func_0x00010bd447c0(plVar4,&uStack_40);
    func_0x00010bd4476c(param_1,(*(long *)(param_1 + 0x20) - *plVar4 >> 4) + -1);
    lVar3 = *(long *)(param_1 + 0x10);
    param_3[3] = lVar3;
    param_3[4] = 0;
    if (lVar3 != 0) {
      *(undefined8 **)(lVar3 + 0x20) = param_3;
    }
    *(undefined8 **)(param_1 + 0x10) = param_3;
  }
  *param_4 = 0;
  lVar3 = param_3[2];
  puVar1 = param_3;
  if ((undefined8 *)param_3[1] != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_3[1];
  }
  *puVar1 = param_4;
  param_3[1] = param_4;
  if (lVar3 == 0) {
    bVar2 = (undefined8 *)*param_3 == param_4;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10bd43000; end: 10bd4301f;  */

bool FUN_10bd43000(long param_1)

{
  return *(long *)(param_1 + 0x20) == 0;
}



/* Entry: 10bd43020; end: 10bd43077;  */

ulong FUN_10bd43020(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2;
  if (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20)) {
    FUN_10bd44ae0();
    func_0x00010bd454fc();
    if ((long)param_1 < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_1 / 1000;
      if ((long)param_2 <= (long)(param_1 / 1000)) {
        uVar1 = param_2;
      }
      if (param_1 < 1000) {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}



/* Entry: 10bd43078; end: 10bd4307f;  */

long FUN_10bd43078(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x10;
  lVar2 = param_2;
  if (*(long *)(param_1 + 0x28) != *(long *)(param_1 + 0x30)) {
    FUN_10bd44ae0();
    func_0x00010bd454fc();
    lVar2 = lVar1;
    if (param_2 <= lVar1) {
      lVar2 = param_2;
    }
    if (lVar1 < 1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}



/* Entry: 10bd43080; end: 10bd430bf;  */

long FUN_10bd43080(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  if (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20)) {
    FUN_10bd44ae0();
    func_0x00010bd454fc();
    lVar1 = param_1;
    if (param_2 <= param_1) {
      lVar1 = param_2;
    }
    if (param_1 < 1) {
      lVar1 = 0;
    }
  }
  return lVar1;
}



/* Entry: 10bd430c0; end: 10bd430c7;  */

void FUN_10bd430c0(long param_1)

{
  long lVar1;
  long unaff_x20;
  long *plVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x10;
  if (*(long *)(param_1 + 0x28) != *(long *)(param_1 + 0x30)) {
    func_0x00010bd451a0();
    FUN_10bd44ae0();
    while ((plVar2 = *(long **)(unaff_x20 + 0x18), plVar2 != *(long **)(unaff_x20 + 0x20) &&
           (*plVar2 <= lVar1))) {
      plVar2 = (long *)plVar2[1];
      while (lVar3 = *plVar2, lVar3 != 0) {
        func_0x00010894dbf8(plVar2);
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        func_0x00010bd450d0();
      }
      FUN_10bd44c70();
    }
  }
  return;
}



/* Entry: 10bd430c8; end: 10bd43153;  */

void FUN_10bd430c8(long param_1)

{
  long unaff_x20;
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20)) {
    func_0x00010bd451a0();
    FUN_10bd44ae0();
    while ((plVar1 = *(long **)(unaff_x20 + 0x18), plVar1 != *(long **)(unaff_x20 + 0x20) &&
           (*plVar1 <= param_1))) {
      plVar1 = (long *)plVar1[1];
      while (lVar2 = *plVar1, lVar2 != 0) {
        func_0x00010894dbf8(plVar1);
        *(undefined8 *)(lVar2 + 0x18) = 0;
        *(undefined8 *)(lVar2 + 0x20) = 0;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        func_0x00010bd450d0();
      }
      FUN_10bd44c70();
    }
  }
  return;
}



/* Entry: 10bd43154; end: 10bd4315b;  */

void FUN_10bd43154(long param_1)

{
  long unaff_x19;
  long lVar1;
  
  func_0x00010bd452a0(param_1 + 0x10);
  while (lVar1 = *(long *)(unaff_x19 + 0x10), lVar1 != 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010bd45630();
    func_0x00010894dddc();
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
  }
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10bd4315c; end: 10bd4319f;  */

void FUN_10bd4315c(void)

{
  long unaff_x19;
  long lVar1;
  
  func_0x00010bd452a0();
  while (lVar1 = *(long *)(unaff_x19 + 0x10), lVar1 != 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010bd45630();
    func_0x00010894dddc();
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
  }
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10bd431a0; end: 10bd4323f;  */

long FUN_10bd431a0(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  if ((param_2[4] == 0) && (param_2 != *(long **)(param_1 + 0x10))) {
    param_4 = 0;
  }
  else {
    for (lVar1 = 0; lVar2 = *param_2, param_4 != lVar1; lVar1 = lVar1 + 1) {
      if (lVar2 == 0) goto LAB_10bd4321c;
      func_0x00010bd452d0(lVar2 + 0x18);
      func_0x00010894dbf8(param_2);
      func_0x00010bd453ac();
    }
    lVar1 = param_4;
    if (lVar2 == 0) {
LAB_10bd4321c:
      FUN_10bd44c70(param_1,param_2);
      param_4 = lVar1;
    }
  }
  return param_4;
}



/* Entry: 10bd43240; end: 10bd43327;  */

void FUN_10bd43240(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *puVar2;
  long lStack_50;
  undefined8 *puStack_48;
  
  func_0x00010bd451a0();
  if ((*(long *)(param_2 + 0x20) == 0) && (unaff_x19 != *(long **)(unaff_x20 + 0x10))) {
    return;
  }
  lStack_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  while (puVar2 = (undefined8 *)*unaff_x19, puVar2 != (undefined8 *)0x0) {
    func_0x00010894dbf8();
    if (puVar2[6] == param_4) {
      func_0x00010bd452d0(puVar2 + 3);
      func_0x00010bd453ac();
    }
    else {
      *puVar2 = 0;
      plVar1 = &lStack_50;
      if (puStack_48 != (undefined8 *)0x0) {
        plVar1 = puStack_48;
      }
      *plVar1 = (long)puVar2;
      puStack_48 = puVar2;
    }
  }
  if (lStack_50 != 0) {
    plVar1 = unaff_x19;
    if ((long *)unaff_x19[1] != (long *)0x0) {
      plVar1 = (long *)unaff_x19[1];
    }
    *plVar1 = lStack_50;
    unaff_x19[1] = (long)puStack_48;
    lStack_50 = 0;
    puStack_48 = (undefined8 *)0x0;
    if (*unaff_x19 != 0) goto LAB_10bd432fc;
  }
  func_0x00010bd45480();
  FUN_10bd44c70();
LAB_10bd432fc:
  func_0x00010894ef54(&lStack_50);
  return;
}



/* Entry: 10bd43328; end: 10bd43333;  */

undefined * FUN_10bd43328(void)

{
  return &UNK_10f836c6c;
}



/* Entry: 10bd43334; end: 10bd433cb;  */

void FUN_10bd43334(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  
  FUN_10bd433cc(&uStack_44);
  uVar1 = param_3;
  func_0x000107c2a678();
  if ((uVar1 & 1) == 0) {
    *param_1 = 1;
    param_1[2] = uStack_3c;
    param_1[1] = uStack_44;
    *(undefined4 *)(param_1 + 3) = uStack_34;
  }
  else {
    FUN_10bd43448(&uStack_48,param_2,param_3);
    func_0x000107c2a678();
    if ((param_3 & 1) == 0) {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((long)param_1 + 4) = uStack_48;
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = 0;
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      param_1[2] = 0;
    }
  }
  return;
}



/* Entry: 10bd433cc; end: 10bd43447;  */

void FUN_10bd433cc(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 *unaff_x19;
  undefined4 uStack_64;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010bd44f40();
  uVar3 = 0x1e;
  FUN_10bd42cb0();
  bVar1 = (int)uVar3 == 0;
  if ((int)uVar3 < 1) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    *(undefined4 *)(unaff_x19 + 2) = 0;
  }
  else {
    *(undefined4 *)(unaff_x19 + 2) = 0;
    unaff_x19[1] = uStack_30;
    *unaff_x19 = uStack_38;
  }
  func_0x00010bd44f08(extraout_x8);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_1 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  iVar2 = 2;
  FUN_10bd42cb0(2,uVar3,&uStack_64,0,param_1);
  if (iVar2 < 1) {
    uStack_64 = 0;
  }
  *extraout_x8_00 = uStack_64;
  return;
}



/* Entry: 10bd43448; end: 10bd4348f;  */

void FUN_10bd43448(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uStack_24;
  
  iVar1 = 2;
  FUN_10bd42cb0(2,param_2,&uStack_24,0,param_3);
  if (iVar1 < 1) {
    uStack_24 = 0;
  }
  *param_1 = uStack_24;
  return;
}



/* Entry: 10bd43490; end: 10bd434a3;  */

void FUN_10bd43490(undefined8 *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  FUN_10bd433cc(&uStack_44);
  uVar2 = param_3;
  func_0x000107c2a678();
  if ((uVar2 & 1) == 0) {
    *param_1 = 1;
    param_1[2] = uStack_3c;
    param_1[1] = uStack_44;
    *(undefined4 *)(param_1 + 3) = uStack_34;
  }
  else {
    FUN_10bd43448(&uStack_48,plVar1,param_3);
    func_0x000107c2a678();
    if ((param_3 & 1) == 0) {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((long)param_1 + 4) = uStack_48;
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = 0;
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      param_1[2] = 0;
    }
  }
  return;
}



/* Entry: 10bd434a4; end: 10bd434eb;  */

void FUN_10bd434a4(int *param_1,int *param_2)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (*param_2 == 0) {
    *param_1 = param_2[1];
    return;
  }
  FUN_10bd43f8c(auStack_28);
  FUN_10bd434ec(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd434e0);
  (*pcVar1)();
}



/* Entry: 10bd434ec; end: 10bd43533;  */

void FUN_10bd434ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  ___cxa_allocate_exception();
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0xffffffff;
  *puVar1 = &PTR_FUN_110d9e5a8;
  puVar1[1] = &PTR_FUN_110d9e5d8;
  puVar1[2] = &PTR_DAT_110d9e600;
  puVar1[3] = 0;
  ___cxa_throw();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt8bad_castD2Ev_110346988)();
  return;
}



/* Entry: 10bd43534; end: 10bd43537;  */

void FUN_10bd43534(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt8bad_castD2Ev_110346988)();
  return;
}



/* Entry: 10bd43538; end: 10bd4358b;  */

void FUN_10bd43538(undefined8 *param_1,int *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [8];
  
  if (*param_2 == 1) {
    uVar2 = *(undefined8 *)(param_2 + 2);
    param_1[1] = *(undefined8 *)(param_2 + 4);
    *param_1 = uVar2;
    *(int *)(param_1 + 2) = param_2[6];
    return;
  }
  FUN_10bd43f8c(auStack_28);
  FUN_10bd434ec(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd43580);
  (*pcVar1)();
}



/* Entry: 10bd4358c; end: 10bd435a7;  */

int * FUN_10bd4358c(int *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 unaff_x19;
  int *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_28;
  
  uVar1 = *param_1 == 1;
  if ((bool)uVar1) {
    unaff_x20 = param_1 + 2;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010bd44f40(unaff_x20,unaff_x20);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_28 = extraout_x8;
    func_0x00010bd454e4();
    param_1 = unaff_x20;
    if (unaff_x20 == (int *)0x0) {
      func_0x00010bd455a4();
    }
    func_0x00010bd455b4();
    func_0x00010bd44f08(uStack_28);
    if ((bool)uVar1) {
      return param_1;
    }
    unaff_x30 = 0x10bd4360c;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)&uStack_80;
  }
  else {
    param_1 = param_1 + 1;
  }
  *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010bd44f40();
  *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8_00;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
  func_0x00010bd4538c();
  if (param_1 == (int *)0x0) {
    func_0x00010bd455a4();
  }
  func_0x00010bd455b4();
  func_0x00010bd44f08(*(undefined8 *)((long)register0x00000008 + -0x28));
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  if (*param_1 == 0) {
    bVar2 = param_1[1] == 0;
  }
  else {
    if ((((((char)param_1[2] != '\0') || (*(char *)((long)param_1 + 9) != '\0')) ||
         (*(char *)((long)param_1 + 10) != '\0')) ||
        (((*(char *)((long)param_1 + 0xb) != '\0' || ((char)param_1[3] != '\0')) ||
         ((*(char *)((long)param_1 + 0xd) != '\0' ||
          ((*(char *)((long)param_1 + 0xe) != '\0' || (*(char *)((long)param_1 + 0xf) != '\0')))))))
        ) || (((char)param_1[4] != '\0' ||
              (((((*(char *)((long)param_1 + 0x11) != '\0' ||
                  (*(char *)((long)param_1 + 0x12) != '\0')) ||
                 (*(char *)((long)param_1 + 0x13) != '\0')) ||
                (((char)param_1[5] != '\0' || (*(char *)((long)param_1 + 0x15) != '\0')))) ||
               (*(char *)((long)param_1 + 0x16) != '\0')))))) {
      return (int *)0x0;
    }
    bVar2 = *(char *)((long)param_1 + 0x17) == '\0';
  }
  return (int *)(ulong)bVar2;
}



/* Entry: 10bd435a8; end: 10bd43667;  */

int * FUN_10bd435a8(int *param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  
  func_0x00010bd44f40(param_1,param_1);
  func_0x00010bd454e4();
  if (param_1 == (int *)0x0) {
    func_0x00010bd455a4();
  }
  func_0x00010bd455b4();
  func_0x00010bd44f08(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bd44f40();
  func_0x00010bd4538c();
  if (param_1 == (int *)0x0) {
    func_0x00010bd455a4();
  }
  func_0x00010bd455b4();
  func_0x00010bd44f08(extraout_x8_00);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  if (*param_1 == 0) {
    bVar1 = param_1[1] == 0;
  }
  else {
    if ((((((char)param_1[2] != '\0') || (*(char *)((long)param_1 + 9) != '\0')) ||
         (*(char *)((long)param_1 + 10) != '\0')) ||
        (((*(char *)((long)param_1 + 0xb) != '\0' || ((char)param_1[3] != '\0')) ||
         ((*(char *)((long)param_1 + 0xd) != '\0' ||
          ((*(char *)((long)param_1 + 0xe) != '\0' || (*(char *)((long)param_1 + 0xf) != '\0')))))))
        ) || (((char)param_1[4] != '\0' ||
              (((((*(char *)((long)param_1 + 0x11) != '\0' ||
                  (*(char *)((long)param_1 + 0x12) != '\0')) ||
                 (*(char *)((long)param_1 + 0x13) != '\0')) ||
                (((char)param_1[5] != '\0' || (*(char *)((long)param_1 + 0x15) != '\0')))) ||
               (*(char *)((long)param_1 + 0x16) != '\0')))))) {
      return (int *)0x0;
    }
    bVar1 = *(char *)((long)param_1 + 0x17) == '\0';
  }
  return (int *)(ulong)bVar1;
}



/* Entry: 10bd43668; end: 10bd43743;  */

bool FUN_10bd43668(int *param_1)

{
  bool bVar1;
  
  if (*param_1 == 0) {
    bVar1 = param_1[1] == 0;
  }
  else {
    if ((((((char)param_1[2] != '\0') || (*(char *)((long)param_1 + 9) != '\0')) ||
         (*(char *)((long)param_1 + 10) != '\0')) ||
        (((*(char *)((long)param_1 + 0xb) != '\0' || ((char)param_1[3] != '\0')) ||
         ((*(char *)((long)param_1 + 0xd) != '\0' ||
          ((*(char *)((long)param_1 + 0xe) != '\0' || (*(char *)((long)param_1 + 0xf) != '\0')))))))
        ) || (((char)param_1[4] != '\0' ||
              (((((*(char *)((long)param_1 + 0x11) != '\0' ||
                  (*(char *)((long)param_1 + 0x12) != '\0')) ||
                 (*(char *)((long)param_1 + 0x13) != '\0')) ||
                (((char)param_1[5] != '\0' || (*(char *)((long)param_1 + 0x15) != '\0')))) ||
               (*(char *)((long)param_1 + 0x16) != '\0')))))) {
      return false;
    }
    bVar1 = *(char *)((long)param_1 + 0x17) == '\0';
  }
  return bVar1;
}



/* Entry: 10bd43744; end: 10bd43777;  */

bool FUN_10bd43744(int param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010bd451a0();
  _memcmp();
  return param_1 == 0 && *(int *)(unaff_x20 + 0x10) == *(int *)(unaff_x19 + 0x10);
}



/* Entry: 10bd43778; end: 10bd437c7;  */

bool FUN_10bd43778(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long unaff_x19;
  long unaff_x20;
  
  iVar4 = *param_1;
  if (iVar4 < *param_2) {
    return true;
  }
  if (*param_2 < iVar4) {
    return false;
  }
  if (iVar4 == 1) {
    param_1 = param_1 + 2;
    func_0x00010bd451a0(param_1,param_2 + 2);
    iVar4 = (int)param_1;
    _memcmp();
    if (iVar4 < 0) {
      bVar3 = true;
    }
    else if (iVar4 == 0) {
      bVar3 = *(uint *)(unaff_x20 + 0x10) < *(uint *)(unaff_x19 + 0x10);
    }
    else {
      bVar3 = false;
    }
    return bVar3;
  }
  uVar1 = (param_1[1] & 0xff00ff00U) >> 8 | (param_1[1] & 0xff00ffU) << 8;
  uVar2 = (param_2[1] & 0xff00ff00U) >> 8 | (param_2[1] & 0xff00ffU) << 8;
  return (uVar1 >> 0x10 | uVar1 << 0x10) < (uVar2 >> 0x10 | uVar2 << 0x10);
}



/* Entry: 10bd437c8; end: 10bd4380f;  */

bool FUN_10bd437c8(int param_1)

{
  bool bVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010bd451a0();
  _memcmp();
  if (param_1 < 0) {
    bVar1 = true;
  }
  else if (param_1 == 0) {
    bVar1 = *(uint *)(unaff_x20 + 0x10) < *(uint *)(unaff_x19 + 0x10);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10bd43810; end: 10bd43837;  */

void FUN_10bd43810(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  undefined4 uStack_24;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  iVar2 = 2;
  FUN_10bd42cb0(2,plVar1,&uStack_24,0,param_3);
  if (iVar2 < 1) {
    uStack_24 = 0;
  }
  *param_1 = uStack_24;
  return;
}



/* Entry: 10bd43838; end: 10bd438c3;  */

undefined8 * FUN_10bd43838(undefined8 *param_1,int *param_2,uint param_3)

{
  ushort uVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  uVar1 = (ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff00ff) << 8);
  if (*param_2 == 0) {
    *(undefined1 *)((long)param_1 + 1) = 2;
    *(ushort *)((long)param_1 + 2) = uVar1;
    FUN_10bd434a4(&uStack_40,param_2);
    *(undefined4 *)((long)param_1 + 4) = uStack_40;
  }
  else {
    *(undefined1 *)((long)param_1 + 1) = 0x1e;
    *(ushort *)((long)param_1 + 2) = uVar1;
    *(undefined4 *)((long)param_1 + 4) = 0;
    FUN_10bd43538(&uStack_40,param_2);
    param_1[2] = uStack_38;
    param_1[1] = CONCAT44(uStack_3c,uStack_40);
    *(undefined4 *)(param_1 + 3) = uStack_30;
  }
  return param_1;
}



/* Entry: 10bd438c4; end: 10bd438f7;  */

void FUN_10bd438c4(undefined8 param_1,ulong param_2)

{
  undefined1 auStack_28 [24];
  
  if (0x80 < param_2) {
    func_0x00010bd450c8(auStack_28,0x16);
    FUN_10bd3fc88(auStack_28);
  }
  return;
}



/* Entry: 10bd438f8; end: 10bd439b7;  */

undefined4 FUN_10bd438f8(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint *puVar3;
  long unaff_x19;
  long unaff_x20;
  uint uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  
  func_0x00010bd451a0();
  bVar1 = *(char *)(param_1 + 1) != '\x02';
  if (bVar1) {
    uStack_38 = 0;
    uStack_2c = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_34 = *(undefined8 *)(unaff_x20 + 8);
    uStack_24 = *(undefined4 *)(unaff_x20 + 0x18);
  }
  else {
    uStack_38 = *(undefined4 *)(unaff_x20 + 4);
    uStack_2c = 0;
    uStack_34 = 0;
    uStack_24 = 0;
  }
  uStack_3c = (uint)bVar1;
  bVar1 = *(char *)(unaff_x19 + 1) != '\x02';
  if (bVar1) {
    uStack_54 = 0;
    uStack_48 = *(undefined8 *)(unaff_x19 + 0x10);
    uStack_50 = *(undefined8 *)(unaff_x19 + 8);
    uStack_40 = *(undefined4 *)(unaff_x19 + 0x18);
  }
  else {
    uStack_54 = *(undefined4 *)(unaff_x19 + 4);
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
  }
  uStack_58 = (uint)bVar1;
  puVar3 = &uStack_3c;
  func_0x00010bd4370c(puVar3,&uStack_58);
  uVar2 = 0;
  if (*(short *)(unaff_x20 + 2) == *(short *)(unaff_x19 + 2)) {
    uVar2 = SUB84(puVar3,0);
  }
  return uVar2;
}



/* Entry: 10bd439b8; end: 10bd439bb;  */

void FUN_10bd439b8(void)

{
  func_0x00010bd4521c();
  __ZNSt13exception_ptrD1Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 10bd439bc; end: 10bd439cf;  */

void FUN_10bd439bc(void)

{
  FUN_10bd43fcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd439d0; end: 10bd439d3;  */

void FUN_10bd439d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 10bd439d4; end: 10bd439e7;  */

void FUN_10bd439d4(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd439e8; end: 10bd43a8f;  */

undefined1 * FUN_10bd439e8(long *param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  undefined8 **appuStack_58 [2];
  char cStack_41;
  
  if (param_4 != 0) {
    param_4 = param_4 + -1;
    if (param_4 == 0) {
      *param_3 = 0;
    }
    else {
      (**(code **)(*param_1 + 0x20))(appuStack_58);
      if (-1 < cStack_41) {
        appuStack_58[0] = appuStack_58;
      }
      _strncpy(param_3,appuStack_58[0],param_4);
      param_3[param_4] = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_58);
    }
  }
  return param_3;
}



/* Entry: 10bd43a90; end: 10bd43ac7;  */

undefined * FUN_10bd43a90(void)

{
  return &UNK_10f836d5c;
}



/* Entry: 10bd43ac8; end: 10bd43aef;  */

void FUN_10bd43ac8(void)

{
  __ZNSt11logic_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd43af0; end: 10bd43b1b;  */

long FUN_10bd43af0(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return param_1;
}



/* Entry: 10bd43b1c; end: 10bd43b47;  */

long FUN_10bd43b1c(long param_1,undefined1 param_2)

{
  func_0x00010bd41040(param_1 + 8);
  *(undefined1 *)(param_1 + 0x48) = param_2;
  return param_1;
}



/* Entry: 10bd43b48; end: 10bd43b6b;  */

undefined8 FUN_10bd43b48(undefined8 param_1)

{
  _pthread_mutex_destroy();
  return param_1;
}



/* Entry: 10bd43b6c; end: 10bd43bb3;  */

undefined1 * FUN_10bd43b6c(undefined1 *param_1)

{
  int iVar1;
  undefined4 uStack_24;
  
  *param_1 = 0;
  uStack_24 = 0xffffffff;
  iVar1 = 1;
  _pthread_sigmask(1,&uStack_24,param_1 + 4);
  *param_1 = iVar1 == 0;
  return param_1;
}



/* Entry: 10bd43bb4; end: 10bd43bef;  */

char * FUN_10bd43bb4(char *param_1)

{
  if (*param_1 == '\x01') {
    _pthread_sigmask(3,param_1 + 4,0);
  }
  return param_1;
}



/* Entry: 10bd43bf0; end: 10bd43c13;  */

undefined8 FUN_10bd43bf0(undefined8 param_1)

{
  _pthread_cond_destroy();
  return param_1;
}



/* Entry: 10bd43c14; end: 10bd43c2b;  */

void FUN_10bd43c14(long param_1)

{
  FUN_10bd43c2c();
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 10bd43c2c; end: 10bd43c4f;  */

void FUN_10bd43c2c(long param_1)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  for (lVar1 = 0; lVar1 != 0x50; lVar1 = lVar1 + 8) {
    *(undefined8 *)(param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 10bd43c50; end: 10bd43cbb;  */

long FUN_10bd43c50(long param_1)

{
  long lVar1;
  
  for (lVar1 = 0; lVar1 != 0x50; lVar1 = lVar1 + 8) {
    if (*(long *)(param_1 + lVar1) != 0) {
      func_0x00010894e15c();
    }
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0x58);
  return param_1;
}



/* Entry: 10bd43cbc; end: 10bd43d13;  */

void FUN_10bd43cbc(void)

{
  code *pcVar1;
  
  ___cxa_allocate_exception(0x10);
  FUN_10bd43d14();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd43cf8);
  (*pcVar1)();
}



/* Entry: 10bd43d14; end: 10bd43d37;  */

void FUN_10bd43d14(void)

{
  func_0x00010bd4521c();
  __ZNSt13exception_ptrC1ERKS_();
  return;
}



/* Entry: 10bd43d38; end: 10bd43dc3;  */

long * FUN_10bd43d38(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar5 = param_1[2];
  lVar7 = *(long *)(lVar5 + 0x70);
  if (0 < lVar7) {
    plVar1 = (long *)(*param_1 + 0xf0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar5 = param_1[2];
  }
  *(undefined8 *)(lVar5 + 0x70) = 0;
  FUN_10bd40dd8(param_1[1]);
  *(undefined1 *)(*param_1 + 0xe8) = 1;
  func_0x00010bd454f0();
  lVar5 = *param_1;
  puVar6 = (undefined8 *)(lVar5 + 0xd0);
  *puVar6 = 0;
  puVar2 = (undefined8 *)(lVar5 + 0xf8);
  if (*(undefined8 **)(lVar5 + 0x100) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(lVar5 + 0x100);
  }
  *puVar2 = puVar6;
  *(undefined8 **)(lVar5 + 0x100) = puVar6;
  return param_1;
}



/* Entry: 10bd43dc4; end: 10bd43e47;  */

long * FUN_10bd43dc4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1[2] + 0x70);
  if (lVar4 < 2) {
    if (lVar4 != 1) {
      func_0x00010894eefc(*param_1);
    }
  }
  else {
    plVar1 = (long *)(*param_1 + 0xf0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_1[2];
  *(undefined8 *)(lVar4 + 0x70) = 0;
  if (*(long *)(lVar4 + 0x60) != 0) {
    FUN_10bd40dd8(param_1[1]);
    func_0x00010bd454f0(*param_1);
  }
  return param_1;
}



/* Entry: 10bd43e48; end: 10bd43e8b;  */

bool FUN_10bd43e48(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  *(ulong *)(param_1 + 0x30) = uVar1 | 1;
  if (1 < uVar1) {
    func_0x00010894f1d0(param_2);
    _pthread_cond_signal(param_1);
  }
  return 1 < uVar1;
}



/* Entry: 10bd43e8c; end: 10bd43e9b;  */

void FUN_10bd43e8c(long param_1)

{
  *(ulong *)(param_1 + 0x30) = *(ulong *)(param_1 + 0x30) | 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_cond_broadcast_11034c838)();
  return;
}



/* Entry: 10bd43e9c; end: 10bd43f07;  */

void FUN_10bd43e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x00010bd452a0();
  func_0x000108969940(auStack_38,param_3);
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  *unaff_x19 = &PTR_DAT_110aa02e8;
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20;
  unaff_x19[4] = unaff_x20[2];
  unaff_x19[3] = uVar2;
  unaff_x19[2] = uVar1;
  return;
}



/* Entry: 10bd43f08; end: 10bd43f33;  */

undefined8 * FUN_10bd43f08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9e220;
  FUN_10bd43f48(param_1 + 3);
  return param_1;
}


