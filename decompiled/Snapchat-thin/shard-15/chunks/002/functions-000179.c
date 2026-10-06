/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b99f27c; end: 10b99f28f;  */

void FUN_10b99f27c(void)

{
  FUN_10b99f290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b99f290; end: 10b99f2bb;  */

undefined8 * FUN_10b99f290(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d7e650;
  func_0x000107c27d78(param_1 + 2);
  return param_1;
}



/* Entry: 10b99f2bc; end: 10b99f2e3;  */

undefined8 * FUN_10b99f2bc(undefined8 *param_1)

{
  FUN_10b99f2e4(*param_1);
  return param_1;
}



/* Entry: 10b99f2e4; end: 10b99f39b;  */

void FUN_10b99f2e4(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010b99f308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b99f39c; end: 10b99f3e3;  */

undefined8 * FUN_10b99f39c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e698;
  func_0x000104bda93c(param_1 + 4);
  func_0x000107c278f4(param_1 + 3);
  func_0x000107c278f4(param_1 + 2);
  return param_1;
}



/* Entry: 10b99f3e4; end: 10b99f3e7;  */

undefined8 * FUN_10b99f3e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e698;
  func_0x000104bda93c(param_1 + 4);
  func_0x000107c278f4(param_1 + 3);
  func_0x000107c278f4(param_1 + 2);
  return param_1;
}



/* Entry: 10b99f3e8; end: 10b99f3fb;  */

void FUN_10b99f3e8(void)

{
  FUN_10b99f39c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b99f3fc; end: 10b99f453;  */

byte FUN_10b99f3fc(long param_1,long param_2)

{
  bool bVar1;
  
  while( true ) {
    if ((*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10)) ||
       (*(long *)(param_1 + 0x18) != *(long *)(param_2 + 0x18))) {
      return 0;
    }
    param_1 = *(long *)(param_1 + 0x20);
    param_2 = *(long *)(param_2 + 0x20);
    if (param_1 == 0) break;
    if (param_2 == 0) {
      bVar1 = false;
LAB_10b99f444:
      return param_1 == 0 ^ bVar1;
    }
  }
  bVar1 = param_2 != 0;
  goto LAB_10b99f444;
}



/* Entry: 10b99f454; end: 10b99f4e3;  */

ulong FUN_10b99f454(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(long *)(param_1 + 0x10) * -0x395b586ca42e166b;
  uVar3 = *(long *)(param_1 + 0x18) * -0x395b586ca42e166b;
  uVar2 = ((uVar3 ^ uVar3 >> 0x2f) * -0x395b586ca42e166b ^
          (uVar2 ^ uVar2 >> 0x2f) * 0x35a98f4d286a90b9 + 0xe6546b64) * -0x395b586ca42e166b +
          0xe6546b64;
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    FUN_10b99f454();
    uVar2 = ((lVar1 * -0x395b586ca42e166b ^ (ulong)(lVar1 * -0x395b586ca42e166b) >> 0x2f) *
             -0x395b586ca42e166b ^ uVar2) * -0x395b586ca42e166b + 0xe6546b64;
  }
  return uVar2;
}



/* Entry: 10b99f4e4; end: 10b99f55f;  */

undefined8 FUN_10b99f4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uStack_2c;
  long lStack_28;
  
  if (param_4 == (long *)0x0) {
    lStack_28 = 0;
  }
  else {
    lStack_28 = *param_4;
    if (lStack_28 != 0) {
      plVar1 = (long *)(lStack_28 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  uStack_2c = 0;
  FUN_10b99f648(param_1,param_2,param_3,&lStack_28,&uStack_2c);
  func_0x00010b99fe28();
  return param_1;
}



/* Entry: 10b99f560; end: 10b99f5a7;  */

undefined8 FUN_10b99f560(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  func_0x00010b99feb0();
  func_0x00010b99fe90();
  func_0x00010b99fe20();
  func_0x00010b99fdf8();
  return param_1;
}



/* Entry: 10b99f5a8; end: 10b99f5f7;  */

undefined8 FUN_10b99f5a8(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x000107c31084();
  func_0x000107c3107c(auStack_28);
  FUN_10b99f560(param_1,auStack_28);
  FUN_10b99fdf8();
  return param_1;
}



/* Entry: 10b99f5f8; end: 10b99f647;  */

undefined8 FUN_10b99f5f8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  func_0x000107c31088(auStack_28,param_2);
  func_0x00010b99feb0();
  func_0x00010b99fe90(param_1);
  func_0x00010b99fe20();
  func_0x00010b99fdf8();
  return param_1;
}



/* Entry: 10b99f648; end: 10b99f6a3;  */

void FUN_10b99f648(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x30;
  __Znwm();
  func_0x00010b99f34c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10b99f6a4; end: 10b99f6f7;  */

undefined8 FUN_10b99f6a4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_24 = param_3;
  FUN_10b99f6f8(param_1,param_2,&uStack_30,&uStack_38,&uStack_24);
  func_0x00010b99fe40();
  return param_1;
}



/* Entry: 10b99f6f8; end: 10b99f74b;  */

void FUN_10b99f6f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x30;
  __Znwm();
  func_0x00010b99f34c();
  *param_1 = uVar1;
  func_0x00010b99fe28();
  return;
}



/* Entry: 10b99f74c; end: 10b99f7c3;  */

bool FUN_10b99f74c(long *param_1)

