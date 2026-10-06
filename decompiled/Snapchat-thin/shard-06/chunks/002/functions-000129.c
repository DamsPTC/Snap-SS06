/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10454d554; end: 10454d6bb;  */

void FUN_10454d554(void)

{
  func_0x00010006bf6c();
  return;
}



/* Entry: 10454d6bc; end: 10454d6cb;  */

bool FUN_10454d6bc(char param_1,char param_2)

{
  return param_1 == param_2;
}



/* Entry: 10454d6cc; end: 10454d733;  */

void FUN_10454d6cc(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 10454d734; end: 10454d747;  */

bool FUN_10454d734(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10454d748; end: 10454d7f3;  */

void FUN_10454d748(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10454d7f4; end: 10454d7f7;  */

void FUN_10454d7f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084e00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16990;
  _swift_getWitnessTable(&UNK_10dd16990,&UNK_110786678);
  puRam0000000113084e00 = puVar1;
  return;
}



/* Entry: 10454d7f8; end: 10454d837;  */

void FUN_10454d7f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084e00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16990;
  _swift_getWitnessTable(&UNK_10dd16990,&UNK_110786678);
  puRam0000000113084e00 = puVar1;
  return;
}



/* Entry: 10454d838; end: 10454d9ab;  */

void FUN_10454d838(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10454d9ac; end: 10454daa3;  */

undefined1  [16] FUN_10454d9ac(void)

{
  return ZEXT816(100);
}



/* Entry: 10454daa4; end: 10454dab3;  */

bool FUN_10454daa4(char param_1,char param_2)

{
  return param_1 == param_2;
}



/* Entry: 10454dab4; end: 10454db1b;  */

void FUN_10454dab4(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 10454db1c; end: 10454db2f;  */

bool FUN_10454db1c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10454db30; end: 10454dbdb;  */

void FUN_10454db30(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10454dbdc; end: 10454dbeb;  */

void FUN_10454dbdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10454dbec; end: 10454ddeb;  */

void FUN_10454dbec(long param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x21;
  undefined1 *puStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  uVar5 = 0x112deef08;
  func_0x0001000285a8(0x112deef08,&UNK_10d9bc0a0);
  func_0x000100075890(&puStack_48,param_3,0,uVar2,uVar5,uVar3,&PTR_DAT_110789f28);
  if (unaff_x21 != 0) {
    return;
  }
  lVar14 = *(long *)(puStack_48 + 0x10);
  lVar6 = lVar14;
  func_0x00010007629c();
  puVar1 = (undefined1 *)(lVar6 + lVar14);
  if (SCARRY8(lVar6,lVar14)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10454dde8);
    (*pcVar4)();
  }
  if ((long)puVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10454ddec);
    (*pcVar4)();
  }
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined1 *)0x0) {
    puVar7 = puVar1;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (puVar1,PTR___ss5UInt8VN_11034eef8);
    *(undefined1 **)(puVar7 + 0x10) = puVar1;
    _bzero(puVar7 + 0x20,puVar1);
  }
  pbVar9 = puVar7 + 0x20;
  uVar11 = *(ulong *)(puStack_48 + 0x10);
  pbVar10 = pbVar9;
  uVar12 = uVar11;
  if (0x7f < uVar11) {
    do {
      pbVar10 = pbVar9 + 1;
      *pbVar9 = (byte)uVar11 | 0x80;
      uVar12 = uVar11 >> 7;
      uVar13 = uVar11 >> 0xe;
      pbVar9 = pbVar10;
      uVar11 = uVar12;
    } while (uVar13 != 0);
  }
  *pbVar10 = (byte)uVar12;
  if (*(long *)(puStack_48 + 0x10) != 0) {
    _memmove(pbVar10 + 1,puStack_48 + 0x20);
  }
  _swift_bridgeObjectRelease();
  if (*(long *)(puVar7 + 0x10) == 0) {
    puVar8 = puStack_48;
    if (puVar1 == (undefined1 *)0x0) goto LAB_10454dd98;
  }
  else {
    puVar8 = param_2;
    func_0x00010c2bd840();
    if (puVar8 == puVar1) {
LAB_10454dd98:
      _swift_bridgeObjectRelease(puVar7);
      return;
    }
    if (puVar8 == (undefined1 *)0xffffffffffffffff) {
      func_0x00010c25c4e0();
      _objc_retainAutoreleasedReturnValue();
      if (param_2 == (undefined1 *)0x0) {
        FUN_104541cdc();
        _swift_allocError(&UNK_110786808,param_2,0,0);
        *param_2 = 0;
      }
      goto LAB_10454dd80;
    }
  }
  FUN_104541cdc();
  _swift_allocError(&UNK_110786808,puVar8,0,0);
  *puVar8 = 1;
LAB_10454dd80:
  _swift_willThrow();
  _swift_bridgeObjectRelease(puVar7);
  return;
}



/* Entry: 10454ddec; end: 10454de9f;  */

void FUN_10454ddec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  long unaff_x21;
  
  (**(code **)(param_9 + 0x10))(param_8,param_9);
  FUN_10454dea0(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (unaff_x21 != 0) {
    (**(code **)(*(long *)(param_8 + -8) + 8))(param_1,param_8);
  }
  return;
}



/* Entry: 10454dea0; end: 10454e22b;  */

void FUN_10454dea0(undefined8 param_1,undefined1 *param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,uint param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x21;
  undefined *puVar11;
  long lVar12;
  undefined *puStack_58;
  
  puVar3 = param_2;
  FUN_10454e22c();
  if ((unaff_x21 == 0) && (puVar3 != (undefined1 *)0x0)) {
    if ((ulong)puVar3 >> 0x1f == 0) {
      puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar5 = puVar3;
      if ((undefined1 *)0xffffff < puVar3) {
        puVar5 = (undefined1 *)0x1000000;
      }
      puVar4 = puVar5;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (puVar5,PTR___ss5UInt8VN_11034eef8);
      *(undefined1 **)(puVar4 + 0x10) = puVar5;
      _bzero(puVar4 + 0x20,puVar5);
LAB_10454dfa0:
      do {
        puVar5 = puVar4;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar5 & 1) == 0) {
          func_0x000102eac9d4();
          puVar5 = puVar4;
          if (*(long *)(puVar4 + 0x10) != 0) goto LAB_10454dfc0;
LAB_10454e0e8:
          FUN_104541cdc();
          _swift_allocError(&UNK_110786808,puVar5,0,0);
          *puVar5 = 1;
LAB_10454e1f4:
          _swift_willThrow();
          puVar11 = puStack_58;
          _swift_bridgeObjectRelease(puVar4);
          _swift_bridgeObjectRelease(puVar11);
          return;
        }
        if (*(long *)(puVar4 + 0x10) == 0) goto LAB_10454e0e8;
LAB_10454dfc0:
        puVar6 = param_2;
        func_0x00010c121160();
        puVar11 = puStack_58;
        puVar5 = (undefined1 *)0x0;
        if (puVar6 == (undefined1 *)0x0) goto LAB_10454e0e8;
        if (puVar6 == (undefined1 *)0xffffffffffffffff) {
          func_0x00010c25c4e0();
          _objc_retainAutoreleasedReturnValue();
          if (param_2 == (undefined1 *)0x0) {
            FUN_104541cdc();
            _swift_allocError(&UNK_110786808,param_2,0,0);
            *param_2 = 0;
          }
          goto LAB_10454e1f4;
        }
        uVar10 = *(ulong *)(puVar4 + 0x10);
        if ((long)uVar10 <= (long)puVar6) {
          lVar12 = *(long *)(puStack_58 + 0x10);
          if (SCARRY8(lVar12,uVar10)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10454e21c);
            (*pcVar2)();
          }
          _swift_bridgeObjectRetain(puVar4);
          puVar7 = puVar11;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((int)puVar7 == 0) ||
             (uVar9 = *(ulong *)(puVar11 + 0x18) >> 1, (long)uVar9 < (long)(lVar12 + uVar10))) {
            func_0x0001014d97ac();
            uVar9 = *(ulong *)(puVar7 + 0x18) >> 1;
            puVar11 = puVar7;
            if (*(long *)(puVar4 + 0x10) == 0) goto LAB_10454df74;
LAB_10454e090:
            if (uVar9 - *(long *)(puVar7 + 0x10) < uVar10) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10454e228);
              (*pcVar2)();
            }
            _memcpy(puVar7 + *(long *)(puVar7 + 0x10) + 0x20,puVar4 + 0x20,uVar10);
            _swift_bridgeObjectRelease(puVar4);
            if (uVar10 != 0) {
              if (SCARRY8(*(long *)(puVar7 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10454e22c);
                (*pcVar2)();
              }
              *(ulong *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + uVar10;
            }
          }
          else {
            puVar7 = puVar11;
            if (*(long *)(puVar4 + 0x10) != 0) goto LAB_10454e090;
LAB_10454df74:
            _swift_bridgeObjectRelease(puVar4);
            puVar7 = puVar11;
            if (uVar10 != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10454e224);
              (*pcVar2)();
            }
          }
          puVar5 = puVar3 + -(long)puVar6;
          bVar1 = (long)puVar3 < (long)puVar6;
          puVar3 = puVar5;
          puStack_58 = puVar7;
          if (puVar5 == (undefined1 *)0x0 || bVar1) break;
          goto LAB_10454dfa0;
        }
        if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10454e220);
          (*pcVar2)();
        }
        _swift_bridgeObjectRetain(puVar4);
        FUN_104541230();
        puVar5 = puVar3 + -(long)puVar6;
        bVar1 = (long)puVar6 <= (long)puVar3;
        puVar3 = puVar5;
      } while (puVar5 != (undefined1 *)0x0 && bVar1);
      uVar8 = 0x112deef08;
      func_0x0001000285a8(0x112deef08,&UNK_10d9bc0a0);
      FUN_10457ff08(&puStack_58,param_3,param_4 & 1,param_5,param_6 & 1,param_7,uVar8,param_8,
                    &PTR_DAT_110789f28);
      puVar11 = puStack_58;
      _swift_bridgeObjectRelease(puVar4);
      _swift_bridgeObjectRelease(puVar11);
    }
    else {
      FUN_10454d3c4();
      _swift_allocError(&UNK_110786678,puVar3,0,0);
      *puVar3 = 3;
      _swift_willThrow();
    }
  }
  return;
}



/* Entry: 10454e22c; end: 10454e58f;  */

ulong FUN_10454e22c(undefined8 *param_1)

{
  code *pcVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  
  uVar6 = 1;
  pbVar2 = (byte *)0x1;
  _swift_slowAlloc(1,0xffffffffffffffff);
  puVar3 = param_1;
  func_0x00010c121160();
  if (puVar3 == (undefined8 *)0x0) {
    FUN_104597744();
    _swift_allocObject();
    *(undefined1 *)(puVar3 + 2) = 1;
    puVar3[3] = 0xd000000000000093;
    puVar3[4] = 0x800000010f207da0;
    puVar3[5] = 0xd000000000000010;
    puVar3[6] = 0x800000010f207d50;
    puVar3[7] = 0xd000000000000023;
    puVar3[8] = 0x800000010f207d70;
    puVar3[9] = 0xf6;
    puVar4 = puVar3;
    FUN_104540678();
    _swift_allocError(&UNK_110789f98,puVar4,0,0);
    *puVar4 = puVar3;
    goto LAB_10454e52c;
  }
  if (puVar3 == (undefined8 *)0x1) {
    uVar6 = (ulong)*pbVar2 & 0x7f;
    if (-1 < (char)*pbVar2) goto LAB_10454e284;
    puVar3 = param_1;
    func_0x00010c121160();
    if (puVar3 == (undefined8 *)0x0) {
LAB_10454e508:
      puVar5 = (undefined1 *)0x0;
      FUN_104541cdc();
      _swift_allocError(&UNK_110786808,puVar5,0,0);
      *puVar5 = 1;
      goto LAB_10454e52c;
    }
    if (puVar3 == (undefined8 *)0x1) {
      uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 7;
      if (-1 < (char)*pbVar2) goto LAB_10454e284;
      puVar3 = param_1;
      func_0x00010c121160();
      if (puVar3 == (undefined8 *)0x0) goto LAB_10454e508;
      if (puVar3 == (undefined8 *)0x1) {
        uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0xe;
        if (-1 < (char)*pbVar2) goto LAB_10454e284;
        puVar3 = param_1;
        func_0x00010c121160();
        if (puVar3 == (undefined8 *)0x0) goto LAB_10454e508;
        if (puVar3 == (undefined8 *)0x1) {
          uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0x15;
          if (-1 < (char)*pbVar2) goto LAB_10454e284;
          puVar3 = param_1;
          func_0x00010c121160();
          if (puVar3 == (undefined8 *)0x0) goto LAB_10454e508;
          if (puVar3 == (undefined8 *)0x1) {
            uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0x1c;
            if (-1 < (char)*pbVar2) goto LAB_10454e284;
            puVar3 = param_1;
            func_0x00010c121160();
            if (puVar3 == (undefined8 *)0x0) goto LAB_10454e508;
            if (puVar3 == (undefined8 *)0x1) {
              uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0x23;
              if (-1 < (char)*pbVar2) goto LAB_10454e284;
              puVar3 = param_1;
              func_0x00010c121160();
              if (puVar3 == (undefined8 *)0x0) goto LAB_10454e508;
              if (puVar3 == (undefined8 *)0x1) {
                uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0x2a;
                if (-1 < (char)*pbVar2) goto LAB_10454e284;
                puVar3 = param_1;
                func_0x00010c121160();
                if (puVar3 == (undefined8 *)0x0) goto LAB_10454e508;
                if (puVar3 == (undefined8 *)0x1) {
                  uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0x31;
                  if (-1 < (char)*pbVar2) goto LAB_10454e284;
                  puVar3 = param_1;
                  func_0x00010c121160();
                  if (puVar3 == (undefined8 *)0x0) goto LAB_10454e508;
                  if (puVar3 == (undefined8 *)0x1) {
                    uVar6 = uVar6 | (ulong)((int)(char)*pbVar2 & 0x7f) << 0x38;
                    if (-1 < (char)*pbVar2) {
LAB_10454e284:
                      _swift_slowDealloc(pbVar2,0xffffffffffffffff,0xffffffffffffffff);
                      return uVar6;
                    }
                    puVar3 = param_1;
                    func_0x00010c121160();
                    if (puVar3 == (undefined8 *)0x0) goto LAB_10454e508;
                    if (puVar3 == (undefined8 *)0x1) {
                      if ((char)*pbVar2 < '\0') {
                        FUN_10454d3c4();
                        _swift_allocError(&UNK_110786678,puVar3,0,0);
                        *(undefined1 *)puVar3 = 3;
                        goto LAB_10454e52c;
                      }
                      uVar6 = uVar6 | (ulong)*pbVar2 << 0x3f;
                      goto LAB_10454e284;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (puVar3 != (undefined8 *)0xffffffffffffffff) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10454e564);
    (*pcVar1)();
  }
  func_0x00010c25c4e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined8 *)0x0) {
    FUN_104541cdc();
    _swift_allocError(&UNK_110786808,param_1,0,0);
    *(undefined1 *)param_1 = 0;
  }
LAB_10454e52c:
  _swift_willThrow();
  _swift_slowDealloc(pbVar2,0xffffffffffffffff,0xffffffffffffffff);
  return uVar6;
}



/* Entry: 10454e590; end: 10454e59b;  */

undefined8 FUN_10454e590(void)

{
  long *unaff_x20;
  
  return *(undefined8 *)(*unaff_x20 + 0x10);
}



/* Entry: 10454e59c; end: 10454e6b7;  */

undefined * FUN_10454e59c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10454e6b8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x113084e18;
    func_0x0001000285a8(0x113084e18,&UNK_10dd16b58);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_11078f680);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 10454e6b8; end: 10454e6df;  */

undefined * FUN_10454e6b8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  puVar2 = (undefined *)0x112dd1f58;
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10454e7d8);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar6) {
    uVar4 = uVar6;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    func_0x0001000285a8(0x112dd1f58,&UNK_10dbcf190);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar5 = puVar3 + -0x1d;
    if (0x1f < (long)puVar3) {
      puVar5 = puVar3 + -0x20;
    }
    *(ulong *)(puVar2 + 0x10) = uVar6;
    *(long *)(puVar2 + 0x18) = ((long)puVar5 >> 2) << 1;
    puVar5 = puVar2;
  }
  puVar2 = puVar5 + 0x20;
  puVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar2,puVar3,uVar6 << 2);
  }
  else {
    if (puVar5 != param_4 || puVar3 + uVar6 * 4 <= puVar2) {
      _memmove(puVar2,puVar3,uVar6 << 2);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar5;
}



/* Entry: 10454e6e0; end: 10454eac7;  */

undefined *
FUN_10454e6e0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10454e7d8);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar6) {
    uVar4 = uVar6;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    func_0x0001000285a8(param_5,param_6);
    _swift_allocObject();
    puVar3 = param_5;
    _malloc_size();
    puVar5 = puVar3 + -0x1d;
    if (0x1f < (long)puVar3) {
      puVar5 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)puVar5 >> 2) << 1;
    puVar5 = param_5;
  }
  puVar3 = puVar5 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar3,puVar1,uVar6 << 2);
  }
  else {
    if (puVar5 != param_4 || puVar1 + uVar6 * 4 <= puVar3) {
      _memmove(puVar3,puVar1,uVar6 << 2);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar5;
}



/* Entry: 10454eac8; end: 10454ec0b;  */

undefined * FUN_10454eac8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10454ec0c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112db4840;
    func_0x0001000285a8(0x112db4840,&UNK_10d95f120);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x113084de8;
    func_0x0001000285a8(0x113084de8,&UNK_10dd16950);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 10454ec0c; end: 10454ec0f;  */

void FUN_10454ec0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084e08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16a88;
  _swift_getWitnessTable(&UNK_10dd16a88,&UNK_110786808);
  puRam0000000113084e08 = puVar1;
  return;
}



