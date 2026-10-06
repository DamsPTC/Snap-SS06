/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107cd3aec; end: 107cd3af7; -[SCOperaSnapPlaybackSessionPerformanceData .cxx_destruct] */

void FUN_107cd3aec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107cd3af8; end: 107cd4103;  */

long FUN_107cd3af8(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c0f2560(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0720c0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126c9460;
    func_0x00010c0f2580(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0720c0(param_1,param_2,puVar1);
    _objc_release(puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126c9460;
      func_0x00010c0f25e0(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c0720c0(param_1,param_2,puVar1);
      _objc_release(puVar1);
      if ((uVar2 & 1) == 0) {
        puVar1 = PTR_PTR_1126c9460;
        func_0x00010c0f2620(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_1;
        func_0x00010c0720c0(param_1,param_2,puVar1);
        _objc_release(puVar1);
        if ((uVar2 & 1) == 0) {
          puVar1 = PTR_PTR_1126c9460;
          func_0x00010c0f2600(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_1;
          func_0x00010c0720c0(param_1,param_2,puVar1);
          _objc_release(puVar1);
          if ((uVar2 & 1) == 0) {
            puVar1 = PTR_PTR_1126c9460;
            func_0x00010c0f25a0(PTR_PTR_1126c9460);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_1;
            func_0x00010c0720c0(param_1,param_2,puVar1);
            _objc_release(puVar1);
            lVar3 = (uVar2 & 0xffffffff) - 1;
          }
          else {
            lVar3 = 5;
          }
        }
        else {
          lVar3 = 3;
        }
      }
      else {
        lVar3 = 4;
      }
    }
    else {
      lVar3 = 0xd;
    }
  }
  else {
    lVar3 = 0xc;
  }
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 107cd4104; end: 107cd4143;  */

undefined8 FUN_107cd4104(ulong param_1)

{
  if (param_1 < 0x15) {
    return *(undefined8 *)(&UNK_10dee5670 + param_1 * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 107cd4144; end: 107cd420b;  */

undefined8 FUN_107cd4144(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  if (param_2 + 1U < 2) {
    FUN_107cd3af8(param_1);
  }
  else if (param_2 == 1) {
    func_0x000107cd3c7c(param_1);
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cd420c; end: 107cd4383;  */

ulong FUN_107cd420c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c0f2560(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c0720c0(param_1,param_2,puVar1);
  if ((uVar7 & 1) == 0) {
    puVar2 = PTR_PTR_1126c9460;
    func_0x00010c0f25e0(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010c0720c0(param_1,param_2,puVar2);
    if ((uVar7 & 1) == 0) {
      puVar3 = PTR_PTR_1126c9460;
      func_0x00010c0f25a0(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_1;
      func_0x00010c0720c0(param_1,param_2,puVar3);
      if ((uVar7 & 1) == 0) {
        puVar4 = PTR_PTR_1126c9460;
        func_0x00010c0f2620(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_1;
        func_0x00010c0720c0(param_1,param_2,puVar4);
        if ((uVar7 & 1) == 0) {
          puVar5 = PTR_PTR_1126c9460;
          func_0x00010c0f2580(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = param_1;
          func_0x00010c0720c0(param_1,param_2,puVar5);
          if ((uVar7 & 1) == 0) {
            puVar6 = PTR_PTR_1126c9460;
            func_0x00010c0f2600(PTR_PTR_1126c9460);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = param_1;
            func_0x00010c0720c0(param_1,param_2,puVar6);
            _objc_release(puVar6);
          }
          else {
            uVar7 = 1;
          }
          _objc_release(puVar5);
        }
        else {
          uVar7 = 1;
        }
        _objc_release(puVar4);
      }
      else {
        uVar7 = 1;
      }
      _objc_release(puVar3);
    }
    else {
      uVar7 = 1;
    }
    _objc_release(puVar2);
  }
  else {
    uVar7 = 1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
  return uVar7;
}



/* Entry: 107cd4384; end: 107cd46f7;  */

undefined8 FUN_107cd4384(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2330;
  _objc_retain();
  func_0x00010bf96940(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0720c0(param_1,param_2,puVar1);
  _objc_release(param_1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 107cd46f8; end: 107cd4737;  */

ulong FUN_107cd46f8(ulong param_1,long param_2)

{
  if (param_2 + 1U < 2) {
    if (param_1 < 0x15) {
      return *(ulong *)(&UNK_10dee5718 + param_1 * 8);
    }
    return 0xffffffffffffffff;
  }
  if (param_2 != 1) {
    return param_1;
  }
  if (param_1 < 0x15) {
    return *(ulong *)(&UNK_10dee5670 + param_1 * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 107cd4738; end: 107cd4a6b;  */

undefined8 FUN_107cd4738(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  _objc_retain(param_2);
  uVar4 = 6;
  switch(param_1) {
  case 0:
  case 2:
  case 3:
  case 0xc:
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    uVar4 = 0xffffffffffffffff;
    break;
  case 1:
    puVar2 = PTR_PTR_1126c9460;
    func_0x00010c0f25e0(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    iVar5 = (int)uVar4;
    uVar3 = 0xb;
    goto code_r0x000107cd4888;
  case 4:
    puVar2 = PTR_PTR_1126c9460;
    func_0x00010c0f2620(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    bVar1 = (int)uVar4 == 0;
    uVar3 = 10;
    uVar4 = 8;
    goto code_r0x000107cd488c;
  case 5:
    puVar2 = PTR_PTR_1126c9460;
    func_0x00010c0f25e0(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    iVar5 = (int)uVar4;
    uVar3 = 7;
code_r0x000107cd4888:
    bVar1 = iVar5 == 0;
    uVar4 = 5;
    goto code_r0x000107cd488c;
  case 6:
    puVar2 = PTR_PTR_1126c9460;
    func_0x00010c0f2600(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    bVar1 = (int)uVar4 == 0;
    uVar3 = 9;
    uVar4 = 0xc;
code_r0x000107cd488c:
    if (bVar1) {
      uVar4 = uVar3;
    }
    break;
  case 7:
  case 8:
  case 0xb:
  case 0xd:
    uVar4 = 0x10;
    break;
  case 10:
  case 0xe:
  case 0x10:
    uVar4 = 0;
  }
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 107cd4a6c; end: 107cd4b33;  */

void FUN_107cd4a6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_1,0,0);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107cd4b34; end: 107cd4be3; -[SCOperaBlizzardLogger initWithLogger:operaConfig:viewSource:] */

undefined1 *
FUN_107cd4b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa778;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    uVar2 = param_4;
    func_0x00010bf8f740();
    *(char *)((long)puVar1 + 0x19) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf8f760();
    *(char *)((long)puVar1 + 0x18) = (char)uVar2;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cd4be4; end: 107cd4bf7; -[SCOperaBlizzardLogger _roundMsIfNeeded:] */

double FUN_107cd4be4(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = (double)(long)param_1;
  if (*(char *)(param_2 + 0x18) == '\0') {
    dVar1 = param_1;
  }
  return dVar1;
}



/* Entry: 107cd4bf8; end: 107cd5357; -[SCOperaBlizzardLogger logPlaybackIntentToNext:mediaTime:] */

void FUN_107cd4bf8(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = param_1;
  _objc_retain(param_4);
  if (*(char *)(param_2 + 0x19) == '\x01') {
    puVar1 = PTR_PTR_1126d7640;
    _objc_alloc_init(PTR_PTR_1126d7640);
    uVar2 = param_4;
    func_0x00010bfa2560(param_4);
    func_0x00010c19aa40(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010bfa26c0(param_4);
    func_0x00010c19aa60(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c0f12c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8220(puVar1,param_3,uVar2);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0c5180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(puVar1,param_3,uVar2);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf4c700(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181f40(puVar1,param_3,uVar2);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c09be40(param_4);
    func_0x00010c1dd6e0(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c0844e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5f20(puVar1,param_3,uVar2);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0b4b20(param_4);
    func_0x00010c1c0e60(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c0d6ca0(param_4);
    func_0x00010c1cba40(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c0ffbc0(param_4);
    func_0x00010c1dd720(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c0c4600();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      uVar3 = param_4;
      func_0x00010c0c4600();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf1f3c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar4 & 1) == 0) {
        func_0x00010c1c5540(puVar1,param_3,1);
      }
    }
    uVar2 = param_4;
    func_0x00010c068220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      uVar2 = param_4;
      func_0x00010c068220(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c0c71c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(uVar2,param_3,uVar3);
      dVar6 = dVar6 * 1000.0;
      _objc_release(uVar3);
      _objc_release(uVar2);
      func_0x00010be97880(param_2);
      func_0x00010c1adea0(puVar1,param_3,(long)dVar6);
    }
    uVar2 = param_4;
    func_0x00010c068200();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      func_0x00010c068200(param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c068200(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0c71c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(uVar2,param_3,uVar3);
    dVar6 = dVar6 * 1000.0;
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010be97880(param_2);
    func_0x00010c1ade80(puVar1,param_3,(long)dVar6);
    uVar2 = param_4;
    func_0x00010bfb13a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      uVar2 = param_4;
      func_0x00010bfb13a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c0c71c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(uVar2,param_3,uVar3);
      dVar6 = dVar6 * 1000.0;
      _objc_release(uVar3);
      _objc_release(uVar2);
      func_0x00010be97880(param_2);
      func_0x00010c1ade40(puVar1,param_3,(long)dVar6);
    }
    func_0x00010c2a1420(param_4);
    func_0x00010be97880(param_2);
    func_0x00010c2244e0(puVar1,param_3,(long)dVar6);
    func_0x00010c29ad20(param_4);
    if (dVar6 != 0.0) {
      func_0x00010c2a1420(param_4);
      dVar5 = param_1 * 1000.0 - dVar6;
      func_0x00010c29ad20(param_4);
      dVar6 = dVar6 - dVar5;
      func_0x00010be97880(param_2);
      func_0x00010c1adee0(puVar1,param_3,(long)dVar6);
    }
    func_0x00010c29ad40(param_4);
    if (dVar6 != 0.0) {
      func_0x00010c29ad40(param_4);
      func_0x00010be97880(param_2);
      func_0x00010c221d00(puVar1,param_3,(long)dVar6);
    }
    uVar2 = param_4;
    func_0x00010c084780(param_4);
    func_0x00010c1b60a0(puVar1,param_3,uVar2);
    func_0x00010c2405c0(param_4);
    func_0x00010c205880(puVar1);
    uVar2 = param_4;
    func_0x00010c100ee0(param_4);
    func_0x00010c1ddba0(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c29e220(param_4);
    func_0x00010c222c00(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c0c6c20(param_4);
    func_0x00010c1c5440(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c084c40(param_4);
    func_0x00010c1b6340(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c0c5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4ee0(puVar1,param_3,uVar2);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0c7060(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e0520(puVar1,param_3,uVar2);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf97160(param_4);
    func_0x00010c196820(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010bf972a0(param_4);
    func_0x00010c196920(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c0c6720(param_4);
    func_0x00010c1c5260(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c0844a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5f00(puVar1,param_3,uVar2);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c25c7c0(param_4);
    func_0x00010c20e620(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c068240(param_4);
    dVar6 = (double)(long)uVar2;
    func_0x00010be97880(dVar6,param_2);
    func_0x00010c1adec0(puVar1,param_3,(long)dVar6);
    uVar2 = param_4;
    func_0x00010c101740(param_4);
    dVar6 = (double)(long)uVar2;
    func_0x00010be97880(dVar6,param_2);
    func_0x00010c1dde60(puVar1,param_3,(long)dVar6);
    uVar2 = param_4;
    func_0x00010c0847e0(param_4);
    func_0x00010c1b60c0(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c084800(param_4);
    func_0x00010c1b60e0(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c0fe880(param_4);
    func_0x00010c1dd2a0(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c100f80(param_4);
    func_0x00010c1ddc40(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c115d60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e3b40(puVar1,param_3,uVar2);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0eb3e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d56e0(puVar1,param_3,uVar2);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0f1900(param_4);
    func_0x00010c1d8560(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c0f0d60(param_4);
    func_0x00010c1d7f80(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c0c5960(param_4);
    func_0x00010c1c4be0(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c0c50c0(param_4);
    func_0x00010c1c4800(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c0641a0(param_4);
    func_0x00010c1acc00(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c0681e0(param_4);
    func_0x00010c1ade60(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010bf15820(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f040(puVar1,param_3,uVar2);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0dd920(param_4);
    func_0x00010c180ea0(puVar1,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c0d8040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      uVar2 = param_4;
      func_0x00010c0d8040(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cc420(puVar1,param_3,uVar2);
      _objc_release(uVar2);
    }
    uVar2 = param_4;
    func_0x00010c0d80e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      uVar2 = param_4;
      func_0x00010c0d80e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cc780(puVar1,param_3,uVar2);
      _objc_release(uVar2);
    }
    func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107cd5358; end: 107cd5f3f; -[SCOperaBlizzardLogger logOperaSnapPlayback:] */

void FUN_107cd5358(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  double dVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x19) == '\x01') {
    puVar1 = PTR_PTR_1126d7648;
    _objc_opt_new();
    lVar2 = param_3;
    func_0x00010bf97160(param_3);
    func_0x00010c196820(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010bf9b740(param_3);
    func_0x00010c198340(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010bf972a0(param_3);
    func_0x00010c196920(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010bf9b860(param_3);
    func_0x00010c198400(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c09d020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d54e0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf9bbc0(param_3);
    func_0x00010c207e60(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c077240(param_3);
    func_0x00010c1c0e60(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c0c4bc0(param_3);
    dVar7 = (double)lVar2;
    func_0x00010be97880(dVar7,param_1);
    func_0x00010c1c45e0(puVar1,param_2,(long)dVar7);
    lVar2 = param_3;
    func_0x00010c0c4c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4680(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf4c700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181f40(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0c5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4ee0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0c6c20(param_3);
    func_0x00010c1c5440(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c0cd280(param_3);
    dVar7 = (double)lVar2;
    func_0x00010be97880(dVar7,param_1);
    func_0x00010c1c79c0(puVar1,param_2,(long)dVar7);
    lVar2 = param_3;
    func_0x00010c0cd260(param_3);
    func_0x00010c1c79a0(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c0eb3e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d56e0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0eb680(param_3);
    func_0x00010c1d5880(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c0f12c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8220(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c100f80(param_3);
    func_0x00010c1ddc40(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c0ff480(param_3);
    func_0x00010c1b6340(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c0ffbc0(param_3);
    func_0x00010c1dd720(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c243c60(param_3);
    func_0x00010c205b20(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c24d600(param_3);
    dVar7 = (double)lVar2;
    func_0x00010be97880(dVar7,param_1);
    func_0x00010c209200(puVar1,param_2,(long)dVar7);
    lVar2 = param_3;
    func_0x00010c24d660(param_3);
    func_0x00010c209280(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c24d680(param_3);
    func_0x00010c2092a0(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c29e220(param_3);
    func_0x00010c222c00(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c29e4e0(param_3);
    dVar7 = (double)lVar2;
    func_0x00010be97880(dVar7,param_1);
    func_0x00010c222d00(puVar1,param_2,(long)dVar7);
    fVar6 = SUB84(dVar7,0);
    lVar2 = param_3;
    func_0x00010c0eb540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d57c0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0d8120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_3;
      func_0x00010c0d8120(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cc420(puVar1,param_2,lVar2);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0ff320(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd5a0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0c50e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4820(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0d6ca0(param_3);
    func_0x00010c1cba40(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c0c7040(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c55e0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bfb72e0(param_3);
    func_0x00010c1920c0(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c29f7a0(param_3);
    func_0x00010c223660(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c29f5e0(param_3);
    func_0x00010c223420(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c13a520(param_3);
    func_0x00010c1eca60(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c13a480(param_3);
    func_0x00010c1eca20(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c2a11e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_3;
      func_0x00010c2a11e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar1);
      func_0x00010c29a280(lVar2);
      func_0x00010c221780(puVar1);
      puVar3 = PTR_PTR_1126d7668;
      _objc_opt_new(PTR_PTR_1126d7668);
      lVar4 = lVar2;
      func_0x00010c0cff20(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c224420(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010bfb7320(lVar2);
      func_0x00010c224380(puVar3,param_2,lVar4);
      lVar4 = lVar2;
      func_0x00010bfb7360(lVar2);
      func_0x00010c2243a0(puVar3,param_2,lVar4);
      func_0x00010c14e180(lVar2);
      func_0x00010c224480(puVar3);
      func_0x00010c0cd900(lVar2);
      func_0x00010c224400(puVar3);
      func_0x00010c0c2a40(lVar2);
      func_0x00010c2243c0(puVar3);
      func_0x00010c0c3e40(lVar2);
      func_0x00010c2243e0(puVar3);
      func_0x00010bfb1340(lVar2);
      func_0x00010c224360(puVar3);
      func_0x00010c0cffa0(lVar2);
      func_0x00010c224440(puVar3);
      lVar4 = lVar2;
      func_0x00010bf806e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c224340(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      func_0x00010c224460(puVar1,param_2,puVar3);
      _objc_release(puVar1);
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
    puVar3 = PTR_PTR_1126c9a50;
    _objc_opt_new(PTR_PTR_1126c9a50);
    lVar2 = param_3;
    func_0x00010c115d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c116000();
    func_0x00010c1e3cc0(puVar3,param_2,lVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c115d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bef4200();
    func_0x00010c163f80(puVar3,param_2,lVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c115d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bef60a0();
    func_0x00010c164dc0(puVar3,param_2,lVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0844e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5f60(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c084c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6360(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c084c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b63c0(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c1e3b40(puVar1,param_2,puVar3);
    lVar2 = param_3;
    func_0x00010c13b180(param_3);
    func_0x00010c1ecc80(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c13b020(param_3);
    func_0x00010c1ecbe0(puVar1,param_2,lVar2);
    func_0x00010c13b120(param_3);
    func_0x00010c1ecc20((double)fVar6,puVar1);
    lVar2 = param_3;
    func_0x00010c13b160(param_3);
    func_0x00010c1ecc60(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c13af80(param_3);
    func_0x00010c1ecba0(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c2a1420(param_3);
    dVar7 = (double)lVar2;
    func_0x00010be97880(dVar7,param_1);
    func_0x00010c2244e0(puVar1,param_2,(long)dVar7);
    lVar2 = param_3;
    func_0x00010c297900(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c5600(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0ea5a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d5480(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c100480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar5 = *(undefined8 *)(param_1 + 8);
    if (lVar2 == 0) {
      func_0x00010c0b2e60(uVar5,param_2,puVar1);
    }
    else {
      _objc_retain(uVar5);
      lVar2 = param_3;
      func_0x00010c100480(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      uStack_60 = 0x107cd5bfc;
      puStack_58 = &UNK_110a07578;
      _objc_retain(puVar1);
      puStack_50 = puVar1;
      uStack_48 = uVar5;
      _objc_retain(uVar5);
      func_0x00010c297260(lVar2,param_2,&puStack_70,0);
      _objc_release(lVar2);
      _objc_release(uStack_48);
      _objc_release(puStack_50);
      _objc_release(uVar5);
    }
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107cd5f40; end: 107cd60d3; -[SCOperaBlizzardLogger logOperaSnapPlaybackSession:] */

void FUN_107cd5f40(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  
  puVar1 = PTR_PTR_1126d7660;
  if (*(char *)(param_1 + 0x19) == '\x01') {
    _objc_retain(param_3);
    _objc_opt_new(puVar1);
    func_0x00010c1d5880();
    lVar2 = param_3;
    func_0x00010bf9b740(param_3);
    func_0x00010c198340(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c0eb3e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d56e0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c15fe20(param_3);
    dVar3 = (double)lVar2;
    func_0x00010be97880(dVar3,param_1);
    func_0x00010c1fd980(puVar1,param_2,(long)dVar3);
    lVar2 = param_3;
    func_0x00010c23fa00(param_3);
    func_0x00010c203cc0(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c24d5c0(param_3);
    func_0x00010c2091c0(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c24d5e0(param_3);
    dVar3 = (double)lVar2;
    func_0x00010be97880(dVar3,param_1);
    func_0x00010c2091e0(puVar1,param_2,(long)dVar3);
    lVar2 = param_3;
    func_0x00010c24d660(param_3);
    func_0x00010c209280(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c24d680(param_3);
    func_0x00010c2092a0(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c24d620(param_3);
    func_0x00010c209240(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c259600(param_3);
    func_0x00010c20cda0(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c29e220(param_3);
    func_0x00010c222c00(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c0d6ca0(param_3);
    _objc_release(param_3);
    func_0x00010c1cba40(puVar1,param_2,lVar2);
    func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107cd60d4; end: 107cd60db; -[SCOperaBlizzardLogger shouldLogPlaybackMetrics] */

undefined1 FUN_107cd60d4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 107cd60dc; end: 107cd60e7; -[SCOperaBlizzardLogger .cxx_destruct] */

void FUN_107cd60dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cd60e8; end: 107cd661b; -[SCOperaPlaybackIntentToNextLogParameters initWithFeatureMajorName:featureMinorName:loadPhase:itemLoadState:itemType:itemId:operaSessionId:mediaPlaybackSessionId:pageId:mediaId:contentId:longForm:itemLoadedCount:entryEvent:entryIntent:mediaSizeByte:itemGroupId:streamingFailureCode:intentToPlaylistStartSetupViewModelsTimeMs:playlistSetupViewModelsTimeMs:itemLoaded:playSource:playbackMode:playerType:mediaViewingIntentDate:firstFrameStartsToDisplayDate:intentToOperaReadyDate:intentToPageOpenedDate:snapDuration:videoPreparationStartTimeMs:videoPrepareTimeMs:playerSessionTimeStamp:viewSource:mediaType:bandwidthRangeClass:nqeDownloadBandwidthBps:navigationType:productContext:mediaContentEncrypted:mediaVariantsPrefetchInfo:intentToOpenOperaTs:initialPlaylistReadyTs:mediaMetadataReadyTs:mediaReadyTs:intentToDismissPageTs:pageOpenedTs:mediaMinimallyDisplayedTs:mediaFullyDisplayedTs:pageClosedTs:networkSnapshot:networkSnapshotStats:waitMs:] */

undefined8 *
FUN_107cd60e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined1 param_28,
             undefined4 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_98;
  undefined *puStack_90;
  
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_24);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_40);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_55);
  _objc_retain(param_56);
  puStack_90 = PTR_PTR_1126fa780;
  puVar1 = &uStack_98;
  uStack_98 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_7;
    puVar1[3] = param_8;
    puVar1[4] = param_9;
    puVar1[5] = param_10;
    puVar1[6] = param_11;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_18;
    puVar1[0xd] = param_20;
    puVar1[0xe] = param_21;
    puVar1[0xf] = param_22;
    puVar1[0x10] = param_23;
    uVar2 = param_24;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    puVar1[0x12] = param_25;
    *(undefined1 *)((long)puVar1 + 9) = param_28;
    puVar1[0x13] = param_26;
    puVar1[0x14] = param_27;
    puVar1[0x15] = param_30;
    puVar1[0x16] = param_31;
    puVar1[0x17] = param_32;
    uVar2 = param_33;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_34;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x19];
    puVar1[0x19] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_35;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_36;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = uVar2;
    _objc_release(uVar3);
    puVar1[0x1c] = param_1;
    puVar1[0x1d] = param_2;
    puVar1[0x1e] = param_3;
    puVar1[0x1f] = param_37;
    puVar1[0x20] = param_38;
    puVar1[0x21] = param_39;
    uVar2 = param_40;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x22];
    puVar1[0x22] = uVar2;
    _objc_release(uVar3);
    puVar1[0x23] = param_41;
    puVar1[0x24] = param_42;
    uVar2 = param_43;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x25];
    puVar1[0x25] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_44;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x26];
    puVar1[0x26] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_45;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x27];
    puVar1[0x27] = uVar2;
    _objc_release(uVar3);
    puVar1[0x28] = param_46;
    puVar1[0x29] = param_47;
    puVar1[0x2a] = param_48;
    puVar1[0x2b] = param_49;
    puVar1[0x2c] = param_50;
    puVar1[0x2d] = param_51;
    puVar1[0x2e] = param_52;
    puVar1[0x2f] = param_53;
    puVar1[0x30] = param_54;
    uVar2 = param_55;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x31];
    puVar1[0x31] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_56;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x32];
    puVar1[0x32] = uVar2;
    _objc_release(uVar3);
    puVar1[0x33] = param_4;
  }
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_40);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_24);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  return puVar1;
}



/* Entry: 107cd661c; end: 107cd663f; -[SCOperaPlaybackIntentToNextLogParameters copyWithZone:] */

undefined8 FUN_107cd661c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107cd6640; end: 107cd68ab; -[SCOperaPlaybackIntentToNextLogParameters hash] */

undefined8 * FUN_107cd6640(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  ulong uStack_48;
  long lStack_38;
  
  puVar5 = &uStack_1e0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  lStack_1c0 = -lVar7;
  if (-1 < lVar7) {
    lStack_1c0 = lVar7;
  }
  uStack_1e0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_1d8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_1d0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_1c8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_1b8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_1b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_1a8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_1a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_198 = uVar3;
  func_0x00010bfde980();
  uStack_188 = (ulong)*(byte *)(param_1 + 8);
  uStack_180 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x68));
  uStack_178 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x70));
  lVar7 = *(long *)(param_1 + 0x78);
  uStack_168 = *(undefined8 *)(param_1 + 0x80);
  lStack_170 = -lVar7;
  if (-1 < lVar7) {
    lStack_170 = lVar7;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  uStack_190 = uVar2;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0xa0);
  lStack_148 = -lVar7;
  if (-1 < lVar7) {
    lStack_148 = lVar7;
  }
  uStack_140 = (ulong)*(byte *)(param_1 + 9);
  lVar7 = *(long *)(param_1 + 0xb8);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  lStack_128 = -lVar7;
  if (-1 < lVar7) {
    lStack_128 = lVar7;
  }
  uStack_158 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x90));
  uStack_150 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x98));
  uStack_138 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xa8));
  uStack_130 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xb0));
  uStack_160 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 200);
  uStack_120 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  uStack_118 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  uStack_110 = uVar2;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0xe0) + *(ulong *)(param_1 + 0xe0) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_100 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_100 = uStack_100 ^ uStack_100 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0xe8) + *(ulong *)(param_1 + 0xe8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0xf0) + *(ulong *)(param_1 + 0xf0) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_f8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_f8 = uStack_f8 ^ uStack_f8 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_f0 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_f0 = uStack_f0 ^ uStack_f0 >> 0x16;
  uStack_e8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xf8));
  uStack_e0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x100));
  lVar7 = *(long *)(param_1 + 0x108);
  uStack_d0 = *(undefined8 *)(param_1 + 0x110);
  lStack_d8 = -lVar7;
  if (-1 < lVar7) {
    lStack_d8 = lVar7;
  }
  uStack_108 = uVar3;
  func_0x00010bfde980();
  uStack_c8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x118));
  uStack_c0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x120));
  uVar3 = *(undefined8 *)(param_1 + 0x128);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  uStack_b8 = uVar3;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x138);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uStack_98 = *(undefined8 *)(param_1 + 0x148);
  uStack_a0 = *(undefined8 *)(param_1 + 0x140);
  uStack_88 = *(undefined8 *)(param_1 + 0x158);
  uStack_90 = *(undefined8 *)(param_1 + 0x150);
  uStack_78 = *(undefined8 *)(param_1 + 0x168);
  uStack_80 = *(undefined8 *)(param_1 + 0x160);
  uStack_68 = *(undefined8 *)(param_1 + 0x178);
  uStack_70 = *(undefined8 *)(param_1 + 0x170);
  uStack_60 = *(undefined8 *)(param_1 + 0x180);
  uVar3 = *(undefined8 *)(param_1 + 0x188);
  uStack_a8 = uVar4;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 400);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x198) + *(ulong *)(param_1 + 0x198) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_50 = uVar2;
  func_0x000100505190(&uStack_1e0,0x34);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_107cd6d64:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107cd6d70;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if (((((((ulong)puVar6 & 1) != 0) &&
          ((((*(long *)((long)puVar5 + 0x10) == *(long *)(param_3 + 0x10) &&
             (*(long *)((long)puVar5 + 0x18) == *(long *)(param_3 + 0x18))) &&
            (*(long *)((long)puVar5 + 0x20) == *(long *)(param_3 + 0x20))) &&
           ((*(long *)((long)puVar5 + 0x28) == *(long *)(param_3 + 0x28) &&
            (*(long *)((long)puVar5 + 0x30) == *(long *)(param_3 + 0x30))))))) &&
         ((*(char *)((long)puVar5 + 8) == param_3[8] &&
          (((*(long *)((long)puVar5 + 0x68) == *(long *)(param_3 + 0x68) &&
            (*(long *)((long)puVar5 + 0x70) == *(long *)(param_3 + 0x70))) &&
           ((*(long *)((long)puVar5 + 0x78) == *(long *)(param_3 + 0x78) &&
            (((*(long *)((long)puVar5 + 0x80) == *(long *)(param_3 + 0x80) &&
              (*(long *)((long)puVar5 + 0x90) == *(long *)(param_3 + 0x90))) &&
             (*(long *)((long)puVar5 + 0x98) == *(long *)(param_3 + 0x98))))))))))) &&
        ((((*(long *)((long)puVar5 + 0xa0) == *(long *)(param_3 + 0xa0) &&
           (*(char *)((long)puVar5 + 9) == param_3[9])) &&
          (*(long *)((long)puVar5 + 0xa8) == *(long *)(param_3 + 0xa8))) &&
         (((*(long *)((long)puVar5 + 0xb0) == *(long *)(param_3 + 0xb0) &&
           (*(long *)((long)puVar5 + 0xb8) == *(long *)(param_3 + 0xb8))) &&
          ((*(long *)((long)puVar5 + 0xf8) == *(long *)(param_3 + 0xf8) &&
           (((*(long *)((long)puVar5 + 0x100) == *(long *)(param_3 + 0x100) &&
             (*(long *)((long)puVar5 + 0x108) == *(long *)(param_3 + 0x108))) &&
            (*(long *)((long)puVar5 + 0x118) == *(long *)(param_3 + 0x118))))))))))) &&
       (((*(long *)((long)puVar5 + 0x120) == *(long *)(param_3 + 0x120) &&
         (*(long *)((long)puVar5 + 0x140) == *(long *)(param_3 + 0x140))) &&
        ((*(long *)((long)puVar5 + 0x148) == *(long *)(param_3 + 0x148) &&
         (((*(long *)((long)puVar5 + 0x150) == *(long *)(param_3 + 0x150) &&
           (*(long *)((long)puVar5 + 0x158) == *(long *)(param_3 + 0x158))) &&
          ((*(long *)((long)puVar5 + 0x160) == *(long *)(param_3 + 0x160) &&
           ((((*(long *)((long)puVar5 + 0x168) == *(long *)(param_3 + 0x168) &&
              (*(long *)((long)puVar5 + 0x170) == *(long *)(param_3 + 0x170))) &&
             (*(long *)((long)puVar5 + 0x178) == *(long *)(param_3 + 0x178))) &&
            (*(long *)((long)puVar5 + 0x180) == *(long *)(param_3 + 0x180))))))))))))) {
      dVar10 = ABS(*(double *)((long)puVar5 + 0xe0) - *(double *)(param_3 + 0xe0));
      if ((dVar10 < 2.2250738585072014e-308) ||
         (dVar10 < ABS(*(double *)((long)puVar5 + 0xe0) + *(double *)(param_3 + 0xe0)) *
                   2.220446049250313e-16)) {
        dVar10 = ABS(*(double *)((long)puVar5 + 0xe8) - *(double *)(param_3 + 0xe8));
        if ((dVar10 < 2.2250738585072014e-308) ||
           (dVar10 < ABS(*(double *)((long)puVar5 + 0xe8) + *(double *)(param_3 + 0xe8)) *
                     2.220446049250313e-16)) {
          dVar10 = ABS(*(double *)((long)puVar5 + 0xf0) - *(double *)(param_3 + 0xf0));
          if ((dVar10 < 2.2250738585072014e-308) ||
             (dVar10 < ABS(*(double *)((long)puVar5 + 0xf0) + *(double *)(param_3 + 0xf0)) *
                       2.220446049250313e-16)) {
            dVar10 = ABS(*(double *)((long)puVar5 + 0x198) - *(double *)(param_3 + 0x198));
            if (((((((dVar10 < 2.2250738585072014e-308) ||
                    (dVar10 < ABS(*(double *)((long)puVar5 + 0x198) + *(double *)(param_3 + 0x198))
                              * 2.220446049250313e-16)) &&
                   ((lVar7 = *(long *)((long)puVar5 + 0x38), lVar7 == *(long *)(param_3 + 0x38) ||
                    (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                  ((lVar7 = *(long *)((long)puVar5 + 0x40), lVar7 == *(long *)(param_3 + 0x40) ||
                   (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                 ((((lVar7 = *(long *)((long)puVar5 + 0x48), lVar7 == *(long *)(param_3 + 0x48) ||
                    (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                   ((lVar7 = *(long *)((long)puVar5 + 0x50), lVar7 == *(long *)(param_3 + 0x50) ||
                    (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                  ((lVar7 = *(long *)((long)puVar5 + 0x58), lVar7 == *(long *)(param_3 + 0x58) ||
                   (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
                ((lVar7 = *(long *)((long)puVar5 + 0x60), lVar7 == *(long *)(param_3 + 0x60) ||
                 (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
               (((((lVar7 = *(long *)((long)puVar5 + 0x88), lVar7 == *(long *)(param_3 + 0x88) ||
                   (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                  ((lVar7 = *(long *)((long)puVar5 + 0xc0), lVar7 == *(long *)(param_3 + 0xc0) ||
                   (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                 (((lVar7 = *(long *)((long)puVar5 + 200), lVar7 == *(long *)(param_3 + 200) ||
                   (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                  ((lVar7 = *(long *)((long)puVar5 + 0xd0), lVar7 == *(long *)(param_3 + 0xd0) ||
                   (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
                ((((lVar7 = *(long *)((long)puVar5 + 0xd8), lVar7 == *(long *)(param_3 + 0xd8) ||
                   (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                  ((lVar7 = *(long *)((long)puVar5 + 0x110), lVar7 == *(long *)(param_3 + 0x110) ||
                   (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                 ((((lVar7 = *(long *)((long)puVar5 + 0x128), lVar7 == *(long *)(param_3 + 0x128) ||
                    (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                   ((lVar7 = *(long *)((long)puVar5 + 0x130), lVar7 == *(long *)(param_3 + 0x130) ||
                    (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                  (((lVar7 = *(long *)((long)puVar5 + 0x138), lVar7 == *(long *)(param_3 + 0x138) ||
                    (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                   ((lVar7 = *(long *)((long)puVar5 + 0x188), lVar7 == *(long *)(param_3 + 0x188) ||
                    (func_0x00010c071ae0(), (int)lVar7 != 0)))))))))))) {
              puVar9 = *(undefined1 **)((long)puVar5 + 400);
              if (puVar9 != *(undefined1 **)(param_3 + 400)) {
                func_0x00010c071ae0();
                goto LAB_107cd6d70;
              }
              goto LAB_107cd6d64;
            }
          }
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_107cd6d70:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 107cd68ac; end: 107cd6d8b; -[SCOperaPlaybackIntentToNextLogParameters isEqual:] */

long FUN_107cd68ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107cd6d64:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107cd6d70;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((((uVar2 & 1) != 0) &&
          ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
             (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
            (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
           ((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
            (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))))) &&
         ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (((*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68) &&
            (*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70))) &&
           ((*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78) &&
            (((*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80) &&
              (*(long *)(param_1 + 0x90) == *(long *)(param_3 + 0x90))) &&
             (*(long *)(param_1 + 0x98) == *(long *)(param_3 + 0x98))))))))))) &&
        ((((*(long *)(param_1 + 0xa0) == *(long *)(param_3 + 0xa0) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          (*(long *)(param_1 + 0xa8) == *(long *)(param_3 + 0xa8))) &&
         (((*(long *)(param_1 + 0xb0) == *(long *)(param_3 + 0xb0) &&
           (*(long *)(param_1 + 0xb8) == *(long *)(param_3 + 0xb8))) &&
          ((*(long *)(param_1 + 0xf8) == *(long *)(param_3 + 0xf8) &&
           (((*(long *)(param_1 + 0x100) == *(long *)(param_3 + 0x100) &&
             (*(long *)(param_1 + 0x108) == *(long *)(param_3 + 0x108))) &&
            (*(long *)(param_1 + 0x118) == *(long *)(param_3 + 0x118))))))))))) &&
       (((*(long *)(param_1 + 0x120) == *(long *)(param_3 + 0x120) &&
         (*(long *)(param_1 + 0x140) == *(long *)(param_3 + 0x140))) &&
        ((*(long *)(param_1 + 0x148) == *(long *)(param_3 + 0x148) &&
         (((*(long *)(param_1 + 0x150) == *(long *)(param_3 + 0x150) &&
           (*(long *)(param_1 + 0x158) == *(long *)(param_3 + 0x158))) &&
          ((*(long *)(param_1 + 0x160) == *(long *)(param_3 + 0x160) &&
           ((((*(long *)(param_1 + 0x168) == *(long *)(param_3 + 0x168) &&
              (*(long *)(param_1 + 0x170) == *(long *)(param_3 + 0x170))) &&
             (*(long *)(param_1 + 0x178) == *(long *)(param_3 + 0x178))) &&
            (*(long *)(param_1 + 0x180) == *(long *)(param_3 + 0x180))))))))))))) {
      dVar4 = ABS(*(double *)(param_1 + 0xe0) - *(double *)(param_3 + 0xe0));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0xe0) + *(double *)(param_3 + 0xe0)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0xe8) - *(double *)(param_3 + 0xe8));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0xe8) + *(double *)(param_3 + 0xe8)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 0xf0) - *(double *)(param_3 + 0xf0));
          if ((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 0xf0) + *(double *)(param_3 + 0xf0)) *
                      2.220446049250313e-16)) {
            dVar4 = ABS(*(double *)(param_1 + 0x198) - *(double *)(param_3 + 0x198));
            if (((((((dVar4 < 2.2250738585072014e-308) ||
                    (dVar4 < ABS(*(double *)(param_1 + 0x198) + *(double *)(param_3 + 0x198)) *
                             2.220446049250313e-16)) &&
                   ((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                  ((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                 ((((lVar3 = *(long *)(param_1 + 0x48), lVar3 == *(long *)(param_3 + 0x48) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                   ((lVar3 = *(long *)(param_1 + 0x50), lVar3 == *(long *)(param_3 + 0x50) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                  ((lVar3 = *(long *)(param_1 + 0x58), lVar3 == *(long *)(param_3 + 0x58) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
                ((lVar3 = *(long *)(param_1 + 0x60), lVar3 == *(long *)(param_3 + 0x60) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
               (((((lVar3 = *(long *)(param_1 + 0x88), lVar3 == *(long *)(param_3 + 0x88) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                  ((lVar3 = *(long *)(param_1 + 0xc0), lVar3 == *(long *)(param_3 + 0xc0) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                 (((lVar3 = *(long *)(param_1 + 200), lVar3 == *(long *)(param_3 + 200) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                  ((lVar3 = *(long *)(param_1 + 0xd0), lVar3 == *(long *)(param_3 + 0xd0) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
                ((((lVar3 = *(long *)(param_1 + 0xd8), lVar3 == *(long *)(param_3 + 0xd8) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                  ((lVar3 = *(long *)(param_1 + 0x110), lVar3 == *(long *)(param_3 + 0x110) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                 ((((lVar3 = *(long *)(param_1 + 0x128), lVar3 == *(long *)(param_3 + 0x128) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                   ((lVar3 = *(long *)(param_1 + 0x130), lVar3 == *(long *)(param_3 + 0x130) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                  (((lVar3 = *(long *)(param_1 + 0x138), lVar3 == *(long *)(param_3 + 0x138) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                   ((lVar3 = *(long *)(param_1 + 0x188), lVar3 == *(long *)(param_3 + 0x188) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))))) {
              lVar3 = *(long *)(param_1 + 400);
              if (lVar3 != *(long *)(param_3 + 400)) {
                func_0x00010c071ae0();
                goto LAB_107cd6d70;
              }
              goto LAB_107cd6d64;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107cd6d70:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107cd6d8c; end: 107cd6d93; -[SCOperaPlaybackIntentToNextLogParameters featureMajorName] */

undefined8 FUN_107cd6d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cd6d94; end: 107cd6d9b; -[SCOperaPlaybackIntentToNextLogParameters featureMinorName] */

undefined8 FUN_107cd6d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107cd6d9c; end: 107cd6da3; -[SCOperaPlaybackIntentToNextLogParameters loadPhase] */

undefined8 FUN_107cd6d9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107cd6da4; end: 107cd6dab; -[SCOperaPlaybackIntentToNextLogParameters itemLoadState] */

undefined8 FUN_107cd6da4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107cd6dac; end: 107cd6db3; -[SCOperaPlaybackIntentToNextLogParameters itemType] */

undefined8 FUN_107cd6dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107cd6db4; end: 107cd6dbb; -[SCOperaPlaybackIntentToNextLogParameters itemId] */

undefined8 FUN_107cd6db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107cd6dbc; end: 107cd6dc3; -[SCOperaPlaybackIntentToNextLogParameters operaSessionId] */

undefined8 FUN_107cd6dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107cd6dc4; end: 107cd6dcb; -[SCOperaPlaybackIntentToNextLogParameters mediaPlaybackSessionId] */

undefined8 FUN_107cd6dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107cd6dcc; end: 107cd6dd3; -[SCOperaPlaybackIntentToNextLogParameters pageId] */

undefined8 FUN_107cd6dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107cd6dd4; end: 107cd6ddb; -[SCOperaPlaybackIntentToNextLogParameters mediaId] */

undefined8 FUN_107cd6dd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107cd6ddc; end: 107cd6de3; -[SCOperaPlaybackIntentToNextLogParameters contentId] */

undefined8 FUN_107cd6ddc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107cd6de4; end: 107cd6deb; -[SCOperaPlaybackIntentToNextLogParameters longForm] */

undefined1 FUN_107cd6de4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107cd6dec; end: 107cd6df3; -[SCOperaPlaybackIntentToNextLogParameters itemLoadedCount] */

undefined8 FUN_107cd6dec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107cd6df4; end: 107cd6dfb; -[SCOperaPlaybackIntentToNextLogParameters entryEvent] */

undefined8 FUN_107cd6df4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107cd6dfc; end: 107cd6e03; -[SCOperaPlaybackIntentToNextLogParameters entryIntent] */

undefined8 FUN_107cd6dfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107cd6e04; end: 107cd6e0b; -[SCOperaPlaybackIntentToNextLogParameters mediaSizeByte] */

undefined8 FUN_107cd6e04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107cd6e0c; end: 107cd6e13; -[SCOperaPlaybackIntentToNextLogParameters itemGroupId] */

undefined8 FUN_107cd6e0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107cd6e14; end: 107cd6e1b; -[SCOperaPlaybackIntentToNextLogParameters streamingFailureCode] */

undefined8 FUN_107cd6e14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107cd6e1c; end: 107cd6e23; -[SCOperaPlaybackIntentToNextLogParameters intentToPlaylistStartSetupViewModelsTimeMs] */

undefined8 FUN_107cd6e1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107cd6e24; end: 107cd6e2b; -[SCOperaPlaybackIntentToNextLogParameters playlistSetupViewModelsTimeMs] */

undefined8 FUN_107cd6e24(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107cd6e2c; end: 107cd6e33; -[SCOperaPlaybackIntentToNextLogParameters itemLoaded] */

undefined1 FUN_107cd6e2c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107cd6e34; end: 107cd6e3b; -[SCOperaPlaybackIntentToNextLogParameters playSource] */

undefined8 FUN_107cd6e34(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 107cd6e3c; end: 107cd6e43; -[SCOperaPlaybackIntentToNextLogParameters playbackMode] */

undefined8 FUN_107cd6e3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 107cd6e44; end: 107cd6e4b; -[SCOperaPlaybackIntentToNextLogParameters playerType] */

undefined8 FUN_107cd6e44(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 107cd6e4c; end: 107cd6e53; -[SCOperaPlaybackIntentToNextLogParameters mediaViewingIntentDate] */

undefined8 FUN_107cd6e4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 107cd6e54; end: 107cd6e5b; -[SCOperaPlaybackIntentToNextLogParameters firstFrameStartsToDisplayDate] */

undefined8 FUN_107cd6e54(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 107cd6e5c; end: 107cd6e63; -[SCOperaPlaybackIntentToNextLogParameters intentToOperaReadyDate] */

undefined8 FUN_107cd6e5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 107cd6e64; end: 107cd6e6b; -[SCOperaPlaybackIntentToNextLogParameters intentToPageOpenedDate] */

undefined8 FUN_107cd6e64(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 107cd6e6c; end: 107cd6e73; -[SCOperaPlaybackIntentToNextLogParameters snapDuration] */

undefined8 FUN_107cd6e6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 107cd6e74; end: 107cd6e7b; -[SCOperaPlaybackIntentToNextLogParameters videoPreparationStartTimeMs] */

undefined8 FUN_107cd6e74(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 107cd6e7c; end: 107cd6e83; -[SCOperaPlaybackIntentToNextLogParameters videoPrepareTimeMs] */

undefined8 FUN_107cd6e7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 107cd6e84; end: 107cd6e8b; -[SCOperaPlaybackIntentToNextLogParameters playerSessionTimeStamp] */

undefined8 FUN_107cd6e84(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 107cd6e8c; end: 107cd6e93; -[SCOperaPlaybackIntentToNextLogParameters viewSource] */

undefined8 FUN_107cd6e8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 107cd6e94; end: 107cd6e9b; -[SCOperaPlaybackIntentToNextLogParameters mediaType] */

undefined8 FUN_107cd6e94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 107cd6e9c; end: 107cd6ea3; -[SCOperaPlaybackIntentToNextLogParameters bandwidthRangeClass] */

undefined8 FUN_107cd6e9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 107cd6ea4; end: 107cd6eab; -[SCOperaPlaybackIntentToNextLogParameters nqeDownloadBandwidthBps] */

undefined8 FUN_107cd6ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 107cd6eac; end: 107cd6eb3; -[SCOperaPlaybackIntentToNextLogParameters navigationType] */

undefined8 FUN_107cd6eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 107cd6eb4; end: 107cd6ebb; -[SCOperaPlaybackIntentToNextLogParameters productContext] */

undefined8 FUN_107cd6eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 107cd6ebc; end: 107cd6ec3; -[SCOperaPlaybackIntentToNextLogParameters mediaContentEncrypted] */

undefined8 FUN_107cd6ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 107cd6ec4; end: 107cd6ecb; -[SCOperaPlaybackIntentToNextLogParameters mediaVariantsPrefetchInfo] */

undefined8 FUN_107cd6ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 107cd6ecc; end: 107cd6ed3; -[SCOperaPlaybackIntentToNextLogParameters intentToOpenOperaTs] */

undefined8 FUN_107cd6ecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 107cd6ed4; end: 107cd6edb; -[SCOperaPlaybackIntentToNextLogParameters initialPlaylistReadyTs] */

undefined8 FUN_107cd6ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 107cd6edc; end: 107cd6ee3; -[SCOperaPlaybackIntentToNextLogParameters mediaMetadataReadyTs] */

undefined8 FUN_107cd6edc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 107cd6ee4; end: 107cd6eeb; -[SCOperaPlaybackIntentToNextLogParameters mediaReadyTs] */

undefined8 FUN_107cd6ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 107cd6eec; end: 107cd6ef3; -[SCOperaPlaybackIntentToNextLogParameters intentToDismissPageTs] */

undefined8 FUN_107cd6eec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 107cd6ef4; end: 107cd6efb; -[SCOperaPlaybackIntentToNextLogParameters pageOpenedTs] */

undefined8 FUN_107cd6ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 107cd6efc; end: 107cd6f03; -[SCOperaPlaybackIntentToNextLogParameters mediaMinimallyDisplayedTs] */

undefined8 FUN_107cd6efc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



/* Entry: 107cd6f04; end: 107cd6f0b; -[SCOperaPlaybackIntentToNextLogParameters mediaFullyDisplayedTs] */

undefined8 FUN_107cd6f04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 107cd6f0c; end: 107cd6f13; -[SCOperaPlaybackIntentToNextLogParameters pageClosedTs] */

undefined8 FUN_107cd6f0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 107cd6f14; end: 107cd6f1b; -[SCOperaPlaybackIntentToNextLogParameters networkSnapshot] */

undefined8 FUN_107cd6f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



/* Entry: 107cd6f1c; end: 107cd6f23; -[SCOperaPlaybackIntentToNextLogParameters networkSnapshotStats] */

undefined8 FUN_107cd6f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}



/* Entry: 107cd6f24; end: 107cd6f2b; -[SCOperaPlaybackIntentToNextLogParameters waitMs] */

undefined8 FUN_107cd6f24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 107cd6f2c; end: 107cd700f; -[SCOperaPlaybackIntentToNextLogParameters .cxx_destruct] */

void FUN_107cd6f2c(long param_1)

{
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,0);
  return;
}



/* Entry: 107cd7010; end: 107cd702b; +[SCOperaPlaybackIntentToNextLogParametersBuilder operaPlaybackIntentToNextLogParameters] */

void FUN_107cd7010(void)

{
  _objc_alloc_init(PTR_PTR_1126c9a30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107cd702c; end: 107cd7ac7; +[SCOperaPlaybackIntentToNextLogParametersBuilder operaPlaybackIntentToNextLogParametersFromExistingOperaPlaybackIntentToNextLogParameters:] */

void FUN_107cd702c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined8 uVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined8 uVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined8 uVar53;
  undefined *puVar54;
  undefined8 uVar55;
  undefined *puVar56;
  undefined8 uVar57;
  undefined *puVar58;
  undefined *puVar59;
  undefined *puVar60;
  undefined *puVar61;
  undefined *puVar62;
  undefined *puVar63;
  undefined *puVar64;
  undefined *puVar65;
  undefined *puVar66;
  undefined *puVar67;
  undefined8 uVar68;
  undefined *puVar69;
  undefined *puVar70;
  
  puVar1 = PTR_PTR_1126c9a30;
  _objc_retain(param_4);
  func_0x00010c0eaba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfa2560(param_4);
  puVar3 = puVar1;
  func_0x00010c2adb00(puVar1,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfa26c0(param_4);
  puVar4 = puVar3;
  func_0x00010c2adb20(puVar3,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c09be40(param_4);
  puVar5 = puVar4;
  func_0x00010c2b2ee0(puVar4,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c084780(param_4);
  puVar6 = puVar5;
  func_0x00010c2b1ac0(puVar5,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c084c40(param_4);
  puVar7 = puVar6;
  func_0x00010c2b1b80(puVar6,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2b1a60(puVar7,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010c0eb3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c2b4ec0(puVar8,param_3,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010c0c5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010c2b39c0(puVar10,param_3,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_4;
  func_0x00010c0f12c0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010c2b53a0(puVar12,param_3,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_4;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010c2b3860(puVar14,param_3,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_4;
  func_0x00010bf4c700();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010c2aade0(puVar16,param_3,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_4;
  func_0x00010c0b4b20(param_4);
  puVar20 = puVar18;
  func_0x00010c2b3240(puVar18,param_3,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_4;
  func_0x00010c084800(param_4);
  puVar21 = puVar20;
  func_0x00010c2b1b00(puVar20,param_3,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_4;
  func_0x00010bf97160(param_4);
  puVar22 = puVar21;
  func_0x00010c2ad400(puVar21,param_3,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_4;
  func_0x00010bf972a0(param_4);
  puVar23 = puVar22;
  func_0x00010c2ad480(puVar22,param_3,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_4;
  func_0x00010c0c6720(param_4);
  puVar24 = puVar23;
  func_0x00010c2b3a00(puVar23,param_3,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_4;
  func_0x00010c0844a0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x00010c2b1a40(puVar24,param_3,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_4;
  func_0x00010c25c7c0(param_4);
  puVar27 = puVar25;
  func_0x00010c2ba840(puVar25,param_3,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_4;
  func_0x00010c068240(param_4);
  puVar28 = puVar27;
  func_0x00010c2affa0(puVar27,param_3,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_4;
  func_0x00010c101740(param_4);
  puVar29 = puVar28;
  func_0x00010c2b57c0(puVar28,param_3,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_4;
  func_0x00010c0847e0(param_4);
  puVar30 = puVar29;
  func_0x00010c2b1ae0(puVar29,param_3,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_4;
  func_0x00010c0fe880(param_4);
  puVar31 = puVar30;
  func_0x00010c2b5680(puVar30,param_3,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_4;
  func_0x00010c0ffbc0(param_4);
  puVar32 = puVar31;
  func_0x00010c2b56e0(puVar31,param_3,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_4;
  func_0x00010c100f80(param_4);
  puVar33 = puVar32;
  func_0x00010c2b57a0(puVar32,param_3,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_4;
  func_0x00010c0c71c0();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar33;
  func_0x00010c2b3ba0(puVar33,param_3,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar35 = param_4;
  func_0x00010bfb13a0();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = puVar34;
  func_0x00010c2ae2a0(puVar34,param_3,uVar35);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = param_4;
  func_0x00010c068200();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = puVar36;
  func_0x00010c2aff60(puVar36,param_3,uVar37);
  _objc_retainAutoreleasedReturnValue();
  uVar39 = param_4;
  func_0x00010c068220();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = puVar38;
  func_0x00010c2aff80(puVar38,param_3,uVar39);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2405c0(param_4);
  puVar41 = puVar40;
  func_0x00010c2b9340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29ad20(param_4);
  puVar42 = puVar41;
  func_0x00010c2bc720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29ad40(param_4);
  puVar43 = puVar42;
  func_0x00010c2bc740();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = param_4;
  func_0x00010c100ee0(param_4);
  puVar44 = puVar43;
  func_0x00010c2b5780(puVar43,param_3,uVar50);
  _objc_retainAutoreleasedReturnValue();
  uVar50 = param_4;
  func_0x00010c29e220(param_4);
  puVar45 = puVar44;
  func_0x00010c2bc940(puVar44,param_3,uVar50);
  _objc_retainAutoreleasedReturnValue();
  uVar50 = param_4;
  func_0x00010c0c6c20();
  puVar46 = puVar45;
  func_0x00010c2b3b00(puVar45,param_3,uVar50);
  _objc_retainAutoreleasedReturnValue();
  uVar47 = param_4;
  func_0x00010bf15820();
  _objc_retainAutoreleasedReturnValue();
  puVar48 = puVar46;
  func_0x00010c2a91a0(puVar46,param_3,uVar47);
  _objc_retainAutoreleasedReturnValue();
  uVar50 = param_4;
  func_0x00010c0dd920(param_4);
  puVar49 = puVar48;
  func_0x00010c2b4980(puVar48,param_3,uVar50);
  _objc_retainAutoreleasedReturnValue();
  uVar50 = param_4;
  func_0x00010c0d6ca0(param_4);
  puVar51 = puVar49;
  func_0x00010c2b4580(puVar49,param_3,uVar50);
  _objc_retainAutoreleasedReturnValue();
  uVar50 = param_4;
  func_0x00010c115d60();
  _objc_retainAutoreleasedReturnValue();
  puVar52 = puVar51;
  func_0x00010c2b6100(puVar51,param_3,uVar50);
  _objc_retainAutoreleasedReturnValue();
  uVar53 = param_4;
  func_0x00010c0c4600();
  _objc_retainAutoreleasedReturnValue();
  puVar54 = puVar52;
  func_0x00010c2b3740(puVar52,param_3,uVar53);
  _objc_retainAutoreleasedReturnValue();
  uVar55 = param_4;
  func_0x00010c0c7060();
  _objc_retainAutoreleasedReturnValue();
  puVar56 = puVar54;
  func_0x00010c2b3b60(puVar54,param_3,uVar55);
  _objc_retainAutoreleasedReturnValue();
  uVar57 = param_4;
  func_0x00010c0681e0(param_4);
  puVar58 = puVar56;
  func_0x00010c2aff40(puVar56,param_3,uVar57);
  _objc_retainAutoreleasedReturnValue();
  uVar57 = param_4;
  func_0x00010c0641a0();
  puVar59 = puVar58;
  func_0x00010c2afdc0(puVar58,param_3,uVar57);
  _objc_retainAutoreleasedReturnValue();
  uVar57 = param_4;
  func_0x00010c0c5920(param_4);
  puVar60 = puVar59;
  func_0x00010c2b3920(puVar59,param_3,uVar57);
  _objc_retainAutoreleasedReturnValue();
  uVar57 = param_4;
  func_0x00010c0c6120(param_4);
  puVar61 = puVar60;
  func_0x00010c2b39e0(puVar60,param_3,uVar57);
  _objc_retainAutoreleasedReturnValue();
  uVar57 = param_4;
  func_0x00010c0681c0(param_4);
  puVar62 = puVar61;
  func_0x00010c2aff20(puVar61,param_3,uVar57);
  _objc_retainAutoreleasedReturnValue();
  uVar57 = param_4;
  func_0x00010c0f1900(param_4);
  puVar63 = puVar62;
  func_0x00010c2b53c0(puVar62,param_3,uVar57);
  _objc_retainAutoreleasedReturnValue();
  uVar57 = param_4;
  func_0x00010c0c5960();
  puVar64 = puVar63;
  func_0x00010c2b3940(puVar63,param_3,uVar57);
  _objc_retainAutoreleasedReturnValue();
  uVar57 = param_4;
  func_0x00010c0c50c0(param_4);
  puVar65 = puVar64;
  func_0x00010c2b3840(puVar64,param_3,uVar57);
  _objc_retainAutoreleasedReturnValue();
  uVar57 = param_4;
  func_0x00010c0f0d60(param_4);
  puVar66 = puVar65;
  func_0x00010c2b5300(puVar65,param_3,uVar57);
  _objc_retainAutoreleasedReturnValue();
  uVar57 = param_4;
  func_0x00010c0d8040();
  _objc_retainAutoreleasedReturnValue();
  puVar67 = puVar66;
  func_0x00010c2b4600(puVar66,param_3,uVar57);
  _objc_retainAutoreleasedReturnValue();
  uVar68 = param_4;
  func_0x00010c0d80e0();
  _objc_retainAutoreleasedReturnValue();
  puVar69 = puVar67;
  func_0x00010c2b4640(puVar67,param_3,uVar68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a1420(param_4);
  _objc_release(param_4);
  puVar70 = puVar69;
  func_0x00010c2bcc00(param_1,puVar69);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar69);
  _objc_release(uVar68);
  _objc_release(puVar67);
  _objc_release(uVar57);
  _objc_release(puVar66);
  _objc_release(puVar65);
  _objc_release(puVar64);
  _objc_release(puVar63);
  _objc_release(puVar62);
  _objc_release(puVar61);
  _objc_release(puVar60);
  _objc_release(puVar59);
  _objc_release(puVar58);
  _objc_release(puVar56);
  _objc_release(uVar55);
  _objc_release(puVar54);
  _objc_release(uVar53);
  _objc_release(puVar52);
  _objc_release(uVar50);
  _objc_release(puVar51);
  _objc_release(puVar49);
  _objc_release(puVar48);
  _objc_release(uVar47);
  _objc_release(puVar46);
  _objc_release(puVar45);
  _objc_release(puVar44);
  _objc_release(puVar43);
  _objc_release(puVar42);
  _objc_release(puVar41);
  _objc_release(puVar40);
  _objc_release(uVar39);
  _objc_release(puVar38);
  _objc_release(uVar37);
  _objc_release(puVar36);
  _objc_release(uVar35);
  _objc_release(puVar34);
  _objc_release(uVar26);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar25);
  _objc_release(uVar19);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar70);
  return;
}



/* Entry: 107cd7ac8; end: 107cd7bef; -[SCOperaPlaybackIntentToNextLogParametersBuilder build] */

void FUN_107cd7ac8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7670;
  _objc_alloc();
  func_0x00010c011aa0(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0),
                      *(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x1a0),puVar1,
                      *(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined1 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107cd7bf0; end: 107cd7bf7; -[SCOperaPlaybackIntentToNextLogParametersBuilder withFeatureMajorName:] */

void FUN_107cd7bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107cd7bf8; end: 107cd7bff; -[SCOperaPlaybackIntentToNextLogParametersBuilder withFeatureMinorName:] */

void FUN_107cd7bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 107cd7c00; end: 107cd7c07; -[SCOperaPlaybackIntentToNextLogParametersBuilder withLoadPhase:] */

void FUN_107cd7c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 107cd7c08; end: 107cd7c0f; -[SCOperaPlaybackIntentToNextLogParametersBuilder withItemLoadState:] */

void FUN_107cd7c08(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 107cd7c10; end: 107cd7c17; -[SCOperaPlaybackIntentToNextLogParametersBuilder withItemType:] */

void FUN_107cd7c10(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 107cd7c18; end: 107cd7c4f; -[SCOperaPlaybackIntentToNextLogParametersBuilder withItemId:] */

long FUN_107cd7c18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107cd7c50; end: 107cd7c87; -[SCOperaPlaybackIntentToNextLogParametersBuilder withOperaSessionId:] */

long FUN_107cd7c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107cd7c88; end: 107cd7cbf; -[SCOperaPlaybackIntentToNextLogParametersBuilder withMediaPlaybackSessionId:] */

long FUN_107cd7c88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107cd7cc0; end: 107cd7cf7; -[SCOperaPlaybackIntentToNextLogParametersBuilder withPageId:] */

long FUN_107cd7cc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107cd7cf8; end: 107cd7d2f; -[SCOperaPlaybackIntentToNextLogParametersBuilder withMediaId:] */

long FUN_107cd7cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107cd7d30; end: 107cd7d67; -[SCOperaPlaybackIntentToNextLogParametersBuilder withContentId:] */

long FUN_107cd7d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107cd7d68; end: 107cd7d6f; -[SCOperaPlaybackIntentToNextLogParametersBuilder withLongForm:] */

void FUN_107cd7d68(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 107cd7d70; end: 107cd7d77; -[SCOperaPlaybackIntentToNextLogParametersBuilder withItemLoadedCount:] */

void FUN_107cd7d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 107cd7d78; end: 107cd7d7f; -[SCOperaPlaybackIntentToNextLogParametersBuilder withEntryEvent:] */

void FUN_107cd7d78(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 107cd7d80; end: 107cd7d87; -[SCOperaPlaybackIntentToNextLogParametersBuilder withEntryIntent:] */

void FUN_107cd7d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 107cd7d88; end: 107cd7d8f; -[SCOperaPlaybackIntentToNextLogParametersBuilder withMediaSizeByte:] */

void FUN_107cd7d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 107cd7d90; end: 107cd7dc7; -[SCOperaPlaybackIntentToNextLogParametersBuilder withItemGroupId:] */

long FUN_107cd7d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107cd7dc8; end: 107cd7dcf; -[SCOperaPlaybackIntentToNextLogParametersBuilder withStreamingFailureCode:] */

void FUN_107cd7dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 107cd7dd0; end: 107cd7dd7; -[SCOperaPlaybackIntentToNextLogParametersBuilder withIntentToPlaylistStartSetupViewModelsTimeMs:] */

void FUN_107cd7dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 107cd7dd8; end: 107cd7ddf; -[SCOperaPlaybackIntentToNextLogParametersBuilder withPlaylistSetupViewModelsTimeMs:] */

void FUN_107cd7dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 107cd7de0; end: 107cd7de7; -[SCOperaPlaybackIntentToNextLogParametersBuilder withItemLoaded:] */

void FUN_107cd7de0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 107cd7de8; end: 107cd7def; -[SCOperaPlaybackIntentToNextLogParametersBuilder withPlaySource:] */

void FUN_107cd7de8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  return;
}



/* Entry: 107cd7df0; end: 107cd7df7; -[SCOperaPlaybackIntentToNextLogParametersBuilder withPlaybackMode:] */

void FUN_107cd7df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 107cd7df8; end: 107cd7dff; -[SCOperaPlaybackIntentToNextLogParametersBuilder withPlayerType:] */

void FUN_107cd7df8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  return;
}