{
  bool bVar1;
  long extraout_x8;
  int extraout_w11;
  long lStack_28;
  
  lStack_28 = 0;
  if (*param_1 != 0) {
    do {
      func_0x00010b99fe30();
      lStack_28 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  while ((lStack_28 != 0 &&
         ((*(long *)(lStack_28 + 0x18) == 0 || (*(int *)(*(long *)(lStack_28 + 0x18) + 0xc) == 0))))
        ) {
    func_0x00010b99fe88(&lStack_28);
  }
  bVar1 = lStack_28 != 0;
  func_0x00010b99fe28();
  return bVar1;
}



/* Entry: 10b99f7c4; end: 10b99f827;  */

void FUN_10b99f7c4(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((*param_2 != 0) && (lVar4 = *(long *)(*param_2 + 0x20), lVar4 != 0)) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uStack_20 = 0;
    uStack_18 = 0;
    *param_1 = lVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00010b99fe28();
    func_0x000104bda93c(&uStack_20);
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10b99f828; end: 10b99f84f;  */

long FUN_10b99f828(long *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    return *param_1 + 0x10;
  }
  if ((bRam00000001138469e8 & 1) == 0) {
    iVar1 = 0x138469e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138469e0 = 0;
      ___cxa_guard_release(0x1138469e8);
    }
  }
  return 0x1138469e0;
}



/* Entry: 10b99f850; end: 10b99f8ab;  */

void FUN_10b99f850(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = param_2;
  func_0x000107c31084();
  FUN_10b99f8ac(auStack_48,param_2);
  func_0x000107c31080(param_1,uVar1,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 10b99f8ac; end: 10b99f8b3;  */

long * FUN_10b99f8ac(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long extraout_x8;
  int extraout_w11;
  undefined8 unaff_x19;
  long *unaff_x20;
  long lStack_48;
  
  if (*param_2 != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    do {
      func_0x00010b99fe30();
      lStack_48 = extraout_x8;
    } while (extraout_w11 != 0);
    while (lStack_48 != 0) {
      uVar1 = param_1[1];
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
      }
      if (uVar1 != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (param_1,&UNK_10f7d0bc8);
      }
      func_0x00010b99fe98();
      if ((*(long *)(lStack_48 + 0x18) != 0) && (*(int *)(*(long *)(lStack_48 + 0x18) + 0xc) != 0))
      {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (param_1,&UNK_10f7d0bd7);
        func_0x00010b99fe98();
      }
      param_2 = &lStack_48;
      func_0x00010b99fe88(lStack_48,param_2);
    }
    func_0x00010b99fe58();
    return param_2;
  }
  puVar2 = &UNK_10f7d0bbc;
  func_0x00010002b82c(param_1,&UNK_10f7d0bbc);
  func_0x000107c613d0(puVar2);
  func_0x000107c60c50(unaff_x20,unaff_x19,puVar2);
  return unaff_x20;
}



/* Entry: 10b99f8b4; end: 10b99fa13;  */

long * FUN_10b99f8b4(undefined8 *param_1,long *param_2,int param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long extraout_x8;
  int extraout_w11;
  undefined8 unaff_x19;
  long *unaff_x20;
  long lStack_48;
  
  if (*param_2 == 0) {
    puVar2 = &UNK_10f7d0bbc;
    func_0x00010002b82c(param_1,&UNK_10f7d0bbc);
    func_0x000107c613d0(puVar2);
    func_0x000107c60c50(unaff_x20,unaff_x19,puVar2);
    return unaff_x20;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    func_0x00010b99fe30();
    lStack_48 = extraout_x8;
  } while (extraout_w11 != 0);
  while (lStack_48 != 0) {
    uVar1 = param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    if (uVar1 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (param_1,&UNK_10f7d0bc8);
    }
    func_0x00010b99fe98();
    if (((param_3 != 0) && (*(long *)(lStack_48 + 0x18) != 0)) &&
       (*(int *)(*(long *)(lStack_48 + 0x18) + 0xc) != 0)) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (param_1,&UNK_10f7d0bd7);
      func_0x00010b99fe98();
    }
    param_2 = &lStack_48;
    func_0x00010b99fe88(lStack_48,param_2);
  }
  func_0x00010b99fe58();
  return param_2;
}



/* Entry: 10b99fa14; end: 10b99fa6f;  */

void FUN_10b99fa14(undefined8 param_1,long *param_2)

{
  int extraout_w11;
  
  if (*param_2 != 0) {
    do {
      func_0x00010b99fe60();
    } while (extraout_w11 != 0);
  }
  func_0x00010b99feb0();
  FUN_10b99f4e4();
  func_0x00010b99fe20();
  func_0x00010b99fdf8();
  return;
}



/* Entry: 10b99fa70; end: 10b99fad7;  */

void FUN_10b99fa70(undefined8 param_1)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c31084();
  func_0x000107c3107c(auStack_38);
  func_0x00010b99feb0();
  FUN_10b99f4e4(param_1);
  func_0x00010b99fe20();
  func_0x00010b99fdf8();
  return;
}



/* Entry: 10b99fad8; end: 10b99fc43;  */

void FUN_10b99fad8(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  char cStack_48;
  undefined1 auStack_38 [8];
  
  lVar5 = *param_3;
  if (*param_2 == 0) {
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *param_1 = lVar5;
  }
  else if (lVar5 == 0) {
    do {
      func_0x00010b99fe30();
    } while (extraout_w11 != 0);
    *param_1 = extraout_x8;
  }
  else {
    FUN_10b99f7c4(auStack_50,param_3);
    puVar3 = auStack_50;
    func_0x0001090ab420(puVar3);
    if (cStack_48 == '\x01') {
      func_0x000107c31084();
      FUN_10b99f8ac(auStack_50,param_3);
      func_0x000107c31080(auStack_38,puVar3,auStack_50);
      uStack_58 = 0;
      func_0x00010b99fea4();
      func_0x000107c278f4(&uStack_58);
      func_0x000107c278f4(auStack_38);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
    }
    else {
      plVar4 = param_3;
      FUN_10b99f828();
      if (*plVar4 != 0) {
        do {
          func_0x00010b99fe60();
        } while (extraout_w11_00 != 0);
      }
      func_0x00010b99f83c();
      if (*param_3 != 0) {
        do {
          func_0x00010b99fe60();
        } while (extraout_w11_01 != 0);
      }
      func_0x00010b99fea4();
      func_0x00010b99fdf8();
      func_0x00010b99fe40();
    }
  }
  return;
}



/* Entry: 10b99fc44; end: 10b99fd5f;  */

void FUN_10b99fc44(undefined8 *param_1,long *param_2)