/* Entry: 10454ec10; end: 10454ec4f;  */

void FUN_10454ec10(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084e08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16a88;
  _swift_getWitnessTable(&UNK_10dd16a88,&UNK_110786808);
  puRam0000000113084e08 = puVar1;
  return;
}



/* Entry: 10454ec50; end: 10454ede7;  */

undefined1  [16] FUN_10454ec50(void)

{
  return ZEXT816(0x110786778);
}



/* Entry: 10454ede8; end: 10454eff7;  */

void FUN_10454ede8(ulong param_1,ulong param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  ulong uVar9;
  ulong uStack_70;
  ulong uStack_68;
  
  if ((param_2 >> 0x3c & 1) != 0) {
    uVar8 = param_1;
    __sSS8UTF8ViewV13_foreignCountSiyF();
    pbVar4 = (byte *)*unaff_x20;
    uVar9 = uVar8;
    pbVar3 = pbVar4;
    if (0x7f < uVar8) {
      do {
        pbVar4 = pbVar3 + 1;
        *pbVar3 = (byte)uVar9 | 0x80;
        uVar8 = uVar9 >> 7;
        uVar6 = uVar9 >> 0xe;
        uVar9 = uVar8;
        pbVar3 = pbVar4;
      } while (uVar6 != 0);
    }
    *pbVar4 = (byte)uVar8;
    *unaff_x20 = (long)(pbVar4 + 1);
    uVar8 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar8 = param_2 >> 0x38 & 0xf;
    }
    if (uVar8 == 0) {
      return;
    }
    uVar9 = 0xf;
    do {
      if ((uVar9 & 0xc) == 4L << (param_1 >> 0x3b & 1)) {
        uVar6 = uVar9;
        func_0x000100e36e7c(uVar9,param_1,param_2);
        if (uVar8 <= uVar6 >> 0x10) goto LAB_10454eff4;
        __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
        uVar2 = (undefined1)uVar6;
        func_0x000100e36e7c(uVar9,param_1,param_2);
        uVar6 = uVar9 >> 0x10;
      }
      else {
        uVar6 = uVar9 >> 0x10;
        if (uVar8 <= uVar6) {
LAB_10454eff4:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10454eff8);
          (*pcVar1)();
        }
        uVar7 = uVar9;
        __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar9,param_1,param_2);
        uVar2 = (undefined1)uVar7;
      }
      if (uVar8 <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10454efe4);
        (*pcVar1)();
      }
      __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar9,param_1,param_2);
      puVar5 = (undefined1 *)*unaff_x20;
      *puVar5 = uVar2;
      *unaff_x20 = (long)(puVar5 + 1);
      if (uVar8 * 4 - (uVar9 >> 0xe) == 0) {
        return;
      }
    } while( true );
  }
  if ((param_2 >> 0x3d & 1) == 0) {
    if ((param_1 >> 0x3c & 1) == 0) {
      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      uVar8 = param_2;
    }
    else {
      uVar8 = param_1 & 0xffffffffffff;
      param_1 = (param_2 & 0xfffffffffffffff) + 0x20;
    }
    pbVar3 = (byte *)*unaff_x20;
    pbVar4 = pbVar3;
    uVar9 = uVar8;
    uVar6 = uVar8;
    if (0x7f < uVar8) {
      do {
        pbVar4 = pbVar3 + 1;
        *pbVar3 = (byte)uVar9 | 0x80;
        uVar6 = uVar9 >> 7;
        uVar7 = uVar9 >> 0xe;
        pbVar3 = pbVar4;
        uVar9 = uVar6;
      } while (uVar7 != 0);
    }
    pbVar3 = pbVar4 + 1;
    *pbVar4 = (byte)uVar6;
    *unaff_x20 = (long)pbVar3;
    if (param_1 == 0) {
      uVar8 = 0;
      goto LAB_10454eea0;
    }
    if (uVar8 == 0) goto LAB_10454eea0;
    _memmove(pbVar3,param_1,uVar8);
  }
  else {
    uVar8 = param_2 >> 0x38 & 0xf;
    uStack_68 = param_2 & 0xffffffffffffff;
    pbVar3 = (undefined1 *)*unaff_x20 + 1;
    *(undefined1 *)*unaff_x20 = (char)uVar8;
    *unaff_x20 = (long)pbVar3;
    if (uVar8 == 0) goto LAB_10454eea0;
    uStack_70 = param_1;
    _memcpy(pbVar3,&uStack_70,uVar8);
  }
  pbVar3 = (byte *)*unaff_x20;
LAB_10454eea0:
  *unaff_x20 = (long)(pbVar3 + uVar8);
  return;
}



/* Entry: 10454eff8; end: 10454f09b;  */

uint FUN_10454eff8(long *param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 != 1) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + 2;
  }
  return (uint)(*param_1 == 0);
}



/* Entry: 10454f09c; end: 10454f103;  */

void FUN_10454f09c(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 10454f104; end: 10454f127;  */

bool FUN_10454f104(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10454f128; end: 10454f1d3;  */

void FUN_10454f128(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10454f1d4; end: 10454f1d7;  */

void FUN_10454f1d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16b80;
  _swift_getWitnessTable(&UNK_10dd16b80,&UNK_110786978);
  puRam0000000113084e28 = puVar1;
  return;
}



/* Entry: 10454f1d8; end: 10454f217;  */

void FUN_10454f1d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16b80;
  _swift_getWitnessTable(&UNK_10dd16b80,&UNK_110786978);
  puRam0000000113084e28 = puVar1;
  return;
}



/* Entry: 10454f218; end: 10454f37b;  */

int FUN_10454f218(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10454f294;
        goto LAB_10454f278;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10454f278:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10454f294:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10454f37c; end: 10454f507;  */

uint FUN_10454f37c(uint param_1)

{
  return param_1 & 1;
}



/* Entry: 10454f508; end: 10454f687;  */

undefined1  [16] FUN_10454f508(void)

{
  return ZEXT816(0x110786a78);
}



/* Entry: 10454f688; end: 10454f757;  */

void FUN_10454f688(ulong param_1,ulong param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  
  if (param_3 << 3 < 0x80) {
    lVar4 = 1;
  }
  else if (param_3 << 3 < 0x4000) {
    lVar4 = 2;
  }
  else if ((param_3 & 0x1fffffff) >> 0x12 == 0) {
    lVar4 = 3;
  }
  else if ((param_3 & 0x1fffffff) >> 0x19 == 0) {
    lVar4 = 4;
  }
  else {
    lVar4 = 5;
  }
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      param_1 = param_1 & 0xffffffffffff;
    }
    else {
      param_1 = param_2 >> 0x38 & 0xf;
    }
  }
  else {
    __sSS8UTF8ViewV13_foreignCountSiyF();
  }
  uVar3 = param_1;
  func_0x0001045ad874();
  if (SCARRY8(lVar4,uVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10454f750);
    (*pcVar2)();
  }
  lVar1 = lVar4 + uVar3 + param_1;
  if (SCARRY8(lVar4 + uVar3,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10454f754);
    (*pcVar2)();
  }
  if (!SCARRY8(*unaff_x20,lVar1)) {
    *unaff_x20 = *unaff_x20 + lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10454f758);
  (*pcVar2)();
}



/* Entry: 10454f758; end: 10454f83b;  */

void FUN_10454f758(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  long *unaff_x20;
  ulong uVar8;
  
  lVar1 = 4;
  if ((param_3 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar2 = 3;
  if (0x1fffff < param_3 << 3) {
    lVar2 = lVar1;
  }
  if ((param_3 & 0x1fffffff) >> 0xb == 0) {
    lVar2 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_3 << 3) {
    lVar1 = lVar2;
  }
  uVar3 = (uint)(param_2 >> 0x20);
  uVar6 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar6 == 0) {
      uVar8 = param_2 >> 0x30 & 0xff;
    }
    else {
      iVar7 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar7,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10454f83c);
        (*pcVar4)();
      }
      uVar8 = (ulong)(iVar7 - (int)param_1);
    }
  }
  else if (uVar6 == 2) {
    uVar8 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10454f7d8);
      (*pcVar4)();
    }
  }
  else {
    uVar8 = 0;
  }
  uVar5 = uVar8;
  func_0x0001045ad874();
  if (SCARRY8(lVar1,uVar5)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10454f830);
    (*pcVar4)();
  }
  lVar2 = lVar1 + uVar5 + uVar8;
  if (SCARRY8(lVar1 + uVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10454f834);
    (*pcVar4)();
  }
  if (!SCARRY8(*unaff_x20,lVar2)) {
    *unaff_x20 = *unaff_x20 + lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10454f838);
  (*pcVar4)();
}



/* Entry: 10454f83c; end: 10454fed7;  */

void FUN_10454f83c(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  long *unaff_x20;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar7 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar7 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar7 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar7;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    puVar9 = (uint *)(param_1 + 0x20);
    lVar10 = lVar7;
    do {
      uVar4 = *puVar9;
      if ((int)uVar4 < 0) {
        bVar6 = SCARRY8(lVar8,10);
        lVar8 = lVar8 + 10;
        if (bVar6) goto LAB_10454f92c;
      }
      else if (uVar4 < 0x80) {
        bVar6 = SCARRY8(lVar8,1);
        lVar8 = lVar8 + 1;
        if (bVar6) {
LAB_10454f92c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10454f930);
          (*pcVar5)();
        }
      }
      else {
        lVar2 = 4;
        if (uVar4 >> 0x1c != 0) {
          lVar2 = 5;
        }
        lVar3 = 3;
        if (0x1fffff < uVar4) {
          lVar3 = lVar2;
        }
        if (uVar4 >> 0xe == 0) {
          lVar3 = 2;
        }
        bVar6 = SCARRY8(lVar8,lVar3);
        lVar8 = lVar8 + lVar3;
        if (bVar6) goto LAB_10454f92c;
      }
      lVar10 = lVar10 + -1;
      puVar9 = puVar9 + 1;
    } while (lVar10 != 0);
  }
  lVar10 = lVar1 * lVar7;
  if (SUB168(SEXT816(lVar1) * SEXT816(lVar7),8) != lVar10 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10454f934);
    (*pcVar5)();
  }
  if (SCARRY8(lVar10,lVar8)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10454f938);
    (*pcVar5)();
  }
  if (SCARRY8(*unaff_x20,lVar10 + lVar8)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10454f93c);
    (*pcVar5)();
  }
  *unaff_x20 = *unaff_x20 + lVar10 + lVar8;
  return;
}



/* Entry: 10454fed8; end: 10455004f;  */

void FUN_10454fed8(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  ulong *puVar10;
  
  lVar8 = 0;
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar6 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar6 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar6 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar6;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  puVar10 = (ulong *)(param_1 + 0x28);
  lVar6 = lVar9 + 1;
  do {
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      lVar6 = lVar2 * lVar9;
      if (SUB168(SEXT816(lVar2) * SEXT816(lVar9),8) != lVar6 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104550048);
        (*pcVar3)();
      }
      if (SCARRY8(lVar6,lVar8)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10455004c);
        (*pcVar3)();
      }
      if (SCARRY8(*unaff_x20,lVar6 + lVar8)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104550050);
        (*pcVar3)();
      }
      *unaff_x20 = *unaff_x20 + lVar6 + lVar8;
      return;
    }
    uVar4 = puVar10[-1];
    uVar7 = *puVar10;
    if ((uVar7 >> 0x3c & 1) == 0) {
      if ((uVar7 >> 0x3d & 1) == 0) {
        uVar4 = uVar4 & 0xffffffffffff;
        if (0x7f < uVar4) goto LAB_10454ff58;
      }
      else {
        uVar4 = uVar7 >> 0x38 & 0xf;
      }
LAB_10454ff80:
      lVar5 = 1;
    }
    else {
      __sSS8UTF8ViewV13_foreignCountSiyF();
      if (uVar4 < 0x80) goto LAB_10454ff80;
LAB_10454ff58:
      if ((long)uVar4 < 0) {
        lVar5 = 10;
      }
      else if (uVar4 >> 0x23 == 0) {
        if (uVar4 < 0x200000) {
          lVar5 = 2;
          if (uVar4 < 0x4000) goto LAB_10454ff84;
        }
        else {
          lVar5 = 4;
          uVar7 = uVar4;
LAB_10454ffd0:
          if (uVar7 >> 0x1c == 0) goto LAB_10454ff84;
        }
LAB_10454ffe0:
        lVar5 = lVar5 + 1;
      }
      else {
        if (uVar4 >> 0x31 != 0) {
          uVar7 = uVar4 >> 0x1c;
          lVar5 = 8;
          goto LAB_10454ffd0;
        }
        if (uVar4 >> 0x2a != 0) {
          lVar5 = 6;
          goto LAB_10454ffe0;
        }
        lVar5 = 6;
      }
    }
LAB_10454ff84:
    lVar1 = lVar8 + lVar5;
    if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104550040);
      (*pcVar3)();
    }
    puVar10 = puVar10 + 2;
    lVar8 = lVar1 + uVar4;
    if (SCARRY8(lVar1,uVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104550044);
      (*pcVar3)();
    }
  } while( true );
}



/* Entry: 104550050; end: 1045501d7;  */

void FUN_104550050(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long *unaff_x20;
  
  lVar5 = 0;
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar8 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar8 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar8 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar8;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  puVar7 = (ulong *)(param_1 + 0x28);
  lVar8 = lVar6 + 1;
  do {
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) {
      lVar8 = lVar2 * lVar6;
      if (SUB168(SEXT816(lVar2) * SEXT816(lVar6),8) != lVar8 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1045501d0);
        (*pcVar4)();
      }
      if (!SCARRY8(lVar8,lVar5)) {
        if (!SCARRY8(*unaff_x20,lVar8 + lVar5)) {
          *unaff_x20 = *unaff_x20 + lVar8 + lVar5;
          return;
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1045501d8);
        (*pcVar4)();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1045501d4);
      (*pcVar4)();
    }
    uVar13 = puVar7[-1];
    uVar3 = (uint)(*puVar7 >> 0x20);
    uVar12 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar9 = *puVar7 >> 0x30 & 0xff;
      }
      else {
        iVar10 = (int)(uVar13 >> 0x20);
        if (SBORROW4(iVar10,(int)uVar13)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1045501c8);
          (*pcVar4)();
        }
        uVar9 = (ulong)(iVar10 - (int)uVar13);
      }
joined_r0x0001045500e0:
      if (uVar9 < 0x80) {
        lVar11 = 1;
      }
      else if ((long)uVar9 < 0) {
        lVar11 = 10;
      }
      else if (uVar9 >> 0x23 == 0) {
        if (uVar9 < 0x200000) {
          lVar11 = 2;
          if (uVar9 < 0x4000) goto LAB_10455017c;
        }
        else {
          lVar11 = 4;
          uVar13 = uVar9;
LAB_104550168:
          if (uVar13 >> 0x1c == 0) goto LAB_10455017c;
        }
LAB_104550178:
        lVar11 = lVar11 + 1;
      }
      else {
        if (uVar9 >> 0x31 != 0) {
          uVar13 = uVar9 >> 0x1c;
          lVar11 = 8;
          goto LAB_104550168;
        }
        if (uVar9 >> 0x2a != 0) {
          lVar11 = 6;
          goto LAB_104550178;
        }
        lVar11 = 6;
      }
    }
    else {
      if (uVar12 == 2) {
        uVar9 = *(long *)(uVar13 + 0x18) - *(long *)(uVar13 + 0x10);
        if (SBORROW8(*(long *)(uVar13 + 0x18),*(long *)(uVar13 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1045501cc);
          (*pcVar4)();
        }
        goto joined_r0x0001045500e0;
      }
      uVar9 = 0;
      lVar11 = 1;
    }
LAB_10455017c:
    lVar1 = lVar5 + lVar11;
    if (SCARRY8(lVar5,lVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1045501c4);
      (*pcVar4)();
    }
    puVar7 = puVar7 + 2;
    lVar5 = lVar1 + uVar9;
    if (SCARRY8(lVar1,uVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104550194);
      (*pcVar4)();
    }
  } while( true );
}



/* Entry: 1045501d8; end: 1045502f7;  */

void FUN_1045501d8(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  uint *puVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar7 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar7 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar7 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar7;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    puVar8 = (uint *)(param_1 + 0x20);
    do {
      uVar4 = *puVar8;
      if ((int)uVar4 < 0) {
        bVar6 = SCARRY8(lVar9,10);
        lVar9 = lVar9 + 10;
        if (bVar6) goto LAB_1045502e8;
      }
      else if (uVar4 < 0x80) {
        bVar6 = SCARRY8(lVar9,1);
        lVar9 = lVar9 + 1;
        if (bVar6) {
LAB_1045502e8:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1045502ec);
          (*pcVar5)();
        }
      }
      else {
        lVar1 = 4;
        if (uVar4 >> 0x1c != 0) {
          lVar1 = 5;
        }
        lVar3 = 3;
        if (0x1fffff < uVar4) {
          lVar3 = lVar1;
        }
        if (uVar4 >> 0xe == 0) {
          lVar3 = 2;
        }
        bVar6 = SCARRY8(lVar9,lVar3);
        lVar9 = lVar9 + lVar3;
        if (bVar6) goto LAB_1045502e8;
      }
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar7 != 0);
  }
  lVar7 = lVar9;
  func_0x0001045ad874();
  if (SCARRY8(lVar2,lVar7)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1045502f0);
    (*pcVar5)();
  }
  lVar1 = lVar2 + lVar7 + lVar9;
  if (SCARRY8(lVar2 + lVar7,lVar9)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1045502f4);
    (*pcVar5)();
  }
  if (SCARRY8(*unaff_x20,lVar1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1045502f8);
    (*pcVar5)();
  }
  *unaff_x20 = *unaff_x20 + lVar1;
  return;
}



/* Entry: 1045502f8; end: 104550407;  */

void FUN_1045502f8(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar5 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar5 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar5 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar5;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    piVar6 = (int *)(param_1 + 0x20);
    do {
      uVar2 = *piVar6 << 1 ^ *piVar6 >> 0x1f;
      if (uVar2 < 0x80) {
        lVar7 = 1;
      }
      else if (uVar2 >> 0xe == 0) {
        lVar7 = 2;
      }
      else if (uVar2 < 0x200000) {
        lVar7 = 3;
      }
      else {
        lVar7 = 4;
        if (uVar2 >> 0x1c != 0) {
          lVar7 = 5;
        }
      }
      bVar4 = SCARRY8(lVar8,lVar7);
      lVar8 = lVar8 + lVar7;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045503fc);
        (*pcVar3)();
      }
      lVar5 = lVar5 + -1;
      piVar6 = piVar6 + 1;
    } while (lVar5 != 0);
  }
  lVar5 = lVar8;
  func_0x0001045ad874();
  if (SCARRY8(lVar1,lVar5)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104550400);
    (*pcVar3)();
  }
  lVar7 = lVar1 + lVar5 + lVar8;
  if (SCARRY8(lVar1 + lVar5,lVar8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104550404);
    (*pcVar3)();
  }
  if (SCARRY8(*unaff_x20,lVar7)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104550408);
    (*pcVar3)();
  }
  *unaff_x20 = *unaff_x20 + lVar7;
  return;
}



/* Entry: 104550408; end: 10455054f;  */

void FUN_104550408(long param_1,uint param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar4 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar4 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar4 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar4;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    plVar5 = (long *)(param_1 + 0x20);
    do {
      uVar6 = *plVar5 << 1 ^ *plVar5 >> 0x3f;
      if (uVar6 < 0x80) {
        lVar7 = 1;
      }
      else if ((long)uVar6 < 0) {
        lVar7 = 10;
      }
      else if (uVar6 >> 0x23 == 0) {
        if (uVar6 < 0x200000) {
          lVar7 = 2;
          if (uVar6 < 0x4000) goto LAB_1045504ec;
        }
        else {
          lVar7 = 4;
          uVar6 = uVar6 >> 0x1c;
joined_r0x0001045504e4:
          if (uVar6 == 0) goto LAB_1045504ec;
        }
LAB_1045504e8:
        lVar7 = lVar7 + 1;
      }
      else {
        if (uVar6 >> 0x31 != 0) {
          lVar7 = 8;
          uVar6 = uVar6 >> 0x38;
          goto joined_r0x0001045504e4;
        }
        lVar7 = 6;
        if (uVar6 >> 0x2a != 0) goto LAB_1045504e8;
      }
LAB_1045504ec:
      bVar3 = SCARRY8(lVar8,lVar7);
      lVar8 = lVar8 + lVar7;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104550544);
        (*pcVar2)();
      }
      lVar4 = lVar4 + -1;
      plVar5 = plVar5 + 1;
    } while (lVar4 != 0);
  }
  lVar4 = lVar8;
  func_0x0001045ad874();
  if (SCARRY8(lVar1,lVar4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104550548);
    (*pcVar2)();
  }
  lVar7 = lVar1 + lVar4 + lVar8;
  if (!SCARRY8(lVar1 + lVar4,lVar8)) {
    if (!SCARRY8(*unaff_x20,lVar7)) {
      *unaff_x20 = *unaff_x20 + lVar7;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104550550);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10455054c);
  (*pcVar2)();
}



/* Entry: 104550550; end: 104550653;  */

void FUN_104550550(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar6 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar6 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar6 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar6;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    puVar7 = (uint *)(param_1 + 0x20);
    do {
      uVar3 = *puVar7;
      if (uVar3 < 0x80) {
        lVar8 = 1;
      }
      else {
        lVar1 = 4;
        if (uVar3 >> 0x1c != 0) {
          lVar1 = 5;
        }
        lVar8 = 3;
        if (0x1fffff < uVar3) {
          lVar8 = lVar1;
        }
        if (uVar3 >> 0xe == 0) {
          lVar8 = 2;
        }
      }
      bVar5 = SCARRY8(lVar9,lVar8);
      lVar9 = lVar9 + lVar8;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104550648);
        (*pcVar4)();
      }
      lVar6 = lVar6 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
  }
  lVar6 = lVar9;
  func_0x0001045ad874();
  if (SCARRY8(lVar2,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10455064c);
    (*pcVar4)();
  }
  lVar1 = lVar2 + lVar6 + lVar9;
  if (SCARRY8(lVar2 + lVar6,lVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x104550650);
    (*pcVar4)();
  }
  if (SCARRY8(*unaff_x20,lVar1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x104550654);
    (*pcVar4)();
  }
  *unaff_x20 = *unaff_x20 + lVar1;
  return;
}



/* Entry: 104550654; end: 104550793;  */

void FUN_104550654(long param_1,uint param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar4 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar4 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar4 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar4;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    puVar5 = (ulong *)(param_1 + 0x20);
    do {
      uVar6 = *puVar5;
      if (uVar6 < 0x80) {
        lVar7 = 1;
      }
      else if ((long)uVar6 < 0) {
        lVar7 = 10;
      }
      else if (uVar6 >> 0x23 == 0) {
        if (uVar6 < 0x200000) {
          lVar7 = 2;
          if (uVar6 < 0x4000) goto LAB_104550730;
        }
        else {
          lVar7 = 4;
          uVar6 = uVar6 >> 0x1c;
joined_r0x000104550728:
          if (uVar6 == 0) goto LAB_104550730;
        }
LAB_10455072c:
        lVar7 = lVar7 + 1;
      }
      else {
        if (uVar6 >> 0x31 != 0) {
          lVar7 = 8;
          uVar6 = uVar6 >> 0x38;
          goto joined_r0x000104550728;
        }
        lVar7 = 6;
        if (uVar6 >> 0x2a != 0) goto LAB_10455072c;
      }
LAB_104550730:
      bVar3 = SCARRY8(lVar8,lVar7);
      lVar8 = lVar8 + lVar7;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104550788);
        (*pcVar2)();
      }
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != 0);
  }
  lVar4 = lVar8;
  func_0x0001045ad874();
  if (SCARRY8(lVar1,lVar4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10455078c);
    (*pcVar2)();
  }
  lVar7 = lVar1 + lVar4 + lVar8;
  if (!SCARRY8(lVar1 + lVar4,lVar8)) {
    if (!SCARRY8(*unaff_x20,lVar7)) {
      *unaff_x20 = *unaff_x20 + lVar7;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104550794);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104550790);
  (*pcVar2)();
}



/* Entry: 104550794; end: 10455083f;  */

void FUN_104550794(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar4 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar4 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar4 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar4;
  }
  if (*(ulong *)(param_1 + 0x10) >> 0x3d != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104550834);
    (*pcVar3)();
  }
  lVar5 = *(ulong *)(param_1 + 0x10) * 4;
  lVar4 = lVar5;
  func_0x0001045ad874();
  if (SCARRY8(lVar2,lVar4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104550838);
    (*pcVar3)();
  }
  lVar1 = lVar2 + lVar4 + lVar5;
  if (!SCARRY8(lVar2 + lVar4,lVar5)) {
    if (!SCARRY8(*unaff_x20,lVar1)) {
      *unaff_x20 = *unaff_x20 + lVar1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104550840);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10455083c);
  (*pcVar3)();
}



/* Entry: 104550840; end: 1045508eb;  */

void FUN_104550840(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar4 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar4 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar4 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar4;
  }
  if (*(ulong *)(param_1 + 0x10) >> 0x3c != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1045508e0);
    (*pcVar3)();
  }
  lVar5 = *(ulong *)(param_1 + 0x10) * 8;
  lVar4 = lVar5;
  func_0x0001045ad874();
  if (SCARRY8(lVar2,lVar4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1045508e4);
    (*pcVar3)();
  }
  lVar1 = lVar2 + lVar4 + lVar5;
  if (!SCARRY8(lVar2 + lVar4,lVar5)) {
    if (!SCARRY8(*unaff_x20,lVar1)) {
      *unaff_x20 = *unaff_x20 + lVar1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1045508ec);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1045508e8);
  (*pcVar3)();
}



/* Entry: 1045508ec; end: 104550987;  */

void FUN_1045508ec(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar4 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar4 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar4 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar4;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  lVar4 = lVar5;
  func_0x0001045ad874();
  if (SCARRY8(lVar2,lVar4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104550980);
    (*pcVar3)();
  }
  lVar1 = lVar2 + lVar4 + lVar5;
  if (SCARRY8(lVar2 + lVar4,lVar5)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104550984);
    (*pcVar3)();
  }
  if (!SCARRY8(*unaff_x20,lVar1)) {
    *unaff_x20 = *unaff_x20 + lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104550988);
  (*pcVar3)();
}



/* Entry: 104550988; end: 104550a9f;  */

void FUN_104550988(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long *unaff_x20;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar3 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar3 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar3 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar3;
  }
  lVar3 = param_1;
  __sSa5countSivg(param_1,param_3);
  lVar6 = lVar3 * lVar1;
  if (SUB168(SEXT816(lVar3) * SEXT816(lVar1),8) != lVar6 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104550a98);
    (*pcVar2)();
  }
  lVar1 = *unaff_x20 + lVar6;
  if (SCARRY8(*unaff_x20,lVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104550a9c);
    (*pcVar2)();
  }
  uStack_58 = 0;
  uVar4 = 0;
  uStack_70 = param_3;
  uStack_68 = param_4;
  lStack_50 = param_1;
  __sSaMa(0,param_3);
  puVar5 = PTR___sSayxGSTsMc_11034dd08;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_11034dd08,uVar4);
  __sSTsE6reduceyqd__qd___qd__qd___7ElementQztKXEtKlF
            (&lStack_48,&uStack_58,0x104552d84,auStack_80,uVar4,PTR___sSiN_11034deb0,puVar5);
  if (!SCARRY8(lVar1,lStack_48)) {
    *unaff_x20 = lVar1 + lStack_48;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104550aa0);
  (*pcVar2)();
}



/* Entry: 104550aa0; end: 104550bab;  */

void FUN_104550aa0(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long *unaff_x20;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lVar5 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar5 = 5;
  }
  lVar1 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar1 = lVar5;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar1 = 2;
  }
  lVar5 = 1;
  if (0x7f < param_2 << 3) {
    lVar5 = lVar1;
  }
  lVar1 = *unaff_x20 + lVar5;
  if (SCARRY8(*unaff_x20,lVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104550ba4);
    (*pcVar2)();
  }
  uStack_50 = 0;
  uVar3 = 0;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_48 = param_1;
  __sSaMa(0,param_3);
  puVar4 = PTR___sSayxGSTsMc_11034dd08;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_11034dd08,uVar3);
  __sSTsE6reduceyqd__qd___qd__qd___7ElementQztKXEtKlF
            (&lStack_38,&uStack_50,FUN_104552b60,auStack_70,uVar3,PTR___sSiN_11034deb0,puVar4);
  lVar5 = lStack_38;
  func_0x0001045ad874();
  if (SCARRY8(lVar5,lStack_38)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104550ba8);
    (*pcVar2)();
  }
  if (!SCARRY8(lVar1,lVar5 + lStack_38)) {
    *unaff_x20 = lVar1 + lVar5 + lStack_38;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104550bac);
  (*pcVar2)();
}



/* Entry: 104550bac; end: 104550c63;  */

void FUN_104550bac(undefined8 param_1,uint param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x21;
  
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar4 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar4 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar4 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar4;
  }
  func_0x000100075c9c(param_3,param_4);
  if (unaff_x21 == 0) {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104550c58);
      (*pcVar3)();
    }
    lVar4 = param_3;
    func_0x00010007629c();
    if (SCARRY8(lVar2,lVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104550c5c);
      (*pcVar3)();
    }
    lVar1 = lVar2 + lVar4 + param_3;
    if (SCARRY8(lVar2 + lVar4,param_3)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104550c60);
      (*pcVar3)();
    }
    if (SCARRY8(*unaff_x20,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104550c64);
      (*pcVar3)();
    }
    *unaff_x20 = *unaff_x20 + lVar1;
  }
  return;
}



/* Entry: 104550c64; end: 104550cfb;  */

void FUN_104550c64(undefined8 param_1,uint param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *unaff_x20;
  
  lVar1 = 8;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 10;
  }
  lVar2 = 6;
  if (0x1fffff < param_2 << 3) {
    lVar2 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar2 = 4;
  }
  lVar1 = 2;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar2;
  }
  if (!SCARRY8(*unaff_x20,lVar1)) {
    *unaff_x20 = *unaff_x20 + lVar1;
    (**(code **)(param_4 + 0x48))(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104550cfc);
  (*pcVar3)();
}



/* Entry: 104550cfc; end: 104550ebf;  */

void FUN_104550cfc(long param_1,uint param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x12;
  long *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  
  lVar6 = *(long *)(param_3 + -8);
  lVar2 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar5 = 5;
  }
  lVar3 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar3 = lVar5;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar3 = 2;
  }
  lVar5 = 1;
  if (0x7f < param_2 << 3) {
    lVar5 = lVar3;
  }
  __sSa5countSivg();
  if (lVar2 + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104550eb8);
    (*pcVar1)();
  }
  lVar3 = lVar2 * 2 * lVar5;
  if (SUB168(SEXT816(lVar2 * 2) * SEXT816(lVar5),8) != lVar3 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104550ebc);
    (*pcVar1)();
  }
  if (!SCARRY8(*unaff_x20,lVar3)) {
    *unaff_x20 = *unaff_x20 + lVar3;
    lVar5 = param_1;
    __sSa8endIndexSivg(param_1,param_3);
    if (lVar5 != 0) {
      lVar5 = 0;
      do {
        __sSayxSicig((long)puVar4 - extraout_x12,lVar5,param_1,param_3);
        lVar2 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104550eb4);
          (*pcVar1)();
        }
        (**(code **)(lVar6 + 0x20))(puVar4,(long)puVar4 - extraout_x12,param_3);
        (**(code **)(param_4 + 0x48))(unaff_x20,&UNK_110786a78,&PTR_DAT_110786a90,param_3);
        (**(code **)(lVar6 + 8))(puVar4,param_3);
        if (unaff_x21 != 0) {
          return;
        }
        lVar3 = param_1;
        __sSa8endIndexSivg(param_1,param_3);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104550ec0);
  (*pcVar1)();
}



/* Entry: 104550ec0; end: 104551733;  */