{
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  uVar1 = 0;
  if (*param_2 != 0) {
    if (*(long *)(*param_2 + 0x20) != 0) {
      FUN_10b99f8b4(auStack_38,param_2,0);
      lStack_40 = 0;
      lStack_48 = 0;
      if (*param_2 != 0) {
        do {
          func_0x00010b99fe30();
          lStack_48 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      while ((lStack_48 != 0 && ((lStack_40 == 0 || (*(int *)(lStack_40 + 0xc) == 0))))) {
        func_0x000107c31068(&lStack_40,lStack_48 + 0x18);
        func_0x00010b99fe88(lStack_48,&lStack_48);
      }
      func_0x000107c31084();
      func_0x000107c31080(auStack_50);
      lStack_58 = lStack_40;
      lStack_40 = 0;
      func_0x00010b99fe90(param_1,auStack_50,&lStack_58);
      func_0x00010b99fdf8();
      func_0x00010b99fe40();
      func_0x00010b99fe58();
      func_0x000107c278f4(&lStack_40);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
      return;
    }
    do {
      func_0x00010b99fe30();
      uVar1 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10b99fd60; end: 10b99fdb3;  */

bool FUN_10b99fd60(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  if ((lVar2 == 0) || (lVar3 == 0)) {
    return (lVar2 == 0) != (lVar3 != 0);
  }
  while( true ) {
    if ((*(long *)(lVar2 + 0x10) != *(long *)(lVar3 + 0x10)) ||
       (*(long *)(lVar2 + 0x18) != *(long *)(lVar3 + 0x18))) {
      return false;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
    lVar3 = *(long *)(lVar3 + 0x20);
    if (lVar2 == 0) break;
    if (lVar3 == 0) {
      bVar1 = false;
LAB_10b99f444:
      return (bool)(lVar2 == 0 ^ bVar1);
    }
  }
  bVar1 = lVar3 != 0;
  goto LAB_10b99f444;
}



/* Entry: 10b99fdb4; end: 10b99fdf7;  */

undefined8 FUN_10b99fdb4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  FUN_10b99f8ac(auStack_38,param_2);
  func_0x000107c28084(param_1,auStack_38);
  func_0x00010b99fe70();
  return param_1;
}



/* Entry: 10b99fdf8; end: 10b99febb;  */

void FUN_10b99fdf8(void)

{
  func_0x00010007e5d0(&stack0x00000008);
  func_0x0001003a8cb8();
  return;
}



/* Entry: 10b99febc; end: 10b99ff07;  */

void FUN_10b99febc(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  lStack_28 = *param_2;
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10b99ff08(param_1,&lStack_28);
  func_0x00010b9a0300();
  return;
}



/* Entry: 10b99ff08; end: 10b99ffab;  */

void FUN_10b99ff08(long *param_1,undefined8 param_2)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((char)param_1[1] == '\x01') {
    *(undefined1 *)(param_1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010b99ff4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
    return;
  }
  FUN_10b99ffac(auStack_30,param_1);
  FUN_10b99fad8(auStack_28,auStack_30,param_2);
  (**(code **)(*param_1 + 0x20))(param_1,auStack_28);
  func_0x00010b9a0300();
  func_0x000104bda93c(auStack_30);
  return;
}



/* Entry: 10b99ffac; end: 10b99ffd3;  */

long * FUN_10b99ffac(long *param_1,long *param_2)

{
  undefined1 auStack_28 [8];
  
  if ((char)param_2[1] == '\x01') {
    func_0x000107c31088(auStack_28,&UNK_10f7d0be5);
    func_0x00010b99feb0();
    func_0x00010b99fe90(param_1);
    func_0x00010b99fe20();
    func_0x00010b99fdf8();
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b99ffd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))();
  return param_2;
}



/* Entry: 10b99ffd4; end: 10b9a004f;  */

void FUN_10b99ffd4(void)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c31084();
  func_0x000107c3107c(auStack_40);
  FUN_10b99f560(auStack_38,auStack_40);
  func_0x00010b9a031c();
  func_0x00010b9a0300();
  func_0x000107c278f4(auStack_40);
  return;
}



/* Entry: 10b9a0050; end: 10b9a0083;  */

void FUN_10b9a0050(void)

{
  undefined1 auStack_28 [8];
  
  FUN_10b99f5f8(auStack_28);
  func_0x00010b9a031c();
  func_0x00010b9a0300();
  return;
}



/* Entry: 10b9a0084; end: 10b9a00db;  */

void FUN_10b9a0084(long *param_1)

{
  FUN_10b99ffac();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



/* Entry: 10b9a00dc; end: 10b9a01e3;  */

void FUN_10b9a00dc(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_48;
  ulong uStack_40;
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10b99ffac(&puStack_48);
    FUN_10b99f8ac(auStack_38,&puStack_48);
    func_0x00010b9a0300();
    ppuVar1 = &PTR___tlv_bootstrap_11340e128;
    (*(code *)PTR___tlv_bootstrap_11340e128)();
    puVar3 = *ppuVar1;
    if ((puVar3 != (undefined *)0x0) &&
       (((*(long *)(puVar3 + 0x20) != 0 && (*(int *)(*(long *)(puVar3 + 0x20) + 0xc) != 0)) ||
        ((*(long *)(puVar3 + 0x28) != 0 && (*(int *)(*(long *)(puVar3 + 0x28) + 0xc) != 0)))))) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (auStack_38,&UNK_10f7d0bee);
      lVar2 = *(long *)(puVar3 + 0x20);
      if (lVar2 == 0) {
        puStack_48 = &UNK_10f7d0ef0;
        uStack_40 = 0;
      }
      else {
        puStack_48 = (undefined *)(lVar2 + 0x18);
        uStack_40 = (ulong)*(uint *)(lVar2 + 0xc);
      }
      func_0x00010b9a0328();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (auStack_38,&UNK_10f7d0c0b);
      lVar2 = *(long *)(puVar3 + 0x28);
      if (lVar2 == 0) {
        puStack_48 = &UNK_10f7d0ef0;
        uStack_40 = 0;
      }
      else {
        puStack_48 = (undefined *)(lVar2 + 0x18);
        uStack_40 = (ulong)*(uint *)(lVar2 + 0xc);
      }
      func_0x00010b9a0328();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  }
  return;
}



/* Entry: 10b9a01e4; end: 10b9a0213;  */

long FUN_10b9a01e4(long param_1)

{
  FUN_10b9a00dc();
  func_0x0001090ab420(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b9a0214; end: 10b9a0217;  */

long FUN_10b9a0214(long param_1)

{
  FUN_10b9a00dc();
  func_0x0001090ab420(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b9a0218; end: 10b9a0267;  */

void FUN_10b9a0218(void)

{
  FUN_10b9a01e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9a0268; end: 10b9a029b;  */

void FUN_10b9a0268(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000104bda93c(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10b9a029c; end: 10b9a02f3;  */

void FUN_10b9a029c(long param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  uStack_20 = *param_2;
  *param_2 = 0;
  uStack_18 = 1;
  if (*(char *)(param_1 + 0x18) == '\0') {
    *(undefined8 *)(param_1 + 0x10) = uStack_20;
    uStack_20 = 0;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    func_0x0001090e1ddc(param_1 + 0x10,&uStack_20);
  }
  func_0x0001090ab420(&uStack_20);
  return;
}



/* Entry: 10b9a02f4; end: 10b9a036f;  */

undefined8 FUN_10b9a02f4(undefined8 param_1)

{
  func_0x0001003adc0c(&stack0x00000008);
  func_0x000104bda960();
  return param_1;
}



/* Entry: 10b9a0370; end: 10b9a05e3;  */

undefined1 FUN_10b9a0370(double *param_1,ulong param_2,long *param_3)

{
  double **ppdVar1;
  undefined8 uVar2;
  double *pdVar3;
  code *pcVar4;
  double *pdStack_98;
  double *pdStack_90;
  int iStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  
  pdStack_90 = (double *)((long)param_1 + (param_2 & 0xfffffffffffffff8));
  iStack_88 = 1;
  ppdVar1 = &pdStack_98;
  pdStack_98 = param_1;
  func_0x00010b9a0334(ppdVar1,3);
  if ((int)ppdVar1 != 0) {
    if (dStack_80 <= 0.0) {
      return 0;
    }
    if (dStack_78 <= 0.0) {
      return 0;
    }
    switch((int)dStack_70) {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    default:
      goto LAB_10b9a0414;
    }
code_r0x00010b9a0474:
    if (pdStack_98 == pdStack_90) {
      return 1;
    }
    pdVar3 = pdStack_98 + 1;
    iStack_88 = (int)*pdStack_98;
    pdStack_98 = pdVar3;
    switch(iStack_88) {
    case 1:
    case 2:
      uVar2 = 2;
      break;
    case 3:
      uVar2 = 4;
      break;
    case 4:
    case 5:
      uVar2 = 6;
      break;
    case 6:
      ppdVar1 = &pdStack_98;
      func_0x00010b9a0334(ppdVar1,5);
      if ((int)ppdVar1 == 0) {
        return 0;
      }
      goto code_r0x00010b9a04d8;
    case 7:
      goto code_r0x00010b9a0508;
    default:
      goto LAB_10b9a0418;
    }
    ppdVar1 = &pdStack_98;
    func_0x00010b9a0334(ppdVar1,uVar2);
    if (((ulong)ppdVar1 & 1) == 0) {
      return 0;
    }
code_r0x00010b9a04d8:
    switch(iStack_88) {
    case 1:
      FUN_10b9a05e4();
      pcVar4 = *(code **)(*param_3 + 0x10);
      goto code_r0x00010b9a05b0;
    case 2:
      FUN_10b9a05e4();
      pcVar4 = *(code **)(*param_3 + 0x18);
code_r0x00010b9a05b0:
      (*pcVar4)(param_3);
      goto code_r0x00010b9a0474;
    case 3:
      FUN_10b9a05e4();
      (**(code **)(*param_3 + 0x20))(param_3);
      goto code_r0x00010b9a0474;
    case 4:
      FUN_10b9a05e4();
      pcVar4 = *(code **)(*param_3 + 0x28);
      break;
    case 5:
      FUN_10b9a05e4();
      pcVar4 = *(code **)(*param_3 + 0x30);
      break;
    case 6:
      FUN_10b9a05e4();
      pcVar4 = *(code **)(*param_3 + 0x38);
      break;
    case 7:
code_r0x00010b9a0508:
      (**(code **)(*param_3 + 0x40))(param_3);
    default:
      goto code_r0x00010b9a0474;
    }
    (*pcVar4)(param_3);
    goto code_r0x00010b9a0474;
  }
LAB_10b9a0414:
LAB_10b9a0418:
  return 0;
}



/* Entry: 10b9a05e4; end: 10b9a05f7;  */

undefined1  [16] FUN_10b9a05e4(void)

{
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  undefined1 auVar1 [16];
  double in_stack_00000020;
  double in_stack_00000028;
  
  auVar1._0_8_ = unaff_d9 + unaff_d10 * in_stack_00000020;
  auVar1._8_8_ = unaff_d8 + unaff_d11 * in_stack_00000028;
  return auVar1;
}



/* Entry: 10b9a05f8; end: 10b9a0623;  */

undefined8 FUN_10b9a05f8(undefined8 param_1)

{
  func_0x000107c310a4();
  if ((int)param_1 != 0) {
    func_0x00010b9a0634();
  }
  return param_1;
}



/* Entry: 10b9a0624; end: 10b9a063b;  */

undefined8 FUN_10b9a0624(undefined8 param_1)

{
  func_0x000107c310a4(param_1,0x7b);
  if ((int)param_1 != 0) {
    func_0x00010b9a0634();
  }
  return param_1;
}



/* Entry: 10b9a063c; end: 10b9a06cb;  */

undefined8 * FUN_10b9a063c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_58;
  undefined1 auStack_50 [40];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *param_2;
  (**(code **)(param_2[1] + 0x10))(auStack_50);
  puVar1 = param_1 + 1;
  puVar2 = &uStack_58;
  FUN_10b9a06cc();
  FUN_10b9a08e0();
  *param_1 = &PTR_FUN_110d7e790;
  func_0x00010b9a08fc(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10b9a08e0();
  __Unwind_Resume();
  *puVar1 = 0x32aaaba7;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[9] = *puVar2;
  (**(code **)(puVar2[1] + 0x10))(puVar1 + 10);
  *(undefined1 *)(puVar1 + 0xf) = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  return puVar1;
}



/* Entry: 10b9a06cc; end: 10b9a072b;  */

undefined8 * FUN_10b9a06cc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 10);
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return param_1;
}



/* Entry: 10b9a072c; end: 10b9a085b;  */

long * FUN_10b9a072c(long *param_1,long param_2)

{
  char cVar1;
  code *pcVar2;
  undefined1 in_ZR;
  long *plVar3;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(param_2 + 8);
  if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
    (**(code **)(param_2 + 0x50))(&pcStack_68);
    in_ZR = *(char *)(param_2 + 0x90) == '\x01';
    if ((bool)in_ZR) {
      FUN_10b9a9020(param_2 + 0x80,&pcStack_68);
    }
    else {
      *(code **)(param_2 + 0x80) = pcStack_68;
      *(undefined2 *)(param_2 + 0x88) = ppuStack_60._0_2_;
      pcStack_68 = (code *)0x0;
      ppuStack_60 = (undefined **)((ulong)ppuStack_60 & 0xffffffffffff0000);
      *(undefined1 *)(param_2 + 0x90) = 1;
    }
    FUN_10b9a8d98(&pcStack_68);
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    pcStack_68 = FUN_10b9a08d4;
    ppuStack_60 = &PTR_DAT_110a21c28;
    *(code **)(param_2 + 0x50) = FUN_10b9a08d4;
    func_0x0001080f3438(param_2 + 0x58,&ppuStack_60);
    (*(code *)*ppuStack_60)(&ppuStack_60);
    if ((*(byte *)(param_2 + 0x90) & 1) == 0) goto LAB_10b9a083c;
  }
  __ZNSt3__15mutex6unlockEv(param_2 + 8);
  func_0x00010b9a08fc(uStack_38);
  if ((bool)in_ZR) {
    plVar3 = *(long **)(param_2 + 0x80);
    *param_1 = (long)plVar3;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 0x88);
    cVar1 = *(char *)(param_2 + 0x89);
    *(char *)((long)param_1 + 9) = cVar1;
    if (cVar1 == '\x01' && plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    return param_1;
  }
  ___stack_chk_fail();
LAB_10b9a083c:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10b9a0844);
  (*pcVar2)();
}



/* Entry: 10b9a085c; end: 10b9a08d3;  */

void FUN_10b9a085c(void)

{
  func_0x00010b9a08f0();
  return;
}



/* Entry: 10b9a08d4; end: 10b9a08df;  */

void FUN_10b9a08d4(void)

{
  long unaff_x20;
  undefined8 *in_stack_00000000;
  
  func_0x000105277f8c();
                    /* WARNING: Could not recover jumptable at 0x00010b9a08ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_00000000)(unaff_x20 + 8);
  return;
}



/* Entry: 10b9a08e0; end: 10b9a090f;  */

void FUN_10b9a08e0(void)

{
  long unaff_x20;
  undefined8 *in_stack_00000010;
  
                    /* WARNING: Could not recover jumptable at 0x00010b9a08ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_00000010)(unaff_x20 + 8);
  return;
}



/* Entry: 10b9a0910; end: 10b9a0947;  */

undefined8 * FUN_10b9a0910(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e800;
  FUN_10b9a0948();
  FUN_10b9a0a78(param_1 + 3);
  return param_1;
}



/* Entry: 10b9a0948; end: 10b9a098b;  */

void FUN_10b9a0948(long param_1)

{
  long lVar1;
  long lStack_18;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_18 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lStack_18 != 0) {
    *(long *)(lStack_18 + 0x10) = lVar1;
  }
  if (lVar1 != 0) {
    FUN_10b9a09a4(lVar1 + 0x18,&lStack_18);
  }
  FUN_10b9a0a78(&lStack_18);
  return;
}



/* Entry: 10b9a098c; end: 10b9a098f;  */

undefined8 * FUN_10b9a098c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e800;
  FUN_10b9a0948();
  FUN_10b9a0a78(param_1 + 3);
  return param_1;
}



/* Entry: 10b9a0990; end: 10b9a09a3;  */

void FUN_10b9a0990(void)

{
  FUN_10b9a0910();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9a09a4; end: 10b9a09df;  */

undefined8 * FUN_10b9a09a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    FUN_10b9a0aa0(uVar1);
  }
  return param_1;
}



/* Entry: 10b9a09e0; end: 10b9a0a2f;  */

long * FUN_10b9a09e0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  
  if (param_2 != 0) {
    FUN_10b9a0a30(param_2 + 0x18,param_1);
  }
  if (param_3 != 0) {
    *(long *)(param_3 + 0x10) = param_1;
  }
  *(long *)(param_1 + 0x10) = param_2;
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != param_3) {
    if (param_3 != 0) {
      plVar2 = (long *)(param_3 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *plVar1 = param_3;
    FUN_10b9a0aa0();
  }
  return plVar1;
}



/* Entry: 10b9a0a30; end: 10b9a0a77;  */

long * FUN_10b9a0a30(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  if (*param_1 != param_2) {
    if (param_2 != 0) {
      plVar1 = (long *)(param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = param_2;
    FUN_10b9a0aa0();
  }
  return param_1;
}



/* Entry: 10b9a0a78; end: 10b9a0a9f;  */

undefined8 * FUN_10b9a0a78(undefined8 *param_1)

{
  FUN_10b9a0aa0(*param_1);
  return param_1;
}



/* Entry: 10b9a0aa0; end: 10b9a0ad3;  */

void FUN_10b9a0aa0(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010b9a0ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b9a0ad4; end: 10b9a0b2b;  */

undefined8 * FUN_10b9a0ad4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110d7e848;
  param_1[1] = param_2;
  param_1[2] = param_1 + 5;
  param_1[4] = 4;
  param_1[3] = 0;
  func_0x000107c30f98(param_1 + 0xd);
  return param_1;
}



/* Entry: 10b9a0b2c; end: 10b9a0b67;  */

undefined8 * FUN_10b9a0b2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e848;
  func_0x000107c27900(param_1 + 0xe);
  func_0x00010b8df154(param_1 + 2);
  return param_1;
}



/* Entry: 10b9a0b68; end: 10b9a0b6b;  */

undefined8 * FUN_10b9a0b68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e848;
  func_0x000107c27900(param_1 + 0xe);
  func_0x00010b8df154(param_1 + 2);
  return param_1;
}



/* Entry: 10b9a0b6c; end: 10b9a0b7f;  */

void FUN_10b9a0b6c(void)

{
  FUN_10b9a0b2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9a0b80; end: 10b9a0ba7;  */

undefined4 FUN_10b9a0b80(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  FUN_10b8defb4(param_1 + 0x10);
  return uVar1;
}



/* Entry: 10b9a0ba8; end: 10b9a0bdf;  */

void FUN_10b9a0ba8(void)

{
  func_0x00010b9a1e40();
  FUN_10b9a8e18();
  func_0x00010b9a1e4c();
  func_0x00010b9a1dd8();
  return;
}



/* Entry: 10b9a0be0; end: 10b9a0c17;  */

void FUN_10b9a0be0(void)

{
  func_0x00010b9a1e70();
  func_0x00010b9a1dd8();
  return;
}



/* Entry: 10b9a0c18; end: 10b9a0c4f;  */

void FUN_10b9a0c18(void)

{
  func_0x00010b9a1e70();
  func_0x00010b9a1dd8();
  return;
}



/* Entry: 10b9a0c50; end: 10b9a0c87;  */

void FUN_10b9a0c50(void)

{
  func_0x00010b9a1e70();
  func_0x00010b9a1dd8();
  return;
}



/* Entry: 10b9a0c88; end: 10b9a0cbf;  */

void FUN_10b9a0c88(void)

{
  func_0x00010b9a1e70();
  func_0x00010b9a1dd8();
  return;
}



/* Entry: 10b9a0cc0; end: 10b9a0cf7;  */

void FUN_10b9a0cc0(void)

{
  func_0x00010b9a1e40();
  FUN_10b9a8ef8();
  func_0x00010b9a1e4c();
  func_0x00010b9a1dd8();
  return;
}



/* Entry: 10b9a0cf8; end: 10b9a0d2f;  */

void FUN_10b9a0cf8(void)

{
  func_0x00010b9a1e40();
  func_0x00010b9a8f78();
  func_0x00010b9a1e4c();
  func_0x00010b9a1dd8();
  return;
}



/* Entry: 10b9a0d30; end: 10b9a0d67;  */

void FUN_10b9a0d30(void)

{
  func_0x00010b9a1e70();
  func_0x00010b9a1dd8();
  return;
}



/* Entry: 10b9a0d68; end: 10b9a0d9b;  */

void FUN_10b9a0d68(void)

{
  func_0x00010b9a1e70();
  func_0x00010b9a1dd8();
  return;
}



/* Entry: 10b9a0d9c; end: 10b9a0dcb;  */

void FUN_10b9a0d9c(undefined8 param_1,int param_2)

{
  while (0 < param_2) {
    FUN_10b9a0dcc(param_1);
    param_2 = param_2 + -1;
  }
  return;
}



/* Entry: 10b9a0dcc; end: 10b9a0e33;  */

void FUN_10b9a0dcc(long param_1)

{
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b9a8d98(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x18) * 0x10 + -0x10);
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
    return;
  }
  FUN_10b99f5f8(auStack_28,&UNK_10f7d0c13);
  func_0x00010b9a1f00();
  func_0x000104bda93c(auStack_28);
  return;
}



/* Entry: 10b9a0e34; end: 10b9a0e9f;  */

undefined1 * FUN_10b9a0e34(undefined8 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  func_0x000104bd4df4(&lStack_28);
  FUN_10b90d498(lStack_28 + 0x10,(long)param_2);
  puVar1 = auStack_38;
  FUN_10b9a8f54(puVar1,&lStack_28);
  func_0x00010b9a1e28();
  func_0x00010b9a1e54();
  func_0x00010b9a1e84();
  return puVar1;
}



/* Entry: 10b9a0ea0; end: 10b9a0f73;  */

undefined1 * FUN_10b9a0ea0(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 *puVar4;
  long lStack_48;
  long lStack_40;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  func_0x00010b9a115c(auStack_28);
  func_0x00010b9a1dfc();
  if ((bool)in_ZR) {
    FUN_10b9a18a8(&lStack_48,auStack_28);
    if ((lStack_48 != 0) && (*(long *)(lStack_48 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lStack_48 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_40 = lStack_48;
    puVar4 = auStack_38;
    func_0x00010b9a8f78(puVar4,&lStack_40);
    func_0x00010b9a1e4c();
    func_0x00010b9a1ed4();
    func_0x000104bddedc(&lStack_40);
    FUN_10b9a1d28(&lStack_48);
  }
  else {
    puVar4 = (undefined1 *)0x0;
  }
  func_0x000104bd4e40(auStack_28);
  return puVar4;
}



/* Entry: 10b9a0f74; end: 10b9a104f;  */

char FUN_10b9a0f74(void)

{
  undefined1 in_ZR;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined2 uStack_38;
  char cStack_30;
  undefined8 uStack_28;
  
  func_0x00010b9a1104();
  FUN_10b9a18ec(&uStack_28);
  func_0x00010b9a1dfc();
  if ((bool)in_ZR) {
    FUN_10b9ac49c(auStack_48,uStack_28);
    if (cStack_30 == '\x01') {
      FUN_10b9a8e18(auStack_58,auStack_48);
      func_0x00010b9a1e4c();
      func_0x00010b9a1ed4();
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x00010b9a1e28();
      func_0x00010b9a1e54();
    }
    FUN_10b9a1970(auStack_48);
  }
  else {
    cStack_30 = '\0';
  }
  FUN_10b9a1d28(&uStack_28);
  return cStack_30;
}



/* Entry: 10b9a1050; end: 10b9a10db;  */

void FUN_10b9a1050(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [16];
  long lStack_28;
  
  func_0x00010b9a1edc();
  if (*(char *)(*(long *)(param_1 + 8) + 8) == '\x01') {
    FUN_10b9a10dc(auStack_38,param_1,0xffffffff);
    if ((*(byte *)(*(long *)(param_1 + 8) + 8) & 1) != 0) {
      FUN_10b9a0dcc(param_1);
      func_0x0001052739d0(lStack_28 + 0x10,param_2);
      FUN_10b9a9084();
    }
    func_0x00010b9a1e54();
  }
  func_0x00010b9a1e84();
  return;
}



/* Entry: 10b9a10dc; end: 10b9a11fb;  */

long * FUN_10b9a10dc(long *param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  
  FUN_10b9a135c();
  plVar2 = (long *)*param_2;
  *param_1 = (long)plVar2;
  *(char *)(param_1 + 1) = (char)param_2[1];
  cVar1 = *(char *)((long)param_2 + 9);
  *(char *)((long)param_1 + 9) = cVar1;
  if (cVar1 == '\x01' && plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return param_1;
}



/* Entry: 10b9a11fc; end: 10b9a1227;  */

ulong FUN_10b9a11fc(long param_1,uint param_2)

{
  ulong uVar1;
  
  if (-1 < (int)param_2) {
    uVar1 = (ulong)param_2;
    if (*(ulong *)(param_1 + 0x18) <= (ulong)param_2) {
      uVar1 = 0xffffffffffffffff;
    }
    return uVar1;
  }
  uVar1 = *(ulong *)(param_1 + 0x18) - (ulong)-param_2;
  if (*(ulong *)(param_1 + 0x18) < (ulong)-param_2) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 10b9a1228; end: 10b9a124f;  */

long * FUN_10b9a1228(long *param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  
  func_0x00010b9a1104();
  plVar2 = (long *)*param_2;
  *param_1 = (long)plVar2;
  *(char *)(param_1 + 1) = (char)param_2[1];
  cVar1 = *(char *)((long)param_2 + 9);
  *(char *)((long)param_1 + 9) = cVar1;
  if (cVar1 == '\x01' && plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return param_1;
}



/* Entry: 10b9a1250; end: 10b9a135b;  */

long * FUN_10b9a1250(undefined8 param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  long lStack_78;
  long lStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  long *plStack_58;
  undefined8 uStack_38;
  
  func_0x00010b9a1eb8();
  uStack_38 = extraout_x8;
  func_0x00010b9a1104();
  func_0x00010b90e6f8(&lStack_70);
  if (lStack_70 != 0) {
    lVar6 = *param_3;
    if (lVar6 != 0) {
      plVar4 = (long *)(lVar6 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pcStack_68 = FUN_10b9a1990;
    ppuStack_60 = &PTR_FUN_110d7e858;
    plVar4 = (long *)0x8;
    lStack_78 = lVar6;
    __Znwm();
    if (lVar6 != 0) {
      plVar5 = (long *)(lVar6 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *plVar4 = lVar6;
    plStack_58 = plVar4;
    FUN_10b9a32a0(lStack_70,&pcStack_68);
    func_0x00010b9a1e8c();
    func_0x000104bda388(&lStack_78);
  }
  plVar4 = &lStack_70;
  func_0x0001052b2c28();
  func_0x00010b9a1e14(uStack_38);
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x00010b9a1e8c();
  func_0x000104bda388(&lStack_78);
  plVar4 = &lStack_70;
  func_0x0001052b2c28();
  func_0x00010b9a1e0c();
  plVar5 = plVar4;
  FUN_10b9a1398();
  if ((*(byte *)(plVar4[1] + 8) & 1) != 0) {
    return (long *)(plVar4[2] + (long)plVar5 * 0x10);
  }
  if ((bRam0000000113846a30 & 1) == 0) {
    iVar3 = 0x13846a30;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      uRam0000000113846a28 = 1;
      uRam0000000113846a20 = 0;
      ___cxa_guard_release(0x113846a30);
    }
  }
  return (long *)0x113846a20;
}



/* Entry: 10b9a135c; end: 10b9a1397;  */

long FUN_10b9a135c(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_10b9a1398();
  if ((*(byte *)(*(long *)(param_1 + 8) + 8) & 1) != 0) {
    return *(long *)(param_1 + 0x10) + lVar2 * 0x10;
  }
  if ((bRam0000000113846a30 & 1) == 0) {
    iVar1 = 0x13846a30;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113846a28 = 1;
      uRam0000000113846a20 = 0;
      ___cxa_guard_release(0x113846a30);
    }
  }
  return 0x113846a20;
}



/* Entry: 10b9a1398; end: 10b9a1483;  */

long FUN_10b9a1398(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  FUN_10b9a11fc();
  if (lVar1 == -1) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    lVar2 = lVar1;
    func_0x000107c31084();
    uStack_50 = (ulong)*(uint *)(param_1 + 0x18);
    uStack_60 = param_2 & 0xffffffff;
    uStack_58 = 0;
    uStack_48 = 0;
    func_0x000107c2793c(&UNK_10f7d0c4b);
    func_0x000107c3173c(auStack_88);
    func_0x000107c31080(auStack_70,lVar2,auStack_88);
    FUN_10b99f560(auStack_68,auStack_70);
    FUN_10b99ff08(uVar3,auStack_68);
    func_0x000104bda93c(auStack_68);
    func_0x000107c278f4(auStack_70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  }
  return lVar1;
}



/* Entry: 10b9a1484; end: 10b9a14b7;  */

void FUN_10b9a1484(long *param_1)

{
  FUN_10b9a8d98(*param_1 + param_1[1] * 0x10 + -0x10);
  param_1[1] = param_1[1] + -1;
  return;
}



/* Entry: 10b9a14b8; end: 10b9a1513;  */

undefined1 * FUN_10b9a14b8(undefined8 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  func_0x00010b9abe10(auStack_28,(long)param_2);
  puVar1 = auStack_38;
  func_0x00010b9a8f84(puVar1,auStack_28);
  func_0x00010b9a1e28();
  func_0x00010b9a1e54();
  func_0x000104bddf38(auStack_28);
  return puVar1;
}



/* Entry: 10b9a1514; end: 10b9a155b;  */

undefined4 FUN_10b9a1514(void)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  long lStack_28;
  
  func_0x00010b9a11bc(&lStack_28);
  func_0x00010b9a1dfc();
  if ((bool)in_ZR) {
    uVar1 = *(undefined4 *)(lStack_28 + 0x10);
  }
  else {
    uVar1 = 0;
  }
  func_0x000104bddf38(&lStack_28);
  return uVar1;
}



/* Entry: 10b9a155c; end: 10b9a168b;  */

long FUN_10b9a155c(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x00010b9a11bc(&lStack_58);
  lVar2 = *(long *)(param_1 + 8);
  if (*(char *)(lVar2 + 8) == '\x01') {
    if (-1 < (int)param_3) {
      if ((ulong)(long)(int)param_3 < *(ulong *)(lStack_58 + 0x10)) {
        FUN_10b9a8f04(auStack_90,lStack_58 + (long)(int)param_3 * 0x10 + 0x18);
        FUN_10b9a0b80(param_1,auStack_90);
        func_0x00010b9a1dd8();
        goto LAB_10b9a1634;
      }
    }
    func_0x000107c31084();
    uStack_40 = *(undefined8 *)(lStack_58 + 0x10);
    uStack_50 = (ulong)param_3;
    uStack_48 = 0;
    uStack_38 = 0;
    func_0x00010b9a1ef4();
    func_0x00010b9a1ee8(auStack_80);
    func_0x000107c31080(auStack_68,lVar1,auStack_80);
    FUN_10b99f560(auStack_60,auStack_68);
    func_0x00010b9a1f00();
    func_0x000104bda93c(auStack_60);
    func_0x000107c278f4(auStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  }
  lVar2 = 0;
LAB_10b9a1634:
  func_0x00010b9a1e9c();
  return lVar2;
}



/* Entry: 10b9a168c; end: 10b9a17d7;  */

void FUN_10b9a168c(long param_1,undefined8 param_2,uint param_3)

{
  undefined1 in_ZR;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b9a11bc(&lStack_58);
  func_0x00010b9a1dfc();
  if (!(bool)in_ZR) goto LAB_10b9a1778;
  func_0x00010b9a10dc(auStack_68,param_1,0xffffffff);
  if ((*(byte *)(*(long *)(param_1 + 8) + 8) & 1) != 0) {
    FUN_10b9a0dcc(param_1);
    if (-1 < (int)param_3) {
      if ((ulong)(long)(int)param_3 < *(ulong *)(lStack_58 + 0x10)) {
        FUN_10b9a9020(lStack_58 + (long)(int)param_3 * 0x10 + 0x18,auStack_68);
        goto LAB_10b9a1770;
      }
    }
    func_0x000107c31084();
    uStack_40 = *(undefined8 *)(lStack_58 + 0x10);
    uStack_50 = (ulong)param_3;
    uStack_48 = 0;
    uStack_38 = 0;
    func_0x00010b9a1ef4();
    func_0x00010b9a1ee8(auStack_90);
    func_0x000107c31080(auStack_78,param_1,auStack_90);
    FUN_10b99f560(auStack_70,auStack_78);
    func_0x00010b9a1f00();
    func_0x000104bda93c(auStack_70);
    func_0x000107c278f4(auStack_78);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  }
LAB_10b9a1770:
  FUN_10b9a8d98(auStack_68);
LAB_10b9a1778:
  func_0x00010b9a1e9c();
  return;
}



/* Entry: 10b9a17d8; end: 10b9a18a7;  */

undefined8 FUN_10b9a17d8(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x00010b9a1edc();
  func_0x00010b9a1dfc();
  if ((bool)in_ZR) {
    lVar1 = lStack_38 + 0x10;
    func_0x0001080ce754();
    if (*(long *)(lStack_38 + 0x10) + *(long *)(lStack_38 + 0x28) == lVar1) {
      if (param_4 != 2) goto LAB_10b9a1870;
      FUN_10b9a0d30(param_1);
    }
    else {
      if ((param_4 == 1) && (*(byte *)(param_2 + 0x10) < 2)) goto LAB_10b9a1870;
      FUN_10b9a8f04(auStack_48,param_2 + 8);
      func_0x00010b9a1e28();
      func_0x00010b9a1e54();
    }
    uVar2 = 1;
  }
  else {
LAB_10b9a1870:
    uVar2 = 0;
  }
  func_0x00010b9a1e84();
  return uVar2;
}



/* Entry: 10b9a18a8; end: 10b9a18eb;  */

void FUN_10b9a18a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long lStack_68;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x00010b9a1eb8();
  uStack_28 = extraout_x8;
  FUN_10b9a1aac(auStack_38);
  *param_1 = auStack_38[0];
  func_0x00010b9a1e14(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b9aac80(&lStack_68);
  if (lStack_68 == 0) {
    *extraout_x8_00 = 0;
  }
  else {
    FUN_10b9a1d5c(extraout_x8_00,&lStack_68);
    if (*extraout_x8_00 == 0) {
      FUN_10b9aa6d4(&lStack_68,param_3);
    }
  }
  func_0x000104bddedc(&lStack_68);
  return;
}



/* Entry: 10b9a18ec; end: 10b9a196f;  */

void FUN_10b9a18ec(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_28;
  
  FUN_10b9aac80(&lStack_28);
  if (lStack_28 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_10b9a1d5c(param_1,&lStack_28);
    if (*param_1 == 0) {
      FUN_10b9aa6d4(&lStack_28,param_3);
    }
  }
  func_0x000104bddedc(&lStack_28);
  return;
}



/* Entry: 10b9a1970; end: 10b9a198f;  */

void FUN_10b9a1970(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000104bda318();
  }
  return;
}



/* Entry: 10b9a1990; end: 10b9a1a1f;  */

void FUN_10b9a1990(long *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar2 = auStack_50;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = **(undefined8 **)(param_2 + 0x10);
  uVar1 = *param_1 == 1;
  if ((bool)uVar1) {
    FUN_10b9a8f04();
  }
  else {
    FUN_10b9a8e90(auStack_50,param_1 + 1);
  }
  func_0x000105275910(auStack_40,uVar3,auStack_50,1);
  func_0x000104bda914(auStack_40);
  FUN_10b9a8d98();
  func_0x00010b9a1e14(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar2 + 8) != 0) {
    func_0x000104bda388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9a1a20; end: 10b9a1a3f;  */

void FUN_10b9a1a20(long param_1)

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



/* Entry: 10b9a1a40; end: 10b9a1a57;  */

void FUN_10b9a1a40(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b9a1a58; end: 10b9a1aab;  */

void FUN_10b9a1a58(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d7e858;
  plVar3 = (long *)0x8;
  __Znwm();
  lVar4 = *plVar5;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *plVar3 = lVar4;
  param_1[1] = plVar3;
  return;
}