void FUN_104550ec0(undefined1 *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long extraout_x8;
  long lVar17;
  long lVar18;
  long extraout_x8_00;
  long lVar19;
  long extraout_x8_01;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long extraout_x12;
  long *unaff_x20;
  ulong uVar24;
  long lVar25;
  long unaff_x21;
  ulong uVar26;
  long lVar27;
  undefined1 *puVar28;
  long lStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  ulong uStack_198;
  long lStack_190;
  ulong uStack_110;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [48];
  ulong uStack_58;
  
  lVar13 = *(long *)(param_6 + 8);
  lVar5 = 0;
  puStack_1a0 = param_1;
  _swift_getAssociatedTypeWitness(0,lVar13,param_4,&UNK_10e814078,&UNK_10e814088);
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)&lStack_1b0 - extraout_x8;
  lVar14 = *(long *)(param_5 + 8);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness(0,lVar14,param_3,&UNK_10e814078,&UNK_10e814088);
  lVar18 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar28 = (undefined1 *)(lVar17 - extraout_x8_00);
  lVar7 = 0xff;
  _swift_getTupleTypeMetadata2();
  lVar8 = 0;
  __sSqMa(0,lVar7);
  lVar19 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar22 = (long)puVar28 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar10 = puStack_1a0;
  lVar20 = lVar22 - extraout_x12;
  uVar3 = param_2 << 3;
  if (uVar3 < 0x80) {
    lStack_1b0 = 1;
  }
  else if (uVar3 < 0x4000) {
    lStack_1b0 = 2;
  }
  else if (uVar3 < 0x200000) {
    lStack_1b0 = 3;
  }
  else {
    lStack_1b0 = 4;
    if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
      lStack_1b0 = 5;
    }
  }
  uVar24 = (ulong)puStack_1a0 & 0xc000000000000001;
  lVar9 = lVar14;
  _swift_getAssociatedConformanceWitness(lVar14,param_3,lVar6,&UNK_10e814078,&UNK_10e814080);
  lVar12 = lVar6;
  if (uVar24 == 0) {
    _swift_retain(puVar10);
    __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC();
    __ss17_NativeDictionaryV12makeIteratorAB0D0Vyxq__GyF(auStack_e0);
    lVar27 = -0xa8;
    puVar11 = auStack_e0;
    __sSD8IteratorV7_nativeAByxq__Gs17_NativeDictionaryVAAVyxq__Gn_tcfC
              (auStack_b8,puVar11,lVar6,lVar5,lVar9);
  }
  else {
    FUN_10457a168(puVar10,lVar6,lVar5,lVar9);
    puVar11 = puVar10;
    __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
    _swift_unknownObjectRetain(puVar10);
    lVar27 = -0x80;
    __sSD8IteratorV6_cocoaAByxq__Gs17__CocoaDictionaryVAACn_tcfC
              (auStack_90,puVar11,lVar6,lVar5,lVar9);
  }
  lStack_1a8 = *(long *)(&stack0x00000000 + lVar27);
  lVar9 = *(long *)(&stack0xfffffffffffffff0 + lVar27);
  lVar1 = *(long *)(&stack0xfffffffffffffff8 + lVar27);
  uStack_198 = lStack_1a8 + 0x40U >> 6;
  lVar23 = *(long *)(&stack0x00000008 + lVar27);
  uVar24 = *(ulong *)(&stack0x00000010 + lVar27);
  lStack_190 = lVar7;
  do {
    lVar27 = lVar23;
    if (lVar9 < 0) {
      __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
      uStack_110 = uVar24;
      if (puVar11 == (undefined1 *)0x0) {
LAB_1045513f4:
        uVar15 = 1;
      }
      else {
        __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(lVar22);
        _swift_unknownObjectRelease(puVar11);
        __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF
                  (lVar22 + *(int *)(lVar7 + 0x30),lVar12,lVar5,lVar5);
        _swift_unknownObjectRelease(lVar12);
        uVar15 = 0;
      }
    }
    else {
      uVar21 = uVar24;
      if (uVar24 == 0) {
        uVar26 = uStack_198;
        if ((long)uStack_198 <= lVar23 + 1) {
          uVar26 = lVar23 + 1;
        }
        lVar12 = lVar23;
        do {
          lVar27 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104551724);
            (*pcVar4)();
          }
          if ((long)uStack_198 <= lVar27) {
            uStack_110 = 0;
            lVar27 = uVar26 - 1;
            goto LAB_1045513f4;
          }
          uVar21 = *(ulong *)(lVar1 + lVar27 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar21 == 0);
      }
      uVar26 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
      uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
      uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
      uVar26 = LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) | lVar27 << 6;
      lVar12 = lVar14;
      _swift_getAssociatedConformanceWitness(lVar14,param_3,lVar6,&UNK_10e814078,&UNK_10e814080);
      lVar7 = lVar9;
      __ss17_NativeDictionaryV5_keysSpyxGvg(lVar9,lVar6,lVar5,lVar12);
      (**(code **)(lVar18 + 0x10))(lVar22,lVar7 + *(long *)(lVar18 + 0x48) * uVar26,lVar6);
      FUN_10456d188(lVar9,lVar6,lVar5,lVar12);
      lVar7 = lStack_190;
      iVar2 = *(int *)(lStack_190 + 0x30);
      lVar25 = lVar9;
      __ss17_NativeDictionaryV7_valuesSpyq_Gvg(lVar9,lVar6,lVar5,lVar12);
      (**(code **)(lVar16 + 0x10))(lVar22 + iVar2,lVar25 + *(long *)(lVar16 + 0x48) * uVar26,lVar5);
      FUN_10456d188(lVar9,lVar6,lVar5,lVar12);
      uVar15 = 0;
      uStack_110 = uVar21 - 1 & uVar21;
    }
    lVar25 = *(long *)(lVar7 + -8);
    (**(code **)(lVar25 + 0x38))(lVar22,uVar15,1,lVar7);
    (**(code **)(lVar19 + 0x20))(lVar20,lVar22,lVar8);
    lVar12 = lVar20;
    (**(code **)(lVar25 + 0x30))(lVar20,1,lVar7);
    if ((int)lVar12 == 1) {
      func_0x000104552b58(lVar9,lVar1,lStack_1a8,lVar23,uVar24);
      _swift_getAssociatedConformanceWitness(lVar14,param_3,lVar6,&UNK_10e814078,&UNK_10e814080);
      puVar10 = puStack_1a0;
      __sSD5countSivg(puStack_1a0,lVar6,lVar5,lVar14);
      lVar7 = (long)puVar10 * lStack_1b0;
      if (SUB168(SEXT816((long)puVar10) * SEXT816(lStack_1b0),8) != lVar7 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104551730);
        (*pcVar4)();
      }
      if (!SCARRY8(*unaff_x20,lVar7)) {
        *unaff_x20 = *unaff_x20 + lVar7;
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104551734);
      (*pcVar4)();
    }
    iVar2 = *(int *)(lVar7 + 0x30);
    (**(code **)(lVar18 + 0x20))(puVar28,lVar20,lVar6);
    (**(code **)(lVar16 + 0x20))(lVar17,lVar20 + iVar2,lVar5);
    uStack_58 = 0;
    (**(code **)(lVar14 + 0x30))(puVar28,1,&uStack_58,&UNK_110786a78,&PTR_DAT_110786a90,param_3);
    if (unaff_x21 != 0) {
      func_0x000104552b58(lVar9,lVar1,lStack_1a8,lVar23,uVar24);
      (**(code **)(lVar16 + 8))(lVar17,lVar5);
      (**(code **)(lVar18 + 8))(puVar28,lVar6);
      return;
    }
    (**(code **)(lVar13 + 0x30))(lVar17,2,&uStack_58,&UNK_110786a78,&PTR_DAT_110786a90,param_4);
    (**(code **)(lVar16 + 8))(lVar17,lVar5);
    puVar11 = puVar28;
    lVar12 = lVar6;
    (**(code **)(lVar18 + 8))();
    if (uStack_58 < 0x80) {
      lVar23 = 1;
    }
    else if ((long)uStack_58 < 0) {
      lVar23 = 10;
    }
    else if (uStack_58 >> 0x23 == 0) {
      if (uStack_58 < 0x200000) {
        lVar23 = 2;
        if (uStack_58 < 0x4000) goto LAB_1045515dc;
      }
      else {
        lVar23 = 4;
        uVar24 = uStack_58 >> 0x1c;
joined_r0x0001045515d4:
        if (uVar24 == 0) goto LAB_1045515dc;
      }
LAB_1045515d8:
      lVar23 = lVar23 + 1;
    }
    else {
      if (uStack_58 >> 0x31 != 0) {
        lVar23 = 8;
        uVar24 = uStack_58 >> 0x38;
        goto joined_r0x0001045515d4;
      }
      lVar23 = 6;
      if (uStack_58 >> 0x2a != 0) goto LAB_1045515d8;
    }
LAB_1045515dc:
    if (SCARRY8(lVar23,uStack_58)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104551728);
      (*pcVar4)();
    }
    if (SCARRY8(*unaff_x20,lVar23 + uStack_58)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10455172c);
      (*pcVar4)();
    }
    *unaff_x20 = *unaff_x20 + lVar23 + uStack_58;
    lVar23 = lVar27;
    uVar24 = uStack_110;
  } while( true );
}



/* Entry: 104551734; end: 104551eb7;  */

void FUN_104551734(undefined1 *param_1,uint param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long extraout_x12;
  ulong uVar18;
  long *unaff_x20;
  long lVar19;
  long unaff_x21;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined1 *puVar24;
  long lStack_180;
  undefined1 *puStack_178;
  long lStack_170;
  ulong uStack_c8;
  undefined1 auStack_b8 [40];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_58;
  
  lVar21 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar20 = (long)&lStack_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(param_5 + 8);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar24 = (undefined1 *)(lVar20 - extraout_x8_00);
  lVar5 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,lVar4,param_4,"key value ",0);
  lVar6 = 0;
  __sSqMa();
  lVar12 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar15 = (long)puVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar15 - extraout_x12;
  uVar2 = param_2 << 3;
  if (uVar2 < 0x80) {
    lStack_180 = 1;
  }
  else if (uVar2 < 0x4000) {
    lStack_180 = 2;
  }
  else if (uVar2 < 0x200000) {
    lStack_180 = 3;
  }
  else {
    lStack_180 = 4;
    if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
      lStack_180 = 5;
    }
  }
  lVar16 = lVar9;
  _swift_getAssociatedConformanceWitness(lVar9,param_3,lVar4,&UNK_10e814078,&UNK_10e814080);
  lVar8 = lVar4;
  puStack_178 = param_1;
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    _swift_retain(param_1);
    __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC();
    __ss17_NativeDictionaryV12makeIteratorAB0D0Vyxq__GyF(auStack_b8);
    puVar7 = auStack_b8;
    __sSD8IteratorV7_nativeAByxq__Gs17_NativeDictionaryVAAVyxq__Gn_tcfC
              (&lStack_90,puVar7,lVar4,param_4,lVar16);
  }
  else {
    FUN_10457a168(param_1,lVar4,param_4,lVar16);
    puVar7 = param_1;
    __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
    _swift_unknownObjectRetain(param_1);
    __sSD8IteratorV6_cocoaAByxq__Gs17__CocoaDictionaryVAACn_tcfC
              (&lStack_90,puVar7,lVar4,param_4,lVar16);
  }
  lStack_170 = lStack_80;
  uVar18 = lStack_80 + 0x40U >> 6;
  uVar17 = uStack_70;
  lVar16 = lStack_78;
  do {
    lVar23 = lVar16;
    if (lStack_90 < 0) {
      __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
      uStack_c8 = uVar17;
      if (puVar7 == (undefined1 *)0x0) {
LAB_104551bb0:
        uVar10 = 1;
      }
      else {
        __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(lVar15);
        _swift_unknownObjectRelease(puVar7);
        __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF
                  (lVar15 + *(int *)(lVar5 + 0x30),lVar8,param_4,param_4);
        _swift_unknownObjectRelease(lVar8);
        uVar10 = 0;
      }
    }
    else {
      uVar14 = uVar17;
      if (uVar17 == 0) {
        uVar22 = uVar18;
        if ((long)uVar18 <= lVar16 + 1) {
          uVar22 = lVar16 + 1;
        }
        lVar8 = lVar16;
        do {
          lVar23 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104551ea8);
            (*pcVar3)();
          }
          if ((long)uVar18 <= lVar23) {
            uStack_c8 = 0;
            lVar23 = uVar22 - 1;
            goto LAB_104551bb0;
          }
          uVar14 = *(ulong *)(lStack_88 + lVar23 * 8);
          lVar8 = lVar8 + 1;
        } while (uVar14 == 0);
      }
      uVar22 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
      uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar22 = LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) | lVar23 << 6;
      lVar8 = lVar9;
      _swift_getAssociatedConformanceWitness(lVar9,param_3,lVar4,&UNK_10e814078,&UNK_10e814080);
      lVar19 = lStack_90;
      __ss17_NativeDictionaryV5_keysSpyxGvg(lStack_90,lVar4,param_4,lVar8);
      (**(code **)(lVar11 + 0x10))(lVar15,lVar19 + *(long *)(lVar11 + 0x48) * uVar22,lVar4);
      FUN_10456d188(lStack_90,lVar4,param_4,lVar8);
      iVar1 = *(int *)(lVar5 + 0x30);
      lVar19 = lStack_90;
      __ss17_NativeDictionaryV7_valuesSpyq_Gvg(lStack_90,lVar4,param_4,lVar8);
      (**(code **)(lVar21 + 0x10))
                (lVar15 + iVar1,lVar19 + *(long *)(lVar21 + 0x48) * uVar22,param_4);
      FUN_10456d188(lStack_90,lVar4,param_4,lVar8);
      uVar10 = 0;
      uStack_c8 = uVar14 - 1 & uVar14;
    }
    lVar19 = *(long *)(lVar5 + -8);
    (**(code **)(lVar19 + 0x38))(lVar15,uVar10,1,lVar5);
    (**(code **)(lVar12 + 0x20))(lVar13,lVar15,lVar6);
    lVar8 = lVar13;
    (**(code **)(lVar19 + 0x30))(lVar13,1,lVar5);
    if ((int)lVar8 == 1) {
      func_0x000104552b58(lStack_90,lStack_88,lStack_170,lVar16,uVar17);
      _swift_getAssociatedConformanceWitness(lVar9,param_3,lVar4,&UNK_10e814078,&UNK_10e814080);
      puVar24 = puStack_178;
      __sSD5countSivg(puStack_178,lVar4,param_4,lVar9);
      lVar4 = (long)puVar24 * lStack_180;
      if (SUB168(SEXT816((long)puVar24) * SEXT816(lStack_180),8) != lVar4 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104551eb4);
        (*pcVar3)();
      }
      if (!SCARRY8(*unaff_x20,lVar4)) {
        *unaff_x20 = *unaff_x20 + lVar4;
        return;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104551eb8);
      (*pcVar3)();
    }
    iVar1 = *(int *)(lVar5 + 0x30);
    (**(code **)(lVar11 + 0x20))(puVar24,lVar13,lVar4);
    (**(code **)(lVar21 + 0x20))(lVar20,lVar13 + iVar1,param_4);
    uStack_58 = 0;
    (**(code **)(lVar9 + 0x30))(puVar24,1,&uStack_58,&UNK_110786a78,&PTR_DAT_110786a90,param_3);
    if (unaff_x21 != 0) {
      func_0x000104552b58(lStack_90,lStack_88,lStack_170,lVar16,uVar17);
      (**(code **)(lVar21 + 8))(lVar20,param_4);
      (**(code **)(lVar11 + 8))(puVar24,lVar4);
      return;
    }
    func_0x000100075f10(lVar20,2,param_4,param_6);
    (**(code **)(lVar21 + 8))(lVar20,param_4);
    puVar7 = puVar24;
    lVar8 = lVar4;
    (**(code **)(lVar11 + 8))();
    if (uStack_58 < 0x80) {
      lVar16 = 1;
    }
    else if ((long)uStack_58 < 0) {
      lVar16 = 10;
    }
    else if (uStack_58 >> 0x23 == 0) {
      if (uStack_58 < 0x200000) {
        lVar16 = 2;
        if (uStack_58 < 0x4000) goto LAB_104551d70;
      }
      else {
        lVar16 = 4;
        uVar17 = uStack_58 >> 0x1c;
joined_r0x000104551d68:
        if (uVar17 == 0) goto LAB_104551d70;
      }
LAB_104551d6c:
      lVar16 = lVar16 + 1;
    }
    else {
      if (uStack_58 >> 0x31 != 0) {
        lVar16 = 8;
        uVar17 = uStack_58 >> 0x38;
        goto joined_r0x000104551d68;
      }
      lVar16 = 6;
      if (uStack_58 >> 0x2a != 0) goto LAB_104551d6c;
    }
LAB_104551d70:
    if (SCARRY8(lVar16,uStack_58)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104551eac);
      (*pcVar3)();
    }
    if (SCARRY8(*unaff_x20,lVar16 + uStack_58)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104551eb0);
      (*pcVar3)();
    }
    *unaff_x20 = *unaff_x20 + lVar16 + uStack_58;
    uVar17 = uStack_c8;
    lVar16 = lVar23;
  } while( true );
}



/* Entry: 104551eb8; end: 10455269b;  */

void FUN_104551eb8(undefined1 *param_1,uint param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  undefined1 *puVar15;
  long lVar16;
  long extraout_x8_01;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long extraout_x12;
  long *unaff_x20;
  long lVar21;
  long unaff_x21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined1 auStack_1a0 [8];
  long lStack_198;
  undefined1 *puStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_118;
  ulong uStack_110;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [48];
  ulong uStack_58;
  
  lVar13 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(param_5 + 8);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = puVar10 + -extraout_x8_00;
  lVar5 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,lVar4,param_4,"key value ",0);
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lVar16 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar23 = (long)puVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar23 - extraout_x12;
  uVar2 = param_2 << 3;
  if (uVar2 < 0x80) {
    lStack_198 = 1;
  }
  else if (uVar2 < 0x4000) {
    lStack_198 = 2;
  }
  else if (uVar2 < 0x200000) {
    lStack_198 = 3;
  }
  else {
    lStack_198 = 4;
    if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
      lStack_198 = 5;
    }
  }
  lVar7 = lVar11;
  _swift_getAssociatedConformanceWitness(lVar11,param_3,lVar4,&UNK_10e814078,&UNK_10e814080);
  lVar9 = lVar4;
  puStack_190 = param_1;
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    _swift_retain(param_1);
    __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC();
    __ss17_NativeDictionaryV12makeIteratorAB0D0Vyxq__GyF(auStack_e0);
    lVar21 = -0xa8;
    puVar8 = auStack_e0;
    __sSD8IteratorV7_nativeAByxq__Gs17_NativeDictionaryVAAVyxq__Gn_tcfC
              (auStack_b8,puVar8,lVar4,param_4,lVar7);
  }
  else {
    FUN_10457a168(param_1,lVar4,param_4,lVar7);
    puVar8 = param_1;
    __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
    _swift_unknownObjectRetain(param_1);
    lVar21 = -0x80;
    __sSD8IteratorV6_cocoaAByxq__Gs17__CocoaDictionaryVAACn_tcfC
              (auStack_90,puVar8,lVar4,param_4,lVar7);
  }
  lStack_188 = *(long *)(&stack0x00000000 + lVar21);
  lVar7 = *(long *)(&stack0xfffffffffffffff0 + lVar21);
  lStack_180 = *(long *)(&stack0xfffffffffffffff8 + lVar21);
  uVar24 = lStack_188 + 0x40U >> 6;
  lVar20 = *(long *)(&stack0x00000008 + lVar21);
  uVar19 = *(ulong *)(&stack0x00000010 + lVar21);
  do {
    lStack_118 = lVar20;
    if (lVar7 < 0) {
      __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
      uStack_110 = uVar19;
      if (puVar8 == (undefined1 *)0x0) {
LAB_104552384:
        uVar12 = 1;
      }
      else {
        __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(lVar23);
        _swift_unknownObjectRelease(puVar8);
        __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF
                  (lVar23 + *(int *)(lVar5 + 0x30),lVar9,param_4,param_4);
        _swift_unknownObjectRelease(lVar9);
        uVar12 = 0;
      }
    }
    else {
      uVar17 = uVar19;
      if (uVar19 == 0) {
        uVar22 = uVar24;
        if ((long)uVar24 <= lVar20 + 1) {
          uVar22 = lVar20 + 1;
        }
        lVar9 = lVar20;
        do {
          lStack_118 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10455268c);
            (*pcVar3)();
          }
          if ((long)uVar24 <= lStack_118) {
            uStack_110 = 0;
            lStack_118 = uVar22 - 1;
            goto LAB_104552384;
          }
          uVar17 = *(ulong *)(lStack_180 + lStack_118 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar17 == 0);
      }
      uVar22 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
      uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar22 = LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) | lStack_118 << 6;
      lVar9 = lVar11;
      _swift_getAssociatedConformanceWitness(lVar11,param_3,lVar4,&UNK_10e814078,&UNK_10e814080);
      lVar21 = lVar7;
      __ss17_NativeDictionaryV5_keysSpyxGvg(lVar7,lVar4,param_4,lVar9);
      (**(code **)(lVar14 + 0x10))(lVar23,lVar21 + *(long *)(lVar14 + 0x48) * uVar22,lVar4);
      FUN_10456d188(lVar7,lVar4,param_4,lVar9);
      iVar1 = *(int *)(lVar5 + 0x30);
      lVar21 = lVar7;
      __ss17_NativeDictionaryV7_valuesSpyq_Gvg(lVar7,lVar4,param_4,lVar9);
      (**(code **)(lVar13 + 0x10))
                (lVar23 + iVar1,lVar21 + *(long *)(lVar13 + 0x48) * uVar22,param_4);
      FUN_10456d188(lVar7,lVar4,param_4,lVar9);
      uVar12 = 0;
      uStack_110 = uVar17 - 1 & uVar17;
    }
    lVar21 = *(long *)(lVar5 + -8);
    (**(code **)(lVar21 + 0x38))(lVar23,uVar12,1,lVar5);
    (**(code **)(lVar16 + 0x20))(lVar18,lVar23,lVar6);
    lVar9 = lVar18;
    (**(code **)(lVar21 + 0x30))(lVar18,1,lVar5);
    if ((int)lVar9 == 1) {
      func_0x000104552b58(lVar7,lStack_180,lStack_188,lVar20,uVar19);
      _swift_getAssociatedConformanceWitness(lVar11,param_3,lVar4,&UNK_10e814078,&UNK_10e814080);
      puVar10 = puStack_190;
      __sSD5countSivg(puStack_190,lVar4,param_4,lVar11);
      lVar4 = (long)puVar10 * lStack_198;
      if (SUB168(SEXT816((long)puVar10) * SEXT816(lStack_198),8) != lVar4 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104552698);
        (*pcVar3)();
      }
      if (!SCARRY8(*unaff_x20,lVar4)) {
        *unaff_x20 = *unaff_x20 + lVar4;
        return;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10455269c);
      (*pcVar3)();
    }
    iVar1 = *(int *)(lVar5 + 0x30);
    (**(code **)(lVar14 + 0x20))(puVar15,lVar18,lVar4);
    (**(code **)(lVar13 + 0x20))(puVar10,lVar18 + iVar1,param_4);
    uStack_58 = 0;
    (**(code **)(lVar11 + 0x30))(puVar15,1,&uStack_58,&UNK_110786a78,&PTR_DAT_110786a90,param_3);
    if (unaff_x21 != 0) {
      func_0x000104552b58(lVar7,lStack_180,lStack_188,lVar20,uVar19);
      (**(code **)(lVar13 + 8))(puVar10,param_4);
      (**(code **)(lVar14 + 8))(puVar15,lVar4);
      return;
    }
    FUN_104550bac(puVar10,2,param_4,param_7);
    (**(code **)(lVar13 + 8))(puVar10,param_4);
    puVar8 = puVar15;
    lVar9 = lVar4;
    (**(code **)(lVar14 + 8))();
    if (uStack_58 < 0x80) {
      lVar21 = 1;
    }
    else if ((long)uStack_58 < 0) {
      lVar21 = 10;
    }
    else {
      if (uStack_58 >> 0x23 == 0) {
        if (0x1fffff < uStack_58) {
          lVar21 = 4;
          uVar19 = uStack_58 >> 0x1c;
          goto joined_r0x000104552568;
        }
        lVar21 = 2;
        if (uStack_58 < 0x4000) goto LAB_104552508;
      }
      else {
        if (uStack_58 >> 0x31 == 0) {
          uVar19 = uStack_58 >> 0x2a;
          lVar21 = 6;
        }
        else {
          lVar21 = 8;
          uVar19 = uStack_58 >> 0x38;
        }
joined_r0x000104552568:
        if (uVar19 == 0) goto LAB_104552508;
      }
      lVar21 = lVar21 + 1;
    }
LAB_104552508:
    if (SCARRY8(lVar21,uStack_58)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104552690);
      (*pcVar3)();
    }
    if (SCARRY8(*unaff_x20,lVar21 + uStack_58)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104552694);
      (*pcVar3)();
    }
    *unaff_x20 = *unaff_x20 + lVar21 + uStack_58;
    lVar20 = lStack_118;
    uVar19 = uStack_110;
  } while( true );
}



/* Entry: 10455269c; end: 104552917;  */

void FUN_10455269c(void)

{
  func_0x000104552ab0();
  return;
}



/* Entry: 104552918; end: 10455297b;  */

void FUN_104552918(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *unaff_x20;
  
  iVar3 = (int)((ulong)param_1 >> 0x20);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar4 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar4 == 0) {
      uVar5 = param_2 >> 0x30 & 0xff;
    }
    else {
      if (SBORROW4(iVar3,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10455297c);
        (*pcVar2)();
      }
      uVar5 = (ulong)(iVar3 - (int)param_1);
    }
  }
  else if (uVar4 == 2) {
    uVar5 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104552948);
      (*pcVar2)();
    }
  }
  else {
    uVar5 = 0;
  }
  if (!SCARRY8(*unaff_x20,uVar5)) {
    *unaff_x20 = *unaff_x20 + uVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104552978);
  (*pcVar2)();
}



/* Entry: 10455297c; end: 104552a47;  */

void FUN_10455297c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
  if (param_2 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104552a30);
    (*pcVar2)();
  }
  if (0x7fffffff < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104552a34);
    (*pcVar2)();
  }
  func_0x000100075fc4();
  if (SCARRY8(param_2,4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104552a38);
    (*pcVar2)();
  }
  func_0x000100075c9c(param_3,param_4);
  if (unaff_x21 == 0) {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104552a3c);
      (*pcVar2)();
    }
    lVar3 = param_3;
    func_0x00010007629c();
    if (SCARRY8(lVar3,param_3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104552a40);
      (*pcVar2)();
    }
    lVar1 = param_2 + 4 + lVar3 + param_3;
    if (SCARRY8(param_2 + 4,lVar3 + param_3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104552a44);
      (*pcVar2)();
    }
    if (SCARRY8(*unaff_x20,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104552a48);
      (*pcVar2)();
    }
    *unaff_x20 = *unaff_x20 + lVar1;
  }
  return;
}



/* Entry: 104552a48; end: 104552a5b;  */

void FUN_104552a48(void)

{
  FUN_10455297c();
  return;
}



/* Entry: 104552a5c; end: 104552b5f;  */

void FUN_104552a5c(uint param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *unaff_x20;
  
  lVar1 = 5;
  if ((param_1 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 6;
  }
  lVar2 = 4;
  if (0x1fffff < param_1 << 3) {
    lVar2 = lVar1;
  }
  if ((param_1 & 0x1fffffff) >> 0xb == 0) {
    lVar2 = 3;
  }
  lVar1 = 2;
  if (0x7f < param_1 << 3) {
    lVar1 = lVar2;
  }
  if (!SCARRY8(*unaff_x20,lVar1)) {
    *unaff_x20 = *unaff_x20 + lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104552ab0);
  (*pcVar3)();
}



/* Entry: 104552b60; end: 104552b73;  */

void FUN_104552b60(void)

{
  FUN_104552b74();
  return;
}



/* Entry: 104552b74; end: 104552bcf;  */

void FUN_104552b74(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *param_2;
  (**(code **)(*(long *)(unaff_x20 + 0x18) + 0x28))(lVar2,*(long *)(unaff_x20 + 0x18));
  func_0x000100075fc4();
  if (!SCARRY8(lVar3,lVar2)) {
    *param_1 = lVar3 + lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104552bd0);
  (*pcVar1)();
}



/* Entry: 104552bd0; end: 104552bdf;  */

undefined1  [16] FUN_104552bd0(void)

{
  return ZEXT816(0x110786c68);
}



/* Entry: 104552be0; end: 104552d97;  */

void FUN_104552be0(void)

{
  func_0x0001000761e4();
  return;
}



/* Entry: 104552d98; end: 104552da7;  */

undefined1  [16] FUN_104552d98(void)

{
  return ZEXT816(0x110786ed0);
}



/* Entry: 104552da8; end: 104552fcf;  */

void FUN_104552da8(long param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  long unaff_x20;
  undefined1 *puVar7;
  long unaff_x21;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined1 *)0x2;
  func_0x0001000768d0(param_3,2);
  uVar2 = (uint)(param_2 >> 0x20);
  uVar5 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar5 == 0) {
      puVar9 = (undefined1 *)(param_2 >> 0x30 & 0xff);
      puVar7 = (undefined1 *)(unaff_x20 + 8);
      func_0x0001000769c4(puVar9);
      uStack_66 = (undefined1)param_1;
      uStack_65 = (undefined1)((ulong)param_1 >> 8);
      uStack_64 = (undefined1)((ulong)param_1 >> 0x10);
      uStack_63 = (undefined1)((ulong)param_1 >> 0x18);
      uStack_62 = (undefined1)((ulong)param_1 >> 0x20);
      uStack_61 = (undefined1)((ulong)param_1 >> 0x28);
      uStack_60 = (undefined1)((ulong)param_1 >> 0x30);
      uStack_5f = (undefined1)((ulong)param_1 >> 0x38);
      uStack_5e = (undefined1)param_2;
      uStack_5d = (undefined1)(param_2 >> 8);
      uStack_5c = (undefined1)(param_2 >> 0x10);
      uStack_5b = (undefined1)(param_2 >> 0x18);
      uStack_5a = (undefined1)(param_2 >> 0x20);
      uStack_59 = (undefined1)(param_2 >> 0x28);
      if (puVar9 != (undefined1 *)0x0) {
        puVar7 = *(undefined1 **)(unaff_x20 + 8);
        puVar4 = &uStack_66;
        param_3 = puVar9;
        _memcpy(puVar7,puVar4,puVar9);
        *(undefined1 **)(unaff_x20 + 8) = puVar7 + (long)puVar9;
      }
      goto LAB_104552f80;
    }
    iVar8 = (int)param_1;
    iVar6 = (int)((ulong)param_1 >> 0x20);
    if (SBORROW4(iVar6,iVar8)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104552fc0);
      (*pcVar3)();
    }
    puVar9 = (undefined1 *)(long)(iVar6 - iVar8);
    func_0x0001000769c4();
    lVar11 = (long)iVar8;
    puVar10 = (undefined1 *)((param_1 >> 0x20) - lVar11);
    if (param_1 >> 0x20 < lVar11) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104552fc4);
      (*pcVar3)();
    }
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    puVar7 = puVar9;
    if (puVar9 != (undefined1 *)0x0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar11,(long)puVar7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104552fcc);
        (*pcVar3)();
      }
      puVar9 = puVar9 + (lVar11 - (long)puVar7);
    }
  }
  else {
    if (uVar5 != 2) {
      puVar7 = (undefined1 *)(unaff_x20 + 8);
      func_0x0001000769c4(0);
      goto LAB_104552f80;
    }
    puVar9 = (undefined1 *)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104552fbc);
      (*pcVar3)();
    }
    func_0x0001000769c4();
    lVar11 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    puVar7 = puVar9;
    if (puVar9 != (undefined1 *)0x0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar11,(long)puVar7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104552fc8);
        (*pcVar3)();
      }
      puVar9 = puVar9 + (lVar11 - (long)puVar7);
    }
    puVar10 = (undefined1 *)(lVar1 - lVar11);
    if (SBORROW8(lVar1,lVar11)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104552ef0);
      (*pcVar3)();
    }
  }
  __s10Foundation13__DataStorageC7_lengthSivg();
  if ((long)puVar10 <= (long)puVar7) {
    puVar7 = puVar10;
  }
  if ((puVar9 != (undefined1 *)0x0) && (puVar7 != (undefined1 *)0x0)) {
    lVar11 = *(long *)(unaff_x20 + 8);
    param_3 = puVar7;
    _memmove(lVar11,puVar9,puVar7);
    *(undefined1 **)(unaff_x20 + 8) = puVar7 + lVar11;
    puVar4 = puVar9;
  }
LAB_104552f80:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001000768d0(puVar4,3);
  (**(code **)(param_4 + 0x48))(puVar7,&UNK_110786ed0,&PTR_DAT_110786ee8,param_3,param_4);
  if (unaff_x21 == 0) {
    func_0x0001000768d0(puVar4,4);
  }
  return;
}



/* Entry: 104552fd0; end: 10455306f;  */

void FUN_104552fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  
  func_0x0001000768d0(param_2,3);
  (**(code **)(param_4 + 0x48))();
  if (unaff_x21 == 0) {
    func_0x0001000768d0(param_2,4);
  }
  return;
}



/* Entry: 104553070; end: 104553153;  */

void FUN_104553070(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x0001000768d0(param_2,2);
  uVar10 = *(ulong *)(param_1 + 0x10);
  if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104553154);
    (*pcVar1)();
  }
  func_0x0001000769c4(uVar10 << 2);
  if (uVar10 == 0) {
    return;
  }
  puVar5 = *(undefined4 **)(unaff_x20 + 8);
  if ((uVar10 < 8) || ((ulong)((long)puVar5 + (-0x20 - param_1)) < 0x20)) {
    uVar3 = 0;
    puVar2 = puVar5;
  }
  else {
    uVar3 = uVar10 & 0x1ffffffffffffff8;
    puVar2 = puVar5 + uVar3;
    puVar7 = (undefined8 *)(puVar5 + 4);
    puVar8 = (undefined8 *)(param_1 + 0x30);
    uVar9 = uVar3;
    do {
      uVar11 = puVar8[-2];
      uVar13 = puVar8[1];
      uVar12 = *puVar8;
      puVar7[-1] = puVar8[-1];
      puVar7[-2] = uVar11;
      puVar7[1] = uVar13;
      *puVar7 = uVar12;
      puVar7 = puVar7 + 4;
      puVar8 = puVar8 + 4;
      uVar9 = uVar9 - 8;
    } while (uVar9 != 0);
    if (uVar10 == uVar3) goto LAB_1045530fc;
  }
  lVar6 = uVar10 - uVar3;
  puVar5 = puVar2;
  puVar4 = (undefined4 *)(param_1 + uVar3 * 4 + 0x20);
  do {
    puVar2 = puVar5 + 1;
    *puVar5 = *puVar4;
    lVar6 = lVar6 + -1;
    puVar5 = puVar2;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
LAB_1045530fc:
  *(undefined4 **)(unaff_x20 + 8) = puVar2;
  return;
}



/* Entry: 104553154; end: 104553237;  */

void FUN_104553154(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  func_0x0001000768d0(param_2,2);
  uVar8 = *(ulong *)(param_1 + 0x10);
  if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104553238);
    (*pcVar1)();
  }
  func_0x0001000769c4(uVar8 << 3);
  if (uVar8 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(unaff_x20 + 8);
  if ((uVar8 < 6) || ((ulong)((long)puVar5 + (-0x20 - param_1)) < 0x20)) {
    uVar3 = 0;
    puVar2 = puVar5;
  }
  else {
    uVar3 = uVar8 & 0xffffffffffffffc;
    puVar2 = puVar5 + uVar3;
    puVar5 = puVar5 + 2;
    puVar4 = (undefined8 *)(param_1 + 0x30);
    uVar7 = uVar3;
    do {
      uVar9 = puVar4[-2];
      uVar11 = puVar4[1];
      uVar10 = *puVar4;
      puVar5[-1] = puVar4[-1];
      puVar5[-2] = uVar9;
      puVar5[1] = uVar11;
      *puVar5 = uVar10;
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 4;
      uVar7 = uVar7 - 4;
    } while (uVar7 != 0);
    if (uVar8 == uVar3) goto LAB_1045531e0;
  }
  lVar6 = uVar8 - uVar3;
  puVar5 = puVar2;
  puVar4 = (undefined8 *)(param_1 + uVar3 * 8 + 0x20);
  do {
    puVar2 = puVar5 + 1;
    *puVar5 = *puVar4;
    lVar6 = lVar6 + -1;
    puVar5 = puVar2;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
LAB_1045531e0:
  *(undefined8 **)(unaff_x20 + 8) = puVar2;
  return;
}



/* Entry: 104553238; end: 10455335b;  */

void FUN_104553238(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  
  func_0x0001000768d0(param_2,2);
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    func_0x0001000769c4(0);
  }
  else {
    lVar6 = 0;
    lVar5 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x20 + lVar6 * 4);
      if ((int)uVar2 < 0) {
        lVar11 = 10;
      }
      else if (uVar2 < 0x80) {
        lVar11 = 1;
      }
      else if (uVar2 >> 0xe == 0) {
        lVar11 = 2;
      }
      else {
        lVar1 = 4;
        if (uVar2 >> 0x1c != 0) {
          lVar1 = 5;
        }
        lVar11 = 3;
        if (0x1fffff < uVar2) {
          lVar11 = lVar1;
        }
      }
      bVar4 = SCARRY8(lVar5,lVar11);
      lVar5 = lVar5 + lVar11;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10455335c);
        (*pcVar3)();
      }
      lVar6 = lVar6 + 1;
    } while (lVar13 != lVar6);
    func_0x0001000769c4();
    lVar6 = 0;
    pbVar8 = *(byte **)(unaff_x20 + 8);
    do {
      uVar2 = *(uint *)(param_1 + 0x20 + lVar6 * 4);
      uVar9 = (ulong)(int)uVar2;
      pbVar7 = pbVar8;
      uVar10 = uVar9;
      if (0x7f < uVar2) {
        do {
          pbVar8 = pbVar7 + 1;
          *pbVar7 = (byte)uVar10 | 0x80;
          uVar9 = uVar10 >> 7;
          uVar12 = uVar10 >> 0xe;
          pbVar7 = pbVar8;
          uVar10 = uVar9;
        } while (uVar12 != 0);
      }
      lVar6 = lVar6 + 1;
      pbVar7 = pbVar8 + 1;
      *pbVar8 = (byte)uVar9;
      pbVar8 = pbVar7;
    } while (lVar6 != lVar13);
    *(byte **)(unaff_x20 + 8) = pbVar7;
  }
  return;
}



/* Entry: 10455335c; end: 104553487;  */

void FUN_10455335c(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  
  func_0x0001000768d0(param_2,2);
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    func_0x0001000769c4(0);
  }
  else {
    lVar6 = 0;
    lVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x20 + lVar6 * 4);
      uVar1 = iVar2 << 1 ^ iVar2 >> 0x1f;
      if (uVar1 < 0x80) {
        lVar9 = 1;
      }
      else if (uVar1 >> 0xe == 0) {
        lVar9 = 2;
      }
      else if (uVar1 < 0x200000) {
        lVar9 = 3;
      }
      else {
        lVar9 = 4;
        if (uVar1 >> 0x1c != 0) {
          lVar9 = 5;
        }
      }
      bVar4 = SCARRY8(lVar5,lVar9);
      lVar5 = lVar5 + lVar9;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104553488);
        (*pcVar3)();
      }
      lVar6 = lVar6 + 1;
    } while (lVar13 != lVar6);
    func_0x0001000769c4();
    lVar6 = 0;
    pbVar8 = *(byte **)(unaff_x20 + 8);
    do {
      lVar5 = (long)*(int *)(param_1 + 0x20 + lVar6 * 4);
      uVar10 = lVar5 << 1 ^ lVar5 >> 0x3f;
      pbVar7 = pbVar8;
      uVar11 = uVar10;
      if (0x7f < uVar10) {
        do {
          pbVar8 = pbVar7 + 1;
          *pbVar7 = (byte)uVar11 | 0x80;
          uVar10 = uVar11 >> 7;
          uVar12 = uVar11 >> 0xe;
          pbVar7 = pbVar8;
          uVar11 = uVar10;
        } while (uVar12 != 0);
      }
      lVar6 = lVar6 + 1;
      pbVar7 = pbVar8 + 1;
      *pbVar8 = (byte)uVar10;
      pbVar8 = pbVar7;
    } while (lVar6 != lVar13);
    *(byte **)(unaff_x20 + 8) = pbVar7;
  }
  return;
}



/* Entry: 104553488; end: 1045535eb;  */

void FUN_104553488(long param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  
  func_0x0001000768d0(param_2,2);
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    func_0x0001000769c4(0);
  }
  else {
    lVar4 = 0;
    lVar3 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x20 + lVar4 * 8);
      uVar8 = lVar7 << 1 ^ lVar7 >> 0x3f;
      if (uVar8 < 0x80) {
        lVar7 = 1;
      }
      else if ((long)uVar8 < 0) {
        lVar7 = 10;
      }
      else if (uVar8 >> 0x23 == 0) {
        if (uVar8 < 0x200000) {
          lVar7 = 2;
          if (uVar8 < 0x4000) goto LAB_104553550;
        }
        else {
          lVar7 = 4;
          uVar8 = uVar8 >> 0x1c;
joined_r0x000104553548:
          if (uVar8 == 0) goto LAB_104553550;
        }
LAB_10455354c:
        lVar7 = lVar7 + 1;
      }
      else {
        if (uVar8 >> 0x31 != 0) {
          lVar7 = 8;
          uVar8 = uVar8 >> 0x38;
          goto joined_r0x000104553548;
        }
        lVar7 = 6;
        if (uVar8 >> 0x2a != 0) goto LAB_10455354c;
      }
LAB_104553550:
      bVar2 = SCARRY8(lVar3,lVar7);
      lVar3 = lVar3 + lVar7;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1045535ec);
        (*pcVar1)();
      }
      lVar4 = lVar4 + 1;
    } while (lVar11 != lVar4);
    func_0x0001000769c4();
    lVar4 = 0;
    pbVar6 = *(byte **)(unaff_x20 + 8);
    do {
      lVar3 = *(long *)(param_1 + 0x20 + lVar4 * 8);
      uVar9 = lVar3 << 1 ^ lVar3 >> 0x3f;
      pbVar5 = pbVar6;
      uVar8 = uVar9;
      if (0x7f < uVar9) {
        do {
          pbVar6 = pbVar5 + 1;
          *pbVar5 = (byte)uVar8 | 0x80;
          uVar9 = uVar8 >> 7;
          uVar10 = uVar8 >> 0xe;
          pbVar5 = pbVar6;
          uVar8 = uVar9;
        } while (uVar10 != 0);
      }
      lVar4 = lVar4 + 1;
      pbVar5 = pbVar6 + 1;
      *pbVar6 = (byte)uVar9;
      pbVar6 = pbVar5;
    } while (lVar4 != lVar11);
    *(byte **)(unaff_x20 + 8) = pbVar5;
  }
  return;
}



/* Entry: 1045535ec; end: 104553703;  */

void FUN_1045535ec(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  
  func_0x0001000768d0(param_2,2);
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    func_0x0001000769c4(0);
  }
  else {
    lVar6 = 0;
    lVar5 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x20 + lVar6 * 4);
      if (uVar2 < 0x80) {
        lVar11 = 1;
      }
      else if (uVar2 >> 0xe == 0) {
        lVar11 = 2;
      }
      else {
        lVar1 = 4;
        if (uVar2 >> 0x1c != 0) {
          lVar1 = 5;
        }
        lVar11 = 3;
        if (0x1fffff < uVar2) {
          lVar11 = lVar1;
        }
      }
      bVar4 = SCARRY8(lVar5,lVar11);
      lVar5 = lVar5 + lVar11;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104553704);
        (*pcVar3)();
      }
      lVar6 = lVar6 + 1;
    } while (lVar13 != lVar6);
    func_0x0001000769c4();
    lVar6 = 0;
    pbVar8 = *(byte **)(unaff_x20 + 8);
    do {
      uVar2 = *(uint *)(param_1 + 0x20 + lVar6 * 4);
      uVar9 = (ulong)uVar2;
      pbVar7 = pbVar8;
      uVar10 = uVar9;
      if (0x7f < uVar2) {
        do {
          pbVar8 = pbVar7 + 1;
          *pbVar7 = (byte)uVar10 | 0x80;
          uVar9 = uVar10 >> 7;
          uVar12 = uVar10 >> 0xe;
          pbVar7 = pbVar8;
          uVar10 = uVar9;
        } while (uVar12 != 0);
      }
      lVar6 = lVar6 + 1;
      pbVar7 = pbVar8 + 1;
      *pbVar8 = (byte)uVar9;
      pbVar8 = pbVar7;
    } while (lVar6 != lVar13);
    *(byte **)(unaff_x20 + 8) = pbVar7;
  }
  return;
}



/* Entry: 104553704; end: 104553857;  */

void FUN_104553704(long param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  
  func_0x0001000768d0(param_2,2);
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    func_0x0001000769c4(0);
  }
  else {
    lVar4 = 0;
    lVar3 = 0;
    do {
      uVar7 = *(ulong *)(param_1 + 0x20 + lVar4 * 8);
      if (uVar7 < 0x80) {
        lVar8 = 1;
      }
      else if ((long)uVar7 < 0) {
        lVar8 = 10;
      }
      else if (uVar7 >> 0x23 == 0) {
        if (uVar7 < 0x200000) {
          lVar8 = 2;
          if (uVar7 < 0x4000) goto LAB_1045537c4;
        }
        else {
          lVar8 = 4;
          uVar7 = uVar7 >> 0x1c;
joined_r0x0001045537bc:
          if (uVar7 == 0) goto LAB_1045537c4;
        }
LAB_1045537c0:
        lVar8 = lVar8 + 1;
      }
      else {
        if (uVar7 >> 0x31 != 0) {
          lVar8 = 8;
          uVar7 = uVar7 >> 0x38;
          goto joined_r0x0001045537bc;
        }
        lVar8 = 6;
        if (uVar7 >> 0x2a != 0) goto LAB_1045537c0;
      }
LAB_1045537c4:
      bVar2 = SCARRY8(lVar3,lVar8);
      lVar3 = lVar3 + lVar8;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104553858);
        (*pcVar1)();
      }
      lVar4 = lVar4 + 1;
    } while (lVar11 != lVar4);
    func_0x0001000769c4();
    lVar4 = 0;
    pbVar6 = *(byte **)(unaff_x20 + 8);
    do {
      uVar9 = *(ulong *)(param_1 + 0x20 + lVar4 * 8);
      pbVar5 = pbVar6;
      uVar7 = uVar9;
      if (0x7f < uVar9) {
        do {
          pbVar6 = pbVar5 + 1;
          *pbVar5 = (byte)uVar7 | 0x80;
          uVar9 = uVar7 >> 7;
          uVar10 = uVar7 >> 0xe;
          pbVar5 = pbVar6;
          uVar7 = uVar9;
        } while (uVar10 != 0);
      }
      lVar4 = lVar4 + 1;
      pbVar5 = pbVar6 + 1;
      *pbVar6 = (byte)uVar9;
      pbVar6 = pbVar5;
    } while (lVar4 != lVar11);
    *(byte **)(unaff_x20 + 8) = pbVar5;
  }
  return;
}



/* Entry: 104553858; end: 10455393b;  */

void FUN_104553858(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x0001000768d0(param_2,2);
  uVar10 = *(ulong *)(param_1 + 0x10);
  if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10455393c);
    (*pcVar1)();
  }
  func_0x0001000769c4(uVar10 << 2);
  if (uVar10 == 0) {
    return;
  }
  puVar5 = *(undefined4 **)(unaff_x20 + 8);
  if ((uVar10 < 8) || ((ulong)((long)puVar5 + (-0x20 - param_1)) < 0x20)) {
    uVar3 = 0;
    puVar2 = puVar5;
  }
  else {
    uVar3 = uVar10 & 0x1ffffffffffffff8;
    puVar2 = puVar5 + uVar3;
    puVar7 = (undefined8 *)(puVar5 + 4);
    puVar8 = (undefined8 *)(param_1 + 0x30);
    uVar9 = uVar3;
    do {
      uVar11 = puVar8[-2];
      uVar13 = puVar8[1];
      uVar12 = *puVar8;
      puVar7[-1] = puVar8[-1];
      puVar7[-2] = uVar11;
      puVar7[1] = uVar13;
      *puVar7 = uVar12;
      puVar7 = puVar7 + 4;
      puVar8 = puVar8 + 4;
      uVar9 = uVar9 - 8;
    } while (uVar9 != 0);
    if (uVar10 == uVar3) goto LAB_1045538e4;
  }
  lVar6 = uVar10 - uVar3;
  puVar5 = puVar2;
  puVar4 = (undefined4 *)(param_1 + uVar3 * 4 + 0x20);
  do {
    puVar2 = puVar5 + 1;
    *puVar5 = *puVar4;
    lVar6 = lVar6 + -1;
    puVar5 = puVar2;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
LAB_1045538e4:
  *(undefined4 **)(unaff_x20 + 8) = puVar2;
  return;
}



/* Entry: 10455393c; end: 104553a1f;  */

void FUN_10455393c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  func_0x0001000768d0(param_2,2);
  uVar8 = *(ulong *)(param_1 + 0x10);
  if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104553a20);
    (*pcVar1)();
  }
  func_0x0001000769c4(uVar8 << 3);
  if (uVar8 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(unaff_x20 + 8);
  if ((uVar8 < 6) || ((ulong)((long)puVar5 + (-0x20 - param_1)) < 0x20)) {
    uVar3 = 0;
    puVar2 = puVar5;
  }
  else {
    uVar3 = uVar8 & 0xffffffffffffffc;
    puVar2 = puVar5 + uVar3;
    puVar5 = puVar5 + 2;
    puVar4 = (undefined8 *)(param_1 + 0x30);
    uVar7 = uVar3;
    do {
      uVar9 = puVar4[-2];
      uVar11 = puVar4[1];
      uVar10 = *puVar4;
      puVar5[-1] = puVar4[-1];
      puVar5[-2] = uVar9;
      puVar5[1] = uVar11;
      *puVar5 = uVar10;
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 4;
      uVar7 = uVar7 - 4;
    } while (uVar7 != 0);
    if (uVar8 == uVar3) goto LAB_1045539c8;
  }
  lVar6 = uVar8 - uVar3;
  puVar5 = puVar2;
  puVar4 = (undefined8 *)(param_1 + uVar3 * 8 + 0x20);
  do {
    puVar2 = puVar5 + 1;
    *puVar5 = *puVar4;
    lVar6 = lVar6 + -1;
    puVar5 = puVar2;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
LAB_1045539c8:
  *(undefined8 **)(unaff_x20 + 8) = puVar2;
  return;
}



/* Entry: 104553a20; end: 104553f1f;  */

void FUN_104553a20(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined7 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  long lVar19;
  ulong uVar20;
  undefined1 *puVar21;
  ulong uVar22;
  long unaff_x20;
  ulong uVar23;
  ulong uVar24;
  ulong uVar26;
  ulong uVar28;
  ulong uVar30;
  ulong uVar32;
  ulong uVar34;
  ulong uVar36;
  ulong uVar38;
  ulong uVar25;
  ulong uVar27;
  ulong uVar29;
  ulong uVar31;
  ulong uVar33;
  ulong uVar35;
  ulong uVar37;
  ulong uVar39;
  
  func_0x0001000768d0(param_2,2);
  uVar23 = *(ulong *)(param_1 + 0x10);
  func_0x0001000769c4(uVar23);
  if (uVar23 == 0) {
    return;
  }
  puVar18 = *(ulong **)(unaff_x20 + 8);
  if ((uVar23 < 0x80) || ((undefined1 *)((long)puVar18 + (-0x20 - param_1)) < (undefined1 *)0x80)) {
    uVar20 = 0;
    puVar17 = puVar18;
  }
  else {
    uVar20 = uVar23 & 0x7fffffffffffff80;
    puVar17 = (ulong *)((long)puVar18 + uVar20);
    puVar21 = (undefined1 *)(param_1 + 0x4f);
    uVar22 = uVar20;
    do {
      uVar9 = *(ulong *)(puVar21 + 0x41);
      uVar10 = *(ulong *)(puVar21 + 0x31);
      uVar11 = *(ulong *)(puVar21 + 0x21);
      puVar1 = (undefined8 *)(puVar21 + 0x49);
      uVar12 = *(ulong *)(puVar21 + 0x11);
      puVar2 = (undefined8 *)(puVar21 + 0x39);
      puVar3 = (undefined8 *)(puVar21 + 0x29);
      puVar4 = (undefined8 *)(puVar21 + 0x19);
      uVar13 = *(ulong *)(puVar21 + 1);
      puVar5 = (undefined8 *)(puVar21 + 9);
      uVar14 = *(ulong *)(puVar21 + -0xf);
      uVar15 = *(ulong *)(puVar21 + -0x1f);
      uVar8 = *(undefined7 *)(puVar21 + -7);
      puVar6 = (undefined8 *)(puVar21 + -0x17);
      uVar16 = *(ulong *)(puVar21 + -0x2f);
      puVar7 = (undefined8 *)(puVar21 + -0x27);
      uVar25 = CONCAT71((int7)((ulong)*puVar7 >> 8),(char)*(undefined6 *)puVar7) &
               0xffffffffffffff01;
      uVar24 = CONCAT62((int6)(uVar25 >> 0x10),
                        CONCAT11((char)((uint7)*(undefined7 *)puVar7 >> 8),(char)uVar25)) &
               0xffffffffffff01ff;
      uVar25 = CONCAT53((int5)(uVar24 >> 0x18),CONCAT12((char)(uVar25 >> 0x10),(short)uVar24)) &
               0xffffffffff01ffff;
      uVar24 = CONCAT44((int)(uVar25 >> 0x20),CONCAT13((char)(uVar24 >> 0x18),(int3)uVar25)) &
               0xffffffff01ffffff;
      uVar38 = CONCAT35((int3)(uVar24 >> 0x28),CONCAT14((char)(uVar25 >> 0x20),(int)uVar24)) &
               0xffffff01ffffffff;
      uVar39 = CONCAT26((short)(uVar38 >> 0x30),CONCAT15((char)(uVar24 >> 0x28),(int5)uVar38)) &
               0xffff01ffffffffff;
      uVar25 = CONCAT71((int7)((ulong)*puVar6 >> 8),(char)*(undefined6 *)puVar6) &
               0xffffffffffffff01;
      uVar24 = CONCAT62((int6)(uVar25 >> 0x10),
                        CONCAT11((char)((uint7)*(undefined7 *)puVar6 >> 8),(char)uVar25)) &
               0xffffffffffff01ff;
      uVar25 = CONCAT53((int5)(uVar24 >> 0x18),CONCAT12((char)(uVar25 >> 0x10),(short)uVar24)) &
               0xffffffffff01ffff;
      uVar24 = CONCAT44((int)(uVar25 >> 0x20),CONCAT13((char)(uVar24 >> 0x18),(int3)uVar25)) &
               0xffffffff01ffffff;
      uVar36 = CONCAT35((int3)(uVar24 >> 0x28),CONCAT14((char)(uVar25 >> 0x20),(int)uVar24)) &
               0xffffff01ffffffff;
      uVar37 = CONCAT26((short)(uVar36 >> 0x30),CONCAT15((char)(uVar24 >> 0x28),(int5)uVar36)) &
               0xffff01ffffffffff;
      uVar24 = CONCAT71((int7)(CONCAT17(*puVar21,uVar8) >> 8),(char)*(undefined6 *)(puVar21 + -7)) &
               0xffffffffffffff01;
      uVar25 = CONCAT62((int6)(uVar24 >> 0x10),CONCAT11((char)((uint7)uVar8 >> 8),(char)uVar24)) &
               0xffffffffffff01ff;
      uVar24 = CONCAT53((int5)(uVar25 >> 0x18),CONCAT12((char)(uVar24 >> 0x10),(short)uVar25)) &
               0xffffffffff01ffff;
      uVar25 = CONCAT44((int)(uVar24 >> 0x20),CONCAT13((char)(uVar25 >> 0x18),(int3)uVar24)) &
               0xffffffff01ffffff;
      uVar34 = CONCAT35((int3)(uVar25 >> 0x28),CONCAT14((char)(uVar24 >> 0x20),(int)uVar25)) &
               0xffffff01ffffffff;
      uVar35 = CONCAT26((short)(uVar34 >> 0x30),CONCAT15((char)(uVar25 >> 0x28),(int5)uVar34)) &
               0xffff01ffffffffff;
      uVar25 = CONCAT71((int7)((ulong)*puVar5 >> 8),(char)*(undefined6 *)puVar5) &
               0xffffffffffffff01;
      uVar24 = CONCAT62((int6)(uVar25 >> 0x10),
                        CONCAT11((char)((uint7)*(undefined7 *)puVar5 >> 8),(char)uVar25)) &
               0xffffffffffff01ff;
      uVar25 = CONCAT53((int5)(uVar24 >> 0x18),CONCAT12((char)(uVar25 >> 0x10),(short)uVar24)) &
               0xffffffffff01ffff;
      uVar24 = CONCAT44((int)(uVar25 >> 0x20),CONCAT13((char)(uVar24 >> 0x18),(int3)uVar25)) &
               0xffffffff01ffffff;
      uVar32 = CONCAT35((int3)(uVar24 >> 0x28),CONCAT14((char)(uVar25 >> 0x20),(int)uVar24)) &
               0xffffff01ffffffff;
      uVar33 = CONCAT26((short)(uVar32 >> 0x30),CONCAT15((char)(uVar24 >> 0x28),(int5)uVar32)) &
               0xffff01ffffffffff;
      uVar25 = CONCAT71((int7)((ulong)*puVar4 >> 8),(char)*(undefined6 *)puVar4) &
               0xffffffffffffff01;
      uVar24 = CONCAT62((int6)(uVar25 >> 0x10),
                        CONCAT11((char)((uint7)*(undefined7 *)puVar4 >> 8),(char)uVar25)) &
               0xffffffffffff01ff;
      uVar25 = CONCAT53((int5)(uVar24 >> 0x18),CONCAT12((char)(uVar25 >> 0x10),(short)uVar24)) &
               0xffffffffff01ffff;
      uVar24 = CONCAT44((int)(uVar25 >> 0x20),CONCAT13((char)(uVar24 >> 0x18),(int3)uVar25)) &
               0xffffffff01ffffff;
      uVar30 = CONCAT35((int3)(uVar24 >> 0x28),CONCAT14((char)(uVar25 >> 0x20),(int)uVar24)) &
               0xffffff01ffffffff;
      uVar31 = CONCAT26((short)(uVar30 >> 0x30),CONCAT15((char)(uVar24 >> 0x28),(int5)uVar30)) &
               0xffff01ffffffffff;
      uVar25 = CONCAT71((int7)((ulong)*puVar3 >> 8),(char)*(undefined6 *)puVar3) &
               0xffffffffffffff01;
      uVar26 = CONCAT62((int6)(uVar25 >> 0x10),
                        CONCAT11((char)((uint7)*(undefined7 *)puVar3 >> 8),(char)uVar25)) &
               0xffffffffffff01ff;
      uVar24 = CONCAT53((int5)(uVar26 >> 0x18),CONCAT12((char)(uVar25 >> 0x10),(short)uVar26)) &
               0xffffffffff01ffff;
      uVar25 = CONCAT44((int)(uVar24 >> 0x20),CONCAT13((char)(uVar26 >> 0x18),(int3)uVar24)) &
               0xffffffff01ffffff;
      uVar28 = CONCAT35((int3)(uVar25 >> 0x28),CONCAT14((char)(uVar24 >> 0x20),(int)uVar25)) &
               0xffffff01ffffffff;
      uVar29 = CONCAT26((short)(uVar28 >> 0x30),CONCAT15((char)(uVar25 >> 0x28),(int5)uVar28)) &
               0xffff01ffffffffff;
      uVar25 = CONCAT71((int7)((ulong)*puVar2 >> 8),(char)*(undefined6 *)puVar2) &
               0xffffffffffffff01;
      uVar24 = CONCAT62((int6)(uVar25 >> 0x10),
                        CONCAT11((char)((uint7)*(undefined7 *)puVar2 >> 8),(char)uVar25)) &
               0xffffffffffff01ff;
      uVar25 = CONCAT53((int5)(uVar24 >> 0x18),CONCAT12((char)(uVar25 >> 0x10),(short)uVar24)) &
               0xffffffffff01ffff;
      uVar24 = CONCAT44((int)(uVar25 >> 0x20),CONCAT13((char)(uVar24 >> 0x18),(int3)uVar25)) &
               0xffffffff01ffffff;
      uVar26 = CONCAT35((int3)(uVar24 >> 0x28),CONCAT14((char)(uVar25 >> 0x20),(int)uVar24)) &
               0xffffff01ffffffff;
      uVar27 = CONCAT26((short)(uVar26 >> 0x30),CONCAT15((char)(uVar24 >> 0x28),(int5)uVar26)) &
               0xffff01ffffffffff;
      uVar24 = CONCAT71((int7)((ulong)*puVar1 >> 8),(char)*(undefined6 *)puVar1) &
               0xffffffffffffff01;
      uVar25 = CONCAT62((int6)(uVar24 >> 0x10),
                        CONCAT11((char)((uint7)*(undefined7 *)puVar1 >> 8),(char)uVar24)) &
               0xffffffffffff01ff;
      uVar24 = CONCAT53((int5)(uVar25 >> 0x18),CONCAT12((char)(uVar24 >> 0x10),(short)uVar25)) &
               0xffffffffff01ffff;
      uVar25 = CONCAT44((int)(uVar24 >> 0x20),CONCAT13((char)(uVar25 >> 0x18),(int3)uVar24)) &
               0xffffffff01ffffff;
      uVar24 = CONCAT35((int3)(uVar25 >> 0x28),CONCAT14((char)(uVar24 >> 0x20),(int)uVar25)) &
               0xffffff01ffffffff;
      uVar25 = CONCAT26((short)(uVar24 >> 0x30),CONCAT15((char)(uVar25 >> 0x28),(int5)uVar24)) &
               0xffff01ffffffffff;
      puVar18[0xd] = CONCAT17((char)(uVar27 >> 0x38),CONCAT16((char)(uVar26 >> 0x30),(int6)uVar27))
                     & 0x101ffffffffffff;
      puVar18[0xc] = uVar10 & 0x101010101010101;
      puVar18[0xf] = CONCAT17((char)(uVar25 >> 0x38),CONCAT16((char)(uVar24 >> 0x30),(int6)uVar25))
                     & 0x101ffffffffffff;
      puVar18[0xe] = uVar9 & 0x101010101010101;
      puVar18[9] = CONCAT17((char)(uVar31 >> 0x38),CONCAT16((char)(uVar30 >> 0x30),(int6)uVar31)) &
                   0x101ffffffffffff;
      puVar18[8] = uVar12 & 0x101010101010101;
      puVar18[0xb] = CONCAT17((char)(uVar29 >> 0x38),CONCAT16((char)(uVar28 >> 0x30),(int6)uVar29))
                     & 0x101ffffffffffff;
      puVar18[10] = uVar11 & 0x101010101010101;
      puVar18[5] = CONCAT17((char)(uVar35 >> 0x38),CONCAT16((char)(uVar34 >> 0x30),(int6)uVar35)) &
                   0x101ffffffffffff;
      puVar18[4] = uVar14 & 0x101010101010101;
      puVar18[7] = CONCAT17((char)(uVar33 >> 0x38),CONCAT16((char)(uVar32 >> 0x30),(int6)uVar33)) &
                   0x101ffffffffffff;
      puVar18[6] = uVar13 & 0x101010101010101;
      puVar18[1] = CONCAT17((char)(uVar39 >> 0x38),CONCAT16((char)(uVar38 >> 0x30),(int6)uVar39)) &
                   0x101ffffffffffff;
      *puVar18 = uVar16 & 0x101010101010101;
      puVar18[3] = CONCAT17((char)(uVar37 >> 0x38),CONCAT16((char)(uVar36 >> 0x30),(int6)uVar37)) &
                   0x101ffffffffffff;
      puVar18[2] = uVar15 & 0x101010101010101;
      puVar21 = puVar21 + 0x80;
      uVar22 = uVar22 - 0x80;
      puVar18 = puVar18 + 0x10;
    } while (uVar22 != 0);
    if (uVar23 == uVar20) goto LAB_104553aa4;
  }
  lVar19 = uVar23 - uVar20;
  puVar18 = puVar17;
  puVar21 = (undefined1 *)(uVar20 + param_1 + 0x20);
  do {
    puVar17 = (ulong *)((long)puVar18 + 1);
    *(undefined1 *)puVar18 = *puVar21;
    lVar19 = lVar19 + -1;
    puVar18 = puVar17;
    puVar21 = puVar21 + 1;
  } while (lVar19 != 0);
LAB_104553aa4:
  *(ulong **)(unaff_x20 + 8) = puVar17;
  return;
}



/* Entry: 104553f20; end: 10455410b;  */

void FUN_104553f20(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x12;
  long lVar9;
  long unaff_x20;
  undefined1 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  undefined1 auStack_90 [16];
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_58;
  
  lVar9 = *(long *)(param_3 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar10 = auStack_90 + (-0x20 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001000768d0(param_2,2);
  uStack_70 = 0;
  uVar2 = 0;
  uStack_80 = param_3;
  lStack_78 = param_4;
  lStack_68 = param_1;
  __sSaMa(0,param_3);
  puVar3 = PTR___sSayxGSTsMc_11034dd08;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_11034dd08,uVar2);
  __sSTsE6reduceyqd__qd___qd__qd___7ElementQztKXEtKlF
            (&uStack_58,&uStack_70,FUN_104555a08,auStack_90,uVar2,PTR___sSiN_11034deb0,puVar3);
  func_0x0001000769c4(uStack_58);
  lVar13 = param_1;
  __sSa8endIndexSivg(param_1,param_3);
  if (lVar13 != 0) {
    lVar13 = 0;
    pcVar6 = *(code **)(param_4 + 0x28);
    pbVar12 = *(byte **)(unaff_x20 + 8);
    do {
      __sSayxSicig((long)puVar10 - extraout_x12,lVar13,param_1,param_3);
      bVar1 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10455410c);
        (*pcVar6)();
      }
      (**(code **)(lVar9 + 0x20))(puVar10,(long)puVar10 - extraout_x12,param_3);
      uVar7 = param_3;
      (*pcVar6)(param_3,param_4);
      uVar5 = uVar7;
      pbVar11 = pbVar12;
      if (0x7f < uVar7) {
        do {
          pbVar12 = pbVar11 + 1;
          *pbVar11 = (byte)uVar5 | 0x80;
          uVar7 = uVar5 >> 7;
          uVar8 = uVar5 >> 0xe;
          uVar5 = uVar7;
          pbVar11 = pbVar12;
        } while (uVar8 != 0);
      }
      pbVar11 = pbVar12 + 1;
      *pbVar12 = (byte)uVar7;
      (**(code **)(lVar9 + 8))(puVar10,param_3);
      lVar4 = param_1;
      __sSa8endIndexSivg(param_1,param_3);
      pbVar12 = pbVar11;
    } while (lVar13 != lVar4);
    *(byte **)(unaff_x20 + 8) = pbVar11;
  }
  return;
}



/* Entry: 10455410c; end: 104554227;  */

void FUN_10455410c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  uVar3 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  uStack_f0 = param_3;
  uStack_e8 = param_4;
  lStack_e0 = param_5;
  lStack_d8 = param_6;
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  lStack_b0 = param_5;
  lStack_a8 = param_6;
  uStack_90 = param_3;
  uStack_88 = param_4;
  lStack_80 = param_5;
  lStack_78 = param_6;
  uStack_70 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar3,param_3,&UNK_10e814078,&UNK_10e814088);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_6 + 8),param_4,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar3,param_3,uVar1,&UNK_10e814078,&UNK_10e814080);
  FUN_104554360(param_1,param_2,FUN_104555b70,auStack_a0,0x1045559d0,auStack_d0,0x1045559ec,
                auStack_100,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 104554228; end: 1045542c3;  */

void FUN_104554228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_110786a78,&PTR_DAT_110786a90,param_4);
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_7 + 8) + 0x30))
              (param_3,2,param_1,&UNK_110786a78,&PTR_DAT_110786a90,param_5);
  }
  return;
}



/* Entry: 1045542c4; end: 10455435f;  */

void FUN_1045542c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_110786ed0,&PTR_DAT_110786ee8,param_4);
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_7 + 8) + 0x30))
              (param_3,2,param_1,&UNK_110786ed0,&PTR_DAT_110786ee8,param_5);
  }
  return;
}



/* Entry: 104554360; end: 104554e4b;  */

void FUN_104554360(undefined1 *param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,code *param_7,undefined8 param_8,long param_9,
                  long param_10,undefined8 param_11)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar13;
  code *pcVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x13;
  char *unaff_x20;
  long lVar21;
  long unaff_x21;
  code *pcVar22;
  byte *pbVar23;
  byte *pbVar24;
  long lVar25;
  long lVar26;
  undefined1 auStack_1f0 [8];
  long lStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  ulong auStack_120 [2];
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [48];
  
  uVar9 = param_11;
  lVar8 = param_10;
  lVar10 = param_9;
  lVar11 = *(long *)(param_10 + -8);
  lStack_1b8 = param_3;
  uStack_1a0 = param_4;
  puStack_198 = param_2;
  puStack_190 = param_1;
  pcStack_188 = param_7;
  uStack_180 = param_8;
  pcStack_170 = param_5;
  uStack_168 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puStack_1a8 = auStack_1f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar25 = (long)(auStack_1f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar12 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar15 = (undefined1 *)(lVar25 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puStack_178 = puVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = puVar15 + -extraout_x12_00;
  lVar3 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,lVar10,lVar8,"key value ",0);
  lVar4 = 0;
  __sSqMa(0,lVar3);
  lStack_158 = *(long *)(lVar4 + -8);
  lStack_150 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_158 + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_1b0 = puVar15 + (-extraout_x12_01 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar26 = (long)(puVar15 + (-extraout_x12_01 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0))) -
           extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = puStack_198;
  lVar4 = lVar26 - extraout_x12_03;
  lStack_160 = lVar10;
  lStack_148 = lVar8;
  if (*unaff_x20 != '\x01') {
    uStack_1a0 = uVar9;
    lVar4 = lVar10;
    lStack_1b8 = extraout_x13;
    if (((ulong)puStack_190 & 0xc000000000000001) == 0) {
      _swift_retain(puStack_190);
      lVar8 = lStack_148;
      uVar9 = uStack_1a0;
      __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC();
      __ss17_NativeDictionaryV12makeIteratorAB0D0Vyxq__GyF(auStack_e0);
      lVar25 = -0xa8;
      puVar15 = auStack_e0;
      __sSD8IteratorV7_nativeAByxq__Gs17_NativeDictionaryVAAVyxq__Gn_tcfC
                (auStack_b8,puVar15,lVar10,lVar8,uVar9);
    }
    else {
      puVar16 = puStack_190;
      FUN_10457a168(puStack_190,lVar10,lVar8,uVar9);
      puVar15 = puVar16;
      __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
      _swift_unknownObjectRetain(puVar16);
      lVar25 = -0x80;
      __sSD8IteratorV6_cocoaAByxq__Gs17__CocoaDictionaryVAACn_tcfC
                (auStack_90,puVar15,lVar10,lVar8,uVar9);
    }
    lStack_1e8 = *(long *)((long)&param_9 + lVar25);
    lStack_1c8 = *(long *)(&stack0xfffffffffffffff0 + lVar25);
    lStack_1c0 = *(long *)(&stack0xfffffffffffffff8 + lVar25);
    uVar18 = lStack_1e8 + 0x40U >> 6;
    uStack_1d8 = (ulong)(uint)((int)puVar13 << 3);
    uStack_1e0 = ((ulong)puVar13 & 0x1fffffff) << 3 | 2;
    puStack_198 = *(undefined1 **)((long)&param_11 + lVar25);
    lVar25 = *(long *)((long)&param_10 + lVar25);
    do {
      lVar21 = lStack_148;
      uVar9 = uStack_1a0;
      lVar26 = lStack_1c8;
      lStack_1d0 = lVar25;
      if (lStack_1c8 < 0) {
        __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
        lVar8 = lStack_1b8;
        if (puVar15 != (undefined1 *)0x0) {
          __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(lStack_1b8);
          _swift_unknownObjectRelease(puVar15);
          lVar21 = lStack_148;
          __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF
                    (lVar8 + *(int *)(lVar3 + 0x30),lVar4,lStack_148,lStack_148);
          _swift_unknownObjectRelease(lVar4);
          puStack_190 = puStack_198;
          goto LAB_104554aec;
        }
        puStack_190 = puStack_198;
        lVar21 = lStack_148;
LAB_104554b24:
        uVar9 = 1;
        lVar8 = lStack_1b8;
      }
      else {
        puVar13 = puStack_198;
        lVar4 = lVar25;
        if (puStack_198 == (undefined1 *)0x0) {
          uVar17 = uVar18;
          if ((long)uVar18 <= lVar25 + 1) {
            uVar17 = lVar25 + 1;
          }
          do {
            lVar4 = lVar25 + 1;
            if (SCARRY8(lVar25,1)) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x104554e48);
              (*pcVar14)();
            }
            if ((long)uVar18 <= lVar4) {
              puStack_190 = (undefined1 *)0x0;
              lVar21 = lVar8;
              lVar25 = uVar17 - 1;
              goto LAB_104554b24;
            }
            puVar13 = *(undefined1 **)(lStack_1c0 + lVar4 * 8);
            lVar25 = lVar25 + 1;
          } while (puVar13 == (undefined1 *)0x0);
        }
        uVar17 = ((ulong)puVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((ulong)puVar13 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        puStack_190 = (undefined1 *)((ulong)(puVar13 + -1) & (ulong)puVar13);
        uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) | lVar4 << 6;
        lVar25 = lStack_1c8;
        __ss17_NativeDictionaryV5_keysSpyxGvg(lStack_1c8,lVar10,lStack_148,uStack_1a0);
        lVar8 = lStack_1b8;
        (**(code **)(lVar12 + 0x10))(lStack_1b8,lVar25 + *(long *)(lVar12 + 0x48) * uVar17,lVar10);
        FUN_10456d188(lVar26,lVar10,lVar21,uVar9);
        iVar1 = *(int *)(lVar3 + 0x30);
        lVar25 = lVar26;
        __ss17_NativeDictionaryV7_valuesSpyq_Gvg(lVar26,lStack_160,lVar21,uVar9);
        lVar10 = lStack_160;
        (**(code **)(lVar11 + 0x10))
                  (lVar8 + iVar1,lVar25 + *(long *)(lVar11 + 0x48) * uVar17,lVar21);
        FUN_10456d188(lVar26,lVar10,lVar21,uVar9);
        lVar25 = lVar4;
LAB_104554aec:
        uVar9 = 0;
      }
      puVar16 = puStack_1a8;
      lVar4 = *(long *)(lVar3 + -8);
      (**(code **)(lVar4 + 0x38))(lVar8,uVar9,1,lVar3);
      puVar13 = puStack_1b0;
      (**(code **)(lStack_158 + 0x20))(puStack_1b0,lVar8,lStack_150);
      puVar15 = puVar13;
      (**(code **)(lVar4 + 0x30))(puVar13,1,lVar3);
      if ((int)puVar15 == 1) {
        FUN_104555934(lStack_1c8,lStack_1c0,lStack_1e8,lStack_1d0,puStack_198);
        return;
      }
      iVar1 = *(int *)(lVar3 + 0x30);
      (**(code **)(lVar12 + 0x20))(puStack_178,puVar13,lVar10);
      (**(code **)(lVar11 + 0x20))(puVar16,puVar13 + iVar1,lVar21);
      puVar15 = puStack_178;
      pbVar23 = *(byte **)(unaff_x20 + 8);
      uVar17 = uStack_1e0;
      uVar19 = uStack_1e0;
      pbVar24 = pbVar23;
      if (0x7f < uStack_1d8) {
        do {
          pbVar24 = pbVar23 + 1;
          *pbVar23 = (byte)uVar17 | 0x80;
          uVar19 = uVar17 >> 7;
          uVar20 = uVar17 >> 0xe;
          uVar17 = uVar19;
          pbVar23 = pbVar24;
        } while (uVar20 != 0);
      }
      pbVar23 = pbVar24 + 1;
      *pbVar24 = (byte)uVar19;
      *(byte **)(unaff_x20 + 8) = pbVar23;
      auStack_120[0] = 0;
      (*pcStack_170)(auStack_120,puStack_178,puVar16);
      if (unaff_x21 != 0) goto LAB_104554dbc;
      uVar17 = auStack_120[0];
      uVar19 = auStack_120[0];
      pbVar24 = pbVar23;
      if (0x7f < auStack_120[0]) {
        do {
          pbVar23 = pbVar24 + 1;
          *pbVar24 = (byte)uVar17 | 0x80;
          uVar19 = uVar17 >> 7;
          uVar20 = uVar17 >> 0xe;
          uVar17 = uVar19;
          pbVar24 = pbVar23;
        } while (uVar20 != 0);
      }
      *pbVar23 = (byte)uVar19;
      *(byte **)(unaff_x20 + 8) = pbVar23 + 1;
      (*pcStack_188)(unaff_x20,puVar15,puVar16);
      lVar8 = lStack_148;
      (**(code **)(lVar11 + 8))(puVar16,lStack_148);
      lVar4 = lVar10;
      (**(code **)(lVar12 + 8))();
      puStack_198 = puStack_190;
    } while( true );
  }
  lStack_110 = lVar10;
  lStack_108 = lVar8;
  uStack_100 = uVar9;
  lStack_f8 = lStack_1b8;
  uStack_f0 = uStack_1a0;
  uVar5 = 0;
  __sSDMa(0,lVar10,lVar8,uVar9);
  puVar6 = PTR___sSDyxq_GSTsMc_11034d798;
  _swift_getWitnessTable(PTR___sSDyxq_GSTsMc_11034d798,uVar5);
  pcVar14 = FUN_10455593c;
  __sSTsE6sorted2bySay7ElementQzGSbAD_ADtKXE_tKF(FUN_10455593c,auStack_120,uVar5,puVar6);
  pcVar22 = (code *)0x0;
  puStack_178 = (undefined1 *)(ulong)(uint)((int)puStack_198 << 3);
  puStack_190 = (undefined1 *)(((ulong)puStack_198 & 0x1fffffff) << 3 | 2);
  while( true ) {
    pcVar7 = pcVar14;
    __sSa8endIndexSivg(pcVar14,lVar3);
    if (pcVar22 == pcVar7) {
      uVar9 = 1;
    }
    else {
      __sSayxSicig(lVar26,pcVar22,pcVar14,lVar3);
      bVar2 = SCARRY8((long)pcVar22,1);
      pcVar22 = pcVar22 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x104554e4c);
        (*pcVar14)();
      }
      uVar9 = 0;
    }
    lVar21 = *(long *)(lVar3 + -8);
    (**(code **)(lVar21 + 0x38))(lVar26,uVar9,1,lVar3);
    (**(code **)(lStack_158 + 0x20))(lVar4,lVar26,lStack_150);
    lVar8 = lVar4;
    (**(code **)(lVar21 + 0x30))(lVar4,1,lVar3);
    if ((int)lVar8 == 1) {
      _swift_bridgeObjectRelease(pcVar14);
      return;
    }
    iVar1 = *(int *)(lVar3 + 0x30);
    (**(code **)(lVar12 + 0x20))(puVar15,lVar4,lVar10);
    (**(code **)(lVar11 + 0x20))(lVar25,lVar4 + iVar1,lStack_148);
    pbVar23 = *(byte **)(unaff_x20 + 8);
    puVar13 = puStack_190;
    puVar16 = puStack_190;
    pbVar24 = pbVar23;
    if ((undefined1 *)0x7f < puStack_178) {
      do {
        pbVar24 = pbVar23 + 1;
        *pbVar23 = (byte)puVar13 | 0x80;
        puVar16 = (undefined1 *)((ulong)puVar13 >> 7);
        uVar18 = (ulong)puVar13 >> 0xe;
        puVar13 = puVar16;
        pbVar23 = pbVar24;
      } while (uVar18 != 0);
    }
    pbVar23 = pbVar24 + 1;
    *pbVar24 = (byte)puVar16;
    *(byte **)(unaff_x20 + 8) = pbVar23;
    auStack_120[0] = 0;
    (*pcStack_170)(auStack_120,puVar15,lVar25);
    if (unaff_x21 != 0) break;
    uVar18 = auStack_120[0];
    uVar17 = auStack_120[0];
    pbVar24 = pbVar23;
    if (0x7f < auStack_120[0]) {
      do {
        pbVar23 = pbVar24 + 1;
        *pbVar24 = (byte)uVar18 | 0x80;
        uVar17 = uVar18 >> 7;
        uVar19 = uVar18 >> 0xe;
        uVar18 = uVar17;
        pbVar24 = pbVar23;
      } while (uVar19 != 0);
    }
    *pbVar23 = (byte)uVar17;
    *(byte **)(unaff_x20 + 8) = pbVar23 + 1;
    (*pcStack_188)(unaff_x20,puVar15,lVar25);
    (**(code **)(lVar11 + 8))(lVar25,lStack_148);
    lVar10 = lStack_160;
    (**(code **)(lVar12 + 8))(puVar15,lStack_160);
  }
  _swift_bridgeObjectRelease(pcVar14);
  (**(code **)(lVar11 + 8))(lVar25,lStack_148);
  pcVar14 = *(code **)(lVar12 + 8);
  lVar10 = lStack_160;
LAB_104554e18:
  (*pcVar14)(puVar15,lVar10);
  return;
LAB_104554dbc:
  FUN_104555934(lStack_1c8,lStack_1c0,lStack_1e8,lStack_1d0,puStack_198);
  (**(code **)(lVar11 + 8))(puVar16,lStack_148);
  pcVar14 = *(code **)(lVar12 + 8);
  goto LAB_104554e18;
}



/* Entry: 104554e4c; end: 104554f3b;  */

void FUN_104554e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  uStack_f0 = param_3;
  uStack_e8 = param_4;
  lStack_e0 = param_5;
  uStack_d8 = param_6;
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  lStack_b0 = param_5;
  uStack_a8 = param_6;
  uStack_90 = param_3;
  uStack_88 = param_4;
  lStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_10e814078,&UNK_10e814080);
  FUN_104554360(param_1,param_2,0x104555968,auStack_a0,FUN_104555998,auStack_d0,0x1045559b4,
                auStack_100,uVar1,param_4,uVar2);
  return;
}



/* Entry: 104554f3c; end: 104554fbf;  */

void FUN_104554f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_110786a78,&PTR_DAT_110786a90,param_4);
  if (unaff_x21 == 0) {
    func_0x000100075f10(param_3,2,param_5,param_7);
  }
  return;
}



/* Entry: 104554fc0; end: 104555067;  */

void FUN_104554fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_110786ed0,&PTR_DAT_110786ee8,param_4);
  if (unaff_x21 == 0) {
    (**(code **)(param_7 + 0x28))(param_5,param_7);
    func_0x0001000768d0(2,0);
    func_0x000100076a80(param_5);
  }
  return;
}



/* Entry: 104555068; end: 10455515f;  */

void FUN_104555068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  uStack_120 = param_3;
  uStack_118 = param_4;
  lStack_110 = param_5;
  uStack_108 = param_6;
  uStack_100 = param_7;
  uStack_e0 = param_3;
  uStack_d8 = param_4;
  lStack_d0 = param_5;
  uStack_c8 = param_6;
  uStack_c0 = param_7;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  lStack_90 = param_5;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_10e814078,&UNK_10e814080);
  FUN_104554360(param_1,param_2,FUN_1045558c4,auStack_b0,FUN_1045558f4,auStack_f0,0x104555914,
                auStack_130,uVar1,param_4,uVar2);
  return;
}



/* Entry: 104555160; end: 1045551e3;  */

void FUN_104555160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_110786a78,&PTR_DAT_110786a90,param_4);
  if (unaff_x21 == 0) {
    FUN_104550bac(param_3,2,param_5,param_8);
  }
  return;
}



/* Entry: 1045551e4; end: 104555267;  */

void FUN_1045551e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_110786ed0,&PTR_DAT_110786ee8,param_4);
  if (unaff_x21 == 0) {
    func_0x000100076914(param_3,2,param_5,param_8);
  }
  return;
}



/* Entry: 104555268; end: 1045552b7;  */

void FUN_104555268(undefined4 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long unaff_x20;
  
  func_0x0001000768d0(param_2,5);
  puVar1 = *(undefined4 **)(unaff_x20 + 8);
  *puVar1 = param_1;
  *(undefined4 **)(unaff_x20 + 8) = puVar1 + 1;
  return;
}



/* Entry: 1045552b8; end: 104555307;  */

void FUN_1045552b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x0001000768d0(param_2,1);
  puVar1 = *(undefined8 **)(unaff_x20 + 8);
  *puVar1 = param_1;
  *(undefined8 **)(unaff_x20 + 8) = puVar1 + 1;
  return;
}



/* Entry: 104555308; end: 10455535b;  */

void FUN_104555308(ulong param_1,undefined8 param_2)

{
  func_0x0001000768d0(param_2,0);
  func_0x000100076a80((-(param_1 >> 0x1f & 1) & 0xfffffffe00000000 | (param_1 & 0xffffffff) << 1) ^
                      (long)(int)param_1 >> 0x3f);
  return;
}



/* Entry: 10455535c; end: 1045553ab;  */

void FUN_10455535c(long param_1,undefined8 param_2)

{
  func_0x0001000768d0(param_2,0);
  func_0x000100076a80(param_1 << 1 ^ param_1 >> 0x3f);
  return;
}



/* Entry: 1045553ac; end: 1045553f7;  */

void FUN_1045553ac(ulong param_1,undefined8 param_2)

{
  func_0x0001000768d0(param_2,0);
  func_0x000100076a80(param_1 & 1);
  return;
}



/* Entry: 1045553f8; end: 104555453;  */

void FUN_1045553f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001000768d0(param_3,2);
  FUN_10454ede8(param_1,param_2);
  return;
}



/* Entry: 104555454; end: 1045555bf;  */

void FUN_104555454(void)

{
  FUN_104552da8();
  return;
}



/* Entry: 1045555c0; end: 1045556db;  */

void FUN_1045555c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 auStack_70 [8];
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  puVar7 = (undefined8 *)(unaff_x20 + 8);
  puVar5 = (undefined2 *)*puVar7;
  *puVar5 = 0x100b;
  *puVar7 = puVar5 + 1;
  func_0x0001000769c4(param_2);
  puVar6 = (undefined1 *)*puVar7;
  *puVar6 = 0x1a;
  *puVar7 = puVar6 + 1;
  func_0x000100075c9c(param_3,param_4);
  if (unaff_x21 == 0) {
    func_0x0001000769c4();
    lVar1 = *(long *)(unaff_x20 + 8);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar3 = lVar1;
    func_0x00010454edc4(lVar1,uVar4,*(undefined8 *)(unaff_x20 + 0x18));
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1045556d8);
      (*pcVar2)();
    }
    auStack_70[0] = *unaff_x20;
    lStack_68 = lVar3;
    lStack_60 = lVar3;
    uStack_58 = uVar4;
    (**(code **)(param_4 + 0x48))(auStack_70,&UNK_110786ed0,&PTR_DAT_110786ee8,param_3,param_4);
    if (lStack_60 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1045556dc);
      (*pcVar2)();
    }
    puVar6 = (undefined1 *)(lVar1 + (lStack_68 - lStack_60));
    *puVar6 = 0xc;
    *puVar7 = puVar6 + 1;
  }
  return;
}



/* Entry: 1045556dc; end: 1045556ef;  */

void FUN_1045556dc(void)

{
  FUN_1045555c0();
  return;
}



/* Entry: 1045556f0; end: 104555827;  */

void FUN_1045556f0(long param_1,undefined1 *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = (uint)((ulong)param_2 >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    iVar3 = (int)param_1;
    if (uVar6 == 0) {
      uStack_46 = (undefined1)param_1;
      uStack_45 = (undefined1)((ulong)param_1 >> 8);
      uStack_44 = (undefined1)((ulong)param_1 >> 0x10);
      uStack_43 = (undefined1)((ulong)param_1 >> 0x18);
      uStack_42 = (undefined1)((ulong)param_1 >> 0x20);
      uStack_41 = (undefined1)((ulong)param_1 >> 0x28);
      uStack_40 = (undefined1)((ulong)param_1 >> 0x30);
      uStack_3f = (undefined1)((ulong)param_1 >> 0x38);
      uStack_3e = SUB81(param_2,0);
      uStack_3d = (undefined1)((ulong)param_2 >> 8);
      uStack_3c = (undefined1)((ulong)param_2 >> 0x10);
      uStack_3b = (undefined1)((ulong)param_2 >> 0x18);
      uStack_3a = (undefined1)((ulong)param_2 >> 0x20);
      uVar8 = (ulong)param_2 >> 0x30 & 0xff;
      uStack_39 = (undefined1)((ulong)param_2 >> 0x28);
      if (uVar8 != 0) {
        param_1 = *param_3;
        param_2 = &uStack_46;
        _memcpy(param_1,param_2,uVar8);
        *param_3 = *param_3 + uVar8;
      }
      goto LAB_1045557f4;
    }
    puVar7 = (undefined1 *)(param_1 >> 0x20);
    param_1 = (long)iVar3;
    if ((long)puVar7 < (long)iVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104555824);
      (*pcVar2)();
    }
  }
  else {
    if (uVar6 != 2) goto LAB_1045557f4;
    puVar7 = *(undefined1 **)(param_1 + 0x18);
    param_1 = *(long *)(param_1 + 0x10);
  }
  FUN_104555828(param_1,puVar7,(ulong)param_2 & 0x3fffffffffffffff);
  param_2 = puVar7;
  param_4 = param_3;
LAB_1045557f4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = param_1;
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  lVar5 = lVar4;
  if (lVar4 != 0) {
    __s10Foundation13__DataStorageC7_offsetSivg();
    if (SBORROW8(param_1,lVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1045558c4);
      (*pcVar2)();
    }
    lVar4 = (param_1 - lVar5) + lVar4;
  }
  if (!SBORROW8((long)param_2,param_1)) {
    __s10Foundation13__DataStorageC7_lengthSivg();
    if ((long)param_2 - param_1 <= lVar5) {
      lVar5 = (long)param_2 - param_1;
    }
    if ((lVar4 != 0) && (lVar5 != 0)) {
      _memmove(*param_4,lVar4,lVar5);
      *param_4 = *param_4 + lVar5;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1045558c0);
  (*pcVar2)();
}


